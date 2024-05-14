/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "Event1c.h"

asn_TYPE_member_t asn_MBR_Event1c_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event1c, replacementActivationThreshold),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReplacementActivationThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"replacementActivationThreshold"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event1c, reportingAmount),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingAmount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportingAmount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event1c, reportingInterval),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingInterval,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportingInterval"
		},
};
static const ber_tlv_tag_t asn_DEF_Event1c_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Event1c_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* replacementActivationThreshold */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportingAmount */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* reportingInterval */
};
asn_SEQUENCE_specifics_t asn_SPC_Event1c_specs_1 = {
	sizeof(struct Event1c),
	offsetof(struct Event1c, _asn_ctx),
	asn_MAP_Event1c_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Event1c = {
	"Event1c",
	"Event1c",
	&asn_OP_SEQUENCE,
	asn_DEF_Event1c_tags_1,
	sizeof(asn_DEF_Event1c_tags_1)
		/sizeof(asn_DEF_Event1c_tags_1[0]), /* 1 */
	asn_DEF_Event1c_tags_1,	/* Same as above */
	sizeof(asn_DEF_Event1c_tags_1)
		/sizeof(asn_DEF_Event1c_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Event1c_1,
	3,	/* Elements count */
	&asn_SPC_Event1c_specs_1	/* Additional specs */
};

