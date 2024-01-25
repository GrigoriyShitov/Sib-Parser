#include <iostream>
#include <stdint.h>
using namespace std;

#define SYSTEM_INFORMATION_TYPE_1 0x19


struct GSMTAPPACK {
	uint8_t L2PseudoL;
	uint8_t ProtDisc;
	uint8_t SkipInd;
	uint8_t MesType;
};

struct Sib1Pack : public GSMTAPPACK {
	uint8_t CellChannelDescr;
	uint8_t ARFCNsList[128] = { 0 };
	uint8_t* ListPtr = ARFCNsList;
	uint8_t RACH;
	uint8_t S1Rest;
};

int main() {
	GSMTAPPACK sib;
	uint8_t packet[23] = { 0x55, 0x06, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0xb8, 0x00, 0x00, 0x2b };
	uint8_t* ptr = packet;
	sib.L2PseudoL = *ptr++;
	sib.ProtDisc = *ptr & 0x0f;
	sib.SkipInd = *ptr & 0xf0;
	sib.MesType = *(++ptr);
	cout << showbase << hex << (int)sib.L2PseudoL << " " << (int)sib.ProtDisc << " " << (int)sib.SkipInd << " " << (int)sib.MesType << endl;
	if (sib.MesType == SYSTEM_INFORMATION_TYPE_1)
	{
		Sib1Pack pack;
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		ptr++;

		//определение формата. Число в CellChannelDescr означает степень двойки (в случае если формат 1024,512,256 или 128 range)
		if (!(*ptr & 0xc0)) {// 0xc0 = 1100 0000 для определения 0 битмапы ( маска 0 0 x x x)
			pack.CellChannelDescr = 0;
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

		cout << showbase << hex << (int)sib.L2PseudoL << " " << (int)sib.ProtDisc << " " << (int)sib.SkipInd << " " << (int)sib.MesType << " " << (int)pack.CellChannelDescr << endl;


		for (int i = 0; i < 16;i++) {
			cout << showbase << hex << (int)*ptr << " ";
			for (int j = 0; j < 8;j++) {
				bool set = *ptr & (1 << j);
				cout << noshowbase << set << " ";
				if (set) {
					int pos = (15 - i) * 8 + j + 1;
					*pack.ListPtr++ = pos;

				}
			}
			ptr++;
			cout << endl;
		}
		for (int i=0;i < 128;i++) {
			if (pack.ARFCNsList[i]!=0)
			{
				cout << dec <<(int)pack.ARFCNsList[i] << " ";
			}
		}
		cout << endl;
		do {
			pack.ListPtr--;
			cout << dec << (int)*pack.ListPtr << " ";
		} while (pack.ListPtr != &pack.ARFCNsList[0]);

	}
	return 0;
}