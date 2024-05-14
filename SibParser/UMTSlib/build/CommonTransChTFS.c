/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "CommonTransChTFS.h"

static asn_oer_constraints_t asn_OER_type_tti_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tti_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tti_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS__tti, choice.tti10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tti10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS__tti, choice.tti20),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tti20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS__tti, choice.tti40),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tti40"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS__tti, choice.tti80),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tti80"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS__tti, choice.dynamic),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList_DynamicTTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dynamic"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tti_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tti10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tti20 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tti40 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tti80 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* dynamic */
};
static asn_CHOICE_specifics_t asn_SPC_tti_specs_2 = {
	sizeof(struct CommonTransChTFS__tti),
	offsetof(struct CommonTransChTFS__tti, _asn_ctx),
	offsetof(struct CommonTransChTFS__tti, present),
	sizeof(((struct CommonTransChTFS__tti *)0)->present),
	asn_MAP_tti_tag2el_2,
	5,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tti_2 = {
	"tti",
	"tti",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_tti_constr_2, &asn_PER_type_tti_constr_2, CHOICE_constraint },
	asn_MBR_tti_2,
	5,	/* Elements count */
	&asn_SPC_tti_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CommonTransChTFS_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS, tti),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tti_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tti"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS, semistaticTF_Information),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SemistaticTF_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"semistaticTF-Information"
		},
};
static const ber_tlv_tag_t asn_DEF_CommonTransChTFS_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CommonTransChTFS_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tti */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* semistaticTF-Information */
};
asn_SEQUENCE_specifics_t asn_SPC_CommonTransChTFS_specs_1 = {
	sizeof(struct CommonTransChTFS),
	offsetof(struct CommonTransChTFS, _asn_ctx),
	asn_MAP_CommonTransChTFS_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CommonTransChTFS = {
	"CommonTransChTFS",
	"CommonTransChTFS",
	&asn_OP_SEQUENCE,
	asn_DEF_CommonTransChTFS_tags_1,
	sizeof(asn_DEF_CommonTransChTFS_tags_1)
		/sizeof(asn_DEF_CommonTransChTFS_tags_1[0]), /* 1 */
	asn_DEF_CommonTransChTFS_tags_1,	/* Same as above */
	sizeof(asn_DEF_CommonTransChTFS_tags_1)
		/sizeof(asn_DEF_CommonTransChTFS_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CommonTransChTFS_1,
	2,	/* Elements count */
	&asn_SPC_CommonTransChTFS_specs_1	/* Additional specs */
};

