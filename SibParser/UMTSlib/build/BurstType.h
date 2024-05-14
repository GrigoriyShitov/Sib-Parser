/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_BurstType_H_
#define	_BurstType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BurstType {
	BurstType_type1	= 0,
	BurstType_type2	= 1
} e_BurstType;

/* BurstType */
typedef long	 BurstType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BurstType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BurstType;
extern const asn_INTEGER_specifics_t asn_SPC_BurstType_specs_1;
asn_struct_free_f BurstType_free;
asn_struct_print_f BurstType_print;
asn_constr_check_f BurstType_constraint;
ber_type_decoder_f BurstType_decode_ber;
der_type_encoder_f BurstType_encode_der;
xer_type_decoder_f BurstType_decode_xer;
xer_type_encoder_f BurstType_encode_xer;
oer_type_decoder_f BurstType_decode_oer;
oer_type_encoder_f BurstType_encode_oer;
per_type_decoder_f BurstType_decode_uper;
per_type_encoder_f BurstType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _BurstType_H_ */
#include <asn_internal.h>