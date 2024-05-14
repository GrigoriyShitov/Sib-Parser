/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_InterFreqMeasurementSysInfo_HCS_ECN0_LCR_r4_H_
#define	_InterFreqMeasurementSysInfo_HCS_ECN0_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCellInfoSI_List_HCS_ECN0_LCR;

/* InterFreqMeasurementSysInfo-HCS-ECN0-LCR-r4 */
typedef struct InterFreqMeasurementSysInfo_HCS_ECN0_LCR_r4 {
	struct InterFreqCellInfoSI_List_HCS_ECN0_LCR	*interFreqCellInfoSI_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqMeasurementSysInfo_HCS_ECN0_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqMeasurementSysInfo_HCS_ECN0_LCR_r4;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqMeasurementSysInfo_HCS_ECN0_LCR_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqMeasurementSysInfo_HCS_ECN0_LCR_r4_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCellInfoSI-List-HCS-ECN0-LCR.h"

#endif	/* _InterFreqMeasurementSysInfo_HCS_ECN0_LCR_r4_H_ */
#include <asn_internal.h>
