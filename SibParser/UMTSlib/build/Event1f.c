/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "Event1f.h"

asn_TYPE_member_t asn_MBR_Event1f_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event1f, triggeringCondition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TriggeringCondition1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"triggeringCondition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event1f, thresholdUsedFrequency),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdUsedFrequency,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdUsedFrequency"
		},
};
static const ber_tlv_tag_t asn_DEF_Event1f_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Event1f_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* triggeringCondition */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* thresholdUsedFrequency */
};
asn_SEQUENCE_specifics_t asn_SPC_Event1f_specs_1 = {
	sizeof(struct Event1f),
	offsetof(struct Event1f, _asn_ctx),
	asn_MAP_Event1f_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Event1f = {
	"Event1f",
	"Event1f",
	&asn_OP_SEQUENCE,
	asn_DEF_Event1f_tags_1,
	sizeof(asn_DEF_Event1f_tags_1)
		/sizeof(asn_DEF_Event1f_tags_1[0]), /* 1 */
	asn_DEF_Event1f_tags_1,	/* Same as above */
	sizeof(asn_DEF_Event1f_tags_1)
		/sizeof(asn_DEF_Event1f_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Event1f_1,
	2,	/* Elements count */
	&asn_SPC_Event1f_specs_1	/* Additional specs */
};
