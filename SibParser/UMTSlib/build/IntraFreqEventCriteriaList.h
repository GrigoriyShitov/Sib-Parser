/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_IntraFreqEventCriteriaList_H_
#define	_IntraFreqEventCriteriaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqEventCriteria;

/* IntraFreqEventCriteriaList */
typedef struct IntraFreqEventCriteriaList {
	A_SEQUENCE_OF(struct IntraFreqEventCriteria) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqEventCriteriaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqEventCriteriaList;
extern asn_SET_OF_specifics_t asn_SPC_IntraFreqEventCriteriaList_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqEventCriteriaList_1[1];
extern asn_per_constraints_t asn_PER_type_IntraFreqEventCriteriaList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqEventCriteria.h"

#endif	/* _IntraFreqEventCriteriaList_H_ */
#include <asn_internal.h>
