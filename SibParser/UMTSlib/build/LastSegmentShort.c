/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "LastSegmentShort.h"

asn_TYPE_member_t asn_MBR_LastSegmentShort_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LastSegmentShort, sib_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LastSegmentShort, segmentIndex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SegmentIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"segmentIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LastSegmentShort, sib_Data_variable),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_Data_variable,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib-Data-variable"
		},
};
static const ber_tlv_tag_t asn_DEF_LastSegmentShort_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LastSegmentShort_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sib-Type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* segmentIndex */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sib-Data-variable */
};
asn_SEQUENCE_specifics_t asn_SPC_LastSegmentShort_specs_1 = {
	sizeof(struct LastSegmentShort),
	offsetof(struct LastSegmentShort, _asn_ctx),
	asn_MAP_LastSegmentShort_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LastSegmentShort = {
	"LastSegmentShort",
	"LastSegmentShort",
	&asn_OP_SEQUENCE,
	asn_DEF_LastSegmentShort_tags_1,
	sizeof(asn_DEF_LastSegmentShort_tags_1)
		/sizeof(asn_DEF_LastSegmentShort_tags_1[0]), /* 1 */
	asn_DEF_LastSegmentShort_tags_1,	/* Same as above */
	sizeof(asn_DEF_LastSegmentShort_tags_1)
		/sizeof(asn_DEF_LastSegmentShort_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LastSegmentShort_1,
	3,	/* Elements count */
	&asn_SPC_LastSegmentShort_specs_1	/* Additional specs */
};

