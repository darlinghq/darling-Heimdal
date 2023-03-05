/* Generated from /Users/user/Downloads/darling-Heimdal/lib/hx509/pkcs10.asn1 */
/* Do not edit */

#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "pkcs10_asn1.h"
#include "pkcs10_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_Name = {
	(asn1_type_encode)encode_Name,
	(asn1_type_decode)decode_Name,
	(asn1_type_length)length_Name,
	(asn1_type_copy)copy_Name,
	(asn1_type_release)free_Name,
	sizeof(Name)
};
static const struct asn1_type_func asn1_extern_SubjectPublicKeyInfo = {
	(asn1_type_encode)encode_SubjectPublicKeyInfo,
	(asn1_type_decode)decode_SubjectPublicKeyInfo,
	(asn1_type_length)length_SubjectPublicKeyInfo,
	(asn1_type_copy)copy_SubjectPublicKeyInfo,
	(asn1_type_release)free_SubjectPublicKeyInfo,
	sizeof(SubjectPublicKeyInfo)
};
static const struct asn1_type_func asn1_extern_Attribute = {
	(asn1_type_encode)encode_Attribute,
	(asn1_type_decode)decode_Attribute,
	(asn1_type_length)length_Attribute,
	(asn1_type_copy)copy_Attribute,
	(asn1_type_release)free_Attribute,
	sizeof(Attribute)
};
static const struct asn1_type_func asn1_extern_AlgorithmIdentifier = {
	(asn1_type_encode)encode_AlgorithmIdentifier,
	(asn1_type_decode)decode_AlgorithmIdentifier,
	(asn1_type_length)length_AlgorithmIdentifier,
	(asn1_type_copy)copy_AlgorithmIdentifier,
	(asn1_type_release)free_AlgorithmIdentifier,
	sizeof(AlgorithmIdentifier)
};
extern const struct asn1_template asn1_CertificationRequestInfo[];
/* template_members: CertificationRequestInfo exp exp */
extern const struct asn1_template asn1_CertificationRequestInfo_tag__0[];
/* tsequence: members isstruct: 1 */
/* template_members: CertificationRequestInfo exp exp */
extern const struct asn1_template asn1_CertificationRequestInfo_tag_version_1[];
/* generate_template_type: CertificationRequestInfo_tag_version_1 */
const struct asn1_template asn1_CertificationRequestInfo_tag_version_1[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, NULL }
};
/* template_members: CertificationRequestInfo exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_CertificationRequestInfo_tag_attributes_2[];
extern const struct asn1_template asn1_CertificationRequestInfo_attributes_0[];
/* generate_template_type: CertificationRequestInfo_attributes_0 */
const struct asn1_template asn1_CertificationRequestInfo_attributes_0[] = {
/* 0 */ { 0, sizeof(Attribute), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Attribute}
};
/* generate_template_type: CertificationRequestInfo_tag_attributes_2 */
const struct asn1_template asn1_CertificationRequestInfo_tag_attributes_2[] = {
/* 0 */ { 0, sizeof(struct CertificationRequestInfo), ((void *)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_CertificationRequestInfo_attributes_0 }
};
/* generate_template_type: CertificationRequestInfo_tag__0 */
const struct asn1_template asn1_CertificationRequestInfo_tag__0[] = {
/* 0 */ { 0, sizeof(struct CertificationRequestInfo), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct CertificationRequestInfo, version), asn1_CertificationRequestInfo_tag_version_1 },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct CertificationRequestInfo, subject), &asn1_extern_Name},
/* 3 */ { A1_OP_TYPE_EXTERN , offsetof(struct CertificationRequestInfo, subjectPKInfo), &asn1_extern_SubjectPublicKeyInfo},
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct CertificationRequestInfo, attributes), asn1_CertificationRequestInfo_tag_attributes_2 }
};
/* generate_template_type: CertificationRequestInfo */
const struct asn1_template asn1_CertificationRequestInfo[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(CertificationRequestInfo), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CertificationRequestInfo_tag__0 }
};

int
decode_CertificationRequestInfo(const unsigned char *p, size_t len, CertificationRequestInfo *data, size_t *size)
{
    return _asn1_decode_top(asn1_CertificationRequestInfo, 0|0, p, len, data, size);
}


int
encode_CertificationRequestInfo(unsigned char *p, size_t len, const CertificationRequestInfo *data, size_t *size)
{
    int ret = _asn1_encode(asn1_CertificationRequestInfo, p, len, data, size);
    return ret;
}


size_t
length_CertificationRequestInfo(const CertificationRequestInfo *data)
{
    return _asn1_length(asn1_CertificationRequestInfo, data);
}


void
free_CertificationRequestInfo(CertificationRequestInfo *data)
{
    _asn1_free_top(asn1_CertificationRequestInfo, data);
}


int
copy_CertificationRequestInfo(const CertificationRequestInfo *from, CertificationRequestInfo *to)
{
    return _asn1_copy_top(asn1_CertificationRequestInfo, from, to);
}

extern const struct asn1_template asn1_CertificationRequest[];
/* template_members: CertificationRequest exp exp */
extern const struct asn1_template asn1_CertificationRequest_tag__3[];
/* tsequence: members isstruct: 1 */
/* template_members: CertificationRequest exp exp */
extern const struct asn1_template asn1_CertificationRequest_tag_signature_4[];
/* generate_template_type: CertificationRequest_tag_signature_4 */
const struct asn1_template asn1_CertificationRequest_tag_signature_4[] = {
/* 0 */ { 0, sizeof(CertificationRequest), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: CertificationRequest_tag__3 */
const struct asn1_template asn1_CertificationRequest_tag__3[] = {
/* 0 */ { 0, sizeof(struct CertificationRequest), ((void *)3) },
/* 1 */ { A1_OP_TYPE , offsetof(struct CertificationRequest, certificationRequestInfo), asn1_CertificationRequestInfo },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct CertificationRequest, signatureAlgorithm), &asn1_extern_AlgorithmIdentifier},
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct CertificationRequest, signature), asn1_CertificationRequest_tag_signature_4 }
};
/* generate_template_type: CertificationRequest */
const struct asn1_template asn1_CertificationRequest[] = {
/* 0 */ { 0, sizeof(CertificationRequest), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CertificationRequest_tag__3 }
};

int
decode_CertificationRequest(const unsigned char *p, size_t len, CertificationRequest *data, size_t *size)
{
    return _asn1_decode_top(asn1_CertificationRequest, 0|0, p, len, data, size);
}


int
encode_CertificationRequest(unsigned char *p, size_t len, const CertificationRequest *data, size_t *size)
{
    int ret = _asn1_encode(asn1_CertificationRequest, p, len, data, size);
    return ret;
}


size_t
length_CertificationRequest(const CertificationRequest *data)
{
    return _asn1_length(asn1_CertificationRequest, data);
}


void
free_CertificationRequest(CertificationRequest *data)
{
    _asn1_free_top(asn1_CertificationRequest, data);
}


int
copy_CertificationRequest(const CertificationRequest *from, CertificationRequest *to)
{
    return _asn1_copy_top(asn1_CertificationRequest, from, to);
}

