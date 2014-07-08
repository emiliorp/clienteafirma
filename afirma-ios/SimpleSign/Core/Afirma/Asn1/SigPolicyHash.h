/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "SIGNEDDATA"
 * 	found in "SIGNEDDATA.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_SigPolicyHash_H_
#define	_SigPolicyHash_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OtherHashAlgAndValue.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SigPolicyHash */
typedef OtherHashAlgAndValue_t	 SigPolicyHash_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SigPolicyHash;
asn_struct_free_f SigPolicyHash_free;
asn_struct_print_f SigPolicyHash_print;
asn_constr_check_f SigPolicyHash_constraint;
ber_type_decoder_f SigPolicyHash_decode_ber;
der_type_encoder_f SigPolicyHash_encode_der;
xer_type_decoder_f SigPolicyHash_decode_xer;
xer_type_encoder_f SigPolicyHash_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _SigPolicyHash_H_ */