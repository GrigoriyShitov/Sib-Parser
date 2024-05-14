/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_RemovedIntraFreqCellList_H_
#define	_RemovedIntraFreqCellList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "IntraFreqCellID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RemovedIntraFreqCellList_PR {
	RemovedIntraFreqCellList_PR_NOTHING,	/* No components present */
	RemovedIntraFreqCellList_PR_removeAllIntraFreqCells,
	RemovedIntraFreqCellList_PR_removeSomeIntraFreqCells,
	RemovedIntraFreqCellList_PR_removeNoIntraFreqCells
} RemovedIntraFreqCellList_PR;

/* RemovedIntraFreqCellList */
typedef struct RemovedIntraFreqCellList {
	RemovedIntraFreqCellList_PR present;
	union RemovedIntraFreqCellList_u {
		NULL_t	 removeAllIntraFreqCells;
		struct RemovedIntraFreqCellList__removeSomeIntraFreqCells {
			A_SEQUENCE_OF(IntraFreqCellID_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} removeSomeIntraFreqCells;
		NULL_t	 removeNoIntraFreqCells;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RemovedIntraFreqCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RemovedIntraFreqCellList;
extern asn_CHOICE_specifics_t asn_SPC_RemovedIntraFreqCellList_specs_1;
extern asn_TYPE_member_t asn_MBR_RemovedIntraFreqCellList_1[3];
extern asn_per_constraints_t asn_PER_type_RemovedIntraFreqCellList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RemovedIntraFreqCellList_H_ */
#include <asn_internal.h>
