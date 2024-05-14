/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "RadioResourceConfigCommonPSCell-r12.h"

static asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonPSCell_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonPSCell_r12, basicFields_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommonSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"basicFields-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonPSCell_r12, pucch_ConfigCommon_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigCommon-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonPSCell_r12, rach_ConfigCommon_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigCommon-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonPSCell_r12, uplinkPowerControlCommonPSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommonPSCell_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommonPSCell-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonPSCell_r12, uplinkPowerControlCommonPSCell_v1310),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommonPSCell-v1310"
		},
};
static const int asn_MAP_RadioResourceConfigCommonPSCell_r12_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigCommonPSCell_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigCommonPSCell_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* basicFields-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pucch-ConfigCommon-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rach-ConfigCommon-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uplinkPowerControlCommonPSCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* uplinkPowerControlCommonPSCell-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonPSCell_r12_specs_1 = {
	sizeof(struct RadioResourceConfigCommonPSCell_r12),
	offsetof(struct RadioResourceConfigCommonPSCell_r12, _asn_ctx),
	asn_MAP_RadioResourceConfigCommonPSCell_r12_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigCommonPSCell_r12_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonPSCell_r12 = {
	"RadioResourceConfigCommonPSCell-r12",
	"RadioResourceConfigCommonPSCell-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigCommonPSCell_r12_tags_1,
	sizeof(asn_DEF_RadioResourceConfigCommonPSCell_r12_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonPSCell_r12_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigCommonPSCell_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigCommonPSCell_r12_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonPSCell_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RadioResourceConfigCommonPSCell_r12_1,
	5,	/* Elements count */
	&asn_SPC_RadioResourceConfigCommonPSCell_r12_specs_1	/* Additional specs */
};

