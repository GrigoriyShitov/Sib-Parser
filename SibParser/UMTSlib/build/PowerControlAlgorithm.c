/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "PowerControlAlgorithm.h"

static asn_oer_constraints_t asn_OER_type_PowerControlAlgorithm_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PowerControlAlgorithm_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PowerControlAlgorithm_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PowerControlAlgorithm, choice.algorithm1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TPC_StepSizeFDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"algorithm1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PowerControlAlgorithm, choice.algorithm2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"algorithm2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_PowerControlAlgorithm_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* algorithm1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* algorithm2 */
};
asn_CHOICE_specifics_t asn_SPC_PowerControlAlgorithm_specs_1 = {
	sizeof(struct PowerControlAlgorithm),
	offsetof(struct PowerControlAlgorithm, _asn_ctx),
	offsetof(struct PowerControlAlgorithm, present),
	sizeof(((struct PowerControlAlgorithm *)0)->present),
	asn_MAP_PowerControlAlgorithm_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PowerControlAlgorithm = {
	"PowerControlAlgorithm",
	"PowerControlAlgorithm",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_PowerControlAlgorithm_constr_1, &asn_PER_type_PowerControlAlgorithm_constr_1, CHOICE_constraint },
	asn_MBR_PowerControlAlgorithm_1,
	2,	/* Elements count */
	&asn_SPC_PowerControlAlgorithm_specs_1	/* Additional specs */
};
