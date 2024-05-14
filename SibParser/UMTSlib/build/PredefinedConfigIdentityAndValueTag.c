/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "PredefinedConfigIdentityAndValueTag.h"

asn_TYPE_member_t asn_MBR_PredefinedConfigIdentityAndValueTag_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PredefinedConfigIdentityAndValueTag, predefinedConfigIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PredefinedConfigIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"predefinedConfigIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PredefinedConfigIdentityAndValueTag, predefinedConfigValueTag),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PredefinedConfigValueTag,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"predefinedConfigValueTag"
		},
};
static const ber_tlv_tag_t asn_DEF_PredefinedConfigIdentityAndValueTag_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PredefinedConfigIdentityAndValueTag_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* predefinedConfigIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* predefinedConfigValueTag */
};
asn_SEQUENCE_specifics_t asn_SPC_PredefinedConfigIdentityAndValueTag_specs_1 = {
	sizeof(struct PredefinedConfigIdentityAndValueTag),
	offsetof(struct PredefinedConfigIdentityAndValueTag, _asn_ctx),
	asn_MAP_PredefinedConfigIdentityAndValueTag_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PredefinedConfigIdentityAndValueTag = {
	"PredefinedConfigIdentityAndValueTag",
	"PredefinedConfigIdentityAndValueTag",
	&asn_OP_SEQUENCE,
	asn_DEF_PredefinedConfigIdentityAndValueTag_tags_1,
	sizeof(asn_DEF_PredefinedConfigIdentityAndValueTag_tags_1)
		/sizeof(asn_DEF_PredefinedConfigIdentityAndValueTag_tags_1[0]), /* 1 */
	asn_DEF_PredefinedConfigIdentityAndValueTag_tags_1,	/* Same as above */
	sizeof(asn_DEF_PredefinedConfigIdentityAndValueTag_tags_1)
		/sizeof(asn_DEF_PredefinedConfigIdentityAndValueTag_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PredefinedConfigIdentityAndValueTag_1,
	2,	/* Elements count */
	&asn_SPC_PredefinedConfigIdentityAndValueTag_specs_1	/* Additional specs */
};
