#ifndef SIBS_H
#define SIBS_H
using namespace std;

#include <stdint.h>
#include <iostream>

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


bool RACHparse(uint8_t RACH[5], uint8_t* ptr);

#endif SIBS_H
