/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "SystemTimeInfoCDMA2000.h"

static int
memb_synchronousSystemTime_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 39)) {
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
memb_asynchronousSystemTime_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 49)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_synchronousSystemTime_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	39	/* (SIZE(39..39)) */};
static asn_per_constraints_t asn_PER_memb_synchronousSystemTime_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  39,  39 }	/* (SIZE(39..39)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_asynchronousSystemTime_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	49	/* (SIZE(49..49)) */};
static asn_per_constraints_t asn_PER_memb_asynchronousSystemTime_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  49,  49 }	/* (SIZE(49..49)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cdma_SystemTime_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cdma_SystemTime_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cdma_SystemTime_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemTimeInfoCDMA2000__cdma_SystemTime, choice.synchronousSystemTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_synchronousSystemTime_constr_4, &asn_PER_memb_synchronousSystemTime_constr_4,  memb_synchronousSystemTime_constraint_3 },
		0, 0, /* No default value */
		"synchronousSystemTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemTimeInfoCDMA2000__cdma_SystemTime, choice.asynchronousSystemTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_asynchronousSystemTime_constr_5, &asn_PER_memb_asynchronousSystemTime_constr_5,  memb_asynchronousSystemTime_constraint_3 },
		0, 0, /* No default value */
		"asynchronousSystemTime"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cdma_SystemTime_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* synchronousSystemTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* asynchronousSystemTime */
};
static asn_CHOICE_specifics_t asn_SPC_cdma_SystemTime_specs_3 = {
	sizeof(struct SystemTimeInfoCDMA2000__cdma_SystemTime),
	offsetof(struct SystemTimeInfoCDMA2000__cdma_SystemTime, _asn_ctx),
	offsetof(struct SystemTimeInfoCDMA2000__cdma_SystemTime, present),
	sizeof(((struct SystemTimeInfoCDMA2000__cdma_SystemTime *)0)->present),
	asn_MAP_cdma_SystemTime_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cdma_SystemTime_3 = {
	"cdma-SystemTime",
	"cdma-SystemTime",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_cdma_SystemTime_constr_3, &asn_PER_type_cdma_SystemTime_constr_3, CHOICE_constraint },
	asn_MBR_cdma_SystemTime_3,
	2,	/* Elements count */
	&asn_SPC_cdma_SystemTime_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemTimeInfoCDMA2000_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemTimeInfoCDMA2000, cdma_EUTRA_Synchronisation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cdma-EUTRA-Synchronisation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemTimeInfoCDMA2000, cdma_SystemTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cdma_SystemTime_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cdma-SystemTime"
		},
};
static const ber_tlv_tag_t asn_DEF_SystemTimeInfoCDMA2000_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemTimeInfoCDMA2000_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cdma-EUTRA-Synchronisation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cdma-SystemTime */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemTimeInfoCDMA2000_specs_1 = {
	sizeof(struct SystemTimeInfoCDMA2000),
	offsetof(struct SystemTimeInfoCDMA2000, _asn_ctx),
	asn_MAP_SystemTimeInfoCDMA2000_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemTimeInfoCDMA2000 = {
	"SystemTimeInfoCDMA2000",
	"SystemTimeInfoCDMA2000",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemTimeInfoCDMA2000_tags_1,
	sizeof(asn_DEF_SystemTimeInfoCDMA2000_tags_1)
		/sizeof(asn_DEF_SystemTimeInfoCDMA2000_tags_1[0]), /* 1 */
	asn_DEF_SystemTimeInfoCDMA2000_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemTimeInfoCDMA2000_tags_1)
		/sizeof(asn_DEF_SystemTimeInfoCDMA2000_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemTimeInfoCDMA2000_1,
	2,	/* Elements count */
	&asn_SPC_SystemTimeInfoCDMA2000_specs_1	/* Additional specs */
};

