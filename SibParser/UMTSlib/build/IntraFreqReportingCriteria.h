/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_IntraFreqReportingCriteria_H_
#define	_IntraFreqReportingCriteria_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqEventCriteriaList;

/* IntraFreqReportingCriteria */
typedef struct IntraFreqReportingCriteria {
	struct IntraFreqEventCriteriaList	*eventCriteriaList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqReportingCriteria_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqReportingCriteria;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraFreqReportingCriteria_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqReportingCriteria_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqEventCriteriaList.h"

#endif	/* _IntraFreqReportingCriteria_H_ */
#include <asn_internal.h>
