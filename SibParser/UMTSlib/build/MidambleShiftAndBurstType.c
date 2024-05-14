/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "MidambleShiftAndBurstType.h"

static asn_oer_constraints_t asn_OER_type_midambleAllocationMode_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_midambleAllocationMode_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_midambleAllocationMode_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_midambleAllocationMode_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_midambleAllocationMode_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_midambleAllocationMode_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_burstType_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_burstType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ueSpecificMidamble_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type1__midambleAllocationMode__ueSpecificMidamble, midambleShift),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftLong,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleShift"
		},
};
static const ber_tlv_tag_t asn_DEF_ueSpecificMidamble_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ueSpecificMidamble_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* midambleShift */
};
static asn_SEQUENCE_specifics_t asn_SPC_ueSpecificMidamble_specs_8 = {
	sizeof(struct MidambleShiftAndBurstType__burstType__type1__midambleAllocationMode__ueSpecificMidamble),
	offsetof(struct MidambleShiftAndBurstType__burstType__type1__midambleAllocationMode__ueSpecificMidamble, _asn_ctx),
	asn_MAP_ueSpecificMidamble_tag2el_8,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueSpecificMidamble_8 = {
	"ueSpecificMidamble",
	"ueSpecificMidamble",
	&asn_OP_SEQUENCE,
	asn_DEF_ueSpecificMidamble_tags_8,
	sizeof(asn_DEF_ueSpecificMidamble_tags_8)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_8[0]) - 1, /* 1 */
	asn_DEF_ueSpecificMidamble_tags_8,	/* Same as above */
	sizeof(asn_DEF_ueSpecificMidamble_tags_8)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ueSpecificMidamble_8,
	1,	/* Elements count */
	&asn_SPC_ueSpecificMidamble_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_midambleAllocationMode_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type1__midambleAllocationMode, choice.defaultMidamble),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type1__midambleAllocationMode, choice.commonMidamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commonMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type1__midambleAllocationMode, choice.ueSpecificMidamble),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ueSpecificMidamble_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueSpecificMidamble"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_midambleAllocationMode_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultMidamble */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commonMidamble */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ueSpecificMidamble */
};
static asn_CHOICE_specifics_t asn_SPC_midambleAllocationMode_specs_5 = {
	sizeof(struct MidambleShiftAndBurstType__burstType__type1__midambleAllocationMode),
	offsetof(struct MidambleShiftAndBurstType__burstType__type1__midambleAllocationMode, _asn_ctx),
	offsetof(struct MidambleShiftAndBurstType__burstType__type1__midambleAllocationMode, present),
	sizeof(((struct MidambleShiftAndBurstType__burstType__type1__midambleAllocationMode *)0)->present),
	asn_MAP_midambleAllocationMode_tag2el_5,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_midambleAllocationMode_5 = {
	"midambleAllocationMode",
	"midambleAllocationMode",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_midambleAllocationMode_constr_5, &asn_PER_type_midambleAllocationMode_constr_5, CHOICE_constraint },
	asn_MBR_midambleAllocationMode_5,
	3,	/* Elements count */
	&asn_SPC_midambleAllocationMode_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_type1_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type1, midambleConfigurationBurstType1and3),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleConfigurationBurstType1and3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleConfigurationBurstType1and3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type1, midambleAllocationMode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_midambleAllocationMode_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleAllocationMode"
		},
};
static const ber_tlv_tag_t asn_DEF_type1_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_type1_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* midambleConfigurationBurstType1and3 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* midambleAllocationMode */
};
static asn_SEQUENCE_specifics_t asn_SPC_type1_specs_3 = {
	sizeof(struct MidambleShiftAndBurstType__burstType__type1),
	offsetof(struct MidambleShiftAndBurstType__burstType__type1, _asn_ctx),
	asn_MAP_type1_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_type1_3 = {
	"type1",
	"type1",
	&asn_OP_SEQUENCE,
	asn_DEF_type1_tags_3,
	sizeof(asn_DEF_type1_tags_3)
		/sizeof(asn_DEF_type1_tags_3[0]) - 1, /* 1 */
	asn_DEF_type1_tags_3,	/* Same as above */
	sizeof(asn_DEF_type1_tags_3)
		/sizeof(asn_DEF_type1_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_type1_3,
	2,	/* Elements count */
	&asn_SPC_type1_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ueSpecificMidamble_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type2__midambleAllocationMode__ueSpecificMidamble, midambleShift),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftShort,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleShift"
		},
};
static const ber_tlv_tag_t asn_DEF_ueSpecificMidamble_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ueSpecificMidamble_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* midambleShift */
};
static asn_SEQUENCE_specifics_t asn_SPC_ueSpecificMidamble_specs_15 = {
	sizeof(struct MidambleShiftAndBurstType__burstType__type2__midambleAllocationMode__ueSpecificMidamble),
	offsetof(struct MidambleShiftAndBurstType__burstType__type2__midambleAllocationMode__ueSpecificMidamble, _asn_ctx),
	asn_MAP_ueSpecificMidamble_tag2el_15,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueSpecificMidamble_15 = {
	"ueSpecificMidamble",
	"ueSpecificMidamble",
	&asn_OP_SEQUENCE,
	asn_DEF_ueSpecificMidamble_tags_15,
	sizeof(asn_DEF_ueSpecificMidamble_tags_15)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_15[0]) - 1, /* 1 */
	asn_DEF_ueSpecificMidamble_tags_15,	/* Same as above */
	sizeof(asn_DEF_ueSpecificMidamble_tags_15)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ueSpecificMidamble_15,
	1,	/* Elements count */
	&asn_SPC_ueSpecificMidamble_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_midambleAllocationMode_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type2__midambleAllocationMode, choice.defaultMidamble),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type2__midambleAllocationMode, choice.commonMidamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commonMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type2__midambleAllocationMode, choice.ueSpecificMidamble),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ueSpecificMidamble_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueSpecificMidamble"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_midambleAllocationMode_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultMidamble */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commonMidamble */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ueSpecificMidamble */
};
static asn_CHOICE_specifics_t asn_SPC_midambleAllocationMode_specs_12 = {
	sizeof(struct MidambleShiftAndBurstType__burstType__type2__midambleAllocationMode),
	offsetof(struct MidambleShiftAndBurstType__burstType__type2__midambleAllocationMode, _asn_ctx),
	offsetof(struct MidambleShiftAndBurstType__burstType__type2__midambleAllocationMode, present),
	sizeof(((struct MidambleShiftAndBurstType__burstType__type2__midambleAllocationMode *)0)->present),
	asn_MAP_midambleAllocationMode_tag2el_12,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_midambleAllocationMode_12 = {
	"midambleAllocationMode",
	"midambleAllocationMode",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_midambleAllocationMode_constr_12, &asn_PER_type_midambleAllocationMode_constr_12, CHOICE_constraint },
	asn_MBR_midambleAllocationMode_12,
	3,	/* Elements count */
	&asn_SPC_midambleAllocationMode_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_type2_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type2, midambleConfigurationBurstType2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleConfigurationBurstType2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleConfigurationBurstType2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type2, midambleAllocationMode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_midambleAllocationMode_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleAllocationMode"
		},
};
static const ber_tlv_tag_t asn_DEF_type2_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_type2_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* midambleConfigurationBurstType2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* midambleAllocationMode */
};
static asn_SEQUENCE_specifics_t asn_SPC_type2_specs_10 = {
	sizeof(struct MidambleShiftAndBurstType__burstType__type2),
	offsetof(struct MidambleShiftAndBurstType__burstType__type2, _asn_ctx),
	asn_MAP_type2_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_type2_10 = {
	"type2",
	"type2",
	&asn_OP_SEQUENCE,
	asn_DEF_type2_tags_10,
	sizeof(asn_DEF_type2_tags_10)
		/sizeof(asn_DEF_type2_tags_10[0]) - 1, /* 1 */
	asn_DEF_type2_tags_10,	/* Same as above */
	sizeof(asn_DEF_type2_tags_10)
		/sizeof(asn_DEF_type2_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_type2_10,
	2,	/* Elements count */
	&asn_SPC_type2_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ueSpecificMidamble_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type3__midambleAllocationMode__ueSpecificMidamble, midambleShift),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftLong,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleShift"
		},
};
static const ber_tlv_tag_t asn_DEF_ueSpecificMidamble_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ueSpecificMidamble_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* midambleShift */
};
static asn_SEQUENCE_specifics_t asn_SPC_ueSpecificMidamble_specs_21 = {
	sizeof(struct MidambleShiftAndBurstType__burstType__type3__midambleAllocationMode__ueSpecificMidamble),
	offsetof(struct MidambleShiftAndBurstType__burstType__type3__midambleAllocationMode__ueSpecificMidamble, _asn_ctx),
	asn_MAP_ueSpecificMidamble_tag2el_21,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueSpecificMidamble_21 = {
	"ueSpecificMidamble",
	"ueSpecificMidamble",
	&asn_OP_SEQUENCE,
	asn_DEF_ueSpecificMidamble_tags_21,
	sizeof(asn_DEF_ueSpecificMidamble_tags_21)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_21[0]) - 1, /* 1 */
	asn_DEF_ueSpecificMidamble_tags_21,	/* Same as above */
	sizeof(asn_DEF_ueSpecificMidamble_tags_21)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_21[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ueSpecificMidamble_21,
	1,	/* Elements count */
	&asn_SPC_ueSpecificMidamble_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_midambleAllocationMode_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type3__midambleAllocationMode, choice.defaultMidamble),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type3__midambleAllocationMode, choice.ueSpecificMidamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ueSpecificMidamble_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueSpecificMidamble"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_midambleAllocationMode_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultMidamble */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ueSpecificMidamble */
};
static asn_CHOICE_specifics_t asn_SPC_midambleAllocationMode_specs_19 = {
	sizeof(struct MidambleShiftAndBurstType__burstType__type3__midambleAllocationMode),
	offsetof(struct MidambleShiftAndBurstType__burstType__type3__midambleAllocationMode, _asn_ctx),
	offsetof(struct MidambleShiftAndBurstType__burstType__type3__midambleAllocationMode, present),
	sizeof(((struct MidambleShiftAndBurstType__burstType__type3__midambleAllocationMode *)0)->present),
	asn_MAP_midambleAllocationMode_tag2el_19,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_midambleAllocationMode_19 = {
	"midambleAllocationMode",
	"midambleAllocationMode",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_midambleAllocationMode_constr_19, &asn_PER_type_midambleAllocationMode_constr_19, CHOICE_constraint },
	asn_MBR_midambleAllocationMode_19,
	2,	/* Elements count */
	&asn_SPC_midambleAllocationMode_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_type3_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type3, midambleConfigurationBurstType1and3),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleConfigurationBurstType1and3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleConfigurationBurstType1and3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType__type3, midambleAllocationMode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_midambleAllocationMode_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleAllocationMode"
		},
};
static const ber_tlv_tag_t asn_DEF_type3_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_type3_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* midambleConfigurationBurstType1and3 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* midambleAllocationMode */
};
static asn_SEQUENCE_specifics_t asn_SPC_type3_specs_17 = {
	sizeof(struct MidambleShiftAndBurstType__burstType__type3),
	offsetof(struct MidambleShiftAndBurstType__burstType__type3, _asn_ctx),
	asn_MAP_type3_tag2el_17,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_type3_17 = {
	"type3",
	"type3",
	&asn_OP_SEQUENCE,
	asn_DEF_type3_tags_17,
	sizeof(asn_DEF_type3_tags_17)
		/sizeof(asn_DEF_type3_tags_17[0]) - 1, /* 1 */
	asn_DEF_type3_tags_17,	/* Same as above */
	sizeof(asn_DEF_type3_tags_17)
		/sizeof(asn_DEF_type3_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_type3_17,
	2,	/* Elements count */
	&asn_SPC_type3_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_burstType_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType, choice.type1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_type1_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"type1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType, choice.type2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_type2_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"type2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType__burstType, choice.type3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_type3_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"type3"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_burstType_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* type1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* type2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* type3 */
};
static asn_CHOICE_specifics_t asn_SPC_burstType_specs_2 = {
	sizeof(struct MidambleShiftAndBurstType__burstType),
	offsetof(struct MidambleShiftAndBurstType__burstType, _asn_ctx),
	offsetof(struct MidambleShiftAndBurstType__burstType, present),
	sizeof(((struct MidambleShiftAndBurstType__burstType *)0)->present),
	asn_MAP_burstType_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_burstType_2 = {
	"burstType",
	"burstType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_burstType_constr_2, &asn_PER_type_burstType_constr_2, CHOICE_constraint },
	asn_MBR_burstType_2,
	3,	/* Elements count */
	&asn_SPC_burstType_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MidambleShiftAndBurstType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType, burstType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_burstType_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"burstType"
		},
};
static const ber_tlv_tag_t asn_DEF_MidambleShiftAndBurstType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MidambleShiftAndBurstType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* burstType */
};
asn_SEQUENCE_specifics_t asn_SPC_MidambleShiftAndBurstType_specs_1 = {
	sizeof(struct MidambleShiftAndBurstType),
	offsetof(struct MidambleShiftAndBurstType, _asn_ctx),
	asn_MAP_MidambleShiftAndBurstType_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MidambleShiftAndBurstType = {
	"MidambleShiftAndBurstType",
	"MidambleShiftAndBurstType",
	&asn_OP_SEQUENCE,
	asn_DEF_MidambleShiftAndBurstType_tags_1,
	sizeof(asn_DEF_MidambleShiftAndBurstType_tags_1)
		/sizeof(asn_DEF_MidambleShiftAndBurstType_tags_1[0]), /* 1 */
	asn_DEF_MidambleShiftAndBurstType_tags_1,	/* Same as above */
	sizeof(asn_DEF_MidambleShiftAndBurstType_tags_1)
		/sizeof(asn_DEF_MidambleShiftAndBurstType_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MidambleShiftAndBurstType_1,
	1,	/* Elements count */
	&asn_SPC_MidambleShiftAndBurstType_specs_1	/* Additional specs */
};

