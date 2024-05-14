/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_PCP_Length_H_
#define	_PCP_Length_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PCP_Length {
	PCP_Length_as0	= 0,
	PCP_Length_as8	= 1
} e_PCP_Length;

/* PCP-Length */
typedef long	 PCP_Length_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PCP_Length_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PCP_Length;
extern const asn_INTEGER_specifics_t asn_SPC_PCP_Length_specs_1;
asn_struct_free_f PCP_Length_free;
asn_struct_print_f PCP_Length_print;
asn_constr_check_f PCP_Length_constraint;
ber_type_decoder_f PCP_Length_decode_ber;
der_type_encoder_f PCP_Length_encode_der;
xer_type_decoder_f PCP_Length_decode_xer;
xer_type_encoder_f PCP_Length_encode_xer;
oer_type_decoder_f PCP_Length_decode_oer;
oer_type_encoder_f PCP_Length_encode_oer;
per_type_decoder_f PCP_Length_decode_uper;
per_type_encoder_f PCP_Length_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PCP_Length_H_ */
#include <asn_internal.h>
