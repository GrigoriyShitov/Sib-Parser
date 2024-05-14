/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "CellSelectReselectInfoTreselectionScaling-v5c0ext.h"

asn_TYPE_member_t asn_MBR_CellSelectReselectInfoTreselectionScaling_v5c0ext_1[] = {
	{ ATF_POINTER, 4, offsetof(struct CellSelectReselectInfoTreselectionScaling_v5c0ext, non_HCS_t_CR_Max),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_T_CRMax,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"non-HCS-t-CR-Max"
		},
	{ ATF_POINTER, 3, offsetof(struct CellSelectReselectInfoTreselectionScaling_v5c0ext, speedDependentScalingFactor),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedDependentScalingFactor,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speedDependentScalingFactor"
		},
	{ ATF_POINTER, 2, offsetof(struct CellSelectReselectInfoTreselectionScaling_v5c0ext, interFrequencyTreselectionScalingFactor),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TreselectionScalingFactor,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFrequencyTreselectionScalingFactor"
		},
	{ ATF_POINTER, 1, offsetof(struct CellSelectReselectInfoTreselectionScaling_v5c0ext, interRATTreselectionScalingFactor),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TreselectionScalingFactor,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRATTreselectionScalingFactor"
		},
};
static const int asn_MAP_CellSelectReselectInfoTreselectionScaling_v5c0ext_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_CellSelectReselectInfoTreselectionScaling_v5c0ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellSelectReselectInfoTreselectionScaling_v5c0ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* non-HCS-t-CR-Max */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* speedDependentScalingFactor */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interFrequencyTreselectionScalingFactor */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* interRATTreselectionScalingFactor */
};
asn_SEQUENCE_specifics_t asn_SPC_CellSelectReselectInfoTreselectionScaling_v5c0ext_specs_1 = {
	sizeof(struct CellSelectReselectInfoTreselectionScaling_v5c0ext),
	offsetof(struct CellSelectReselectInfoTreselectionScaling_v5c0ext, _asn_ctx),
	asn_MAP_CellSelectReselectInfoTreselectionScaling_v5c0ext_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CellSelectReselectInfoTreselectionScaling_v5c0ext_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellSelectReselectInfoTreselectionScaling_v5c0ext = {
	"CellSelectReselectInfoTreselectionScaling-v5c0ext",
	"CellSelectReselectInfoTreselectionScaling-v5c0ext",
	&asn_OP_SEQUENCE,
	asn_DEF_CellSelectReselectInfoTreselectionScaling_v5c0ext_tags_1,
	sizeof(asn_DEF_CellSelectReselectInfoTreselectionScaling_v5c0ext_tags_1)
		/sizeof(asn_DEF_CellSelectReselectInfoTreselectionScaling_v5c0ext_tags_1[0]), /* 1 */
	asn_DEF_CellSelectReselectInfoTreselectionScaling_v5c0ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellSelectReselectInfoTreselectionScaling_v5c0ext_tags_1)
		/sizeof(asn_DEF_CellSelectReselectInfoTreselectionScaling_v5c0ext_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellSelectReselectInfoTreselectionScaling_v5c0ext_1,
	4,	/* Elements count */
	&asn_SPC_CellSelectReselectInfoTreselectionScaling_v5c0ext_specs_1	/* Additional specs */
};

