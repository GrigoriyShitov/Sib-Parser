/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_EAB_Config_r11_H_
#define	_EAB_Config_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EAB_Config_r11__eab_Category_r11 {
	EAB_Config_r11__eab_Category_r11_a	= 0,
	EAB_Config_r11__eab_Category_r11_b	= 1,
	EAB_Config_r11__eab_Category_r11_c	= 2
} e_EAB_Config_r11__eab_Category_r11;

/* EAB-Config-r11 */
typedef struct EAB_Config_r11 {
	long	 eab_Category_r11;
	BIT_STRING_t	 eab_BarringBitmap_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EAB_Config_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eab_Category_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EAB_Config_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_EAB_Config_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_EAB_Config_r11_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _EAB_Config_r11_H_ */
#include <asn_internal.h>
