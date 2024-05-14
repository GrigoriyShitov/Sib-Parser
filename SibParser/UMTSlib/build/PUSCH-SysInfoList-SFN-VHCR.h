/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_PUSCH_SysInfoList_SFN_VHCR_H_
#define	_PUSCH_SysInfoList_SFN_VHCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "PUSCH-SysInfo-VHCR.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SFN_TimeInfo;

/* Forward definitions */
typedef struct PUSCH_SysInfoList_SFN_VHCR__Member {
	PUSCH_SysInfo_VHCR_t	 pusch_SysInfo_VHCR;
	struct SFN_TimeInfo	*sfn_TimeInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_SysInfoList_SFN_VHCR__Member;

/* PUSCH-SysInfoList-SFN-VHCR */
typedef struct PUSCH_SysInfoList_SFN_VHCR {
	A_SEQUENCE_OF(PUSCH_SysInfoList_SFN_VHCR__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_SysInfoList_SFN_VHCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_SysInfoList_SFN_VHCR;
extern asn_SET_OF_specifics_t asn_SPC_PUSCH_SysInfoList_SFN_VHCR_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_SysInfoList_SFN_VHCR_1[1];
extern asn_per_constraints_t asn_PER_type_PUSCH_SysInfoList_SFN_VHCR_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SFN-TimeInfo.h"

#endif	/* _PUSCH_SysInfoList_SFN_VHCR_H_ */
#include <asn_internal.h>
