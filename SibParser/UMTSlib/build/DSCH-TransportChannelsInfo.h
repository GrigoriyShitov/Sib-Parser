/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_DSCH_TransportChannelsInfo_H_
#define	_DSCH_TransportChannelsInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "TransportChannelIdentity.h"
#include "TransportFormatSet.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward definitions */
typedef struct DSCH_TransportChannelsInfo__Member {
	TransportChannelIdentity_t	 dsch_transport_channel_identity;
	TransportFormatSet_t	 dsch_TFS;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DSCH_TransportChannelsInfo__Member;

/* DSCH-TransportChannelsInfo */
typedef struct DSCH_TransportChannelsInfo {
	A_SEQUENCE_OF(DSCH_TransportChannelsInfo__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DSCH_TransportChannelsInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DSCH_TransportChannelsInfo;
extern asn_SET_OF_specifics_t asn_SPC_DSCH_TransportChannelsInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_DSCH_TransportChannelsInfo_1[1];
extern asn_per_constraints_t asn_PER_type_DSCH_TransportChannelsInfo_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DSCH_TransportChannelsInfo_H_ */
#include <asn_internal.h>
