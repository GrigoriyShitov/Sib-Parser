/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_RestrictedTrChInfo_H_
#define	_RestrictedTrChInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-TrCH-Type.h"
#include "TransportChannelIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AllowedTFI_List;

/* RestrictedTrChInfo */
typedef struct RestrictedTrChInfo {
	UL_TrCH_Type_t	 ul_TransportChannelType;
	TransportChannelIdentity_t	 restrictedTrChIdentity;
	struct AllowedTFI_List	*allowedTFI_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RestrictedTrChInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RestrictedTrChInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_RestrictedTrChInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_RestrictedTrChInfo_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AllowedTFI-List.h"

#endif	/* _RestrictedTrChInfo_H_ */
#include <asn_internal.h>
