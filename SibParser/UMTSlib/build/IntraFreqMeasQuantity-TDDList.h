/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_IntraFreqMeasQuantity_TDDList_H_
#define	_IntraFreqMeasQuantity_TDDList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqMeasQuantity-TDD.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntraFreqMeasQuantity-TDDList */
typedef struct IntraFreqMeasQuantity_TDDList {
	A_SEQUENCE_OF(IntraFreqMeasQuantity_TDD_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqMeasQuantity_TDDList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqMeasQuantity_TDDList;
extern asn_SET_OF_specifics_t asn_SPC_IntraFreqMeasQuantity_TDDList_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqMeasQuantity_TDDList_1[1];
extern asn_per_constraints_t asn_PER_type_IntraFreqMeasQuantity_TDDList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqMeasQuantity_TDDList_H_ */
#include <asn_internal.h>
