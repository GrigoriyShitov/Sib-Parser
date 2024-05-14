/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "ExplicitDiscard.h"

asn_TYPE_member_t asn_MBR_ExplicitDiscard_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ExplicitDiscard, timerMRW),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimerMRW,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timerMRW"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ExplicitDiscard, timerDiscard),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimerDiscard,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timerDiscard"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ExplicitDiscard, maxMRW),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxMRW,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxMRW"
		},
};
static const ber_tlv_tag_t asn_DEF_ExplicitDiscard_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ExplicitDiscard_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timerMRW */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timerDiscard */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* maxMRW */
};
asn_SEQUENCE_specifics_t asn_SPC_ExplicitDiscard_specs_1 = {
	sizeof(struct ExplicitDiscard),
	offsetof(struct ExplicitDiscard, _asn_ctx),
	asn_MAP_ExplicitDiscard_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ExplicitDiscard = {
	"ExplicitDiscard",
	"ExplicitDiscard",
	&asn_OP_SEQUENCE,
	asn_DEF_ExplicitDiscard_tags_1,
	sizeof(asn_DEF_ExplicitDiscard_tags_1)
		/sizeof(asn_DEF_ExplicitDiscard_tags_1[0]), /* 1 */
	asn_DEF_ExplicitDiscard_tags_1,	/* Same as above */
	sizeof(asn_DEF_ExplicitDiscard_tags_1)
		/sizeof(asn_DEF_ExplicitDiscard_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ExplicitDiscard_1,
	3,	/* Elements count */
	&asn_SPC_ExplicitDiscard_specs_1	/* Additional specs */
};

