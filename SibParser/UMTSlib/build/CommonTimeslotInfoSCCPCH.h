/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_CommonTimeslotInfoSCCPCH_H_
#define	_CommonTimeslotInfoSCCPCH_H_


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
struct RepetitionPeriodLengthAndOffset;

/* CommonTimeslotInfoSCCPCH */
typedef struct CommonTimeslotInfoSCCPCH {
	SecondInterleavingMode_t	 secondInterleavingMode;
	TFCI_Coding_t	*tfci_Coding	/* OPTIONAL */;
	PuncturingLimit_t	 puncturingLimit;
	struct RepetitionPeriodLengthAndOffset	*repetitionPeriodLengthAndOffset	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CommonTimeslotInfoSCCPCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CommonTimeslotInfoSCCPCH;
extern asn_SEQUENCE_specifics_t asn_SPC_CommonTimeslotInfoSCCPCH_specs_1;
extern asn_TYPE_member_t asn_MBR_CommonTimeslotInfoSCCPCH_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RepetitionPeriodLengthAndOffset.h"

#endif	/* _CommonTimeslotInfoSCCPCH_H_ */
#include <asn_internal.h>
