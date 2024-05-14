/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_CPCH_PersistenceLevelsList_H_
#define	_CPCH_PersistenceLevelsList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CPCH_PersistenceLevels;

/* CPCH-PersistenceLevelsList */
typedef struct CPCH_PersistenceLevelsList {
	A_SEQUENCE_OF(struct CPCH_PersistenceLevels) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CPCH_PersistenceLevelsList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CPCH_PersistenceLevelsList;
extern asn_SET_OF_specifics_t asn_SPC_CPCH_PersistenceLevelsList_specs_1;
extern asn_TYPE_member_t asn_MBR_CPCH_PersistenceLevelsList_1[1];
extern asn_per_constraints_t asn_PER_type_CPCH_PersistenceLevelsList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CPCH-PersistenceLevels.h"

#endif	/* _CPCH_PersistenceLevelsList_H_ */
#include <asn_internal.h>