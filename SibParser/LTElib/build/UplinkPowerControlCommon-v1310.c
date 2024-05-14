/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "UplinkPowerControlCommon-v1310.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_deltaF_PUCCH_Format4_r13_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_deltaF_PUCCH_Format4_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_deltaF_PUCCH_Format5_13_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_deltaF_PUCCH_Format5_13_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_deltaF_PUCCH_Format4_r13_value2enum_2[] = {
	{ 0,	8,	"deltaF16" },
	{ 1,	8,	"deltaF15" },
	{ 2,	8,	"deltaF14" },
	{ 3,	8,	"deltaF13" },
	{ 4,	8,	"deltaF12" },
	{ 5,	8,	"deltaF11" },
	{ 6,	8,	"deltaF10" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_deltaF_PUCCH_Format4_r13_enum2value_2[] = {
	6,	/* deltaF10(6) */
	5,	/* deltaF11(5) */
	4,	/* deltaF12(4) */
	3,	/* deltaF13(3) */
	2,	/* deltaF14(2) */
	1,	/* deltaF15(1) */
	0,	/* deltaF16(0) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaF_PUCCH_Format4_r13_specs_2 = {
	asn_MAP_deltaF_PUCCH_Format4_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaF_PUCCH_Format4_r13_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaF_PUCCH_Format4_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format4_r13_2 = {
	"deltaF-PUCCH-Format4-r13",
	"deltaF-PUCCH-Format4-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaF_PUCCH_Format4_r13_tags_2,
	sizeof(asn_DEF_deltaF_PUCCH_Format4_r13_tags_2)
		/sizeof(asn_DEF_deltaF_PUCCH_Format4_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_deltaF_PUCCH_Format4_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_deltaF_PUCCH_Format4_r13_tags_2)
		/sizeof(asn_DEF_deltaF_PUCCH_Format4_r13_tags_2[0]), /* 2 */
	{ &asn_OER_type_deltaF_PUCCH_Format4_r13_constr_2, &asn_PER_type_deltaF_PUCCH_Format4_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaF_PUCCH_Format4_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_deltaF_PUCCH_Format5_13_value2enum_11[] = {
	{ 0,	8,	"deltaF13" },
	{ 1,	8,	"deltaF12" },
	{ 2,	8,	"deltaF11" },
	{ 3,	8,	"deltaF10" },
	{ 4,	7,	"deltaF9" },
	{ 5,	7,	"deltaF8" },
	{ 6,	7,	"deltaF7" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_deltaF_PUCCH_Format5_13_enum2value_11[] = {
	3,	/* deltaF10(3) */
	2,	/* deltaF11(2) */
	1,	/* deltaF12(1) */
	0,	/* deltaF13(0) */
	6,	/* deltaF7(6) */
	5,	/* deltaF8(5) */
	4,	/* deltaF9(4) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaF_PUCCH_Format5_13_specs_11 = {
	asn_MAP_deltaF_PUCCH_Format5_13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaF_PUCCH_Format5_13_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaF_PUCCH_Format5_13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format5_13_11 = {
	"deltaF-PUCCH-Format5-13",
	"deltaF-PUCCH-Format5-13",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaF_PUCCH_Format5_13_tags_11,
	sizeof(asn_DEF_deltaF_PUCCH_Format5_13_tags_11)
		/sizeof(asn_DEF_deltaF_PUCCH_Format5_13_tags_11[0]) - 1, /* 1 */
	asn_DEF_deltaF_PUCCH_Format5_13_tags_11,	/* Same as above */
	sizeof(asn_DEF_deltaF_PUCCH_Format5_13_tags_11)
		/sizeof(asn_DEF_deltaF_PUCCH_Format5_13_tags_11[0]), /* 2 */
	{ &asn_OER_type_deltaF_PUCCH_Format5_13_constr_11, &asn_PER_type_deltaF_PUCCH_Format5_13_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaF_PUCCH_Format5_13_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UplinkPowerControlCommon_v1310_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UplinkPowerControlCommon_v1310, deltaF_PUCCH_Format4_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaF_PUCCH_Format4_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaF-PUCCH-Format4-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct UplinkPowerControlCommon_v1310, deltaF_PUCCH_Format5_13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaF_PUCCH_Format5_13_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaF-PUCCH-Format5-13"
		},
};
static const int asn_MAP_UplinkPowerControlCommon_v1310_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UplinkPowerControlCommon_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlCommon_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaF-PUCCH-Format4-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* deltaF-PUCCH-Format5-13 */
};
asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlCommon_v1310_specs_1 = {
	sizeof(struct UplinkPowerControlCommon_v1310),
	offsetof(struct UplinkPowerControlCommon_v1310, _asn_ctx),
	asn_MAP_UplinkPowerControlCommon_v1310_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UplinkPowerControlCommon_v1310_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommon_v1310 = {
	"UplinkPowerControlCommon-v1310",
	"UplinkPowerControlCommon-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_UplinkPowerControlCommon_v1310_tags_1,
	sizeof(asn_DEF_UplinkPowerControlCommon_v1310_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommon_v1310_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlCommon_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlCommon_v1310_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommon_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UplinkPowerControlCommon_v1310_1,
	2,	/* Elements count */
	&asn_SPC_UplinkPowerControlCommon_v1310_specs_1	/* Additional specs */
};

