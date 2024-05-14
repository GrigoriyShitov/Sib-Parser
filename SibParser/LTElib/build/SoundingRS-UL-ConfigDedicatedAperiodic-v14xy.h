/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SoundingRS_UL_ConfigDedicatedAperiodic_v14xy_H_
#define	_SoundingRS_UL_ConfigDedicatedAperiodic_v14xy_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SoundingRS_UL_ConfigDedicatedAperiodic_v14xy_PR {
	SoundingRS_UL_ConfigDedicatedAperiodic_v14xy_PR_NOTHING,	/* No components present */
	SoundingRS_UL_ConfigDedicatedAperiodic_v14xy_PR_release,
	SoundingRS_UL_ConfigDedicatedAperiodic_v14xy_PR_setup
} SoundingRS_UL_ConfigDedicatedAperiodic_v14xy_PR;

/* SoundingRS-UL-ConfigDedicatedAperiodic-v14xy */
typedef struct SoundingRS_UL_ConfigDedicatedAperiodic_v14xy {
	SoundingRS_UL_ConfigDedicatedAperiodic_v14xy_PR present;
	union SoundingRS_UL_ConfigDedicatedAperiodic_v14xy_u {
		NULL_t	 release;
		struct SoundingRS_UL_ConfigDedicatedAperiodic_v14xy__setup {
			long	*srs_SubframeIndication_r14	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRS_UL_ConfigDedicatedAperiodic_v14xy_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodic_v14xy;

#ifdef __cplusplus
}
#endif

#endif	/* _SoundingRS_UL_ConfigDedicatedAperiodic_v14xy_H_ */
#include <asn_internal.h>
