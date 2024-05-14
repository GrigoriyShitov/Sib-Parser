/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_SysInfoType2_H_
#define	_SysInfoType2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "URA-IdentityList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType2 */
typedef struct SysInfoType2 {
	URA_IdentityList_t	 ura_IdentityList;
	struct SysInfoType2__nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType2;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType2_H_ */
#include <asn_internal.h>