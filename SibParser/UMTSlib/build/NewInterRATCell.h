/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_NewInterRATCell_H_
#define	_NewInterRATCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterRATCellID.h"
#include <NULL.h>
#include "InterRATCellIndividualOffset.h"
#include "BSIC.h"
#include "Frequency-Band.h"
#include "BCCH-ARFCN.h"
#include <constr_SEQUENCE.h>
#include "IS-2000SpecificMeasInfo.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NewInterRATCell__technologySpecificInfo_PR {
	NewInterRATCell__technologySpecificInfo_PR_NOTHING,	/* No components present */
	NewInterRATCell__technologySpecificInfo_PR_gsm,
	NewInterRATCell__technologySpecificInfo_PR_is_2000,
	NewInterRATCell__technologySpecificInfo_PR_absent,
	NewInterRATCell__technologySpecificInfo_PR_spare1
} NewInterRATCell__technologySpecificInfo_PR;

/* Forward declarations */
struct CellSelectReselectInfoSIB_11_12;

/* NewInterRATCell */
typedef struct NewInterRATCell {
	InterRATCellID_t	*interRATCellID	/* OPTIONAL */;
	struct NewInterRATCell__technologySpecificInfo {
		NewInterRATCell__technologySpecificInfo_PR present;
		union NewInterRATCell__technologySpecificInfo_u {
			struct NewInterRATCell__technologySpecificInfo__gsm {
				struct CellSelectReselectInfoSIB_11_12	*cellSelectionReselectionInfo	/* OPTIONAL */;
				InterRATCellIndividualOffset_t	 interRATCellIndividualOffset;
				BSIC_t	 bsic;
				Frequency_Band_t	 frequency_band;
				BCCH_ARFCN_t	 bcch_ARFCN;
				NULL_t	*dummy	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} gsm;
			struct NewInterRATCell__technologySpecificInfo__is_2000 {
				IS_2000SpecificMeasInfo_t	 is_2000SpecificMeasInfo;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} is_2000;
			NULL_t	 absent;
			NULL_t	 spare1;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} technologySpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewInterRATCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewInterRATCell;
extern asn_SEQUENCE_specifics_t asn_SPC_NewInterRATCell_specs_1;
extern asn_TYPE_member_t asn_MBR_NewInterRATCell_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellSelectReselectInfoSIB-11-12.h"

#endif	/* _NewInterRATCell_H_ */
#include <asn_internal.h>
