/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SystemInformationBlockType1_v14xy_IEs_H_
#define	_SystemInformationBlockType1_v14xy_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType1_v14xy_IEs__eCallOverIMS_Support_r14 {
	SystemInformationBlockType1_v14xy_IEs__eCallOverIMS_Support_r14_true	= 0
} e_SystemInformationBlockType1_v14xy_IEs__eCallOverIMS_Support_r14;

/* Forward declarations */
struct TDD_Config_v14xy;

/* SystemInformationBlockType1-v14xy-IEs */
typedef struct SystemInformationBlockType1_v14xy_IEs {
	long	*eCallOverIMS_Support_r14	/* OPTIONAL */;
	struct TDD_Config_v14xy	*tdd_Config_v14xy	/* OPTIONAL */;
	struct SystemInformationBlockType1_v14xy_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v14xy_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eCallOverIMS_Support_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v14xy_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v14xy_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v14xy_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TDD-Config-v14xy.h"

#endif	/* _SystemInformationBlockType1_v14xy_IEs_H_ */
#include <asn_internal.h>
