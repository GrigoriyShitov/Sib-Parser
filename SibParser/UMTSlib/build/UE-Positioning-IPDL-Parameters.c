/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "UE-Positioning-IPDL-Parameters.h"

static int
memb_ip_Offset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
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
memb_seed_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ip_Offset_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..9) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ip_Offset_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_seed_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (0..63) */,
	-1};
static asn_per_constraints_t asn_PER_memb_seed_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UE_Positioning_IPDL_Parameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_IPDL_Parameters, ip_Spacing),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IP_Spacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ip-Spacing"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_IPDL_Parameters, ip_Length),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IP_Length,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ip-Length"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_IPDL_Parameters, ip_Offset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ip_Offset_constr_4, &asn_PER_memb_ip_Offset_constr_4,  memb_ip_Offset_constraint_1 },
		0, 0, /* No default value */
		"ip-Offset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_IPDL_Parameters, seed),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_seed_constr_5, &asn_PER_memb_seed_constr_5,  memb_seed_constraint_1 },
		0, 0, /* No default value */
		"seed"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_IPDL_Parameters, burstModeParameters),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BurstModeParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"burstModeParameters"
		},
};
static const int asn_MAP_UE_Positioning_IPDL_Parameters_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_UE_Positioning_IPDL_Parameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_Positioning_IPDL_Parameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ip-Spacing */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ip-Length */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ip-Offset */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* seed */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* burstModeParameters */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_IPDL_Parameters_specs_1 = {
	sizeof(struct UE_Positioning_IPDL_Parameters),
	offsetof(struct UE_Positioning_IPDL_Parameters, _asn_ctx),
	asn_MAP_UE_Positioning_IPDL_Parameters_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_IPDL_Parameters_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_IPDL_Parameters = {
	"UE-Positioning-IPDL-Parameters",
	"UE-Positioning-IPDL-Parameters",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_Positioning_IPDL_Parameters_tags_1,
	sizeof(asn_DEF_UE_Positioning_IPDL_Parameters_tags_1)
		/sizeof(asn_DEF_UE_Positioning_IPDL_Parameters_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_IPDL_Parameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_IPDL_Parameters_tags_1)
		/sizeof(asn_DEF_UE_Positioning_IPDL_Parameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_Positioning_IPDL_Parameters_1,
	5,	/* Elements count */
	&asn_SPC_UE_Positioning_IPDL_Parameters_specs_1	/* Additional specs */
};

