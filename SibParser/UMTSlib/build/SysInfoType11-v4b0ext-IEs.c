/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "SysInfoType11-v4b0ext-IEs.h"

asn_TYPE_member_t asn_MBR_SysInfoType11_v4b0ext_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SysInfoType11_v4b0ext_IEs, fach_MeasurementOccasionInfo_LCR_Ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FACH_MeasurementOccasionInfo_LCR_r4_ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fach-MeasurementOccasionInfo-LCR-Ext"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType11_v4b0ext_IEs, measurementControlSysInfo_LCR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementControlSysInfo_LCR_r4_ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementControlSysInfo-LCR"
		},
};
static const int asn_MAP_SysInfoType11_v4b0ext_IEs_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_SysInfoType11_v4b0ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType11_v4b0ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fach-MeasurementOccasionInfo-LCR-Ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measurementControlSysInfo-LCR */
};
asn_SEQUENCE_specifics_t asn_SPC_SysInfoType11_v4b0ext_IEs_specs_1 = {
	sizeof(struct SysInfoType11_v4b0ext_IEs),
	offsetof(struct SysInfoType11_v4b0ext_IEs, _asn_ctx),
	asn_MAP_SysInfoType11_v4b0ext_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SysInfoType11_v4b0ext_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType11_v4b0ext_IEs = {
	"SysInfoType11-v4b0ext-IEs",
	"SysInfoType11-v4b0ext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType11_v4b0ext_IEs_tags_1,
	sizeof(asn_DEF_SysInfoType11_v4b0ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType11_v4b0ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType11_v4b0ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType11_v4b0ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType11_v4b0ext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType11_v4b0ext_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SysInfoType11_v4b0ext_IEs_specs_1	/* Additional specs */
};

