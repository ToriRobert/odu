/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_BearerTypeChange_H_
#define	_BearerTypeChange_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BearerTypeChange {
	BearerTypeChange_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_BearerTypeChange;

/* BearerTypeChange */
typedef long	 BearerTypeChange_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BearerTypeChange;
asn_struct_free_f BearerTypeChange_free;
asn_struct_print_f BearerTypeChange_print;
asn_constr_check_f BearerTypeChange_constraint;
ber_type_decoder_f BearerTypeChange_decode_ber;
der_type_encoder_f BearerTypeChange_encode_der;
xer_type_decoder_f BearerTypeChange_decode_xer;
xer_type_encoder_f BearerTypeChange_encode_xer;
oer_type_decoder_f BearerTypeChange_decode_oer;
oer_type_encoder_f BearerTypeChange_encode_oer;
per_type_decoder_f BearerTypeChange_decode_uper;
per_type_encoder_f BearerTypeChange_encode_uper;
per_type_decoder_f BearerTypeChange_decode_aper;
per_type_encoder_f BearerTypeChange_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _BearerTypeChange_H_ */
#include <asn_internal.h>
