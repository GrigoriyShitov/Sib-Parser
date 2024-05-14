/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_ReferenceTimeDifferenceToCell_H_
#define	_ReferenceTimeDifferenceToCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReferenceTimeDifferenceToCell_PR {
	ReferenceTimeDifferenceToCell_PR_NOTHING,	/* No components present */
	ReferenceTimeDifferenceToCell_PR_accuracy40,
	ReferenceTimeDifferenceToCell_PR_accuracy256,
	ReferenceTimeDifferenceToCell_PR_accuracy2560
} ReferenceTimeDifferenceToCell_PR;

/* ReferenceTimeDifferenceToCell */
typedef struct ReferenceTimeDifferenceToCell {
	ReferenceTimeDifferenceToCell_PR present;
	union ReferenceTimeDifferenceToCell_u {
		long	 accuracy40;
		long	 accuracy256;
		long	 accuracy2560;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReferenceTimeDifferenceToCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReferenceTimeDifferenceToCell;
extern asn_CHOICE_specifics_t asn_SPC_ReferenceTimeDifferenceToCell_specs_1;
extern asn_TYPE_member_t asn_MBR_ReferenceTimeDifferenceToCell_1[3];
extern asn_per_constraints_t asn_PER_type_ReferenceTimeDifferenceToCell_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ReferenceTimeDifferenceToCell_H_ */
#include <asn_internal.h>
