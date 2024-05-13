/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "2022_E2AP.asn1"
 * 	`asn1c -D ./E2AP/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_GlobalE2node_eNB_ID_H_
#define	_GlobalE2node_eNB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GlobalENB-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GlobalE2node-eNB-ID */
typedef struct GlobalE2node_eNB_ID {
	GlobalENB_ID_t	 global_eNB_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalE2node_eNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalE2node_eNB_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_GlobalE2node_eNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GlobalE2node_eNB_ID_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalE2node_eNB_ID_H_ */
#include <asn_internal.h>
