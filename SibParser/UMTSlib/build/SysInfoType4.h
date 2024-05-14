/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_SysInfoType4_H_
#define	_SysInfoType4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIdentity.h"
#include "CellSelectReselectInfoSIB-3-4.h"
#include "CellAccessRestriction.h"
#include "SysInfoType4-v4b0ext-IEs.h"
#include "SysInfoType4-v590ext.h"
#include "SysInfoType4-v5b0ext-IEs.h"
#include "SysInfoType4-v5c0ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType4 */
typedef struct SysInfoType4 {
	CellIdentity_t	 cellIdentity;
	CellSelectReselectInfoSIB_3_4_t	 cellSelectReselectInfo;
	CellAccessRestriction_t	 cellAccessRestriction;
	struct SysInfoType4__v4b0NonCriticalExtensions {
		SysInfoType4_v4b0ext_IEs_t	 sysInfoType4_v4b0ext;
		struct SysInfoType4__v4b0NonCriticalExtensions__v590NonCriticalExtension {
			SysInfoType4_v590ext_t	 sysInfoType4_v590ext;
			struct SysInfoType4__v4b0NonCriticalExtensions__v590NonCriticalExtension__v5b0NonCriticalExtension {
				SysInfoType4_v5b0ext_IEs_t	 sysInfoType4_v5b0ext;
				struct SysInfoType4__v4b0NonCriticalExtensions__v590NonCriticalExtension__v5b0NonCriticalExtension__v5c0NonCriticalExtension {
					SysInfoType4_v5c0ext_IEs_t	 sysInfoType4_v5c0ext;
					struct SysInfoType4__v4b0NonCriticalExtensions__v590NonCriticalExtension__v5b0NonCriticalExtension__v5c0NonCriticalExtension__nonCriticalExtensions {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *nonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v5c0NonCriticalExtension;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v5b0NonCriticalExtension;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v590NonCriticalExtension;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v4b0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType4;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType4_H_ */
#include <asn_internal.h>
