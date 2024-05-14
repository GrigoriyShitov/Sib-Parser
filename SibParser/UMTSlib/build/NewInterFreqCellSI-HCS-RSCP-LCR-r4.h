/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_NewInterFreqCellSI_HCS_RSCP_LCR_r4_H_
#define	_NewInterFreqCellSI_HCS_RSCP_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCellID.h"
#include "CellInfoSI-HCS-RSCP-LCR-r4.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FrequencyInfo;

/* NewInterFreqCellSI-HCS-RSCP-LCR-r4 */
typedef struct NewInterFreqCellSI_HCS_RSCP_LCR_r4 {
	InterFreqCellID_t	*interFreqCellID	/* OPTIONAL */;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	CellInfoSI_HCS_RSCP_LCR_r4_t	 cellInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewInterFreqCellSI_HCS_RSCP_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewInterFreqCellSI_HCS_RSCP_LCR_r4;
extern asn_SEQUENCE_specifics_t asn_SPC_NewInterFreqCellSI_HCS_RSCP_LCR_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_NewInterFreqCellSI_HCS_RSCP_LCR_r4_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FrequencyInfo.h"

#endif	/* _NewInterFreqCellSI_HCS_RSCP_LCR_r4_H_ */
#include <asn_internal.h>
