/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PRACH_ConfigInfo_H_
#define	_PRACH_ConfigInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PRACH_ConfigInfo__prach_ConfigIndex {
	PRACH_ConfigInfo__prach_ConfigIndex_ffs	= 0
} e_PRACH_ConfigInfo__prach_ConfigIndex;
typedef enum PRACH_ConfigInfo__highSpeedFlag {
	PRACH_ConfigInfo__highSpeedFlag_ffs	= 0
} e_PRACH_ConfigInfo__highSpeedFlag;
typedef enum PRACH_ConfigInfo__zeroCorrelationZoneConfig {
	PRACH_ConfigInfo__zeroCorrelationZoneConfig_ffs	= 0
} e_PRACH_ConfigInfo__zeroCorrelationZoneConfig;

/* PRACH-ConfigInfo */
typedef struct PRACH_ConfigInfo {
	long	 prach_ConfigIndex;
	long	 highSpeedFlag;
	long	 zeroCorrelationZoneConfig;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_ConfigInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_prach_ConfigIndex_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_highSpeedFlag_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_zeroCorrelationZoneConfig_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_ConfigInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_PRACH_ConfigInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_PRACH_ConfigInfo_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_ConfigInfo_H_ */
#include <asn_internal.h>
