/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "InterFreqMeasurementSysInfo-HCS-RSCP.h"

asn_TYPE_member_t asn_MBR_InterFreqMeasurementSysInfo_HCS_RSCP_1[] = {
	{ ATF_POINTER, 1, offsetof(struct InterFreqMeasurementSysInfo_HCS_RSCP, interFreqCellInfoSI_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCellInfoSI_List_HCS_RSCP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCellInfoSI-List"
		},
};
static const int asn_MAP_InterFreqMeasurementSysInfo_HCS_RSCP_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_InterFreqMeasurementSysInfo_HCS_RSCP_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InterFreqMeasurementSysInfo_HCS_RSCP_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* interFreqCellInfoSI-List */
};
asn_SEQUENCE_specifics_t asn_SPC_InterFreqMeasurementSysInfo_HCS_RSCP_specs_1 = {
	sizeof(struct InterFreqMeasurementSysInfo_HCS_RSCP),
	offsetof(struct InterFreqMeasurementSysInfo_HCS_RSCP, _asn_ctx),
	asn_MAP_InterFreqMeasurementSysInfo_HCS_RSCP_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_InterFreqMeasurementSysInfo_HCS_RSCP_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InterFreqMeasurementSysInfo_HCS_RSCP = {
	"InterFreqMeasurementSysInfo-HCS-RSCP",
	"InterFreqMeasurementSysInfo-HCS-RSCP",
	&asn_OP_SEQUENCE,
	asn_DEF_InterFreqMeasurementSysInfo_HCS_RSCP_tags_1,
	sizeof(asn_DEF_InterFreqMeasurementSysInfo_HCS_RSCP_tags_1)
		/sizeof(asn_DEF_InterFreqMeasurementSysInfo_HCS_RSCP_tags_1[0]), /* 1 */
	asn_DEF_InterFreqMeasurementSysInfo_HCS_RSCP_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterFreqMeasurementSysInfo_HCS_RSCP_tags_1)
		/sizeof(asn_DEF_InterFreqMeasurementSysInfo_HCS_RSCP_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InterFreqMeasurementSysInfo_HCS_RSCP_1,
	1,	/* Elements count */
	&asn_SPC_InterFreqMeasurementSysInfo_HCS_RSCP_specs_1	/* Additional specs */
};

