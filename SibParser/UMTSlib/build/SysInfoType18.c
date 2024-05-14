/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "SysInfoType18.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_4 = {
	sizeof(struct SysInfoType18__nonCriticalExtensions),
	offsetof(struct SysInfoType18__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_4 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtensions_tags_4,
	sizeof(asn_DEF_nonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType18_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SysInfoType18, idleModePLMNIdentities),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMNIdentitiesOfNeighbourCells,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idleModePLMNIdentities"
		},
	{ ATF_POINTER, 2, offsetof(struct SysInfoType18, connectedModePLMNIdentities),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMNIdentitiesOfNeighbourCells,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connectedModePLMNIdentities"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType18, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_SysInfoType18_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SysInfoType18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idleModePLMNIdentities */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* connectedModePLMNIdentities */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType18_specs_1 = {
	sizeof(struct SysInfoType18),
	offsetof(struct SysInfoType18, _asn_ctx),
	asn_MAP_SysInfoType18_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SysInfoType18_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType18 = {
	"SysInfoType18",
	"SysInfoType18",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType18_tags_1,
	sizeof(asn_DEF_SysInfoType18_tags_1)
		/sizeof(asn_DEF_SysInfoType18_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType18_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType18_tags_1)
		/sizeof(asn_DEF_SysInfoType18_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType18_1,
	3,	/* Elements count */
	&asn_SPC_SysInfoType18_specs_1	/* Additional specs */
};

