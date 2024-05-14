/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "CommonTimeslotInfoSCCPCH.h"

asn_TYPE_member_t asn_MBR_CommonTimeslotInfoSCCPCH_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTimeslotInfoSCCPCH, secondInterleavingMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondInterleavingMode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secondInterleavingMode"
		},
	{ ATF_POINTER, 1, offsetof(struct CommonTimeslotInfoSCCPCH, tfci_Coding),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TFCI_Coding,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tfci-Coding"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTimeslotInfoSCCPCH, puncturingLimit),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PuncturingLimit,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"puncturingLimit"
		},
	{ ATF_POINTER, 1, offsetof(struct CommonTimeslotInfoSCCPCH, repetitionPeriodLengthAndOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RepetitionPeriodLengthAndOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"repetitionPeriodLengthAndOffset"
		},
};
static const int asn_MAP_CommonTimeslotInfoSCCPCH_oms_1[] = { 1, 3 };
static const ber_tlv_tag_t asn_DEF_CommonTimeslotInfoSCCPCH_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CommonTimeslotInfoSCCPCH_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* secondInterleavingMode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tfci-Coding */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* puncturingLimit */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* repetitionPeriodLengthAndOffset */
};
asn_SEQUENCE_specifics_t asn_SPC_CommonTimeslotInfoSCCPCH_specs_1 = {
	sizeof(struct CommonTimeslotInfoSCCPCH),
	offsetof(struct CommonTimeslotInfoSCCPCH, _asn_ctx),
	asn_MAP_CommonTimeslotInfoSCCPCH_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CommonTimeslotInfoSCCPCH_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CommonTimeslotInfoSCCPCH = {
	"CommonTimeslotInfoSCCPCH",
	"CommonTimeslotInfoSCCPCH",
	&asn_OP_SEQUENCE,
	asn_DEF_CommonTimeslotInfoSCCPCH_tags_1,
	sizeof(asn_DEF_CommonTimeslotInfoSCCPCH_tags_1)
		/sizeof(asn_DEF_CommonTimeslotInfoSCCPCH_tags_1[0]), /* 1 */
	asn_DEF_CommonTimeslotInfoSCCPCH_tags_1,	/* Same as above */
	sizeof(asn_DEF_CommonTimeslotInfoSCCPCH_tags_1)
		/sizeof(asn_DEF_CommonTimeslotInfoSCCPCH_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CommonTimeslotInfoSCCPCH_1,
	4,	/* Elements count */
	&asn_SPC_CommonTimeslotInfoSCCPCH_specs_1	/* Additional specs */
};
