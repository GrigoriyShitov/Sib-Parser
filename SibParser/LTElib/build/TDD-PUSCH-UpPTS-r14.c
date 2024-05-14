/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "TDD-PUSCH-UpPTS-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_symPUSCH_UpPTS_r14_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_symPUSCH_UpPTS_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dmrs_LessUpPTS_r14_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dmrs_LessUpPTS_r14_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_TDD_PUSCH_UpPTS_r14_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_TDD_PUSCH_UpPTS_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_symPUSCH_UpPTS_r14_value2enum_4[] = {
	{ 0,	4,	"sym1" },
	{ 1,	4,	"sym2" },
	{ 2,	4,	"sym3" },
	{ 3,	4,	"sym4" },
	{ 4,	4,	"sym5" },
	{ 5,	4,	"sym6" }
};
static const unsigned int asn_MAP_symPUSCH_UpPTS_r14_enum2value_4[] = {
	0,	/* sym1(0) */
	1,	/* sym2(1) */
	2,	/* sym3(2) */
	3,	/* sym4(3) */
	4,	/* sym5(4) */
	5	/* sym6(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_symPUSCH_UpPTS_r14_specs_4 = {
	asn_MAP_symPUSCH_UpPTS_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_symPUSCH_UpPTS_r14_enum2value_4,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_symPUSCH_UpPTS_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_symPUSCH_UpPTS_r14_4 = {
	"symPUSCH-UpPTS-r14",
	"symPUSCH-UpPTS-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_symPUSCH_UpPTS_r14_tags_4,
	sizeof(asn_DEF_symPUSCH_UpPTS_r14_tags_4)
		/sizeof(asn_DEF_symPUSCH_UpPTS_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_symPUSCH_UpPTS_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_symPUSCH_UpPTS_r14_tags_4)
		/sizeof(asn_DEF_symPUSCH_UpPTS_r14_tags_4[0]), /* 2 */
	{ &asn_OER_type_symPUSCH_UpPTS_r14_constr_4, &asn_PER_type_symPUSCH_UpPTS_r14_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_symPUSCH_UpPTS_r14_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dmrs_LessUpPTS_r14_value2enum_11[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_dmrs_LessUpPTS_r14_enum2value_11[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dmrs_LessUpPTS_r14_specs_11 = {
	asn_MAP_dmrs_LessUpPTS_r14_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_dmrs_LessUpPTS_r14_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dmrs_LessUpPTS_r14_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dmrs_LessUpPTS_r14_11 = {
	"dmrs-LessUpPTS-r14",
	"dmrs-LessUpPTS-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_dmrs_LessUpPTS_r14_tags_11,
	sizeof(asn_DEF_dmrs_LessUpPTS_r14_tags_11)
		/sizeof(asn_DEF_dmrs_LessUpPTS_r14_tags_11[0]) - 1, /* 1 */
	asn_DEF_dmrs_LessUpPTS_r14_tags_11,	/* Same as above */
	sizeof(asn_DEF_dmrs_LessUpPTS_r14_tags_11)
		/sizeof(asn_DEF_dmrs_LessUpPTS_r14_tags_11[0]), /* 2 */
	{ &asn_OER_type_dmrs_LessUpPTS_r14_constr_11, &asn_PER_type_dmrs_LessUpPTS_r14_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dmrs_LessUpPTS_r14_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 2, offsetof(struct TDD_PUSCH_UpPTS_r14__setup, symPUSCH_UpPTS_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_symPUSCH_UpPTS_r14_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"symPUSCH-UpPTS-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct TDD_PUSCH_UpPTS_r14__setup, dmrs_LessUpPTS_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dmrs_LessUpPTS_r14_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dmrs-LessUpPTS-r14"
		},
};
static const int asn_MAP_setup_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* symPUSCH-UpPTS-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dmrs-LessUpPTS-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct TDD_PUSCH_UpPTS_r14__setup),
	offsetof(struct TDD_PUSCH_UpPTS_r14__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	2,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TDD_PUSCH_UpPTS_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TDD_PUSCH_UpPTS_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TDD_PUSCH_UpPTS_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_TDD_PUSCH_UpPTS_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_TDD_PUSCH_UpPTS_r14_specs_1 = {
	sizeof(struct TDD_PUSCH_UpPTS_r14),
	offsetof(struct TDD_PUSCH_UpPTS_r14, _asn_ctx),
	offsetof(struct TDD_PUSCH_UpPTS_r14, present),
	sizeof(((struct TDD_PUSCH_UpPTS_r14 *)0)->present),
	asn_MAP_TDD_PUSCH_UpPTS_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TDD_PUSCH_UpPTS_r14 = {
	"TDD-PUSCH-UpPTS-r14",
	"TDD-PUSCH-UpPTS-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_TDD_PUSCH_UpPTS_r14_constr_1, &asn_PER_type_TDD_PUSCH_UpPTS_r14_constr_1, CHOICE_constraint },
	asn_MBR_TDD_PUSCH_UpPTS_r14_1,
	2,	/* Elements count */
	&asn_SPC_TDD_PUSCH_UpPTS_r14_specs_1	/* Additional specs */
};

