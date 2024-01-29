#include "Sibs.h"

bool Sib1Pack::Parse(uint8_t* ptr)
{

	//определение формата. Число в CellChannelDescr означает степень двойки (в случае если формат 1024,512,256 или 128 range)
	if (!(*ptr & 0xc0)) {// 0xc0 = 1100 0000 для определения 0 битмапы ( маска 0 0 x x x)
		CellChannelDescr = 0;

		*ptr = *ptr & 0x0f;//отсекам маску

		for (int i = 0; i < 16;i++) {//заполнение списка Cell Channel Description
			for (int j = 0; j < 8;j++) {
				bool set = *ptr & (1 << j);
				if (set) {
					int pos = (15 - i) * 8 + j + 1;
					*ListPtr++ = pos;
				}
			}
			ptr++;
		}
		/*for (int i = 0;i < 128;i++) {
			if (ARFCNsList[i] != 0)
			{
				cout << dec << (int)ARFCNsList[i] << " ";
			}
		}
		cout << endl;*/


	}
	else if (!(*ptr & 0x60))// 0x60 = 0110 0000 для определения 1024 range (маска 1 0 0 x x)
	{
		CellChannelDescr = 10;
	}
	else if (!(*ptr & 0x58))// 0x58 = 0101 1000 для определения 512 range (маска 1 0 1 0 0)
	{
		CellChannelDescr = 9;
	}
	else if (!(*ptr & 0x50))// 0x50 = 0101 0000 для определения 256 range (маска 1 0 1 0 1)
	{
		CellChannelDescr = 8;
	}
	else if (!(*ptr & 0x48))// 0x48 = 0100 1000 для определения 128 range (маска 1 0 1 1 0)
	{
		CellChannelDescr = 7;
	}
	else if (!(*ptr & 0x40))// 0x40 = 0100 0000 для определения variable bit map
	{
		CellChannelDescr = 1;
	}


	//Парсинг RACH Control Parametr
	//cout << showbase << hex << (int)*ptr << endl;
	bool res = RACHparse(RACH, ptr);
	ACC = *++ptr<<8;
	ACC += *++ptr;
	//вывод инфы
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl << " Protocol Discirimator: " << (int)ProtDisc << " Skip Indicator: " << (int)SkipInd << endl << " Message Type: " << (int)MesType << endl << " Cell Channel Descriprion: " << (int)CellChannelDescr << endl << " ACC: " << (int)ACC << endl;
	cout << "List of ARFCNS:";
	/*for (int i = 0;i < 128;i++) {
			if (ARFCNsList[i] != 0)
			{
				cout << dec << (int)ARFCNsList[i] << " ";
			}
		}
		cout << endl;*/
	do {
		ListPtr--;
		cout << dec << (int)*ListPtr << " ";
	} while (ListPtr != &ARFCNsList[0]);
	cout << endl;

	for (int i = 0; i < 5;i++) {
		cout << dec << (int)RACH[i] << " ";
	}

    return true;
}

bool Sib2Pack::Parse(uint8_t* ptr)
{
	// шестой и пятый биты текущего байта соответствуют значниям соответствующих полей (20 = 0010 0000 и 10 = 0001 0000)
	EXTIND = (*ptr & 0x20)>> 4;
	BAIND = (*ptr & 0x10)>> 4;

	//определение формата. Число в CellChannelDescr означает степень двойки (в случае если формат 1024,512,256 или 128 range)
	if (!(*ptr & 0xc0)) {// 0xc0 = 1100 0000 для определения 0 битмапы ( маска 0 0 x x x)

		
		*ptr = *ptr & 0x0f;//отсекам маску
		for (int i = 0; i < 16;i++) {//заполнение списка Cell Channel Description
			for (int j = 0; j < 8;j++) {
				bool set = *ptr & (1 << j);
				if (set) {
					int pos = (15 - i) * 8 + j + 1;
					*ListPtr++ = pos;
				}
			}
			ptr++;
		}
		/*for (int i = 0;i < 128;i++) {
			if (ARFCNsList[i] != 0)
			{
				cout << dec << (int)ARFCNsList[i] << " ";
			}
		}
		cout << endl;*/


	}
	else if (!(*ptr & 0x60))// 0x60 = 0110 0000 для определения 1024 range (маска 1 0 0 x x)
	{
	}
	else if (!(*ptr & 0x58))// 0x58 = 0101 1000 для определения 512 range (маска 1 0 1 0 0)
	{
	}
	else if (!(*ptr & 0x50))// 0x50 = 0101 0000 для определения 256 range (маска 1 0 1 0 1)
	{
	}
	else if (!(*ptr & 0x48))// 0x48 = 0100 1000 для определения 128 range (маска 1 0 1 1 0)
	{
	}
	else if (!(*ptr & 0x40))// 0x40 = 0100 0000 для определения variable bit map
	{
	}

	//NCC один байт
	NCC = *ptr++;

	//Парсинг RACH Control Parametr
	bool res = RACHparse(RACH, ptr);
	ACC = *++ptr << 8;
	ACC += *++ptr;

	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl << " Protocol Discirimator: " << (int)ProtDisc << " Skip Indicator: " << (int)SkipInd << endl << " Message Type: " << (int)MesType << endl << " NCC: " << (int)NCC << endl << " EXT-IND: " << (int)EXTIND << endl << " BA-IND: " << (int)BAIND << endl << " ACC: " << (int)ACC << endl;
	do {
		ListPtr--;
		cout << dec << (int)*ListPtr << " ";
	} while (ListPtr != &BCCHFreqList[0]);
	cout << endl;

	for (int i = 0; i < 5;i++) {
		cout << dec << (int)RACH[i] << " ";
	}
	return true;
}

bool RACHparse(uint8_t RACH[5], uint8_t* ptr)
{
	switch (*ptr & 0xc0)//маска для определения Max Retransmissions(определяется по первым двум битам)
	{//значение сопоставляется с таблицей значений
	case 0:
		RACH[0] = 1;
		break;
	case 0x40:
		RACH[0] = 2;
		break;
	case 0x80:
		RACH[0] = 4;
		break;
	case 0xc0:
		RACH[0] = 7;
		break;
	default:
		break;
	}

	switch (*ptr & 0x3c)//маска для определения TX-integer(определяется 3,4,5,6 битам)
	{//значение сопоставляется с таблицей значений
	case 0:
		RACH[1] = 3;
		break;
	case 0x04:
		RACH[1] = 4;
		break;
	case 0x08:
		RACH[1] = 5;
		break;
	case 0x0c:
		RACH[1] = 6;
		break;
	case 0x10:
		RACH[1] = 7;
		break;
	case 0x14:
		RACH[1] = 8;
		break;
	case 0x18:
		RACH[1] = 9;
		break;
	case 0x1c:
		RACH[1] = 10;
		break;
	case 0x20:
		RACH[1] = 11;
		break;
	case 0x24:
		RACH[1] = 12;
		break;
	case 0x28:
		RACH[1] = 14;
		break;
	case 0x2c:
		RACH[1] = 16;
		break;
	case 0x30:
		RACH[1] = 20;
		break;
	case 0x34:
		RACH[1] = 25;
		break;
	case 0x38:
		RACH[1] = 32;
		break;
	case 0x3c:
		RACH[1] = 50;
		break;
	default:
		break;
	}

	switch (*ptr & 0x02)//маска для определения Cell_Bar_Access(определяется по 2 биту)
	{
	case 0:
		RACH[2] = 0;//the cell is not barred
		break;
	case 0x02:
		RACH[2] = 1;//the cell is barred
		break;
	default:
		break;
	}

	switch (*ptr & 0x01)//маска для определения Call reestablishment allowed(определяется по 1 биту)
	{
	case 0:
		RACH[3] = 0;//Call reestablishment allowed in the cell
		break;
	case 0x01:
		RACH[3] = 1;//Call reestablishment not allowed in the cell
		break;
	default:
		break;
	}

	switch (*++ptr & 0x01)//маска для определения Emergency call allowed(определяется по 1 биту)
	{
	case 0:
		RACH[4] = 0;//Emergency call allowed in the cell to all MSs
		break;
	case 0x01:
		RACH[4] = 1;//Emergency call not allowed in the cell except for the MSs that belong to one of the classes between to all MSs
		break;
	default:
		break;
	}
	return false;
}
