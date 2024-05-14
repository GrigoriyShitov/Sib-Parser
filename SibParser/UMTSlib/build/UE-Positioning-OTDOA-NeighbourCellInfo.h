/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names -pdu=auto`
 */

#ifndef	_UE_Positioning_OTDOA_NeighbourCellInfo_H_
#define	_UE_Positioning_OTDOA_NeighbourCellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SFN-SFN-RelTimeDifference1.h"
#include "SFN-SFN-Drift.h"
#include "OTDOA-SearchWindowSize.h"
#include "PrimaryCPICH-Info.h"
#include <constr_SEQUENCE.h>
#include "CellAndChannelIdentity.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo_PR {
	UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo_PR_NOTHING,	/* No components present */
	UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo_PR_fdd,
	UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo_PR_tdd
} UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo_PR;
typedef enum UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode_PR {
	UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode_PR_NOTHING,	/* No components present */
	UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode_PR_ueBased,
	UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode_PR_ueAssisted
} UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode_PR;

/* Forward declarations */
struct FrequencyInfo;
struct UE_Positioning_IPDL_Parameters;

/* UE-Positioning-OTDOA-NeighbourCellInfo */
typedef struct UE_Positioning_OTDOA_NeighbourCellInfo {
	struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo {
		UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo_PR present;
		union UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo_u {
			struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo__fdd {
				PrimaryCPICH_Info_t	 primaryCPICH_Info;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo__tdd {
				CellAndChannelIdentity_t	 cellAndChannelIdentity;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	struct UE_Positioning_IPDL_Parameters	*ue_positioning_IPDL_Paremeters	/* OPTIONAL */;
	SFN_SFN_RelTimeDifference1_t	 sfn_SFN_RelTimeDifference;
	SFN_SFN_Drift_t	*sfn_SFN_Drift	/* OPTIONAL */;
	OTDOA_SearchWindowSize_t	 searchWindowSize;
	struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode {
		UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode_PR present;
		union UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode_u {
			struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode__ueBased {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ueBased;
			struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode__ueAssisted {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ueAssisted;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} positioningMode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_OTDOA_NeighbourCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_NeighbourCellInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_OTDOA_NeighbourCellInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_OTDOA_NeighbourCellInfo_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FrequencyInfo.h"
#include "UE-Positioning-IPDL-Parameters.h"

#endif	/* _UE_Positioning_OTDOA_NeighbourCellInfo_H_ */
#include <asn_internal.h>
