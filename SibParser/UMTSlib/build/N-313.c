/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "N-313.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_N_313_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_N_313_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_N_313_value2enum_1[] = {
	{ 0,	2,	"s1" },
	{ 1,	2,	"s2" },
	{ 2,	2,	"s4" },
	{ 3,	3,	"s10" },
	{ 4,	3,	"s20" },
	{ 5,	3,	"s50" },
	{ 6,	4,	"s100" },
	{ 7,	4,	"s200" }
};
static const unsigned int asn_MAP_N_313_enum2value_1[] = {
	0,	/* s1(0) */
	3,	/* s10(3) */
	6,	/* s100(6) */
	1,	/* s2(1) */
	4,	/* s20(4) */
	7,	/* s200(7) */
	2,	/* s4(2) */
	5	/* s50(5) */
};
const asn_INTEGER_specifics_t asn_SPC_N_313_specs_1 = {
	asn_MAP_N_313_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_N_313_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_N_313_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_N_313 = {
	"N-313",
	"N-313",
	&asn_OP_NativeEnumerated,
	asn_DEF_N_313_tags_1,
	sizeof(asn_DEF_N_313_tags_1)
		/sizeof(asn_DEF_N_313_tags_1[0]), /* 1 */
	asn_DEF_N_313_tags_1,	/* Same as above */
	sizeof(asn_DEF_N_313_tags_1)
		/sizeof(asn_DEF_N_313_tags_1[0]), /* 1 */
	{ &asn_OER_type_N_313_constr_1, &asn_PER_type_N_313_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_N_313_specs_1	/* Additional specs */
};

