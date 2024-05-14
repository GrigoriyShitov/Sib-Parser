/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_UE_Positioning_OTDOA_AssistanceData_r4ext_H_
#define	_UE_Positioning_OTDOA_AssistanceData_r4ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_IPDL_Parameters_TDD_r4_ext;
struct UE_Positioning_IPDL_Parameters_TDDList_r4_ext;

/* UE-Positioning-OTDOA-AssistanceData-r4ext */
typedef struct UE_Positioning_OTDOA_AssistanceData_r4ext {
	struct UE_Positioning_IPDL_Parameters_TDD_r4_ext	*ue_Positioning_IPDL_Parameters_TDD_r4_ext	/* OPTIONAL */;
	struct UE_Positioning_IPDL_Parameters_TDDList_r4_ext	*ue_Positioning_IPDL_Parameters_TDDList_r4_ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_OTDOA_AssistanceData_r4ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_AssistanceData_r4ext;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_OTDOA_AssistanceData_r4ext_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_OTDOA_AssistanceData_r4ext_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-IPDL-Parameters-TDD-r4-ext.h"
#include "UE-Positioning-IPDL-Parameters-TDDList-r4-ext.h"

#endif	/* _UE_Positioning_OTDOA_AssistanceData_r4ext_H_ */
#include <asn_internal.h>
