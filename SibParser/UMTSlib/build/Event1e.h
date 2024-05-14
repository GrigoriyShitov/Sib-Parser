/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_Event1e_H_
#define	_Event1e_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TriggeringCondition2.h"
#include "ThresholdUsedFrequency.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Event1e */
typedef struct Event1e {
	TriggeringCondition2_t	 triggeringCondition;
	ThresholdUsedFrequency_t	 thresholdUsedFrequency;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event1e_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event1e;
extern asn_SEQUENCE_specifics_t asn_SPC_Event1e_specs_1;
extern asn_TYPE_member_t asn_MBR_Event1e_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Event1e_H_ */
#include <asn_internal.h>
