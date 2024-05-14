/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SL_ZoneConfig_r14_H_
#define	_SL_ZoneConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_ZoneConfig_r14__zoneLength_r14 {
	SL_ZoneConfig_r14__zoneLength_r14_m5	= 0,
	SL_ZoneConfig_r14__zoneLength_r14_m10	= 1,
	SL_ZoneConfig_r14__zoneLength_r14_m20	= 2,
	SL_ZoneConfig_r14__zoneLength_r14_m50	= 3,
	SL_ZoneConfig_r14__zoneLength_r14_m100	= 4,
	SL_ZoneConfig_r14__zoneLength_r14_m200	= 5,
	SL_ZoneConfig_r14__zoneLength_r14_m500	= 6,
	SL_ZoneConfig_r14__zoneLength_r14_spare1	= 7
} e_SL_ZoneConfig_r14__zoneLength_r14;
typedef enum SL_ZoneConfig_r14__zoneWidth_r14 {
	SL_ZoneConfig_r14__zoneWidth_r14_m5	= 0,
	SL_ZoneConfig_r14__zoneWidth_r14_m10	= 1,
	SL_ZoneConfig_r14__zoneWidth_r14_m20	= 2,
	SL_ZoneConfig_r14__zoneWidth_r14_m50	= 3,
	SL_ZoneConfig_r14__zoneWidth_r14_m100	= 4,
	SL_ZoneConfig_r14__zoneWidth_r14_m200	= 5,
	SL_ZoneConfig_r14__zoneWidth_r14_m500	= 6,
	SL_ZoneConfig_r14__zoneWidth_r14_spare1	= 7
} e_SL_ZoneConfig_r14__zoneWidth_r14;

/* SL-ZoneConfig-r14 */
typedef struct SL_ZoneConfig_r14 {
	long	*zoneLength_r14	/* OPTIONAL */;
	long	*zoneWidth_r14	/* OPTIONAL */;
	long	*zoneIdLongiMod_r14	/* OPTIONAL */;
	long	*zoneIdLatiMod_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_ZoneConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_zoneLength_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_zoneWidth_r14_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_ZoneConfig_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_ZoneConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_ZoneConfig_r14_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_ZoneConfig_r14_H_ */
#include <asn_internal.h>
