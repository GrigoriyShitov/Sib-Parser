#ifndef SIBS_H
#define SIBS_H
using namespace std;

#include <stdint.h>
#include <iostream>

#define SYSTEM_INFORMATION_TYPE_1 0x19
#define SYSTEM_INFORMATION_TYPE_2 0x1a
#define SYSTEM_INFORMATION_TYPE_2bis 0x02
#define SYSTEM_INFORMATION_TYPE_2ter 0x03
#define SYSTEM_INFORMATION_TYPE_3 0x1b


struct GSMTAPPACK {
	uint8_t L2PseudoL;
	uint8_t ProtDisc;
	uint8_t SkipInd;
	uint8_t MesType;
	bool RACHparse(uint8_t RACH[5], uint8_t* ptr);
};

struct Sib1Pack : public GSMTAPPACK {

	uint8_t CellChannelDescr;
	uint8_t ARFCNsList[128] = { 0 };
	uint8_t* ListPtr = ARFCNsList;
	uint8_t RACH[5] = { 0 };
	uint16_t ACC;
	uint8_t S1Rest;
	bool Parse(uint8_t* ptr);
};

struct Sib2Pack : public GSMTAPPACK {

	uint8_t BCCHFreqList[128] = { 0 };
	uint8_t* ListPtr = BCCHFreqList;
	uint8_t EXTIND, BAIND;
	uint8_t NCC;
	uint8_t RACH[5] = { 0 };
	uint16_t ACC;
	bool Parse(uint8_t* ptr);
};

struct Sib2bisPack : public GSMTAPPACK {

	uint8_t ExtendBCCHFreqList[128] = { 0 };
	uint8_t* ListPtr = ExtendBCCHFreqList;
	uint8_t EXTIND, BAIND;
	uint8_t RACH[5] = { 0 };
	uint16_t ACC;
	uint8_t Rest;
	bool Parse(uint8_t* ptr);
};

struct Sib2terPack : public GSMTAPPACK {

	uint8_t ExtendBCCHFreqList[128] = { 0 };
	uint8_t* ListPtr = ExtendBCCHFreqList;
	uint8_t BAIND, MultibandRep;
	uint8_t Rest;
	bool Parse(uint8_t* ptr);
};

struct Sib3Pack : public GSMTAPPACK {
	uint16_t CID;
	uint8_t MCC[3] = { 0 };
	uint8_t MNC[3] = { 0 };
	uint16_t LAC;
	uint8_t ControlChannelDescr[3] = { 0 };
	uint8_t CellOptions[4] = { 0 };
	uint8_t CellSelectParam[5] = { 0 };
	uint8_t RACH[5] = { 0 };
	uint16_t ACC;
	uint8_t Rest[4] = { 0 };
	void printOutput();
	bool Parse(uint8_t* ptr);
};

#endif SIBS_H
