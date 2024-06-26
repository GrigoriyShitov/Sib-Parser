/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_SysInfoType16_H_
#define	_SysInfoType16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PreDefRadioConfiguration.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType16 */
typedef struct SysInfoType16 {
	PreDefRadioConfiguration_t	 preDefinedRadioConfiguration;
	struct SysInfoType16__nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType16;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType16_H_ */
#include <asn_internal.h>
