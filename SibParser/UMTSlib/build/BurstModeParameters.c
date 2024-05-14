/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "BurstModeParameters.h"

static int
memb_burstStart_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_burstLength_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 10 && value <= 25)) {
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
memb_burstFreq_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_burstStart_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_burstStart_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_burstLength_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (10..25) */,
	-1};
static asn_per_constraints_t asn_PER_memb_burstLength_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  10,  25 }	/* (10..25) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_burstFreq_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (1..16) */,
	-1};
static asn_per_constraints_t asn_PER_memb_burstFreq_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_BurstModeParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BurstModeParameters, burstStart),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_burstStart_constr_2, &asn_PER_memb_burstStart_constr_2,  memb_burstStart_constraint_1 },
		0, 0, /* No default value */
		"burstStart"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BurstModeParameters, burstLength),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_burstLength_constr_3, &asn_PER_memb_burstLength_constr_3,  memb_burstLength_constraint_1 },
		0, 0, /* No default value */
		"burstLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BurstModeParameters, burstFreq),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_burstFreq_constr_4, &asn_PER_memb_burstFreq_constr_4,  memb_burstFreq_constraint_1 },
		0, 0, /* No default value */
		"burstFreq"
		},
};
static const ber_tlv_tag_t asn_DEF_BurstModeParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BurstModeParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* burstStart */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* burstLength */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* burstFreq */
};
asn_SEQUENCE_specifics_t asn_SPC_BurstModeParameters_specs_1 = {
	sizeof(struct BurstModeParameters),
	offsetof(struct BurstModeParameters, _asn_ctx),
	asn_MAP_BurstModeParameters_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BurstModeParameters = {
	"BurstModeParameters",
	"BurstModeParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_BurstModeParameters_tags_1,
	sizeof(asn_DEF_BurstModeParameters_tags_1)
		/sizeof(asn_DEF_BurstModeParameters_tags_1[0]), /* 1 */
	asn_DEF_BurstModeParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_BurstModeParameters_tags_1)
		/sizeof(asn_DEF_BurstModeParameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BurstModeParameters_1,
	3,	/* Elements count */
	&asn_SPC_BurstModeParameters_specs_1	/* Additional specs */
};

