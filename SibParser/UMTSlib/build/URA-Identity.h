/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_URA_Identity_H_
#define	_URA_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* URA-Identity */
typedef BIT_STRING_t	 URA_Identity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_URA_Identity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_URA_Identity;
asn_struct_free_f URA_Identity_free;
asn_struct_print_f URA_Identity_print;
asn_constr_check_f URA_Identity_constraint;
ber_type_decoder_f URA_Identity_decode_ber;
der_type_encoder_f URA_Identity_encode_der;
xer_type_decoder_f URA_Identity_decode_xer;
xer_type_encoder_f URA_Identity_encode_xer;
oer_type_decoder_f URA_Identity_decode_oer;
oer_type_encoder_f URA_Identity_encode_oer;
per_type_decoder_f URA_Identity_decode_uper;
per_type_encoder_f URA_Identity_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _URA_Identity_H_ */
#include <asn_internal.h>
