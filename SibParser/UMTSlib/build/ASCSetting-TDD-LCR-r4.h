/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_ASCSetting_TDD_LCR_r4_H_
#define	_ASCSetting_TDD_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AccessServiceClass_TDD_LCR_r4;

/* ASCSetting-TDD-LCR-r4 */
typedef struct ASCSetting_TDD_LCR_r4 {
	struct AccessServiceClass_TDD_LCR_r4	*accessServiceClass_TDD_LCR	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASCSetting_TDD_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASCSetting_TDD_LCR_r4;
extern asn_SEQUENCE_specifics_t asn_SPC_ASCSetting_TDD_LCR_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_ASCSetting_TDD_LCR_r4_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AccessServiceClass-TDD-LCR-r4.h"

#endif	/* _ASCSetting_TDD_LCR_r4_H_ */
#include <asn_internal.h>
