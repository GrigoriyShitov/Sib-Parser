/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_SysInfoType15_4_v4b0ext_H_
#define	_SysInfoType15_4_v4b0ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_OTDOA_AssistanceData_r4ext;

/* SysInfoType15-4-v4b0ext */
typedef struct SysInfoType15_4_v4b0ext {
	struct UE_Positioning_OTDOA_AssistanceData_r4ext	*ue_Positioning_OTDOA_AssistanceData_r4ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_4_v4b0ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_4_v4b0ext;
extern asn_SEQUENCE_specifics_t asn_SPC_SysInfoType15_4_v4b0ext_specs_1;
extern asn_TYPE_member_t asn_MBR_SysInfoType15_4_v4b0ext_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-OTDOA-AssistanceData-r4ext.h"

#endif	/* _SysInfoType15_4_v4b0ext_H_ */
#include <asn_internal.h>
