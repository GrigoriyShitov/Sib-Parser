/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_Event1a_H_
#define	_Event1a_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TriggeringCondition2.h"
#include "ReportingRange.h"
#include "W.h"
#include "ReportDeactivationThreshold.h"
#include "ReportingAmount.h"
#include "ReportingInterval.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ForbiddenAffectCellList;

/* Event1a */
typedef struct Event1a {
	TriggeringCondition2_t	 triggeringCondition;
	ReportingRange_t	 reportingRange;
	struct ForbiddenAffectCellList	*forbiddenAffectCellList	/* OPTIONAL */;
	W_t	 w;
	ReportDeactivationThreshold_t	 reportDeactivationThreshold;
	ReportingAmount_t	 reportingAmount;
	ReportingInterval_t	 reportingInterval;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event1a_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event1a;
extern asn_SEQUENCE_specifics_t asn_SPC_Event1a_specs_1;
extern asn_TYPE_member_t asn_MBR_Event1a_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ForbiddenAffectCellList.h"

#endif	/* _Event1a_H_ */
#include <asn_internal.h>
