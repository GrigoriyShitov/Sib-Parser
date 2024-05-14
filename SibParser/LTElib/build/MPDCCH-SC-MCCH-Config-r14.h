/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_MPDCCH_SC_MCCH_Config_r14_H_
#define	_MPDCCH_SC_MCCH_Config_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MPDCCH_SC_MCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14 {
	MPDCCH_SC_MCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r1	= 0,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r2	= 1,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r4	= 2,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r8	= 3,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r16	= 4,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r32	= 5,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r64	= 6,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r128	= 7,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r256	= 8
} e_MPDCCH_SC_MCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14;
typedef enum MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR {
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR_NOTHING,	/* No components present */
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR_fdd_r14,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR_tdd_r14
} MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR;
typedef enum MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14 {
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v1	= 0,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v1dot5	= 1,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v2	= 2,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v2dot5	= 3,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v4	= 4,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v5	= 5,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v8	= 6,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v10	= 7
} e_MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14;
typedef enum MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14 {
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v1	= 0,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v2	= 1,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v4	= 2,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v5	= 3,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v8	= 4,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v10	= 5,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v20	= 6
} e_MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14;
typedef enum MPDCCH_SC_MCCH_Config_r14__mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14 {
	MPDCCH_SC_MCCH_Config_r14__mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14_off	= 0,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14_ce_ModeA	= 1,
	MPDCCH_SC_MCCH_Config_r14__mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14_ce_ModeB	= 2
} e_MPDCCH_SC_MCCH_Config_r14__mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14;

/* MPDCCH-SC-MCCH-Config-r14 */
typedef struct MPDCCH_SC_MCCH_Config_r14 {
	long	*mpdcch_Narrowband_SC_MCCH_r14	/* OPTIONAL */;
	long	*mpdcch_NumRepetition_SC_MCCH_r14	/* OPTIONAL */;
	struct MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14 {
		MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR present;
		union MPDCCH_SC_MCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_u {
			long	 fdd_r14;
			long	 tdd_r14;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mpdcch_StartSF_SC_MCCH_r14;
	long	 mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MPDCCH_SC_MCCH_Config_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mpdcch_NumRepetition_SC_MCCH_r14_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_fdd_r14_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tdd_r14_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14_31;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MPDCCH_SC_MCCH_Config_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_MPDCCH_SC_MCCH_Config_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MPDCCH_SC_MCCH_Config_r14_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MPDCCH_SC_MCCH_Config_r14_H_ */
#include <asn_internal.h>