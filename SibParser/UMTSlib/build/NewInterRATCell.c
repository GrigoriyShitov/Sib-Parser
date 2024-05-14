/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "NewInterRATCell.h"

static asn_oer_constraints_t asn_OER_type_technologySpecificInfo_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_technologySpecificInfo_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_gsm_4[] = {
	{ ATF_POINTER, 1, offsetof(struct NewInterRATCell__technologySpecificInfo__gsm, cellSelectionReselectionInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellSelectReselectInfoSIB_11_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionReselectionInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterRATCell__technologySpecificInfo__gsm, interRATCellIndividualOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterRATCellIndividualOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRATCellIndividualOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterRATCell__technologySpecificInfo__gsm, bsic),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BSIC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bsic"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterRATCell__technologySpecificInfo__gsm, frequency_band),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Frequency_Band,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequency-band"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterRATCell__technologySpecificInfo__gsm, bcch_ARFCN),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BCCH_ARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bcch-ARFCN"
		},
	{ ATF_POINTER, 1, offsetof(struct NewInterRATCell__technologySpecificInfo__gsm, dummy),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
};
static const int asn_MAP_gsm_oms_4[] = { 0, 5 };
static const ber_tlv_tag_t asn_DEF_gsm_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_gsm_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellSelectionReselectionInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interRATCellIndividualOffset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bsic */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* frequency-band */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* bcch-ARFCN */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* dummy */
};
static asn_SEQUENCE_specifics_t asn_SPC_gsm_specs_4 = {
	sizeof(struct NewInterRATCell__technologySpecificInfo__gsm),
	offsetof(struct NewInterRATCell__technologySpecificInfo__gsm, _asn_ctx),
	asn_MAP_gsm_tag2el_4,
	6,	/* Count of tags in the map */
	asn_MAP_gsm_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gsm_4 = {
	"gsm",
	"gsm",
	&asn_OP_SEQUENCE,
	asn_DEF_gsm_tags_4,
	sizeof(asn_DEF_gsm_tags_4)
		/sizeof(asn_DEF_gsm_tags_4[0]) - 1, /* 1 */
	asn_DEF_gsm_tags_4,	/* Same as above */
	sizeof(asn_DEF_gsm_tags_4)
		/sizeof(asn_DEF_gsm_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_gsm_4,
	6,	/* Elements count */
	&asn_SPC_gsm_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_is_2000_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterRATCell__technologySpecificInfo__is_2000, is_2000SpecificMeasInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IS_2000SpecificMeasInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"is-2000SpecificMeasInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_is_2000_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_is_2000_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* is-2000SpecificMeasInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_is_2000_specs_11 = {
	sizeof(struct NewInterRATCell__technologySpecificInfo__is_2000),
	offsetof(struct NewInterRATCell__technologySpecificInfo__is_2000, _asn_ctx),
	asn_MAP_is_2000_tag2el_11,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_is_2000_11 = {
	"is-2000",
	"is-2000",
	&asn_OP_SEQUENCE,
	asn_DEF_is_2000_tags_11,
	sizeof(asn_DEF_is_2000_tags_11)
		/sizeof(asn_DEF_is_2000_tags_11[0]) - 1, /* 1 */
	asn_DEF_is_2000_tags_11,	/* Same as above */
	sizeof(asn_DEF_is_2000_tags_11)
		/sizeof(asn_DEF_is_2000_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_is_2000_11,
	1,	/* Elements count */
	&asn_SPC_is_2000_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_technologySpecificInfo_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterRATCell__technologySpecificInfo, choice.gsm),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_gsm_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gsm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterRATCell__technologySpecificInfo, choice.is_2000),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_is_2000_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"is-2000"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterRATCell__technologySpecificInfo, choice.absent),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absent"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterRATCell__technologySpecificInfo, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_technologySpecificInfo_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gsm */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* is-2000 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* absent */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* spare1 */
};
static asn_CHOICE_specifics_t asn_SPC_technologySpecificInfo_specs_3 = {
	sizeof(struct NewInterRATCell__technologySpecificInfo),
	offsetof(struct NewInterRATCell__technologySpecificInfo, _asn_ctx),
	offsetof(struct NewInterRATCell__technologySpecificInfo, present),
	sizeof(((struct NewInterRATCell__technologySpecificInfo *)0)->present),
	asn_MAP_technologySpecificInfo_tag2el_3,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_technologySpecificInfo_3 = {
	"technologySpecificInfo",
	"technologySpecificInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_technologySpecificInfo_constr_3, &asn_PER_type_technologySpecificInfo_constr_3, CHOICE_constraint },
	asn_MBR_technologySpecificInfo_3,
	4,	/* Elements count */
	&asn_SPC_technologySpecificInfo_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NewInterRATCell_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NewInterRATCell, interRATCellID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterRATCellID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRATCellID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterRATCell, technologySpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_technologySpecificInfo_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"technologySpecificInfo"
		},
};
static const int asn_MAP_NewInterRATCell_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NewInterRATCell_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NewInterRATCell_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interRATCellID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* technologySpecificInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_NewInterRATCell_specs_1 = {
	sizeof(struct NewInterRATCell),
	offsetof(struct NewInterRATCell, _asn_ctx),
	asn_MAP_NewInterRATCell_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NewInterRATCell_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NewInterRATCell = {
	"NewInterRATCell",
	"NewInterRATCell",
	&asn_OP_SEQUENCE,
	asn_DEF_NewInterRATCell_tags_1,
	sizeof(asn_DEF_NewInterRATCell_tags_1)
		/sizeof(asn_DEF_NewInterRATCell_tags_1[0]), /* 1 */
	asn_DEF_NewInterRATCell_tags_1,	/* Same as above */
	sizeof(asn_DEF_NewInterRATCell_tags_1)
		/sizeof(asn_DEF_NewInterRATCell_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NewInterRATCell_1,
	2,	/* Elements count */
	&asn_SPC_NewInterRATCell_specs_1	/* Additional specs */
};

