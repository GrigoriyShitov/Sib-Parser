/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SL_SyncConfigNFreq_r13_H_
#define	_SL_SyncConfigNFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-OffsetIndicatorSync-v14xy.h"
#include <NativeEnumerated.h>
#include "SL-CP-Len-r12.h"
#include "SL-OffsetIndicatorSync-r12.h"
#include "SLSSID-r12.h"
#include <constr_SEQUENCE.h>
#include "SL-TxParameters-r12.h"
#include "RSRP-RangeSL-r12.h"
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_SyncConfigNFreq_r13__txParameters_r13__syncTxPeriodic_r13 {
	SL_SyncConfigNFreq_r13__txParameters_r13__syncTxPeriodic_r13_true	= 0
} e_SL_SyncConfigNFreq_r13__txParameters_r13__syncTxPeriodic_r13;
typedef enum SL_SyncConfigNFreq_r13__rxParameters_r13__discSyncWindow_r13 {
	SL_SyncConfigNFreq_r13__rxParameters_r13__discSyncWindow_r13_w1	= 0,
	SL_SyncConfigNFreq_r13__rxParameters_r13__discSyncWindow_r13_w2	= 1
} e_SL_SyncConfigNFreq_r13__rxParameters_r13__discSyncWindow_r13;
typedef enum SL_SyncConfigNFreq_r13__gnss_Sync_r14 {
	SL_SyncConfigNFreq_r13__gnss_Sync_r14_true	= 0
} e_SL_SyncConfigNFreq_r13__gnss_Sync_r14;

/* SL-SyncConfigNFreq-r13 */
typedef struct SL_SyncConfigNFreq_r13 {
	struct SL_SyncConfigNFreq_r13__asyncParameters_r13 {
		SL_CP_Len_r12_t	 syncCP_Len_r13;
		SL_OffsetIndicatorSync_r12_t	 syncOffsetIndicator_r13;
		SLSSID_r12_t	 slssid_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *asyncParameters_r13;
	struct SL_SyncConfigNFreq_r13__txParameters_r13 {
		SL_TxParameters_r12_t	 syncTxParameters_r13;
		RSRP_RangeSL_r12_t	 syncTxThreshIC_r13;
		BIT_STRING_t	*syncInfoReserved_r13	/* OPTIONAL */;
		long	*syncTxPeriodic_r13	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r13;
	struct SL_SyncConfigNFreq_r13__rxParameters_r13 {
		long	 discSyncWindow_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rxParameters_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	SL_OffsetIndicatorSync_v14xy_t	*syncOffsetIndicator_v14xy	/* OPTIONAL */;
	long	*gnss_Sync_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_SyncConfigNFreq_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_syncTxPeriodic_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_discSyncWindow_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_gnss_Sync_r14_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_SyncConfigNFreq_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_SyncConfigNFreq_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_SyncConfigNFreq_r13_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_SyncConfigNFreq_r13_H_ */
#include <asn_internal.h>
