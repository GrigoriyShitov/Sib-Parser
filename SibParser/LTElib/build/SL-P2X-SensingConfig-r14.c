/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "SL-P2X-SensingConfig-r14.h"

static int
memb_minNumCandidateSF_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 13)) {
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
memb_gapCandidateSensing_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_minNumCandidateSF_r14_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..13) */,
	-1};
static asn_per_constraints_t asn_PER_memb_minNumCandidateSF_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  13 }	/* (1..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_gapCandidateSensing_r14_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	10	/* (SIZE(10..10)) */};
static asn_per_constraints_t asn_PER_memb_gapCandidateSensing_r14_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SL_P2X_SensingConfig_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_P2X_SensingConfig_r14, minNumCandidateSF_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_minNumCandidateSF_r14_constr_2, &asn_PER_memb_minNumCandidateSF_r14_constr_2,  memb_minNumCandidateSF_r14_constraint_1 },
		0, 0, /* No default value */
		"minNumCandidateSF-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_P2X_SensingConfig_r14, gapCandidateSensing_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_gapCandidateSensing_r14_constr_3, &asn_PER_memb_gapCandidateSensing_r14_constr_3,  memb_gapCandidateSensing_r14_constraint_1 },
		0, 0, /* No default value */
		"gapCandidateSensing-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_SL_P2X_SensingConfig_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_P2X_SensingConfig_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* minNumCandidateSF-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gapCandidateSensing-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_P2X_SensingConfig_r14_specs_1 = {
	sizeof(struct SL_P2X_SensingConfig_r14),
	offsetof(struct SL_P2X_SensingConfig_r14, _asn_ctx),
	asn_MAP_SL_P2X_SensingConfig_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_P2X_SensingConfig_r14 = {
	"SL-P2X-SensingConfig-r14",
	"SL-P2X-SensingConfig-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_P2X_SensingConfig_r14_tags_1,
	sizeof(asn_DEF_SL_P2X_SensingConfig_r14_tags_1)
		/sizeof(asn_DEF_SL_P2X_SensingConfig_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_P2X_SensingConfig_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_P2X_SensingConfig_r14_tags_1)
		/sizeof(asn_DEF_SL_P2X_SensingConfig_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_P2X_SensingConfig_r14_1,
	2,	/* Elements count */
	&asn_SPC_SL_P2X_SensingConfig_r14_specs_1	/* Additional specs */
};
