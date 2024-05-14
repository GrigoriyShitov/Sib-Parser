/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_MBMS_NotificationConfig_r9_H_
#define	_MBMS_NotificationConfig_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_NotificationConfig_r9__notificationRepetitionCoeff_r9 {
	MBMS_NotificationConfig_r9__notificationRepetitionCoeff_r9_n2	= 0,
	MBMS_NotificationConfig_r9__notificationRepetitionCoeff_r9_n4	= 1
} e_MBMS_NotificationConfig_r9__notificationRepetitionCoeff_r9;

/* MBMS-NotificationConfig-r9 */
typedef struct MBMS_NotificationConfig_r9 {
	long	 notificationRepetitionCoeff_r9;
	long	 notificationOffset_r9;
	long	 notificationSF_Index_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_NotificationConfig_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_notificationRepetitionCoeff_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_NotificationConfig_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMS_NotificationConfig_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMS_NotificationConfig_r9_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_NotificationConfig_r9_H_ */
#include <asn_internal.h>
