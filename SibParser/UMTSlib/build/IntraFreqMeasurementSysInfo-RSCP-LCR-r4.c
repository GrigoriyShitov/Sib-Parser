/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "IntraFreqMeasurementSysInfo-RSCP-LCR-r4.h"

static int asn_DFL_2_cmp_1(const void *sptr) {
	const MeasurementIdentity_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 1 */
	return (*st != 1);
}
static int asn_DFL_2_set_1(void **sptr) {
	MeasurementIdentity_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 1 */
	*st = 1;
	return 0;
}
asn_TYPE_member_t asn_MBR_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_1[] = {
	{ ATF_POINTER, 6, offsetof(struct IntraFreqMeasurementSysInfo_RSCP_LCR_r4, intraFreqMeasurementID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementIdentity,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_1,	/* Compare DEFAULT 1 */
		&asn_DFL_2_set_1,	/* Set DEFAULT 1 */
		"intraFreqMeasurementID"
		},
	{ ATF_POINTER, 5, offsetof(struct IntraFreqMeasurementSysInfo_RSCP_LCR_r4, intraFreqCellInfoSI_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqCellInfoSI_List_RSCP_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqCellInfoSI-List"
		},
	{ ATF_POINTER, 4, offsetof(struct IntraFreqMeasurementSysInfo_RSCP_LCR_r4, intraFreqMeasQuantity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqMeasQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqMeasQuantity"
		},
	{ ATF_POINTER, 3, offsetof(struct IntraFreqMeasurementSysInfo_RSCP_LCR_r4, intraFreqReportingQuantityForRACH),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqReportingQuantityForRACH,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqReportingQuantityForRACH"
		},
	{ ATF_POINTER, 2, offsetof(struct IntraFreqMeasurementSysInfo_RSCP_LCR_r4, maxReportedCellsOnRACH),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxReportedCellsOnRACH,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxReportedCellsOnRACH"
		},
	{ ATF_POINTER, 1, offsetof(struct IntraFreqMeasurementSysInfo_RSCP_LCR_r4, reportingInfoForCellDCH),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingInfoForCellDCH_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportingInfoForCellDCH"
		},
};
static const int asn_MAP_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqMeasurementID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqCellInfoSI-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* intraFreqMeasQuantity */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* intraFreqReportingQuantityForRACH */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* maxReportedCellsOnRACH */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* reportingInfoForCellDCH */
};
asn_SEQUENCE_specifics_t asn_SPC_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_specs_1 = {
	sizeof(struct IntraFreqMeasurementSysInfo_RSCP_LCR_r4),
	offsetof(struct IntraFreqMeasurementSysInfo_RSCP_LCR_r4, _asn_ctx),
	asn_MAP_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IntraFreqMeasurementSysInfo_RSCP_LCR_r4 = {
	"IntraFreqMeasurementSysInfo-RSCP-LCR-r4",
	"IntraFreqMeasurementSysInfo-RSCP-LCR-r4",
	&asn_OP_SEQUENCE,
	asn_DEF_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_tags_1,
	sizeof(asn_DEF_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_tags_1)
		/sizeof(asn_DEF_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_tags_1)
		/sizeof(asn_DEF_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_1,
	6,	/* Elements count */
	&asn_SPC_IntraFreqMeasurementSysInfo_RSCP_LCR_r4_specs_1	/* Additional specs */
};

