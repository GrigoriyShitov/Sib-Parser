/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "T-310.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_T_310_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_T_310_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_T_310_value2enum_1[] = {
	{ 0,	4,	"ms40" },
	{ 1,	4,	"ms80" },
	{ 2,	5,	"ms120" },
	{ 3,	5,	"ms160" },
	{ 4,	5,	"ms200" },
	{ 5,	5,	"ms240" },
	{ 6,	5,	"ms280" },
	{ 7,	5,	"ms320" }
};
static const unsigned int asn_MAP_T_310_enum2value_1[] = {
	2,	/* ms120(2) */
	3,	/* ms160(3) */
	4,	/* ms200(4) */
	5,	/* ms240(5) */
	6,	/* ms280(6) */
	7,	/* ms320(7) */
	0,	/* ms40(0) */
	1	/* ms80(1) */
};
const asn_INTEGER_specifics_t asn_SPC_T_310_specs_1 = {
	asn_MAP_T_310_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_310_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_T_310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_310 = {
	"T-310",
	"T-310",
	&asn_OP_NativeEnumerated,
	asn_DEF_T_310_tags_1,
	sizeof(asn_DEF_T_310_tags_1)
		/sizeof(asn_DEF_T_310_tags_1[0]), /* 1 */
	asn_DEF_T_310_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_310_tags_1)
		/sizeof(asn_DEF_T_310_tags_1[0]), /* 1 */
	{ &asn_OER_type_T_310_constr_1, &asn_PER_type_T_310_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_310_specs_1	/* Additional specs */
};
