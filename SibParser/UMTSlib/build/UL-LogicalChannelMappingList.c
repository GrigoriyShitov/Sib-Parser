/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "UL-LogicalChannelMappingList.h"

static int
memb_ul_LogicalChannelMapping_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 2)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ul_LogicalChannelMapping_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_type_ul_LogicalChannelMapping_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ul_LogicalChannelMapping_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_ul_LogicalChannelMapping_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ul_LogicalChannelMapping_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_UL_LogicalChannelMapping,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ul_LogicalChannelMapping_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ul_LogicalChannelMapping_specs_3 = {
	sizeof(struct UL_LogicalChannelMappingList__ul_LogicalChannelMapping),
	offsetof(struct UL_LogicalChannelMappingList__ul_LogicalChannelMapping, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_LogicalChannelMapping_3 = {
	"ul-LogicalChannelMapping",
	"ul-LogicalChannelMapping",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ul_LogicalChannelMapping_tags_3,
	sizeof(asn_DEF_ul_LogicalChannelMapping_tags_3)
		/sizeof(asn_DEF_ul_LogicalChannelMapping_tags_3[0]) - 1, /* 1 */
	asn_DEF_ul_LogicalChannelMapping_tags_3,	/* Same as above */
	sizeof(asn_DEF_ul_LogicalChannelMapping_tags_3)
		/sizeof(asn_DEF_ul_LogicalChannelMapping_tags_3[0]), /* 2 */
	{ &asn_OER_type_ul_LogicalChannelMapping_constr_3, &asn_PER_type_ul_LogicalChannelMapping_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_ul_LogicalChannelMapping_3,
	1,	/* Single element */
	&asn_SPC_ul_LogicalChannelMapping_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UL_LogicalChannelMappingList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_LogicalChannelMappingList, rlc_LogicalChannelMappingIndicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-LogicalChannelMappingIndicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_LogicalChannelMappingList, ul_LogicalChannelMapping),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ul_LogicalChannelMapping_3,
		0,
		{ &asn_OER_memb_ul_LogicalChannelMapping_constr_3, &asn_PER_memb_ul_LogicalChannelMapping_constr_3,  memb_ul_LogicalChannelMapping_constraint_1 },
		0, 0, /* No default value */
		"ul-LogicalChannelMapping"
		},
};
static const ber_tlv_tag_t asn_DEF_UL_LogicalChannelMappingList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_LogicalChannelMappingList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-LogicalChannelMappingIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-LogicalChannelMapping */
};
asn_SEQUENCE_specifics_t asn_SPC_UL_LogicalChannelMappingList_specs_1 = {
	sizeof(struct UL_LogicalChannelMappingList),
	offsetof(struct UL_LogicalChannelMappingList, _asn_ctx),
	asn_MAP_UL_LogicalChannelMappingList_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UL_LogicalChannelMappingList = {
	"UL-LogicalChannelMappingList",
	"UL-LogicalChannelMappingList",
	&asn_OP_SEQUENCE,
	asn_DEF_UL_LogicalChannelMappingList_tags_1,
	sizeof(asn_DEF_UL_LogicalChannelMappingList_tags_1)
		/sizeof(asn_DEF_UL_LogicalChannelMappingList_tags_1[0]), /* 1 */
	asn_DEF_UL_LogicalChannelMappingList_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_LogicalChannelMappingList_tags_1)
		/sizeof(asn_DEF_UL_LogicalChannelMappingList_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UL_LogicalChannelMappingList_1,
	2,	/* Elements count */
	&asn_SPC_UL_LogicalChannelMappingList_specs_1	/* Additional specs */
};

