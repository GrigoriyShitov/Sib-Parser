/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_SysInfoType5_v680ext_IEs_H_
#define	_SysInfoType5_v680ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SysInfoType5_v680ext_IEs__hsdpa_CellIndicator {
	SysInfoType5_v680ext_IEs__hsdpa_CellIndicator_hsdpa_CapableCell	= 0
} e_SysInfoType5_v680ext_IEs__hsdpa_CellIndicator;

/* SysInfoType5-v680ext-IEs */
typedef struct SysInfoType5_v680ext_IEs {
	long	*hsdpa_CellIndicator	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType5_v680ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_hsdpa_CellIndicator_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType5_v680ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SysInfoType5_v680ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SysInfoType5_v680ext_IEs_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType5_v680ext_IEs_H_ */
#include <asn_internal.h>
