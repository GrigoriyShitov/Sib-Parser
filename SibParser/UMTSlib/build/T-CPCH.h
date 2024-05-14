/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_T_CPCH_H_
#define	_T_CPCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_CPCH {
	T_CPCH_ct0	= 0,
	T_CPCH_ct1	= 1
} e_T_CPCH;

/* T-CPCH */
typedef long	 T_CPCH_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_T_CPCH_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_T_CPCH;
extern const asn_INTEGER_specifics_t asn_SPC_T_CPCH_specs_1;
asn_struct_free_f T_CPCH_free;
asn_struct_print_f T_CPCH_print;
asn_constr_check_f T_CPCH_constraint;
ber_type_decoder_f T_CPCH_decode_ber;
der_type_encoder_f T_CPCH_encode_der;
xer_type_decoder_f T_CPCH_decode_xer;
xer_type_encoder_f T_CPCH_encode_xer;
oer_type_decoder_f T_CPCH_decode_oer;
oer_type_encoder_f T_CPCH_encode_oer;
per_type_decoder_f T_CPCH_decode_uper;
per_type_encoder_f T_CPCH_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_CPCH_H_ */
#include <asn_internal.h>
