/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "ForbiddenAffectCell-LCR-r4.h"

asn_TYPE_member_t asn_MBR_ForbiddenAffectCell_LCR_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ForbiddenAffectCell_LCR_r4, tdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_Info_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const ber_tlv_tag_t asn_DEF_ForbiddenAffectCell_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ForbiddenAffectCell_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tdd */
};
asn_SEQUENCE_specifics_t asn_SPC_ForbiddenAffectCell_LCR_r4_specs_1 = {
	sizeof(struct ForbiddenAffectCell_LCR_r4),
	offsetof(struct ForbiddenAffectCell_LCR_r4, _asn_ctx),
	asn_MAP_ForbiddenAffectCell_LCR_r4_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ForbiddenAffectCell_LCR_r4 = {
	"ForbiddenAffectCell-LCR-r4",
	"ForbiddenAffectCell-LCR-r4",
	&asn_OP_SEQUENCE,
	asn_DEF_ForbiddenAffectCell_LCR_r4_tags_1,
	sizeof(asn_DEF_ForbiddenAffectCell_LCR_r4_tags_1)
		/sizeof(asn_DEF_ForbiddenAffectCell_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_ForbiddenAffectCell_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_ForbiddenAffectCell_LCR_r4_tags_1)
		/sizeof(asn_DEF_ForbiddenAffectCell_LCR_r4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ForbiddenAffectCell_LCR_r4_1,
	1,	/* Elements count */
	&asn_SPC_ForbiddenAffectCell_LCR_r4_specs_1	/* Additional specs */
};

