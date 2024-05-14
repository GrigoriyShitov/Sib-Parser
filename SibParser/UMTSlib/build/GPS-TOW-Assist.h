/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_GPS_TOW_Assist_H_
#define	_GPS_TOW_Assist_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SatID.h"
#include <BIT_STRING.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GPS-TOW-Assist */
typedef struct GPS_TOW_Assist {
	SatID_t	 satID;
	BIT_STRING_t	 tlm_Message;
	BIT_STRING_t	 tlm_Reserved;
	BOOLEAN_t	 alert;
	BOOLEAN_t	 antiSpoof;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GPS_TOW_Assist_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GPS_TOW_Assist;
extern asn_SEQUENCE_specifics_t asn_SPC_GPS_TOW_Assist_specs_1;
extern asn_TYPE_member_t asn_MBR_GPS_TOW_Assist_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _GPS_TOW_Assist_H_ */
#include <asn_internal.h>
