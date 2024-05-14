/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_TDD_PRACH_CCode8_H_
#define	_TDD_PRACH_CCode8_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TDD_PRACH_CCode8 {
	TDD_PRACH_CCode8_cc8_1	= 0,
	TDD_PRACH_CCode8_cc8_2	= 1,
	TDD_PRACH_CCode8_cc8_3	= 2,
	TDD_PRACH_CCode8_cc8_4	= 3,
	TDD_PRACH_CCode8_cc8_5	= 4,
	TDD_PRACH_CCode8_cc8_6	= 5,
	TDD_PRACH_CCode8_cc8_7	= 6,
	TDD_PRACH_CCode8_cc8_8	= 7
} e_TDD_PRACH_CCode8;

/* TDD-PRACH-CCode8 */
typedef long	 TDD_PRACH_CCode8_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TDD_PRACH_CCode8_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TDD_PRACH_CCode8;
extern const asn_INTEGER_specifics_t asn_SPC_TDD_PRACH_CCode8_specs_1;
asn_struct_free_f TDD_PRACH_CCode8_free;
asn_struct_print_f TDD_PRACH_CCode8_print;
asn_constr_check_f TDD_PRACH_CCode8_constraint;
ber_type_decoder_f TDD_PRACH_CCode8_decode_ber;
der_type_encoder_f TDD_PRACH_CCode8_encode_der;
xer_type_decoder_f TDD_PRACH_CCode8_decode_xer;
xer_type_encoder_f TDD_PRACH_CCode8_encode_xer;
oer_type_decoder_f TDD_PRACH_CCode8_decode_oer;
oer_type_encoder_f TDD_PRACH_CCode8_encode_oer;
per_type_decoder_f TDD_PRACH_CCode8_decode_uper;
per_type_encoder_f TDD_PRACH_CCode8_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TDD_PRACH_CCode8_H_ */
#include <asn_internal.h>
