/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "ForbiddenAffectCell.h"

static asn_oer_constraints_t asn_OER_type_ForbiddenAffectCell_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ForbiddenAffectCell_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ForbiddenAffectCell_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ForbiddenAffectCell, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCPICH_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ForbiddenAffectCell, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ForbiddenAffectCell_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
asn_CHOICE_specifics_t asn_SPC_ForbiddenAffectCell_specs_1 = {
	sizeof(struct ForbiddenAffectCell),
	offsetof(struct ForbiddenAffectCell, _asn_ctx),
	offsetof(struct ForbiddenAffectCell, present),
	sizeof(((struct ForbiddenAffectCell *)0)->present),
	asn_MAP_ForbiddenAffectCell_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ForbiddenAffectCell = {
	"ForbiddenAffectCell",
	"ForbiddenAffectCell",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ForbiddenAffectCell_constr_1, &asn_PER_type_ForbiddenAffectCell_constr_1, CHOICE_constraint },
	asn_MBR_ForbiddenAffectCell_1,
	2,	/* Elements count */
	&asn_SPC_ForbiddenAffectCell_specs_1	/* Additional specs */
};

