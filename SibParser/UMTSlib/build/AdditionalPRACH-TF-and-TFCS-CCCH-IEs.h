/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_AdditionalPRACH_TF_and_TFCS_CCCH_IEs_H_
#define	_AdditionalPRACH_TF_and_TFCS_CCCH_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PowerOffsetInformation.h"
#include "DynamicTFInformationCCCH.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AdditionalPRACH-TF-and-TFCS-CCCH-IEs */
typedef struct AdditionalPRACH_TF_and_TFCS_CCCH_IEs {
	PowerOffsetInformation_t	 powerOffsetInformation;
	DynamicTFInformationCCCH_t	 dynamicTFInformationCCCH;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalPRACH_TF_and_TFCS_CCCH_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalPRACH_TF_and_TFCS_CCCH_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_AdditionalPRACH_TF_and_TFCS_CCCH_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_AdditionalPRACH_TF_and_TFCS_CCCH_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _AdditionalPRACH_TF_and_TFCS_CCCH_IEs_H_ */
#include <asn_internal.h>