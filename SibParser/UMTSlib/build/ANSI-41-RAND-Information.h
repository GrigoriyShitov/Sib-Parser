/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_ANSI_41_RAND_Information_H_
#define	_ANSI_41_RAND_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ANSI-41-NAS-Parameter.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ANSI-41-RAND-Information */
typedef ANSI_41_NAS_Parameter_t	 ANSI_41_RAND_Information_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ANSI_41_RAND_Information_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ANSI_41_RAND_Information;
asn_struct_free_f ANSI_41_RAND_Information_free;
asn_struct_print_f ANSI_41_RAND_Information_print;
asn_constr_check_f ANSI_41_RAND_Information_constraint;
ber_type_decoder_f ANSI_41_RAND_Information_decode_ber;
der_type_encoder_f ANSI_41_RAND_Information_encode_der;
xer_type_decoder_f ANSI_41_RAND_Information_decode_xer;
xer_type_encoder_f ANSI_41_RAND_Information_encode_xer;
oer_type_decoder_f ANSI_41_RAND_Information_decode_oer;
oer_type_encoder_f ANSI_41_RAND_Information_encode_oer;
per_type_decoder_f ANSI_41_RAND_Information_decode_uper;
per_type_encoder_f ANSI_41_RAND_Information_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ANSI_41_RAND_Information_H_ */
#include <asn_internal.h>
