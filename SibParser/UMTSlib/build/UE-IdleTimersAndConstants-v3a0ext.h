/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_UE_IdleTimersAndConstants_v3a0ext_H_
#define	_UE_IdleTimersAndConstants_v3a0ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "N-312ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-IdleTimersAndConstants-v3a0ext */
typedef struct UE_IdleTimersAndConstants_v3a0ext {
	N_312ext_t	*n_312	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_IdleTimersAndConstants_v3a0ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_IdleTimersAndConstants_v3a0ext;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_IdleTimersAndConstants_v3a0ext_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_IdleTimersAndConstants_v3a0ext_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_IdleTimersAndConstants_v3a0ext_H_ */
#include <asn_internal.h>
