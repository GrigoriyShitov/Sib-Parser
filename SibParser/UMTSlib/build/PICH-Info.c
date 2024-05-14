/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "PICH-Info.h"

static asn_oer_constraints_t asn_OER_type_PICH_Info_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PICH_Info_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_Info__fdd, channelisationCode256),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelisationCode256,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"channelisationCode256"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_Info__fdd, pi_CountPerFrame),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PI_CountPerFrame,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pi-CountPerFrame"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_Info__fdd, sttd_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sttd-Indicator"
		},
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* channelisationCode256 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pi-CountPerFrame */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sttd-Indicator */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_2 = {
	sizeof(struct PICH_Info__fdd),
	offsetof(struct PICH_Info__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_2 = {
	"fdd",
	"fdd",
	&asn_OP_SEQUENCE,
	asn_DEF_fdd_tags_2,
	sizeof(asn_DEF_fdd_tags_2)
		/sizeof(asn_DEF_fdd_tags_2[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_2,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_2)
		/sizeof(asn_DEF_fdd_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_fdd_2,
	3,	/* Elements count */
	&asn_SPC_fdd_specs_2	/* Additional specs */
};

static int asn_DFL_11_cmp_0(const void *sptr) {
	const PagingIndicatorLength_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_11_set_0(void **sptr) {
	PagingIndicatorLength_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static int asn_DFL_12_cmp_1(const void *sptr) {
	const N_GAP_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 1 */
	return (*st != 1);
}
static int asn_DFL_12_set_1(void **sptr) {
	N_GAP_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 1 */
	*st = 1;
	return 0;
}
static int asn_DFL_13_cmp_2(const void *sptr) {
	const N_PCH_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 2 */
	return (*st != 2);
}
static int asn_DFL_13_set_2(void **sptr) {
	N_PCH_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 2 */
	*st = 2;
	return 0;
}
static asn_TYPE_member_t asn_MBR_tdd_6[] = {
	{ ATF_POINTER, 2, offsetof(struct PICH_Info__tdd, channelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_PICH_CCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"channelisationCode"
		},
	{ ATF_POINTER, 1, offsetof(struct PICH_Info__tdd, timeslot),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeslot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_Info__tdd, midambleShiftAndBurstType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftAndBurstType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleShiftAndBurstType"
		},
	{ ATF_POINTER, 4, offsetof(struct PICH_Info__tdd, repetitionPeriodLengthOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RepPerLengthOffset_PICH,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"repetitionPeriodLengthOffset"
		},
	{ ATF_NOFLAGS, 3, offsetof(struct PICH_Info__tdd, pagingIndicatorLength),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingIndicatorLength,
		0,
		{ 0, 0, 0 },
		&asn_DFL_11_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_11_set_0,	/* Set DEFAULT 0 */
		"pagingIndicatorLength"
		},
	{ ATF_POINTER, 2, offsetof(struct PICH_Info__tdd, n_GAP),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_GAP,
		0,
		{ 0, 0, 0 },
		&asn_DFL_12_cmp_1,	/* Compare DEFAULT 1 */
		&asn_DFL_12_set_1,	/* Set DEFAULT 1 */
		"n-GAP"
		},
	{ ATF_POINTER, 1, offsetof(struct PICH_Info__tdd, n_PCH),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_PCH,
		0,
		{ 0, 0, 0 },
		&asn_DFL_13_cmp_2,	/* Compare DEFAULT 2 */
		&asn_DFL_13_set_2,	/* Set DEFAULT 2 */
		"n-PCH"
		},
};
static const int asn_MAP_tdd_oms_6[] = { 0, 1, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_tdd_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* channelisationCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timeslot */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* midambleShiftAndBurstType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* repetitionPeriodLengthOffset */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pagingIndicatorLength */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* n-GAP */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* n-PCH */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_6 = {
	sizeof(struct PICH_Info__tdd),
	offsetof(struct PICH_Info__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_6,
	7,	/* Count of tags in the map */
	asn_MAP_tdd_oms_6,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_6 = {
	"tdd",
	"tdd",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd_tags_6,
	sizeof(asn_DEF_tdd_tags_6)
		/sizeof(asn_DEF_tdd_tags_6[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_6,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_6)
		/sizeof(asn_DEF_tdd_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd_6,
	7,	/* Elements count */
	&asn_SPC_tdd_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PICH_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_Info, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_Info, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_PICH_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
asn_CHOICE_specifics_t asn_SPC_PICH_Info_specs_1 = {
	sizeof(struct PICH_Info),
	offsetof(struct PICH_Info, _asn_ctx),
	offsetof(struct PICH_Info, present),
	sizeof(((struct PICH_Info *)0)->present),
	asn_MAP_PICH_Info_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PICH_Info = {
	"PICH-Info",
	"PICH-Info",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_PICH_Info_constr_1, &asn_PER_type_PICH_Info_constr_1, CHOICE_constraint },
	asn_MBR_PICH_Info_1,
	2,	/* Elements count */
	&asn_SPC_PICH_Info_specs_1	/* Additional specs */
};

