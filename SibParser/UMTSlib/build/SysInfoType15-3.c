/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "SysInfoType15-3.h"

static int
memb_transmissionTOW_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 604799)) {
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
memb_satMask_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
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
memb_lsbTOW_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_transmissionTOW_constr_2 CC_NOTUSED = {
	{ 4, 1 }	/* (0..604799) */,
	-1};
static asn_per_constraints_t asn_PER_memb_transmissionTOW_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 20, -1,  0,  604799 }	/* (0..604799) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_satMask_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_satMask_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_lsbTOW_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_lsbTOW_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_8 = {
	sizeof(struct SysInfoType15_3__nonCriticalExtensions),
	offsetof(struct SysInfoType15_3__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_8 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtensions_tags_8,
	sizeof(asn_DEF_nonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_8[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_8,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType15_3_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType15_3, transmissionTOW),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_transmissionTOW_constr_2, &asn_PER_memb_transmissionTOW_constr_2,  memb_transmissionTOW_constraint_1 },
		0, 0, /* No default value */
		"transmissionTOW"
		},
	{ ATF_POINTER, 6, offsetof(struct SysInfoType15_3, ue_positioning_GPS_Almanac),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GPS_Almanac,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-positioning-GPS-Almanac"
		},
	{ ATF_POINTER, 5, offsetof(struct SysInfoType15_3, ue_positioning_GPS_IonosphericModel),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GPS_IonosphericModel,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-positioning-GPS-IonosphericModel"
		},
	{ ATF_POINTER, 4, offsetof(struct SysInfoType15_3, ue_positioning_GPS_UTC_Model),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GPS_UTC_Model,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-positioning-GPS-UTC-Model"
		},
	{ ATF_POINTER, 3, offsetof(struct SysInfoType15_3, satMask),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_satMask_constr_6, &asn_PER_memb_satMask_constr_6,  memb_satMask_constraint_1 },
		0, 0, /* No default value */
		"satMask"
		},
	{ ATF_POINTER, 2, offsetof(struct SysInfoType15_3, lsbTOW),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_lsbTOW_constr_7, &asn_PER_memb_lsbTOW_constr_7,  memb_lsbTOW_constraint_1 },
		0, 0, /* No default value */
		"lsbTOW"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType15_3, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_SysInfoType15_3_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_SysInfoType15_3_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType15_3_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transmissionTOW */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-positioning-GPS-Almanac */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ue-positioning-GPS-IonosphericModel */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ue-positioning-GPS-UTC-Model */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* satMask */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* lsbTOW */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType15_3_specs_1 = {
	sizeof(struct SysInfoType15_3),
	offsetof(struct SysInfoType15_3, _asn_ctx),
	asn_MAP_SysInfoType15_3_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SysInfoType15_3_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType15_3 = {
	"SysInfoType15-3",
	"SysInfoType15-3",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType15_3_tags_1,
	sizeof(asn_DEF_SysInfoType15_3_tags_1)
		/sizeof(asn_DEF_SysInfoType15_3_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType15_3_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType15_3_tags_1)
		/sizeof(asn_DEF_SysInfoType15_3_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType15_3_1,
	7,	/* Elements count */
	&asn_SPC_SysInfoType15_3_specs_1	/* Additional specs */
};

