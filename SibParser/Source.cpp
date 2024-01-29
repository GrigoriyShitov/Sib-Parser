#include <iostream>
#include <stdint.h>
#include "Sibs.h"
using namespace std;

#define SYSTEM_INFORMATION_TYPE_1 0x19
#define SYSTEM_INFORMATION_TYPE_2 0x1a


int main() {
	GSMTAPPACK sib;
	uint8_t packet[23] = { 0x55, 0x06, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0xb8, 0x00, 0x00, 0x2b };
	//uint8_t packet[23] = { 0x55, 0x06, 0x19, 0x15, 0x54, 0x00, 0x00, 0x00, 0x15, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x2b };
	uint8_t* ptr = packet;
	sib.L2PseudoL = *ptr++;
	sib.ProtDisc = *ptr & 0x0f;
	sib.SkipInd = *ptr & 0xf0;
	sib.MesType = *(++ptr);

	//общая часть для всех SIT пакетов
	cout << showbase << hex << (int)sib.L2PseudoL << " " << (int)sib.ProtDisc << " " << (int)sib.SkipInd << " " << (int)sib.MesType << endl;
	
	if (sib.MesType == SYSTEM_INFORMATION_TYPE_1)//____________________________________________________________________________________________________________________________________________________________
	{
		Sib1Pack pack;
		bool res= pack.Parse1();
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		ptr++;

		//определение формата. Число в CellChannelDescr означает степень двойки (в случае если формат 1024,512,256 или 128 range)
		if (!(*ptr & 0xc0)) {// 0xc0 = 1100 0000 для определения 0 битмапы ( маска 0 0 x x x)
			pack.CellChannelDescr = 0;

			for (int i = 0; i < 16;i++) {
				for (int j = 0; j < 8;j++) {
					bool set = *ptr & (1 << j);
					if (set) {
						int pos = (15 - i) * 8 + j + 1;
						*pack.ListPtr++ = pos;
					}
				}
				ptr++;
			}
			/*for (int i = 0;i < 128;i++) {
				if (pack.ARFCNsList[i] != 0)
				{
					cout << dec << (int)pack.ARFCNsList[i] << " ";
				}
			}
			cout << endl;*/


		}
		else if (!(*ptr & 0x60))// 0x60 = 0110 0000 для определения 1024 range (маска 1 0 0 x x)
		{
			pack.CellChannelDescr = 10;
		}
		else if (!(*ptr & 0x58))// 0x58 = 0101 1000 для определения 512 range (маска 1 0 1 0 0)
		{
			pack.CellChannelDescr = 9;
		}
		else if (!(*ptr & 0x50))// 0x50 = 0101 0000 для определения 256 range (маска 1 0 1 0 1)
		{
			pack.CellChannelDescr = 8;
		}
		else if (!(*ptr & 0x48))// 0x48 = 0100 1000 для определения 128 range (маска 1 0 1 1 0)
		{
			pack.CellChannelDescr = 7;
		}
		else if (!(*ptr & 0x40))// 0x40 = 0100 0000 для определения variable bit map
		{
			pack.CellChannelDescr = 1;
		}


		//Парсинг RACH Control Parametr
		cout << showbase << hex << (int)*ptr << endl;

		switch (*ptr & 0xc0)//маска для определения Max Retransmissions(определяется по первым двум битам)
		{//значение сопоставляется с таблицей значений
		case 0:
			pack.RACH[0] = 1;
			break;
		case 0x40:
			pack.RACH[0] = 2;
			break;
		case 0x80:
			pack.RACH[0] = 4;
			break;
		case 0xc0:
			pack.RACH[0] = 7;
			break;
		default:
			break;
		}

		switch (*ptr & 0x3c)//маска для определения TX-integer(определяется 3,4,5,6 битам)
		{//значение сопоставляется с таблицей значений
		case 0:
			pack.RACH[1] = 3;
			break;
		case 0x04:
			pack.RACH[1] = 4;
			break;
		case 0x08:
			pack.RACH[1] = 5;
			break;
		case 0x0c:
			pack.RACH[1] = 6;
			break;
		case 0x10:
			pack.RACH[1] = 7;
			break;
		case 0x14:
			pack.RACH[1] = 8;
			break;
		case 0x18:
			pack.RACH[1] = 9;
			break;
		case 0x1c:
			pack.RACH[1] = 10;
			break;
		case 0x20:
			pack.RACH[1] = 11;
			break;
		case 0x24:
			pack.RACH[1] = 12;
			break;
		case 0x28:
			pack.RACH[1] = 14;
			break;
		case 0x2c:
			pack.RACH[1] = 16;
			break;
		case 0x30:
			pack.RACH[1] = 20;
			break;
		case 0x34:
			pack.RACH[1] = 25;
			break;
		case 0x38:
			pack.RACH[1] = 32;
			break;
		case 0x3c:
			pack.RACH[1] = 50;
			break;
		default:
			break;
		}

		switch (*ptr & 0x02)//маска для определения Cell_Bar_Access(определяется по 2 биту)
		{
		case 0:
			pack.RACH[2] = 0;//the cell is not barred
			break;
		case 0x02:
			pack.RACH[2] = 1;//the cell is barred
			break;
		default:
			break;
		}

		switch (*ptr & 0x01)//маска для определения Call reestablishment allowed(определяется по 1 биту)
		{
		case 0:
			pack.RACH[3] = 0;//Call reestablishment allowed in the cell
			break;
		case 0x01:
			pack.RACH[3] = 1;//Call reestablishment not allowed in the cell
			break;
		default:
			break;
		}

		switch (*++ptr & 0x01)//маска для определения Emergency call allowed(определяется по 1 биту)
		{
		case 0:
			pack.RACH[4] = 0;//Emergency call allowed in the cell to all MSs
			break;
		case 0x01:
			pack.RACH[4] = 1;//Emergency call not allowed in the cell except for the MSs that belong to one of the classes between to all MSs
			break;
		default:
			break;
		}

		cout << showbase << hex << (int)sib.L2PseudoL << " " << (int)sib.ProtDisc << " " << (int)sib.SkipInd << " " << (int)sib.MesType << " " << (int)pack.CellChannelDescr << endl;

		/*for (int i = 0;i < 128;i++) {
				if (pack.ARFCNsList[i] != 0)
				{
					cout << dec << (int)pack.ARFCNsList[i] << " ";
				}
			}
			cout << endl;*/
		do {
			pack.ListPtr--;
			cout << dec << (int)*pack.ListPtr << " ";
		} while (pack.ListPtr != &pack.ARFCNsList[0]);
		cout << endl;

		for (int i = 0; i < 5;i++) {
			cout << dec << (int)pack.RACH[i] << " ";
		}

	}//____________________________________________________________________________________________________________________________________________________________
	else if (sib.MesType == SYSTEM_INFORMATION_TYPE_2) {



	}
	return 0;
}