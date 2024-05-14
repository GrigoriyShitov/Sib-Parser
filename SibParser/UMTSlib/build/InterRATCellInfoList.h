/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_InterRATCellInfoList_H_
#define	_InterRATCellInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RemovedInterRATCellList.h"
#include "NewInterRATCellList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellsForInterRATMeasList;

/* InterRATCellInfoList */
typedef struct InterRATCellInfoList {
	RemovedInterRATCellList_t	 removedInterRATCellList;
	NewInterRATCellList_t	 newInterRATCellList;
	struct CellsForInterRATMeasList	*cellsForInterRATMeasList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATCellInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATCellInfoList;
extern asn_SEQUENCE_specifics_t asn_SPC_InterRATCellInfoList_specs_1;
extern asn_TYPE_member_t asn_MBR_InterRATCellInfoList_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellsForInterRATMeasList.h"

#endif	/* _InterRATCellInfoList_H_ */
#include <asn_internal.h>
