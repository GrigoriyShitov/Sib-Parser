/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_AntennaInfoDedicated_v14xy_H_
#define	_AntennaInfoDedicated_v14xy_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AntennaInfoDedicated_v14xy__ce_ue_TxAntennaSelection_config_r14 {
	AntennaInfoDedicated_v14xy__ce_ue_TxAntennaSelection_config_r14_on	= 0
} e_AntennaInfoDedicated_v14xy__ce_ue_TxAntennaSelection_config_r14;

/* AntennaInfoDedicated-v14xy */
typedef struct AntennaInfoDedicated_v14xy {
	long	*ce_ue_TxAntennaSelection_config_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoDedicated_v14xy_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_ue_TxAntennaSelection_config_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicated_v14xy;

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoDedicated_v14xy_H_ */
#include <asn_internal.h>