/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_Poll_SDU_H_
#define	_Poll_SDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Poll_SDU {
	Poll_SDU_sdu1	= 0,
	Poll_SDU_sdu4	= 1,
	Poll_SDU_sdu16	= 2,
	Poll_SDU_sdu64	= 3
} e_Poll_SDU;

/* Poll-SDU */
typedef long	 Poll_SDU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Poll_SDU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Poll_SDU;
extern const asn_INTEGER_specifics_t asn_SPC_Poll_SDU_specs_1;
asn_struct_free_f Poll_SDU_free;
asn_struct_print_f Poll_SDU_print;
asn_constr_check_f Poll_SDU_constraint;
ber_type_decoder_f Poll_SDU_decode_ber;
der_type_encoder_f Poll_SDU_encode_der;
xer_type_decoder_f Poll_SDU_decode_xer;
xer_type_encoder_f Poll_SDU_encode_xer;
oer_type_decoder_f Poll_SDU_decode_oer;
oer_type_encoder_f Poll_SDU_encode_oer;
per_type_decoder_f Poll_SDU_decode_uper;
per_type_encoder_f Poll_SDU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Poll_SDU_H_ */
#include <asn_internal.h>
