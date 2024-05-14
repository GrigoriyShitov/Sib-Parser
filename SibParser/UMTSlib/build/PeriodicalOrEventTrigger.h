/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_PeriodicalOrEventTrigger_H_
#define	_PeriodicalOrEventTrigger_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PeriodicalOrEventTrigger {
	PeriodicalOrEventTrigger_periodical	= 0,
	PeriodicalOrEventTrigger_eventTrigger	= 1
} e_PeriodicalOrEventTrigger;

/* PeriodicalOrEventTrigger */
typedef long	 PeriodicalOrEventTrigger_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PeriodicalOrEventTrigger_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PeriodicalOrEventTrigger;
extern const asn_INTEGER_specifics_t asn_SPC_PeriodicalOrEventTrigger_specs_1;
asn_struct_free_f PeriodicalOrEventTrigger_free;
asn_struct_print_f PeriodicalOrEventTrigger_print;
asn_constr_check_f PeriodicalOrEventTrigger_constraint;
ber_type_decoder_f PeriodicalOrEventTrigger_decode_ber;
der_type_encoder_f PeriodicalOrEventTrigger_encode_der;
xer_type_decoder_f PeriodicalOrEventTrigger_decode_xer;
xer_type_encoder_f PeriodicalOrEventTrigger_encode_xer;
oer_type_decoder_f PeriodicalOrEventTrigger_decode_oer;
oer_type_encoder_f PeriodicalOrEventTrigger_encode_oer;
per_type_decoder_f PeriodicalOrEventTrigger_decode_uper;
per_type_encoder_f PeriodicalOrEventTrigger_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PeriodicalOrEventTrigger_H_ */
#include <asn_internal.h>
