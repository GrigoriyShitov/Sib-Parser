/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_TrafficVolumeReportCriteriaSysInfo_H_
#define	_TrafficVolumeReportCriteriaSysInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TrafficVolumeReportingCriteria.h"
#include "PeriodicalReportingCriteria.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficVolumeReportCriteriaSysInfo_PR {
	TrafficVolumeReportCriteriaSysInfo_PR_NOTHING,	/* No components present */
	TrafficVolumeReportCriteriaSysInfo_PR_trafficVolumeReportingCriteria,
	TrafficVolumeReportCriteriaSysInfo_PR_periodicalReportingCriteria
} TrafficVolumeReportCriteriaSysInfo_PR;

/* TrafficVolumeReportCriteriaSysInfo */
typedef struct TrafficVolumeReportCriteriaSysInfo {
	TrafficVolumeReportCriteriaSysInfo_PR present;
	union TrafficVolumeReportCriteriaSysInfo_u {
		TrafficVolumeReportingCriteria_t	 trafficVolumeReportingCriteria;
		PeriodicalReportingCriteria_t	 periodicalReportingCriteria;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficVolumeReportCriteriaSysInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficVolumeReportCriteriaSysInfo;
extern asn_CHOICE_specifics_t asn_SPC_TrafficVolumeReportCriteriaSysInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficVolumeReportCriteriaSysInfo_1[2];
extern asn_per_constraints_t asn_PER_type_TrafficVolumeReportCriteriaSysInfo_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficVolumeReportCriteriaSysInfo_H_ */
#include <asn_internal.h>
