/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "PagingIndicatorLength.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_PagingIndicatorLength_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PagingIndicatorLength_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_PagingIndicatorLength_value2enum_1[] = {
	{ 0,	3,	"pi4" },
	{ 1,	3,	"pi8" },
	{ 2,	4,	"pi16" }
};
static const unsigned int asn_MAP_PagingIndicatorLength_enum2value_1[] = {
	2,	/* pi16(2) */
	0,	/* pi4(0) */
	1	/* pi8(1) */
};
const asn_INTEGER_specifics_t asn_SPC_PagingIndicatorLength_specs_1 = {
	asn_MAP_PagingIndicatorLength_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PagingIndicatorLength_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PagingIndicatorLength_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PagingIndicatorLength = {
	"PagingIndicatorLength",
	"PagingIndicatorLength",
	&asn_OP_NativeEnumerated,
	asn_DEF_PagingIndicatorLength_tags_1,
	sizeof(asn_DEF_PagingIndicatorLength_tags_1)
		/sizeof(asn_DEF_PagingIndicatorLength_tags_1[0]), /* 1 */
	asn_DEF_PagingIndicatorLength_tags_1,	/* Same as above */
	sizeof(asn_DEF_PagingIndicatorLength_tags_1)
		/sizeof(asn_DEF_PagingIndicatorLength_tags_1[0]), /* 1 */
	{ &asn_OER_type_PagingIndicatorLength_constr_1, &asn_PER_type_PagingIndicatorLength_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PagingIndicatorLength_specs_1	/* Additional specs */
};
