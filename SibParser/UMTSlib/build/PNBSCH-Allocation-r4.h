/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_PNBSCH_Allocation_r4_H_
#define	_PNBSCH_Allocation_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod {
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c2	= 0,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c3	= 1,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c4	= 2,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c5	= 3,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c6	= 4,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c7	= 5,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c8	= 6,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c9	= 7,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c10	= 8,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c12	= 9,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c14	= 10,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c16	= 11,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c18	= 12,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c20	= 13,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c24	= 14,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c28	= 15,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c32	= 16,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c36	= 17,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c40	= 18,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c48	= 19,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c56	= 20,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c64	= 21,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c72	= 22,
	PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod_c80	= 23
} e_PNBSCH_Allocation_r4__numberOfRepetitionsPerSFNPeriod;

/* PNBSCH-Allocation-r4 */
typedef struct PNBSCH_Allocation_r4 {
	long	 numberOfRepetitionsPerSFNPeriod;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PNBSCH_Allocation_r4_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_numberOfRepetitionsPerSFNPeriod_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PNBSCH_Allocation_r4;
extern asn_SEQUENCE_specifics_t asn_SPC_PNBSCH_Allocation_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_PNBSCH_Allocation_r4_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PNBSCH_Allocation_r4_H_ */
#include <asn_internal.h>
