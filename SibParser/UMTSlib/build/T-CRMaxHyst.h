/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_T_CRMaxHyst_H_
#define	_T_CRMaxHyst_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_CRMaxHyst {
	T_CRMaxHyst_notUsed	= 0,
	T_CRMaxHyst_t10	= 1,
	T_CRMaxHyst_t20	= 2,
	T_CRMaxHyst_t30	= 3,
	T_CRMaxHyst_t40	= 4,
	T_CRMaxHyst_t50	= 5,
	T_CRMaxHyst_t60	= 6,
	T_CRMaxHyst_t70	= 7
} e_T_CRMaxHyst;

/* T-CRMaxHyst */
typedef long	 T_CRMaxHyst_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_T_CRMaxHyst_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_T_CRMaxHyst;
extern const asn_INTEGER_specifics_t asn_SPC_T_CRMaxHyst_specs_1;
asn_struct_free_f T_CRMaxHyst_free;
asn_struct_print_f T_CRMaxHyst_print;
asn_constr_check_f T_CRMaxHyst_constraint;
ber_type_decoder_f T_CRMaxHyst_decode_ber;
der_type_encoder_f T_CRMaxHyst_encode_der;
xer_type_decoder_f T_CRMaxHyst_decode_xer;
xer_type_encoder_f T_CRMaxHyst_encode_xer;
oer_type_decoder_f T_CRMaxHyst_decode_oer;
oer_type_encoder_f T_CRMaxHyst_encode_oer;
per_type_decoder_f T_CRMaxHyst_decode_uper;
per_type_encoder_f T_CRMaxHyst_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_CRMaxHyst_H_ */
#include <asn_internal.h>
