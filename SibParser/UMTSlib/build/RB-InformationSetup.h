/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_RB_InformationSetup_H_
#define	_RB_InformationSetup_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RB-Identity.h"
#include "RLC-InfoChoice.h"
#include "RB-MappingInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDCP_Info;

/* RB-InformationSetup */
typedef struct RB_InformationSetup {
	RB_Identity_t	 rb_Identity;
	struct PDCP_Info	*pdcp_Info	/* OPTIONAL */;
	RLC_InfoChoice_t	 rlc_InfoChoice;
	RB_MappingInfo_t	 rb_MappingInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RB_InformationSetup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RB_InformationSetup;
extern asn_SEQUENCE_specifics_t asn_SPC_RB_InformationSetup_specs_1;
extern asn_TYPE_member_t asn_MBR_RB_InformationSetup_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDCP-Info.h"

#endif	/* _RB_InformationSetup_H_ */
#include <asn_internal.h>