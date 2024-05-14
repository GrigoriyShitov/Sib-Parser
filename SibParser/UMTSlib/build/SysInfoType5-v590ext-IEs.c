/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "SysInfoType5-v590ext-IEs.h"

static asn_TYPE_member_t asn_MBR_hcr_r5_SpecificInfo_2[] = {
	{ ATF_POINTER, 2, offsetof(struct SysInfoType5_v590ext_IEs__hcr_r5_SpecificInfo, pusch_SysInfoList_SFN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_SysInfoList_SFN_HCR_r5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-SysInfoList-SFN"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType5_v590ext_IEs__hcr_r5_SpecificInfo, pdsch_SysInfoList_SFN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_SysInfoList_SFN_HCR_r5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-SysInfoList-SFN"
		},
};
static const int asn_MAP_hcr_r5_SpecificInfo_oms_2[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_hcr_r5_SpecificInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_hcr_r5_SpecificInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-SysInfoList-SFN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pdsch-SysInfoList-SFN */
};
static asn_SEQUENCE_specifics_t asn_SPC_hcr_r5_SpecificInfo_specs_2 = {
	sizeof(struct SysInfoType5_v590ext_IEs__hcr_r5_SpecificInfo),
	offsetof(struct SysInfoType5_v590ext_IEs__hcr_r5_SpecificInfo, _asn_ctx),
	asn_MAP_hcr_r5_SpecificInfo_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_hcr_r5_SpecificInfo_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hcr_r5_SpecificInfo_2 = {
	"hcr-r5-SpecificInfo",
	"hcr-r5-SpecificInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_hcr_r5_SpecificInfo_tags_2,
	sizeof(asn_DEF_hcr_r5_SpecificInfo_tags_2)
		/sizeof(asn_DEF_hcr_r5_SpecificInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_hcr_r5_SpecificInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_hcr_r5_SpecificInfo_tags_2)
		/sizeof(asn_DEF_hcr_r5_SpecificInfo_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_hcr_r5_SpecificInfo_2,
	2,	/* Elements count */
	&asn_SPC_hcr_r5_SpecificInfo_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SysInfoType5_v590ext_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SysInfoType5_v590ext_IEs, hcr_r5_SpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_hcr_r5_SpecificInfo_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hcr-r5-SpecificInfo"
		},
};
static const int asn_MAP_SysInfoType5_v590ext_IEs_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_SysInfoType5_v590ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType5_v590ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* hcr-r5-SpecificInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_SysInfoType5_v590ext_IEs_specs_1 = {
	sizeof(struct SysInfoType5_v590ext_IEs),
	offsetof(struct SysInfoType5_v590ext_IEs, _asn_ctx),
	asn_MAP_SysInfoType5_v590ext_IEs_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_SysInfoType5_v590ext_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType5_v590ext_IEs = {
	"SysInfoType5-v590ext-IEs",
	"SysInfoType5-v590ext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType5_v590ext_IEs_tags_1,
	sizeof(asn_DEF_SysInfoType5_v590ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType5_v590ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType5_v590ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType5_v590ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType5_v590ext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType5_v590ext_IEs_1,
	1,	/* Elements count */
	&asn_SPC_SysInfoType5_v590ext_IEs_specs_1	/* Additional specs */
};
