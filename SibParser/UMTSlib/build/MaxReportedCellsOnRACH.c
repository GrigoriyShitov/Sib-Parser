/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "MaxReportedCellsOnRACH.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_MaxReportedCellsOnRACH_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_MaxReportedCellsOnRACH_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_MaxReportedCellsOnRACH_value2enum_1[] = {
	{ 0,	8,	"noReport" },
	{ 1,	11,	"currentCell" },
	{ 2,	26,	"currentAnd-1-BestNeighbour" },
	{ 3,	26,	"currentAnd-2-BestNeighbour" },
	{ 4,	26,	"currentAnd-3-BestNeighbour" },
	{ 5,	26,	"currentAnd-4-BestNeighbour" },
	{ 6,	26,	"currentAnd-5-BestNeighbour" },
	{ 7,	26,	"currentAnd-6-BestNeighbour" }
};
static const unsigned int asn_MAP_MaxReportedCellsOnRACH_enum2value_1[] = {
	2,	/* currentAnd-1-BestNeighbour(2) */
	3,	/* currentAnd-2-BestNeighbour(3) */
	4,	/* currentAnd-3-BestNeighbour(4) */
	5,	/* currentAnd-4-BestNeighbour(5) */
	6,	/* currentAnd-5-BestNeighbour(6) */
	7,	/* currentAnd-6-BestNeighbour(7) */
	1,	/* currentCell(1) */
	0	/* noReport(0) */
};
const asn_INTEGER_specifics_t asn_SPC_MaxReportedCellsOnRACH_specs_1 = {
	asn_MAP_MaxReportedCellsOnRACH_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_MaxReportedCellsOnRACH_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_MaxReportedCellsOnRACH_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MaxReportedCellsOnRACH = {
	"MaxReportedCellsOnRACH",
	"MaxReportedCellsOnRACH",
	&asn_OP_NativeEnumerated,
	asn_DEF_MaxReportedCellsOnRACH_tags_1,
	sizeof(asn_DEF_MaxReportedCellsOnRACH_tags_1)
		/sizeof(asn_DEF_MaxReportedCellsOnRACH_tags_1[0]), /* 1 */
	asn_DEF_MaxReportedCellsOnRACH_tags_1,	/* Same as above */
	sizeof(asn_DEF_MaxReportedCellsOnRACH_tags_1)
		/sizeof(asn_DEF_MaxReportedCellsOnRACH_tags_1[0]), /* 1 */
	{ &asn_OER_type_MaxReportedCellsOnRACH_constr_1, &asn_PER_type_MaxReportedCellsOnRACH_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_MaxReportedCellsOnRACH_specs_1	/* Additional specs */
};

