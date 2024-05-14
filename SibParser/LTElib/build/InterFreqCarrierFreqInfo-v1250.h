/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_InterFreqCarrierFreqInfo_v1250_H_
#define	_InterFreqCarrierFreqInfo_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "Q-QualMin-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqCarrierFreqInfo_v1250__reducedMeasPerformance_r12 {
	InterFreqCarrierFreqInfo_v1250__reducedMeasPerformance_r12_true	= 0
} e_InterFreqCarrierFreqInfo_v1250__reducedMeasPerformance_r12;

/* InterFreqCarrierFreqInfo-v1250 */
typedef struct InterFreqCarrierFreqInfo_v1250 {
	long	*reducedMeasPerformance_r12	/* OPTIONAL */;
	Q_QualMin_r9_t	*q_QualMinRSRQ_OnAllSymbols_r12	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_v1250_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reducedMeasPerformance_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v1250_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqCarrierFreqInfo_v1250_H_ */
#include <asn_internal.h>
