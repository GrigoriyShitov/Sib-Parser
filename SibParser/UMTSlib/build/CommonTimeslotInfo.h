/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_CommonTimeslotInfo_H_
#define	_CommonTimeslotInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SecondInterleavingMode.h"
#include "TFCI-Coding.h"
#include "PuncturingLimit.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RepetitionPeriodAndLength;

/* CommonTimeslotInfo */
typedef struct CommonTimeslotInfo {
	SecondInterleavingMode_t	 secondInterleavingMode;
	TFCI_Coding_t	*tfci_Coding	/* OPTIONAL */;
	PuncturingLimit_t	 puncturingLimit;
	struct RepetitionPeriodAndLength	*repetitionPeriodAndLength	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CommonTimeslotInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CommonTimeslotInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_CommonTimeslotInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_CommonTimeslotInfo_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RepetitionPeriodAndLength.h"

#endif	/* _CommonTimeslotInfo_H_ */
#include <asn_internal.h>
