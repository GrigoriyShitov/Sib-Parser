/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "UE-InternalMeasQuantity.h"

static int asn_DFL_3_cmp_0(const void *sptr) {
	const FilterCoefficient_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_3_set_0(void **sptr) {
	FilterCoefficient_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
asn_TYPE_member_t asn_MBR_UE_InternalMeasQuantity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalMeasQuantity, measurementQuantity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_MeasurementQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementQuantity"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct UE_InternalMeasQuantity, filterCoefficient),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		&asn_DFL_3_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_3_set_0,	/* Set DEFAULT 0 */
		"filterCoefficient"
		},
};
static const int asn_MAP_UE_InternalMeasQuantity_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_UE_InternalMeasQuantity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_InternalMeasQuantity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measurementQuantity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* filterCoefficient */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_InternalMeasQuantity_specs_1 = {
	sizeof(struct UE_InternalMeasQuantity),
	offsetof(struct UE_InternalMeasQuantity, _asn_ctx),
	asn_MAP_UE_InternalMeasQuantity_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_InternalMeasQuantity_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_InternalMeasQuantity = {
	"UE-InternalMeasQuantity",
	"UE-InternalMeasQuantity",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_InternalMeasQuantity_tags_1,
	sizeof(asn_DEF_UE_InternalMeasQuantity_tags_1)
		/sizeof(asn_DEF_UE_InternalMeasQuantity_tags_1[0]), /* 1 */
	asn_DEF_UE_InternalMeasQuantity_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_InternalMeasQuantity_tags_1)
		/sizeof(asn_DEF_UE_InternalMeasQuantity_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_InternalMeasQuantity_1,
	2,	/* Elements count */
	&asn_SPC_UE_InternalMeasQuantity_specs_1	/* Additional specs */
};

