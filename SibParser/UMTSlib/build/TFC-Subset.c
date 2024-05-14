/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "TFC-Subset.h"

static asn_oer_constraints_t asn_OER_type_TFC_Subset_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_TFC_Subset_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_TFC_Subset_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TFC_Subset, choice.minimumAllowedTFC_Number),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TFC_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"minimumAllowedTFC-Number"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TFC_Subset, choice.allowedTFC_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllowedTFC_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allowedTFC-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TFC_Subset, choice.non_allowedTFC_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Non_allowedTFC_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"non-allowedTFC-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TFC_Subset, choice.restrictedTrChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RestrictedTrChInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"restrictedTrChInfoList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TFC_Subset, choice.fullTFCS),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fullTFCS"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_TFC_Subset_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* minimumAllowedTFC-Number */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allowedTFC-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* non-allowedTFC-List */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* restrictedTrChInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* fullTFCS */
};
asn_CHOICE_specifics_t asn_SPC_TFC_Subset_specs_1 = {
	sizeof(struct TFC_Subset),
	offsetof(struct TFC_Subset, _asn_ctx),
	offsetof(struct TFC_Subset, present),
	sizeof(((struct TFC_Subset *)0)->present),
	asn_MAP_TFC_Subset_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TFC_Subset = {
	"TFC-Subset",
	"TFC-Subset",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_TFC_Subset_constr_1, &asn_PER_type_TFC_Subset_constr_1, CHOICE_constraint },
	asn_MBR_TFC_Subset_1,
	5,	/* Elements count */
	&asn_SPC_TFC_Subset_specs_1	/* Additional specs */
};
