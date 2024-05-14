/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_CPCH_PersistenceLevels_H_
#define	_CPCH_PersistenceLevels_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CPCH-SetID.h"
#include "DynamicPersistenceLevelTF-List.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CPCH-PersistenceLevels */
typedef struct CPCH_PersistenceLevels {
	CPCH_SetID_t	 cpch_SetID;
	DynamicPersistenceLevelTF_List_t	 dynamicPersistenceLevelTF_List;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CPCH_PersistenceLevels_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CPCH_PersistenceLevels;
extern asn_SEQUENCE_specifics_t asn_SPC_CPCH_PersistenceLevels_specs_1;
extern asn_TYPE_member_t asn_MBR_CPCH_PersistenceLevels_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CPCH_PersistenceLevels_H_ */
#include <asn_internal.h>
