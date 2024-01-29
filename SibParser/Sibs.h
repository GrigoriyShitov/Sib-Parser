#ifndef SIBS_H
#define SIBS_H


#include <stdint.h>

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
	uint8_t S1Rest;
	bool Parse1();
};


#endif SIBS_H
