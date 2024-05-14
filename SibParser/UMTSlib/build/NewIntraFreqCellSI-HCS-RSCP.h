/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_NewIntraFreqCellSI_HCS_RSCP_H_
#define	_NewIntraFreqCellSI_HCS_RSCP_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqCellID.h"
#include "CellInfoSI-HCS-RSCP.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NewIntraFreqCellSI-HCS-RSCP */
typedef struct NewIntraFreqCellSI_HCS_RSCP {
	IntraFreqCellID_t	*intraFreqCellID	/* OPTIONAL */;
	CellInfoSI_HCS_RSCP_t	 cellInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewIntraFreqCellSI_HCS_RSCP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewIntraFreqCellSI_HCS_RSCP;
extern asn_SEQUENCE_specifics_t asn_SPC_NewIntraFreqCellSI_HCS_RSCP_specs_1;
extern asn_TYPE_member_t asn_MBR_NewIntraFreqCellSI_HCS_RSCP_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NewIntraFreqCellSI_HCS_RSCP_H_ */
#include <asn_internal.h>
