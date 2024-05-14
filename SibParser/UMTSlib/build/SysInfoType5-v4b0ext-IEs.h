/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_SysInfoType5_v4b0ext_IEs_H_
#define	_SysInfoType5_v4b0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioFrequencyBandFDD.h"
#include "SCCPCH-SystemInformationList-LCR-r4-ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PNBSCH_Allocation_r4;
struct OpenLoopPowerControl_IPDL_TDD_r4;
struct PRACH_SystemInformationList_LCR_r4;
struct PUSCH_SysInfoList_SFN_LCR_r4;
struct PDSCH_SysInfoList_SFN_LCR_r4;
struct PrimaryCCPCH_Info_LCR_r4_ext;

/* SysInfoType5-v4b0ext-IEs */
typedef struct SysInfoType5_v4b0ext_IEs {
	struct PNBSCH_Allocation_r4	*pNBSCH_Allocation_r4	/* OPTIONAL */;
	struct OpenLoopPowerControl_IPDL_TDD_r4	*openLoopPowerControl_IPDL_TDD	/* OPTIONAL */;
	struct PRACH_SystemInformationList_LCR_r4	*prach_SystemInformationList_LCR_r4	/* OPTIONAL */;
	struct SysInfoType5_v4b0ext_IEs__tdd128SpecificInfo {
		struct PUSCH_SysInfoList_SFN_LCR_r4	*pusch_SysInfoList_SFN	/* OPTIONAL */;
		struct PDSCH_SysInfoList_SFN_LCR_r4	*pdsch_SysInfoList_SFN	/* OPTIONAL */;
		struct PrimaryCCPCH_Info_LCR_r4_ext	*pCCPCH_LCR_Extensions	/* OPTIONAL */;
		SCCPCH_SystemInformationList_LCR_r4_ext_t	 sCCPCH_LCR_ExtensionsList;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tdd128SpecificInfo;
	RadioFrequencyBandFDD_t	*frequencyBandIndicator	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType5_v4b0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType5_v4b0ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SysInfoType5_v4b0ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SysInfoType5_v4b0ext_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PNBSCH-Allocation-r4.h"
#include "OpenLoopPowerControl-IPDL-TDD-r4.h"
#include "PRACH-SystemInformationList-LCR-r4.h"
#include "PUSCH-SysInfoList-SFN-LCR-r4.h"
#include "PDSCH-SysInfoList-SFN-LCR-r4.h"
#include "PrimaryCCPCH-Info-LCR-r4-ext.h"

#endif	/* _SysInfoType5_v4b0ext_IEs_H_ */
#include <asn_internal.h>
