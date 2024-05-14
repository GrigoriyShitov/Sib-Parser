/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_SystemSpecificCapUpdateReqList_H_
#define	_SystemSpecificCapUpdateReqList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SystemSpecificCapUpdateReq.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemSpecificCapUpdateReqList */
typedef struct SystemSpecificCapUpdateReqList {
	A_SEQUENCE_OF(SystemSpecificCapUpdateReq_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemSpecificCapUpdateReqList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemSpecificCapUpdateReqList;
extern asn_SET_OF_specifics_t asn_SPC_SystemSpecificCapUpdateReqList_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemSpecificCapUpdateReqList_1[1];
extern asn_per_constraints_t asn_PER_type_SystemSpecificCapUpdateReqList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemSpecificCapUpdateReqList_H_ */
#include <asn_internal.h>
