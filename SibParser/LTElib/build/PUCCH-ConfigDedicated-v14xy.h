/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PUCCH_ConfigDedicated_v14xy_H_
#define	_PUCCH_ConfigDedicated_v14xy_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_ConfigDedicated_v14xy__pucch_NumRepetitionCE_format1_r14 {
	PUCCH_ConfigDedicated_v14xy__pucch_NumRepetitionCE_format1_r14_r64	= 0,
	PUCCH_ConfigDedicated_v14xy__pucch_NumRepetitionCE_format1_r14_r128	= 1
} e_PUCCH_ConfigDedicated_v14xy__pucch_NumRepetitionCE_format1_r14;

/* PUCCH-ConfigDedicated-v14xy */
typedef struct PUCCH_ConfigDedicated_v14xy {
	long	*pucch_NumRepetitionCE_format1_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigDedicated_v14xy_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pucch_NumRepetitionCE_format1_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated_v14xy;

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_ConfigDedicated_v14xy_H_ */
#include <asn_internal.h>