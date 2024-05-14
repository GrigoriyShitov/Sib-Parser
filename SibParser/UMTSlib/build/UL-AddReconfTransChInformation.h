/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_UL_AddReconfTransChInformation_H_
#define	_UL_AddReconfTransChInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-TrCH-Type.h"
#include "TransportChannelIdentity.h"
#include "TransportFormatSet.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UL-AddReconfTransChInformation */
typedef struct UL_AddReconfTransChInformation {
	UL_TrCH_Type_t	 ul_TransportChannelType;
	TransportChannelIdentity_t	 transportChannelIdentity;
	TransportFormatSet_t	 transportFormatSet;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_AddReconfTransChInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_AddReconfTransChInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_AddReconfTransChInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_AddReconfTransChInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UL_AddReconfTransChInformation_H_ */
#include <asn_internal.h>
