/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_SubFrame1Reserved_H_
#define	_SubFrame1Reserved_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SubFrame1Reserved */
typedef struct SubFrame1Reserved {
	BIT_STRING_t	 reserved1;
	BIT_STRING_t	 reserved2;
	BIT_STRING_t	 reserved3;
	BIT_STRING_t	 reserved4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SubFrame1Reserved_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SubFrame1Reserved;
extern asn_SEQUENCE_specifics_t asn_SPC_SubFrame1Reserved_specs_1;
extern asn_TYPE_member_t asn_MBR_SubFrame1Reserved_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SubFrame1Reserved_H_ */
#include <asn_internal.h>
