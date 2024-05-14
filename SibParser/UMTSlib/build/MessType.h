/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_MessType_H_
#define	_MessType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MessType {
	MessType_transportFormatCombinationControl	= 0
} e_MessType;

/* MessType */
typedef long	 MessType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MessType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MessType;
extern const asn_INTEGER_specifics_t asn_SPC_MessType_specs_1;
asn_struct_free_f MessType_free;
asn_struct_print_f MessType_print;
asn_constr_check_f MessType_constraint;
ber_type_decoder_f MessType_decode_ber;
der_type_encoder_f MessType_encode_der;
xer_type_decoder_f MessType_decode_xer;
xer_type_encoder_f MessType_encode_xer;
oer_type_decoder_f MessType_decode_oer;
oer_type_encoder_f MessType_encode_oer;
per_type_decoder_f MessType_decode_uper;
per_type_encoder_f MessType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MessType_H_ */
#include <asn_internal.h>
