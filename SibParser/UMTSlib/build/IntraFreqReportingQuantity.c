/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "IntraFreqReportingQuantity.h"

asn_TYPE_member_t asn_MBR_IntraFreqReportingQuantity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportingQuantity, activeSetReportingQuantities),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReportingQuantities,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"activeSetReportingQuantities"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportingQuantity, monitoredSetReportingQuantities),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReportingQuantities,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"monitoredSetReportingQuantities"
		},
	{ ATF_POINTER, 1, offsetof(struct IntraFreqReportingQuantity, detectedSetReportingQuantities),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReportingQuantities,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"detectedSetReportingQuantities"
		},
};
static const int asn_MAP_IntraFreqReportingQuantity_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_IntraFreqReportingQuantity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IntraFreqReportingQuantity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* activeSetReportingQuantities */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* monitoredSetReportingQuantities */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* detectedSetReportingQuantities */
};
asn_SEQUENCE_specifics_t asn_SPC_IntraFreqReportingQuantity_specs_1 = {
	sizeof(struct IntraFreqReportingQuantity),
	offsetof(struct IntraFreqReportingQuantity, _asn_ctx),
	asn_MAP_IntraFreqReportingQuantity_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_IntraFreqReportingQuantity_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IntraFreqReportingQuantity = {
	"IntraFreqReportingQuantity",
	"IntraFreqReportingQuantity",
	&asn_OP_SEQUENCE,
	asn_DEF_IntraFreqReportingQuantity_tags_1,
	sizeof(asn_DEF_IntraFreqReportingQuantity_tags_1)
		/sizeof(asn_DEF_IntraFreqReportingQuantity_tags_1[0]), /* 1 */
	asn_DEF_IntraFreqReportingQuantity_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntraFreqReportingQuantity_tags_1)
		/sizeof(asn_DEF_IntraFreqReportingQuantity_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_IntraFreqReportingQuantity_1,
	3,	/* Elements count */
	&asn_SPC_IntraFreqReportingQuantity_specs_1	/* Additional specs */
};

