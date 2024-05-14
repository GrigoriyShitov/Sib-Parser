/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_PDSCH_Info_LCR_r4_H_
#define	_PDSCH_Info_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TFCS-IdentityPlain.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CommonTimeslotInfo;
struct DownlinkTimeslotsCodes_LCR_r4;

/* PDSCH-Info-LCR-r4 */
typedef struct PDSCH_Info_LCR_r4 {
	TFCS_IdentityPlain_t	*tfcs_ID	/* DEFAULT 1 */;
	struct CommonTimeslotInfo	*commonTimeslotInfo	/* OPTIONAL */;
	struct DownlinkTimeslotsCodes_LCR_r4	*pdsch_TimeslotsCodes	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_Info_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_Info_LCR_r4;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_Info_LCR_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_Info_LCR_r4_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CommonTimeslotInfo.h"
#include "DownlinkTimeslotsCodes-LCR-r4.h"

#endif	/* _PDSCH_Info_LCR_r4_H_ */
#include <asn_internal.h>