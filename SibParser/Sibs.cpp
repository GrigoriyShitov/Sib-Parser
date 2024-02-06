#include "Sibs.h"


bool GSMTAPPACK::RACHparse(uint8_t RACH[5], uint8_t* ptr)
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
//_________________________________________________________________________________________________________________________________
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
	ACC = *++ptr << 8;
	ACC += *++ptr;
	//вывод инфы
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl << " Protocol Discirimator: " << (int)ProtDisc << endl << " Skip Indicator: " << (int)SkipInd << endl << " Message Type: " << (int)MesType << endl << " Cell Channel Descriprion: " << (int)CellChannelDescr << endl << " ACC: " << (int)ACC << endl;
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
	EXTIND = (*ptr & 0x20) >> 4;
	BAIND = (*ptr & 0x10) >> 4;

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

	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl << " Protocol Discirimator: " << (int)ProtDisc << endl << " Skip Indicator: " << (int)SkipInd << endl << " Message Type: " << (int)MesType << endl << " NCC: " << (int)NCC << endl << " EXT-IND: " << (int)EXTIND << endl << " BA-IND: " << (int)BAIND << endl << " ACC: " << (int)ACC << endl;
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

bool Sib2bisPack::Parse(uint8_t* ptr)
{
	// шестой и пятый биты текущего байта соответствуют значниям соответствующих полей (20 = 0010 0000 и 10 = 0001 0000)
	EXTIND = (*ptr & 0x20) >> 4;
	BAIND = (*ptr & 0x10) >> 4;

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

	//Парсинг RACH Control Parametr
	bool res = RACHparse(RACH, ptr);
	ACC = *++ptr << 8;
	ACC += *++ptr;

	Rest = *++ptr;

	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl << " Protocol Discirimator: " << (int)ProtDisc << endl << " Skip Indicator: " << (int)SkipInd << endl << " Message Type: " << (int)MesType << endl << endl << " EXT-IND: " << (int)EXTIND << endl << " BA-IND: " << (int)BAIND << endl << " ACC: " << (int)ACC << endl << " Rest octet " << (int)Rest << endl;
	do {
		ListPtr--;
		cout << dec << (int)*ListPtr << " ";
	} while (ListPtr != &ExtendBCCHFreqList[0]);
	cout << endl;

	for (int i = 0; i < 5;i++) {
		cout << dec << (int)RACH[i] << " ";
	}

	return false;
}

bool Sib2terPack::Parse(uint8_t* ptr)
{
	//шестой и седьмой бит текущево байта ссответствую значению Multiband reporting ( маска 0x60 = 0110 0000)
	MultibandRep = (*ptr & 0x60) >> 4;

	// пятый бит текущего байта соответствует значнию соответствующего поля (10 = 0001 0000)
	BAIND = (*ptr & 0x10) >> 4;

	//определение формата. Число в CellChannelDescr означает степень двойки (в случае если формат 1024,512,256 или 128 range)
	//маска определения формата в Neighbour Cell Description 2 отличается от Neighbour Cell Description и CellChannelDescr
	//Здесь формат определяется по 8,4,3,2 битам
	if (!(*ptr & 0x80)) {// 0x80 = 1000 0000 для определения 0 битмапы ( маска 0 x x x . x x x x)

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
	else if (!(*ptr & 0x08))// 0x08 = 0000 1000 для определения 1024 range (маска 1 x x x . 0 x x x)
	{
	}
	else if (!(*ptr & 0x06))// 0x06 = 0000 0110 для определения 512 range (маска 1 x x x 1 0 0 x)
	{
	}
	else if (!(*ptr & 0x04))// 0x04 = 0000 0100 для определения 256 range (маска 1 x x x 1 0 1 x)
	{
	}
	else if (!(*ptr & 0x02))// 0x02 = 0000 0010 для определения 128 range (маска 1 x x x 1 1 0 x)
	{
	}
	else if (*ptr & 0x8e)// 0x8e = 1000 1110 для определения variable bit map
	{
	}


	return true;
}



bool Sib3Pack::Parse(uint8_t* ptr)
{
	CID = *ptr++ << 8;//1 byte
	CID += *ptr++;//2 byte

	MCC[1] = (*ptr & 0xf0) >> 4;//3 byte
	MCC[0] = *ptr++ & 0x0f;//3byte
	MCC[2] = *ptr & 0x0f;//4byte

	MNC[2] = (*ptr++ & 0xf0) >> 4;//4byte
	MNC[1] = (*ptr & 0xf0) >> 4;//5byte
	MNC[0] = *ptr++ & 0x0f;//5byte

	LAC = *ptr++ << 8;//6 byte
	LAC += *ptr++;//7 byte

	ControlChannelDescr[0] = *ptr++;//если нужно будет - распарсить можно легко
	ControlChannelDescr[1] = *ptr++;
	ControlChannelDescr[2] = *ptr++;

	CellOptions[0] = (*ptr & 0x80) >> 7;// DN-IND
	CellOptions[1] = (*ptr & 0x40) >> 6;// PWRC
	CellOptions[2] = (*ptr & 0x30) >> 4;// DTX
	CellOptions[3] = (*ptr++ & 0x0f);//  RADIO-LINK-TIMEOUT

	CellSelectParam[0] = (*ptr & 0xe0);// CELL-RESELECT HYSTERESIS
	CellSelectParam[1] = (*ptr++ & 0x1f);// MS-TXPWR-MAX-CCH
	CellSelectParam[2] = (*ptr & 0x80);// ACS
	CellSelectParam[3] = (*ptr & 0x40);// NECI
	CellSelectParam[4] = (*ptr++ & 0x3f);// RXLEV-ACCESS-MIN

	bool res = RACHparse(RACH, ptr);
	ACC = *++ptr << 8;
	ACC += *++ptr;
	ptr++;
	Rest[0] = *ptr++;
	Rest[1] = *ptr++;
	Rest[2] = *ptr++;
	Rest[3] = *ptr;
	return true;
}
void Sib3Pack::printOutput()
{
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl
		<< " Protocol Discirimator: " << (int)ProtDisc << endl
		<< " Skip Indicator: " << (int)SkipInd << endl
		<< " Message Type: System Infortmation Type 3 " << (int)MesType << endl
		<< " CID: " << dec << (int)CID << endl;

	//right order of mcc:
	cout << "MCC.MNC.LAC:";
	for (uint8_t i : MCC) {
		cout << dec << (int)i;
	}
	cout << ".";
	for (uint8_t i : MNC) {
		cout << dec << (int)i;
	}
	cout << "." << LAC << endl;

	//3 октета Controll Channel Description
	cout << " 3 octets of Controll Channel Description: ";
	for (uint8_t i : ControlChannelDescr) {
		cout << hex << (int)i << " ";
	}
	cout << endl;

	for (int i = 0; i < 5;i++) {
		switch (i)
		{
		case 0:
			cout << " Maximum " << dec << (int)RACH[i] << " retransmissions";
			break;
		case 1:
			cout << dec << (int)RACH[i] << " slots used to spread transmissions";
			break;
		case 2:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " The cell is barred";
			}
			else
			{
				cout << " The cell is not barred";
			}

			break;
		case 3:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Call Reestablishment not allowed in the cell ";
			}
			else
			{
				cout << " Call Reestablishment allowed in the cell ";
			}

			break;
		case 4:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Emergency call not allowed in the cell except for the MSs that belong to one of the classes between 11 to 15. ";
			}
			else
			{
				cout << " Emergency call allowed in the cell to all MSs  ";
			}
		default:
			break;
		}
		cout << endl << " ";
	}
	cout << "ACC: " << hex << showbase << ACC << endl;
	cout << "Rest 4 octets:";
	for (uint8_t i : Rest) {
		cout << (int)i << " ";
	}
}