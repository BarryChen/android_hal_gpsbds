/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "../supl-triggered-start.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_TriggerParams_H_
#define	_TriggerParams_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PeriodicParams.h"
#include "AreaEventParams.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TriggerParams_PR {
	TriggerParams_PR_NOTHING,	/* No components present */
	TriggerParams_PR_periodicParams,
	TriggerParams_PR_areaEventParams,
	/* Extensions may appear below */
	
} TriggerParams_PR;

/* TriggerParams */
typedef struct TriggerParams {
	TriggerParams_PR present;
	union TriggerParams_u {
		PeriodicParams_t	 periodicParams;
		AreaEventParams_t	 areaEventParams;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TriggerParams_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TriggerParams;

#ifdef __cplusplus
}
#endif

#endif	/* _TriggerParams_H_ */
#include <asn_internal.h>