/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "MaxDAT.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_MaxDAT_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_MaxDAT_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_MaxDAT_value2enum_1[] = {
	{ 0,	4,	"dat1" },
	{ 1,	4,	"dat2" },
	{ 2,	4,	"dat3" },
	{ 3,	4,	"dat4" },
	{ 4,	4,	"dat5" },
	{ 5,	4,	"dat6" },
	{ 6,	4,	"dat7" },
	{ 7,	4,	"dat8" },
	{ 8,	4,	"dat9" },
	{ 9,	5,	"dat10" },
	{ 10,	5,	"dat15" },
	{ 11,	5,	"dat20" },
	{ 12,	5,	"dat25" },
	{ 13,	5,	"dat30" },
	{ 14,	5,	"dat35" },
	{ 15,	5,	"dat40" }
};
static const unsigned int asn_MAP_MaxDAT_enum2value_1[] = {
	0,	/* dat1(0) */
	9,	/* dat10(9) */
	10,	/* dat15(10) */
	1,	/* dat2(1) */
	11,	/* dat20(11) */
	12,	/* dat25(12) */
	2,	/* dat3(2) */
	13,	/* dat30(13) */
	14,	/* dat35(14) */
	3,	/* dat4(3) */
	15,	/* dat40(15) */
	4,	/* dat5(4) */
	5,	/* dat6(5) */
	6,	/* dat7(6) */
	7,	/* dat8(7) */
	8	/* dat9(8) */
};
const asn_INTEGER_specifics_t asn_SPC_MaxDAT_specs_1 = {
	asn_MAP_MaxDAT_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_MaxDAT_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_MaxDAT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MaxDAT = {
	"MaxDAT",
	"MaxDAT",
	&asn_OP_NativeEnumerated,
	asn_DEF_MaxDAT_tags_1,
	sizeof(asn_DEF_MaxDAT_tags_1)
		/sizeof(asn_DEF_MaxDAT_tags_1[0]), /* 1 */
	asn_DEF_MaxDAT_tags_1,	/* Same as above */
	sizeof(asn_DEF_MaxDAT_tags_1)
		/sizeof(asn_DEF_MaxDAT_tags_1[0]), /* 1 */
	{ &asn_OER_type_MaxDAT_constr_1, &asn_PER_type_MaxDAT_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_MaxDAT_specs_1	/* Additional specs */
};

