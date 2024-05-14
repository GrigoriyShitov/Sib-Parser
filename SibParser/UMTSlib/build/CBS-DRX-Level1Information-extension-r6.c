/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "CBS-DRX-Level1Information-extension-r6.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_CBS_DRX_Level1Information_extension_r6_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_CBS_DRX_Level1Information_extension_r6_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_CBS_DRX_Level1Information_extension_r6_value2enum_1[] = {
	{ 0,	2,	"p8" },
	{ 1,	3,	"p16" },
	{ 2,	3,	"p32" },
	{ 3,	3,	"p64" },
	{ 4,	4,	"p128" },
	{ 5,	4,	"p256" }
};
static const unsigned int asn_MAP_CBS_DRX_Level1Information_extension_r6_enum2value_1[] = {
	4,	/* p128(4) */
	1,	/* p16(1) */
	5,	/* p256(5) */
	2,	/* p32(2) */
	3,	/* p64(3) */
	0	/* p8(0) */
};
const asn_INTEGER_specifics_t asn_SPC_CBS_DRX_Level1Information_extension_r6_specs_1 = {
	asn_MAP_CBS_DRX_Level1Information_extension_r6_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_CBS_DRX_Level1Information_extension_r6_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_CBS_DRX_Level1Information_extension_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CBS_DRX_Level1Information_extension_r6 = {
	"CBS-DRX-Level1Information-extension-r6",
	"CBS-DRX-Level1Information-extension-r6",
	&asn_OP_NativeEnumerated,
	asn_DEF_CBS_DRX_Level1Information_extension_r6_tags_1,
	sizeof(asn_DEF_CBS_DRX_Level1Information_extension_r6_tags_1)
		/sizeof(asn_DEF_CBS_DRX_Level1Information_extension_r6_tags_1[0]), /* 1 */
	asn_DEF_CBS_DRX_Level1Information_extension_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_CBS_DRX_Level1Information_extension_r6_tags_1)
		/sizeof(asn_DEF_CBS_DRX_Level1Information_extension_r6_tags_1[0]), /* 1 */
	{ &asn_OER_type_CBS_DRX_Level1Information_extension_r6_constr_1, &asn_PER_type_CBS_DRX_Level1Information_extension_r6_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CBS_DRX_Level1Information_extension_r6_specs_1	/* Additional specs */
};
