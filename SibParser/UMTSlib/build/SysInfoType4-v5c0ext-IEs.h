/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_SysInfoType4_v5c0ext_IEs_H_
#define	_SysInfoType4_v5c0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellSelectReselectInfoTreselectionScaling_v5c0ext;

/* SysInfoType4-v5c0ext-IEs */
typedef struct SysInfoType4_v5c0ext_IEs {
	struct CellSelectReselectInfoTreselectionScaling_v5c0ext	*cellSelectReselectInfoTreselectionScaling_v5c0ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType4_v5c0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType4_v5c0ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SysInfoType4_v5c0ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SysInfoType4_v5c0ext_IEs_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellSelectReselectInfoTreselectionScaling-v5c0ext.h"

#endif	/* _SysInfoType4_v5c0ext_IEs_H_ */
#include <asn_internal.h>
