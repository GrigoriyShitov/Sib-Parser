/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_MappingFunctionParameter_H_
#define	_MappingFunctionParameter_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MappingFunctionType.h"
#include "MapParameter.h"
#include "UpperLimit.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MappingFunctionParameter */
typedef struct MappingFunctionParameter {
	MappingFunctionType_t	 functionType;
	MapParameter_t	*mapParameter1	/* OPTIONAL */;
	MapParameter_t	 mapParameter2;
	UpperLimit_t	*upperLimit	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MappingFunctionParameter_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MappingFunctionParameter;
extern asn_SEQUENCE_specifics_t asn_SPC_MappingFunctionParameter_specs_1;
extern asn_TYPE_member_t asn_MBR_MappingFunctionParameter_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MappingFunctionParameter_H_ */
#include <asn_internal.h>
