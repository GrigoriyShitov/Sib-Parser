/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_WLAN_Identifiers_r12_H_
#define	_WLAN_Identifiers_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WLAN-Identifiers-r12 */
typedef struct WLAN_Identifiers_r12 {
	OCTET_STRING_t	*ssid_r12	/* OPTIONAL */;
	OCTET_STRING_t	*bssid_r12	/* OPTIONAL */;
	OCTET_STRING_t	*hessid_r12	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_Identifiers_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_Identifiers_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_WLAN_Identifiers_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_Identifiers_r12_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_Identifiers_r12_H_ */
#include <asn_internal.h>
