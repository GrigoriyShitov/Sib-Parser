/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "UL-AddReconfTransChInformation.h"

asn_TYPE_member_t asn_MBR_UL_AddReconfTransChInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AddReconfTransChInformation, ul_TransportChannelType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TrCH_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-TransportChannelType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AddReconfTransChInformation, transportChannelIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportChannelIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AddReconfTransChInformation, transportFormatSet),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TransportFormatSet,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportFormatSet"
		},
};
static const ber_tlv_tag_t asn_DEF_UL_AddReconfTransChInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_AddReconfTransChInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-TransportChannelType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transportChannelIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* transportFormatSet */
};
asn_SEQUENCE_specifics_t asn_SPC_UL_AddReconfTransChInformation_specs_1 = {
	sizeof(struct UL_AddReconfTransChInformation),
	offsetof(struct UL_AddReconfTransChInformation, _asn_ctx),
	asn_MAP_UL_AddReconfTransChInformation_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UL_AddReconfTransChInformation = {
	"UL-AddReconfTransChInformation",
	"UL-AddReconfTransChInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_UL_AddReconfTransChInformation_tags_1,
	sizeof(asn_DEF_UL_AddReconfTransChInformation_tags_1)
		/sizeof(asn_DEF_UL_AddReconfTransChInformation_tags_1[0]), /* 1 */
	asn_DEF_UL_AddReconfTransChInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_AddReconfTransChInformation_tags_1)
		/sizeof(asn_DEF_UL_AddReconfTransChInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UL_AddReconfTransChInformation_1,
	3,	/* Elements count */
	&asn_SPC_UL_AddReconfTransChInformation_specs_1	/* Additional specs */
};

