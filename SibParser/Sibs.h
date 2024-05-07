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
#define SYSTEM_INFORMATION_TYPE_4 0x1c
#define SYSTEM_INFORMATION_TYPE_5 0x1d
#define SYSTEM_INFORMATION_TYPE_5bis 0x05
#define SYSTEM_INFORMATION_TYPE_5ter 0x06
#define SYSTEM_INFORMATION_TYPE_6 0x1e

struct GSMTAPPACK {
	uint8_t L2PseudoL;
	uint8_t ProtDisc;
	uint8_t SkipInd;
	uint8_t MesType;
	uint8_t* CellChannelDescr(uint8_t* ptr, uint8_t* ListPtr);
	uint8_t* CIDparse(uint16_t& CID,uint8_t* ptr);
	uint8_t* NeighbourCellDescr(uint8_t& EXTIND, uint8_t& BAIND, uint8_t* ptr, uint8_t* ListPtr);
	uint8_t* NeighbourCellDescr2(uint8_t& MultibandRep, uint8_t& BAIND, uint8_t* ptr, uint8_t* ListPtr);
	uint8_t* RACHparse(uint8_t RACH[5], uint16_t& ACC, uint8_t* ptr);
	uint8_t* LAIparse(uint8_t MCC[3], uint8_t MNC[3], uint16_t& LAC, uint8_t* ptr);
	uint8_t* CELLSELECTparse(uint8_t CellSelectParam[5], uint8_t* ptr);
};

struct Sib1Pack : public GSMTAPPACK {

	uint8_t ARFCNsList[128] = { 0 };
	uint8_t* ListPtr = ARFCNsList;
	uint8_t RACH[5] = { 0 };
	uint16_t ACC;
	uint8_t Rest;
	bool Parse(uint8_t* ptr);
	void printOutput();
};

struct Sib2Pack : public GSMTAPPACK {

	uint8_t BCCHFreqList[128] = { 0 };
	uint8_t* ListPtr = BCCHFreqList;
	uint8_t EXTIND, BAIND;
	uint8_t NCC;
	uint8_t RACH[5] = { 0 };
	uint16_t ACC;
	bool Parse(uint8_t* ptr);
	void printOutput();
};

struct Sib2bisPack : public GSMTAPPACK {

	uint8_t ExtendBCCHFreqList[128] = { 0 };
	uint8_t* ListPtr = ExtendBCCHFreqList;
	uint8_t EXTIND, BAIND;
	uint8_t RACH[5] = { 0 };
	uint16_t ACC;
	uint8_t Rest;
	bool Parse(uint8_t* ptr);
	void printOutput();
};

struct Sib2terPack : public GSMTAPPACK {

	uint8_t ExtendBCCHFreqList[128] = { 0 };
	uint8_t* ListPtr = ExtendBCCHFreqList;
	uint8_t BAIND, MultibandRep;
	uint8_t Rest[4] = { 0 };
	bool Parse(uint8_t* ptr);
	void printOutput();
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
	bool Parse(uint8_t* ptr);
	void printOutput();
};


struct Sib4Pack : public GSMTAPPACK {
	uint8_t MCC[3] = { 0 };
	uint8_t MNC[3] = { 0 };
	uint16_t LAC;
	uint8_t CellSelectParam[5] = { 0 };
	uint8_t RACH[5] = { 0 };
	uint16_t ACC;
	uint8_t Rest[20] = { 0 };
	bool Parse(uint8_t* ptr);
	void printOutput();
};

struct Sib5Pack : public GSMTAPPACK {

	uint8_t BCCHFreqList[128] = { 0 };
	uint8_t* ListPtr = BCCHFreqList;
	uint8_t EXTIND, BAIND;
	bool Parse(uint8_t* ptr);
	void printOutput();
};

struct Sib5bisPack : public GSMTAPPACK {

	uint8_t ExtendBCCHFreqList[128] = { 0 };
	uint8_t* ListPtr = ExtendBCCHFreqList;
	uint8_t EXTIND, BAIND;
	bool Parse(uint8_t* ptr);
	void printOutput();
};

struct Sib5terPack : public GSMTAPPACK {

	uint8_t ExtendBCCHFreqList[128] = { 0 };
	uint8_t* ListPtr = ExtendBCCHFreqList;
	uint8_t MultibandeRep, BAIND;
	bool Parse(uint8_t* ptr);
	void printOutput();
};

struct Sib6Pack : public GSMTAPPACK {
	uint16_t CID;
	uint8_t MCC[3] = { 0 };
	uint8_t MNC[3] = { 0 };
	uint16_t LAC;
	uint8_t ControlChannelDescr[3] = { 0 };
	uint8_t CellOptions[3] = { 0 };
	uint8_t NCC;
	uint8_t Rest[8] = { 0 };
	bool Parse(uint8_t* ptr);
	void printOutput();
};

#endif SIBS_H
