/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "PrimaryCCPCH-Info-LCR-r4-ext.h"

asn_TYPE_member_t asn_MBR_PrimaryCCPCH_Info_LCR_r4_ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PrimaryCCPCH_Info_LCR_r4_ext, tstd_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tstd-Indicator"
		},
};
static const ber_tlv_tag_t asn_DEF_PrimaryCCPCH_Info_LCR_r4_ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PrimaryCCPCH_Info_LCR_r4_ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tstd-Indicator */
};
asn_SEQUENCE_specifics_t asn_SPC_PrimaryCCPCH_Info_LCR_r4_ext_specs_1 = {
	sizeof(struct PrimaryCCPCH_Info_LCR_r4_ext),
	offsetof(struct PrimaryCCPCH_Info_LCR_r4_ext, _asn_ctx),
	asn_MAP_PrimaryCCPCH_Info_LCR_r4_ext_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PrimaryCCPCH_Info_LCR_r4_ext = {
	"PrimaryCCPCH-Info-LCR-r4-ext",
	"PrimaryCCPCH-Info-LCR-r4-ext",
	&asn_OP_SEQUENCE,
	asn_DEF_PrimaryCCPCH_Info_LCR_r4_ext_tags_1,
	sizeof(asn_DEF_PrimaryCCPCH_Info_LCR_r4_ext_tags_1)
		/sizeof(asn_DEF_PrimaryCCPCH_Info_LCR_r4_ext_tags_1[0]), /* 1 */
	asn_DEF_PrimaryCCPCH_Info_LCR_r4_ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_PrimaryCCPCH_Info_LCR_r4_ext_tags_1)
		/sizeof(asn_DEF_PrimaryCCPCH_Info_LCR_r4_ext_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PrimaryCCPCH_Info_LCR_r4_ext_1,
	1,	/* Elements count */
	&asn_SPC_PrimaryCCPCH_Info_LCR_r4_ext_specs_1	/* Additional specs */
};
