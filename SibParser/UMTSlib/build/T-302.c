/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "T-302.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_T_302_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_T_302_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_T_302_value2enum_1[] = {
	{ 0,	5,	"ms100" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms400" },
	{ 3,	5,	"ms600" },
	{ 4,	5,	"ms800" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms1200" },
	{ 7,	6,	"ms1400" },
	{ 8,	6,	"ms1600" },
	{ 9,	6,	"ms1800" },
	{ 10,	6,	"ms2000" },
	{ 11,	6,	"ms3000" },
	{ 12,	6,	"ms4000" },
	{ 13,	6,	"ms6000" },
	{ 14,	6,	"ms8000" },
	{ 15,	5,	"spare" }
};
static const unsigned int asn_MAP_T_302_enum2value_1[] = {
	0,	/* ms100(0) */
	5,	/* ms1000(5) */
	6,	/* ms1200(6) */
	7,	/* ms1400(7) */
	8,	/* ms1600(8) */
	9,	/* ms1800(9) */
	1,	/* ms200(1) */
	10,	/* ms2000(10) */
	11,	/* ms3000(11) */
	2,	/* ms400(2) */
	12,	/* ms4000(12) */
	3,	/* ms600(3) */
	13,	/* ms6000(13) */
	4,	/* ms800(4) */
	14,	/* ms8000(14) */
	15	/* spare(15) */
};
const asn_INTEGER_specifics_t asn_SPC_T_302_specs_1 = {
	asn_MAP_T_302_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_302_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_T_302_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_302 = {
	"T-302",
	"T-302",
	&asn_OP_NativeEnumerated,
	asn_DEF_T_302_tags_1,
	sizeof(asn_DEF_T_302_tags_1)
		/sizeof(asn_DEF_T_302_tags_1[0]), /* 1 */
	asn_DEF_T_302_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_302_tags_1)
		/sizeof(asn_DEF_T_302_tags_1[0]), /* 1 */
	{ &asn_OER_type_T_302_constr_1, &asn_PER_type_T_302_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_302_specs_1	/* Additional specs */
};

