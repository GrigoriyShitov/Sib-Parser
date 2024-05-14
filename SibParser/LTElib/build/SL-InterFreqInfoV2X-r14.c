/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "SL-InterFreqInfoV2X-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_sl_Bandwidth_r14_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_Bandwidth_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sl_Bandwidth_r14_value2enum_5[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static const unsigned int asn_MAP_sl_Bandwidth_r14_enum2value_5[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_Bandwidth_r14_specs_5 = {
	asn_MAP_sl_Bandwidth_r14_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_Bandwidth_r14_enum2value_5,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_Bandwidth_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_Bandwidth_r14_5 = {
	"sl-Bandwidth-r14",
	"sl-Bandwidth-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_Bandwidth_r14_tags_5,
	sizeof(asn_DEF_sl_Bandwidth_r14_tags_5)
		/sizeof(asn_DEF_sl_Bandwidth_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_sl_Bandwidth_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_sl_Bandwidth_r14_tags_5)
		/sizeof(asn_DEF_sl_Bandwidth_r14_tags_5[0]), /* 2 */
	{ &asn_OER_type_sl_Bandwidth_r14_constr_5, &asn_PER_type_sl_Bandwidth_r14_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_Bandwidth_r14_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_InterFreqInfoV2X_r14_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_InterFreqInfoV2X_r14, plmn_IdentityList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_InterFreqInfoV2X_r14, v2x_CommCarrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommCarrierFreq-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_InterFreqInfoV2X_r14, sl_MaxTxPower_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-MaxTxPower-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_InterFreqInfoV2X_r14, sl_Bandwidth_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_Bandwidth_r14_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-Bandwidth-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_InterFreqInfoV2X_r14, v2x_SchedulingPool_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommResourcePoolV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-SchedulingPool-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_InterFreqInfoV2X_r14, v2x_UE_SelectionConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_UE_SelectionConfigList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-UE-SelectionConfigList-r14"
		},
};
static const int asn_MAP_SL_InterFreqInfoV2X_r14_oms_1[] = { 0, 4, 5 };
static const ber_tlv_tag_t asn_DEF_SL_InterFreqInfoV2X_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_InterFreqInfoV2X_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* v2x-CommCarrierFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-MaxTxPower-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-Bandwidth-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* v2x-SchedulingPool-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* v2x-UE-SelectionConfigList-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_InterFreqInfoV2X_r14_specs_1 = {
	sizeof(struct SL_InterFreqInfoV2X_r14),
	offsetof(struct SL_InterFreqInfoV2X_r14, _asn_ctx),
	asn_MAP_SL_InterFreqInfoV2X_r14_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SL_InterFreqInfoV2X_r14_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_InterFreqInfoV2X_r14 = {
	"SL-InterFreqInfoV2X-r14",
	"SL-InterFreqInfoV2X-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_InterFreqInfoV2X_r14_tags_1,
	sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1)
		/sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_InterFreqInfoV2X_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1)
		/sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_InterFreqInfoV2X_r14_1,
	6,	/* Elements count */
	&asn_SPC_SL_InterFreqInfoV2X_r14_specs_1	/* Additional specs */
};

