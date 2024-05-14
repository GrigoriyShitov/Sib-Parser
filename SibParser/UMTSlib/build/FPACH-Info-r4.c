/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "FPACH-Info-r4.h"

asn_TYPE_member_t asn_MBR_FPACH_Info_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FPACH_Info_r4, timeslot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeslot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FPACH_Info_r4, channelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_FPACH_CCode16_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"channelisationCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FPACH_Info_r4, midambleShiftAndBurstType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftAndBurstType_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleShiftAndBurstType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FPACH_Info_r4, wi),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Wi_LCR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wi"
		},
};
static const ber_tlv_tag_t asn_DEF_FPACH_Info_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FPACH_Info_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslot */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* channelisationCode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* midambleShiftAndBurstType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* wi */
};
asn_SEQUENCE_specifics_t asn_SPC_FPACH_Info_r4_specs_1 = {
	sizeof(struct FPACH_Info_r4),
	offsetof(struct FPACH_Info_r4, _asn_ctx),
	asn_MAP_FPACH_Info_r4_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FPACH_Info_r4 = {
	"FPACH-Info-r4",
	"FPACH-Info-r4",
	&asn_OP_SEQUENCE,
	asn_DEF_FPACH_Info_r4_tags_1,
	sizeof(asn_DEF_FPACH_Info_r4_tags_1)
		/sizeof(asn_DEF_FPACH_Info_r4_tags_1[0]), /* 1 */
	asn_DEF_FPACH_Info_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_FPACH_Info_r4_tags_1)
		/sizeof(asn_DEF_FPACH_Info_r4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FPACH_Info_r4_1,
	4,	/* Elements count */
	&asn_SPC_FPACH_Info_r4_specs_1	/* Additional specs */
};

