/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "SystemInformationBlockType16-r11.h"

static int
memb_timeInfoUTC_r11_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const INTEGER_t *st = (const INTEGER_t *)sptr;
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(asn_INTEGER2long(st, &value)) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value too large (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((value >= 0 && value <= 549755813887)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_dayLightSavingTime_r11_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_leapSeconds_r11_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_localTimeOffset_r11_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -63 && value <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_timeInfoUTC_r11_constr_3 CC_NOTUSED = {
	{ 8, 1 }	/* (0..549755813887) */,
	-1};
static asn_per_constraints_t asn_PER_memb_timeInfoUTC_r11_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 39, -1,  0,  549755813887 }	/* (0..549755813887) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_dayLightSavingTime_r11_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_dayLightSavingTime_r11_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_leapSeconds_r11_constr_5 CC_NOTUSED = {
	{ 2, 0 }	/* (-127..128) */,
	-1};
static asn_per_constraints_t asn_PER_memb_leapSeconds_r11_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -127,  128 }	/* (-127..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_localTimeOffset_r11_constr_6 CC_NOTUSED = {
	{ 1, 0 }	/* (-63..64) */,
	-1};
static asn_per_constraints_t asn_PER_memb_localTimeOffset_r11_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -63,  64 }	/* (-63..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_timeInfo_r11_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType16_r11__timeInfo_r11, timeInfoUTC_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ &asn_OER_memb_timeInfoUTC_r11_constr_3, &asn_PER_memb_timeInfoUTC_r11_constr_3,  memb_timeInfoUTC_r11_constraint_2 },
		0, 0, /* No default value */
		"timeInfoUTC-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType16_r11__timeInfo_r11, dayLightSavingTime_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_dayLightSavingTime_r11_constr_4, &asn_PER_memb_dayLightSavingTime_r11_constr_4,  memb_dayLightSavingTime_r11_constraint_2 },
		0, 0, /* No default value */
		"dayLightSavingTime-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType16_r11__timeInfo_r11, leapSeconds_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_leapSeconds_r11_constr_5, &asn_PER_memb_leapSeconds_r11_constr_5,  memb_leapSeconds_r11_constraint_2 },
		0, 0, /* No default value */
		"leapSeconds-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType16_r11__timeInfo_r11, localTimeOffset_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_localTimeOffset_r11_constr_6, &asn_PER_memb_localTimeOffset_r11_constr_6,  memb_localTimeOffset_r11_constraint_2 },
		0, 0, /* No default value */
		"localTimeOffset-r11"
		},
};
static const int asn_MAP_timeInfo_r11_oms_2[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_timeInfo_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_timeInfo_r11_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeInfoUTC-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dayLightSavingTime-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* leapSeconds-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* localTimeOffset-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_timeInfo_r11_specs_2 = {
	sizeof(struct SystemInformationBlockType16_r11__timeInfo_r11),
	offsetof(struct SystemInformationBlockType16_r11__timeInfo_r11, _asn_ctx),
	asn_MAP_timeInfo_r11_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_timeInfo_r11_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_timeInfo_r11_2 = {
	"timeInfo-r11",
	"timeInfo-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_timeInfo_r11_tags_2,
	sizeof(asn_DEF_timeInfo_r11_tags_2)
		/sizeof(asn_DEF_timeInfo_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_timeInfo_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_timeInfo_r11_tags_2)
		/sizeof(asn_DEF_timeInfo_r11_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_timeInfo_r11_2,
	4,	/* Elements count */
	&asn_SPC_timeInfo_r11_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType16_r11_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType16_r11, timeInfo_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_timeInfo_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeInfo-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType16_r11, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType16_r11_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType16_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType16_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeInfo-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType16_r11_specs_1 = {
	sizeof(struct SystemInformationBlockType16_r11),
	offsetof(struct SystemInformationBlockType16_r11, _asn_ctx),
	asn_MAP_SystemInformationBlockType16_r11_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType16_r11_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType16_r11 = {
	"SystemInformationBlockType16-r11",
	"SystemInformationBlockType16-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType16_r11_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType16_r11_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType16_r11_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType16_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType16_r11_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType16_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType16_r11_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockType16_r11_specs_1	/* Additional specs */
};

