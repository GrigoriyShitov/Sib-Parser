/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SystemInformationBlockType13_r9_H_
#define	_SystemInformationBlockType13_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBSFN-AreaInfoList-r9.h"
#include "MBMS-NotificationConfig-r9.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBSFN_AreaInfoList_r9;
struct MBMS_NotificationConfig_v14xy;

/* SystemInformationBlockType13-r9 */
typedef struct SystemInformationBlockType13_r9 {
	MBSFN_AreaInfoList_r9_t	 mbsfn_AreaInfoList_r9;
	MBMS_NotificationConfig_r9_t	 notificationConfig_r9;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MBSFN_AreaInfoList_r9	*mbsfn_AreaInfoListV2X_r14	/* OPTIONAL */;
	struct MBMS_NotificationConfig_v14xy	*notificationConfig_v14xy	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType13_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType13_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType13_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType13_r9_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBSFN-AreaInfoList-r9.h"
#include "MBMS-NotificationConfig-v14xy.h"

#endif	/* _SystemInformationBlockType13_r9_H_ */
#include <asn_internal.h>