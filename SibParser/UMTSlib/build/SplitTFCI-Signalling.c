/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#include "SplitTFCI-Signalling.h"

static int
memb_tfci_Field2_Length_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_tfci_Field2_Length_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..10) */,
	-1};
static asn_per_constraints_t asn_PER_memb_tfci_Field2_Length_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (1..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SplitTFCI_Signalling_1[] = {
	{ ATF_POINTER, 4, offsetof(struct SplitTFCI_Signalling, splitType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SplitType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"splitType"
		},
	{ ATF_POINTER, 3, offsetof(struct SplitTFCI_Signalling, tfci_Field2_Length),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_tfci_Field2_Length_constr_3, &asn_PER_memb_tfci_Field2_Length_constr_3,  memb_tfci_Field2_Length_constraint_1 },
		0, 0, /* No default value */
		"tfci-Field2-Length"
		},
	{ ATF_POINTER, 2, offsetof(struct SplitTFCI_Signalling, tfci_Field1_Information),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ExplicitTFCS_Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tfci-Field1-Information"
		},
	{ ATF_POINTER, 1, offsetof(struct SplitTFCI_Signalling, tfci_Field2_Information),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TFCI_Field2_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tfci-Field2-Information"
		},
};
static const int asn_MAP_SplitTFCI_Signalling_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SplitTFCI_Signalling_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SplitTFCI_Signalling_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* splitType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tfci-Field2-Length */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tfci-Field1-Information */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* tfci-Field2-Information */
};
asn_SEQUENCE_specifics_t asn_SPC_SplitTFCI_Signalling_specs_1 = {
	sizeof(struct SplitTFCI_Signalling),
	offsetof(struct SplitTFCI_Signalling, _asn_ctx),
	asn_MAP_SplitTFCI_Signalling_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SplitTFCI_Signalling_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SplitTFCI_Signalling = {
	"SplitTFCI-Signalling",
	"SplitTFCI-Signalling",
	&asn_OP_SEQUENCE,
	asn_DEF_SplitTFCI_Signalling_tags_1,
	sizeof(asn_DEF_SplitTFCI_Signalling_tags_1)
		/sizeof(asn_DEF_SplitTFCI_Signalling_tags_1[0]), /* 1 */
	asn_DEF_SplitTFCI_Signalling_tags_1,	/* Same as above */
	sizeof(asn_DEF_SplitTFCI_Signalling_tags_1)
		/sizeof(asn_DEF_SplitTFCI_Signalling_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SplitTFCI_Signalling_1,
	4,	/* Elements count */
	&asn_SPC_SplitTFCI_Signalling_specs_1	/* Additional specs */
};
