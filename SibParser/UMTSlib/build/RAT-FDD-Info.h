/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_RAT_FDD_Info_H_
#define	_RAT_FDD_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RAT-Identifier.h"
#include "S-SearchQual.h"
#include "S-SearchRXLEV.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RAT-FDD-Info */
typedef struct RAT_FDD_Info {
	RAT_Identifier_t	 rat_Identifier;
	S_SearchQual_t	 s_SearchRAT;
	S_SearchRXLEV_t	*s_HCS_RAT	/* OPTIONAL */;
	S_SearchQual_t	 s_Limit_SearchRAT;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAT_FDD_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAT_FDD_Info;
extern asn_SEQUENCE_specifics_t asn_SPC_RAT_FDD_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_RAT_FDD_Info_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RAT_FDD_Info_H_ */
#include <asn_internal.h>
