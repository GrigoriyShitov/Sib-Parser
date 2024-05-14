/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "IntraFreqReportingCriteria-1b-r5.h"

asn_TYPE_member_t asn_MBR_IntraFreqReportingCriteria_1b_r5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportingCriteria_1b_r5, periodicReportingInfo_1b),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PeriodicReportingInfo_1b,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicReportingInfo-1b"
		},
};
static const ber_tlv_tag_t asn_DEF_IntraFreqReportingCriteria_1b_r5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IntraFreqReportingCriteria_1b_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* periodicReportingInfo-1b */
};
asn_SEQUENCE_specifics_t asn_SPC_IntraFreqReportingCriteria_1b_r5_specs_1 = {
	sizeof(struct IntraFreqReportingCriteria_1b_r5),
	offsetof(struct IntraFreqReportingCriteria_1b_r5, _asn_ctx),
	asn_MAP_IntraFreqReportingCriteria_1b_r5_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IntraFreqReportingCriteria_1b_r5 = {
	"IntraFreqReportingCriteria-1b-r5",
	"IntraFreqReportingCriteria-1b-r5",
	&asn_OP_SEQUENCE,
	asn_DEF_IntraFreqReportingCriteria_1b_r5_tags_1,
	sizeof(asn_DEF_IntraFreqReportingCriteria_1b_r5_tags_1)
		/sizeof(asn_DEF_IntraFreqReportingCriteria_1b_r5_tags_1[0]), /* 1 */
	asn_DEF_IntraFreqReportingCriteria_1b_r5_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntraFreqReportingCriteria_1b_r5_tags_1)
		/sizeof(asn_DEF_IntraFreqReportingCriteria_1b_r5_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_IntraFreqReportingCriteria_1b_r5_1,
	1,	/* Elements count */
	&asn_SPC_IntraFreqReportingCriteria_1b_r5_specs_1	/* Additional specs */
};

