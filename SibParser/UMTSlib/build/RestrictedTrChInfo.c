/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "RestrictedTrChInfo.h"

asn_TYPE_member_t asn_MBR_RestrictedTrChInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RestrictedTrChInfo, ul_TransportChannelType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TrCH_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-TransportChannelType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RestrictedTrChInfo, restrictedTrChIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"restrictedTrChIdentity"
		},
	{ ATF_POINTER, 1, offsetof(struct RestrictedTrChInfo, allowedTFI_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllowedTFI_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allowedTFI-List"
		},
};
static const int asn_MAP_RestrictedTrChInfo_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RestrictedTrChInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RestrictedTrChInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-TransportChannelType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* restrictedTrChIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* allowedTFI-List */
};
asn_SEQUENCE_specifics_t asn_SPC_RestrictedTrChInfo_specs_1 = {
	sizeof(struct RestrictedTrChInfo),
	offsetof(struct RestrictedTrChInfo, _asn_ctx),
	asn_MAP_RestrictedTrChInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RestrictedTrChInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RestrictedTrChInfo = {
	"RestrictedTrChInfo",
	"RestrictedTrChInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_RestrictedTrChInfo_tags_1,
	sizeof(asn_DEF_RestrictedTrChInfo_tags_1)
		/sizeof(asn_DEF_RestrictedTrChInfo_tags_1[0]), /* 1 */
	asn_DEF_RestrictedTrChInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_RestrictedTrChInfo_tags_1)
		/sizeof(asn_DEF_RestrictedTrChInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RestrictedTrChInfo_1,
	3,	/* Elements count */
	&asn_SPC_RestrictedTrChInfo_specs_1	/* Additional specs */
};
