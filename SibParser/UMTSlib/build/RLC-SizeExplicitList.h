/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_RLC_SizeExplicitList_H_
#define	_RLC_SizeExplicitList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RLC_SizeInfo;

/* RLC-SizeExplicitList */
typedef struct RLC_SizeExplicitList {
	A_SEQUENCE_OF(struct RLC_SizeInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_SizeExplicitList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_SizeExplicitList;
extern asn_SET_OF_specifics_t asn_SPC_RLC_SizeExplicitList_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_SizeExplicitList_1[1];
extern asn_per_constraints_t asn_PER_type_RLC_SizeExplicitList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RLC-SizeInfo.h"

#endif	/* _RLC_SizeExplicitList_H_ */
#include <asn_internal.h>
