/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_TDD_PUSCH_UpPTS_r14_H_
#define	_TDD_PUSCH_UpPTS_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TDD_PUSCH_UpPTS_r14_PR {
	TDD_PUSCH_UpPTS_r14_PR_NOTHING,	/* No components present */
	TDD_PUSCH_UpPTS_r14_PR_release,
	TDD_PUSCH_UpPTS_r14_PR_setup
} TDD_PUSCH_UpPTS_r14_PR;
typedef enum TDD_PUSCH_UpPTS_r14__setup__symPUSCH_UpPTS_r14 {
	TDD_PUSCH_UpPTS_r14__setup__symPUSCH_UpPTS_r14_sym1	= 0,
	TDD_PUSCH_UpPTS_r14__setup__symPUSCH_UpPTS_r14_sym2	= 1,
	TDD_PUSCH_UpPTS_r14__setup__symPUSCH_UpPTS_r14_sym3	= 2,
	TDD_PUSCH_UpPTS_r14__setup__symPUSCH_UpPTS_r14_sym4	= 3,
	TDD_PUSCH_UpPTS_r14__setup__symPUSCH_UpPTS_r14_sym5	= 4,
	TDD_PUSCH_UpPTS_r14__setup__symPUSCH_UpPTS_r14_sym6	= 5
} e_TDD_PUSCH_UpPTS_r14__setup__symPUSCH_UpPTS_r14;
typedef enum TDD_PUSCH_UpPTS_r14__setup__dmrs_LessUpPTS_r14 {
	TDD_PUSCH_UpPTS_r14__setup__dmrs_LessUpPTS_r14_true	= 0
} e_TDD_PUSCH_UpPTS_r14__setup__dmrs_LessUpPTS_r14;

/* TDD-PUSCH-UpPTS-r14 */
typedef struct TDD_PUSCH_UpPTS_r14 {
	TDD_PUSCH_UpPTS_r14_PR present;
	union TDD_PUSCH_UpPTS_r14_u {
		NULL_t	 release;
		struct TDD_PUSCH_UpPTS_r14__setup {
			long	*symPUSCH_UpPTS_r14	/* OPTIONAL */;
			long	*dmrs_LessUpPTS_r14	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDD_PUSCH_UpPTS_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_symPUSCH_UpPTS_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dmrs_LessUpPTS_r14_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TDD_PUSCH_UpPTS_r14;
extern asn_CHOICE_specifics_t asn_SPC_TDD_PUSCH_UpPTS_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_TDD_PUSCH_UpPTS_r14_1[2];
extern asn_per_constraints_t asn_PER_type_TDD_PUSCH_UpPTS_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TDD_PUSCH_UpPTS_r14_H_ */
#include <asn_internal.h>