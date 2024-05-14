/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "DL-AM-RLC-Mode.h"

asn_TYPE_member_t asn_MBR_DL_AM_RLC_Mode_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AM_RLC_Mode, inSequenceDelivery),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inSequenceDelivery"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AM_RLC_Mode, receivingWindowSize),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReceivingWindowSize,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"receivingWindowSize"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AM_RLC_Mode, dl_RLC_StatusInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_RLC_StatusInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-RLC-StatusInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_DL_AM_RLC_Mode_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_AM_RLC_Mode_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* inSequenceDelivery */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* receivingWindowSize */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dl-RLC-StatusInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_AM_RLC_Mode_specs_1 = {
	sizeof(struct DL_AM_RLC_Mode),
	offsetof(struct DL_AM_RLC_Mode, _asn_ctx),
	asn_MAP_DL_AM_RLC_Mode_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_AM_RLC_Mode = {
	"DL-AM-RLC-Mode",
	"DL-AM-RLC-Mode",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_AM_RLC_Mode_tags_1,
	sizeof(asn_DEF_DL_AM_RLC_Mode_tags_1)
		/sizeof(asn_DEF_DL_AM_RLC_Mode_tags_1[0]), /* 1 */
	asn_DEF_DL_AM_RLC_Mode_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_AM_RLC_Mode_tags_1)
		/sizeof(asn_DEF_DL_AM_RLC_Mode_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DL_AM_RLC_Mode_1,
	3,	/* Elements count */
	&asn_SPC_DL_AM_RLC_Mode_specs_1	/* Additional specs */
};

