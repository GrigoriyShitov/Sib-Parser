/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_UE_Positioning_IPDL_Parameters_H_
#define	_UE_Positioning_IPDL_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IP-Spacing.h"
#include "IP-Length.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BurstModeParameters;

/* UE-Positioning-IPDL-Parameters */
typedef struct UE_Positioning_IPDL_Parameters {
	IP_Spacing_t	 ip_Spacing;
	IP_Length_t	 ip_Length;
	long	 ip_Offset;
	long	 seed;
	struct BurstModeParameters	*burstModeParameters	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_IPDL_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_IPDL_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_IPDL_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_IPDL_Parameters_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BurstModeParameters.h"

#endif	/* _UE_Positioning_IPDL_Parameters_H_ */
#include <asn_internal.h>
