/* Generated from /Users/andyhyatt/Downloads/Heimdal-498.50.8/lib/hx509/ocsp.asn1 */
/* Do not edit */

#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "ocsp_asn1.h"
#include "ocsp_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_Certificate = {
	(asn1_type_encode)encode_Certificate,
	(asn1_type_decode)decode_Certificate,
	(asn1_type_length)length_Certificate,
	(asn1_type_copy)copy_Certificate,
	(asn1_type_release)free_Certificate,
	sizeof(Certificate)
};
static const struct asn1_type_func asn1_extern_AlgorithmIdentifier = {
	(asn1_type_encode)encode_AlgorithmIdentifier,
	(asn1_type_decode)decode_AlgorithmIdentifier,
	(asn1_type_length)length_AlgorithmIdentifier,
	(asn1_type_copy)copy_AlgorithmIdentifier,
	(asn1_type_release)free_AlgorithmIdentifier,
	sizeof(AlgorithmIdentifier)
};
static const struct asn1_type_func asn1_extern_CRLReason = {
	(asn1_type_encode)encode_CRLReason,
	(asn1_type_decode)decode_CRLReason,
	(asn1_type_length)length_CRLReason,
	(asn1_type_copy)copy_CRLReason,
	(asn1_type_release)free_CRLReason,
	sizeof(CRLReason)
};
static const struct asn1_type_func asn1_extern_Name = {
	(asn1_type_encode)encode_Name,
	(asn1_type_decode)decode_Name,
	(asn1_type_length)length_Name,
	(asn1_type_copy)copy_Name,
	(asn1_type_release)free_Name,
	sizeof(Name)
};
static const struct asn1_type_func asn1_extern_GeneralName = {
	(asn1_type_encode)encode_GeneralName,
	(asn1_type_decode)decode_GeneralName,
	(asn1_type_length)length_GeneralName,
	(asn1_type_copy)copy_GeneralName,
	(asn1_type_release)free_GeneralName,
	sizeof(GeneralName)
};
static const struct asn1_type_func asn1_extern_CertificateSerialNumber = {
	(asn1_type_encode)encode_CertificateSerialNumber,
	(asn1_type_decode)decode_CertificateSerialNumber,
	(asn1_type_length)length_CertificateSerialNumber,
	(asn1_type_copy)copy_CertificateSerialNumber,
	(asn1_type_release)free_CertificateSerialNumber,
	sizeof(CertificateSerialNumber)
};
static const struct asn1_type_func asn1_extern_Extensions = {
	(asn1_type_encode)encode_Extensions,
	(asn1_type_decode)decode_Extensions,
	(asn1_type_length)length_Extensions,
	(asn1_type_copy)copy_Extensions,
	(asn1_type_release)free_Extensions,
	sizeof(Extensions)
};
extern const struct asn1_template asn1_OCSPVersion[];
/* template_members: OCSPVersion exp exp */
extern const struct asn1_template asn1_OCSPVersion_tag__0[];
/* generate_template_type: OCSPVersion_tag__0 */
const struct asn1_template asn1_OCSPVersion_tag__0[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, NULL }
};
/* generate_template_type: OCSPVersion */
const struct asn1_template asn1_OCSPVersion[] = {
/* 0 */ { 0, sizeof(OCSPVersion), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_OCSPVersion_tag__0 }
};

int
decode_OCSPVersion(const unsigned char *p, size_t len, OCSPVersion *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPVersion, 0|0, p, len, data, size);
}


int
encode_OCSPVersion(unsigned char *p, size_t len, const OCSPVersion *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPVersion, p, len, data, size);
    return ret;
}


size_t
length_OCSPVersion(const OCSPVersion *data)
{
    return _asn1_length(asn1_OCSPVersion, data);
}


void
free_OCSPVersion(OCSPVersion *data)
{
    _asn1_free_top(asn1_OCSPVersion, data);
}


int
copy_OCSPVersion(const OCSPVersion *from, OCSPVersion *to)
{
    return _asn1_copy_top(asn1_OCSPVersion, from, to);
}

extern const struct asn1_template asn1_OCSPCertStatus[];
extern const struct asn1_template asn1_OCSPCertStatus_choice_good[];
/* template_members: heim_integer imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_heim_integer_tag__1[];
/* generate_template_type: heim_integer_tag__1 */
const struct asn1_template asn1_heim_integer_tag__1[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)0) },
};
/* generate_template_type: OCSPCertStatus_choice_good */
const struct asn1_template asn1_OCSPCertStatus_choice_good[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, 0, asn1_heim_integer_tag__1 }
};
extern const struct asn1_template asn1_OCSPCertStatus_choice_revoked[];
/* template_members: OCSPCertStatus_revoked imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_OCSPCertStatus_revoked_tag__2[];
/* tsequence: members isstruct: 1 */
/* template_members: OCSPCertStatus_revoked exp exp */
extern const struct asn1_template asn1_OCSPCertStatus_revoked_tag_revocationTime_3[];
/* generate_template_type: OCSPCertStatus_revoked_tag_revocationTime_3 */
const struct asn1_template asn1_OCSPCertStatus_revoked_tag_revocationTime_3[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_GENERALIZED_TIME), 0, NULL }
};
/* template_members: OCSPCertStatus_revoked exp exp */
extern const struct asn1_template asn1_OCSPCertStatus_revoked_tag_revocationReason_4[];
/* generate_template_type: OCSPCertStatus_revoked_tag_revocationReason_4 */
const struct asn1_template asn1_OCSPCertStatus_revoked_tag_revocationReason_4[] = {
/* 0 */ { 0, sizeof(CRLReason), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_CRLReason}
};
/* generate_template_type: OCSPCertStatus_revoked_tag__2 */
const struct asn1_template asn1_OCSPCertStatus_revoked_tag__2[] = {
/* 0 */ { 0, sizeof(struct OCSPCertStatus_revoked), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), offsetof(struct OCSPCertStatus_revoked, revocationTime), asn1_OCSPCertStatus_revoked_tag_revocationTime_3 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPCertStatus_revoked, revocationReason), asn1_OCSPCertStatus_revoked_tag_revocationReason_4 }
};
/* generate_template_type: OCSPCertStatus_choice_revoked */
const struct asn1_template asn1_OCSPCertStatus_choice_revoked[] = {
/* 0 */ { 0, sizeof(struct OCSPCertStatus_revoked), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_IMPLICIT, 0, asn1_OCSPCertStatus_revoked_tag__2 }
};
extern const struct asn1_template asn1_OCSPCertStatus_choice_unknown[];
/* template_members: heim_integer imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_heim_integer_tag__5[];
/* generate_template_type: heim_integer_tag__5 */
/* generate_template_type: OCSPCertStatus_choice_unknown */
const struct asn1_template asn1_OCSPCertStatus_choice_unknown[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_IMPLICIT, 0, asn1_heim_integer_tag__1 }
};
static const struct asn1_template asn1_choice_OCSPCertStatus_0[] = {
/* 0 */ { 0, offsetof(OCSPCertStatus, element), ((void *)3) },
/* 1 */ { choice_OCSPCertStatus_good, offsetof(OCSPCertStatus, u.good), asn1_OCSPCertStatus_choice_good },
/* 2 */ { choice_OCSPCertStatus_revoked, offsetof(OCSPCertStatus, u.revoked), asn1_OCSPCertStatus_choice_revoked },
/* 3 */ { choice_OCSPCertStatus_unknown, offsetof(OCSPCertStatus, u.unknown), asn1_OCSPCertStatus_choice_unknown }
};
/* generate_template_type: OCSPCertStatus */
const struct asn1_template asn1_OCSPCertStatus[] = {
/* 0 */ { 0, sizeof(OCSPCertStatus), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_OCSPCertStatus_0 }
};

int
decode_OCSPCertStatus(const unsigned char *p, size_t len, OCSPCertStatus *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPCertStatus, 0|0, p, len, data, size);
}


int
encode_OCSPCertStatus(unsigned char *p, size_t len, const OCSPCertStatus *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPCertStatus, p, len, data, size);
    return ret;
}


size_t
length_OCSPCertStatus(const OCSPCertStatus *data)
{
    return _asn1_length(asn1_OCSPCertStatus, data);
}


void
free_OCSPCertStatus(OCSPCertStatus *data)
{
    _asn1_free_top(asn1_OCSPCertStatus, data);
}


int
copy_OCSPCertStatus(const OCSPCertStatus *from, OCSPCertStatus *to)
{
    return _asn1_copy_top(asn1_OCSPCertStatus, from, to);
}

extern const struct asn1_template asn1_OCSPCertID[];
/* template_members: OCSPCertID exp exp */
extern const struct asn1_template asn1_OCSPCertID_tag__6[];
/* tsequence: members isstruct: 1 */
/* template_members: OCSPCertID exp exp */
extern const struct asn1_template asn1_OCSPCertID_tag_issuerNameHash_7[];
/* generate_template_type: OCSPCertID_tag_issuerNameHash_7 */
const struct asn1_template asn1_OCSPCertID_tag_issuerNameHash_7[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* template_members: OCSPCertID exp exp */
extern const struct asn1_template asn1_OCSPCertID_tag_issuerKeyHash_8[];
/* generate_template_type: OCSPCertID_tag_issuerKeyHash_8 */
/* generate_template_type: OCSPCertID_tag__6 */
const struct asn1_template asn1_OCSPCertID_tag__6[] = {
/* 0 */ { 0, sizeof(struct OCSPCertID), ((void *)4) },
/* 1 */ { A1_OP_TYPE_EXTERN , offsetof(struct OCSPCertID, hashAlgorithm), &asn1_extern_AlgorithmIdentifier},
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct OCSPCertID, issuerNameHash), asn1_OCSPCertID_tag_issuerNameHash_7 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct OCSPCertID, issuerKeyHash), asn1_OCSPCertID_tag_issuerNameHash_7 },
/* 4 */ { A1_OP_TYPE_EXTERN , offsetof(struct OCSPCertID, serialNumber), &asn1_extern_CertificateSerialNumber}
};
/* generate_template_type: OCSPCertID */
const struct asn1_template asn1_OCSPCertID[] = {
/* 0 */ { 0, sizeof(OCSPCertID), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPCertID_tag__6 }
};

int
decode_OCSPCertID(const unsigned char *p, size_t len, OCSPCertID *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPCertID, 0|0, p, len, data, size);
}


int
encode_OCSPCertID(unsigned char *p, size_t len, const OCSPCertID *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPCertID, p, len, data, size);
    return ret;
}


size_t
length_OCSPCertID(const OCSPCertID *data)
{
    return _asn1_length(asn1_OCSPCertID, data);
}


void
free_OCSPCertID(OCSPCertID *data)
{
    _asn1_free_top(asn1_OCSPCertID, data);
}


int
copy_OCSPCertID(const OCSPCertID *from, OCSPCertID *to)
{
    return _asn1_copy_top(asn1_OCSPCertID, from, to);
}

extern const struct asn1_template asn1_OCSPSingleResponse[];
/* template_members: OCSPSingleResponse exp exp */
extern const struct asn1_template asn1_OCSPSingleResponse_tag__9[];
/* tsequence: members isstruct: 1 */
/* template_members: OCSPSingleResponse exp exp */
extern const struct asn1_template asn1_OCSPSingleResponse_tag_thisUpdate_10[];
/* generate_template_type: OCSPSingleResponse_tag_thisUpdate_10 */
/* template_members: OCSPSingleResponse exp exp */
extern const struct asn1_template asn1_OCSPSingleResponse_tag_nextUpdate_11[];
/* template_members: time_t exp exp */
extern const struct asn1_template asn1_time_t_tag_nextUpdate_12[];
/* generate_template_type: time_t_tag_nextUpdate_12 */
/* generate_template_type: OCSPSingleResponse_tag_nextUpdate_11 */
const struct asn1_template asn1_OCSPSingleResponse_tag_nextUpdate_11[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), 0, asn1_OCSPCertStatus_revoked_tag_revocationTime_3 }
};
/* template_members: OCSPSingleResponse exp exp */
extern const struct asn1_template asn1_OCSPSingleResponse_tag_singleExtensions_13[];
/* generate_template_type: OCSPSingleResponse_tag_singleExtensions_13 */
const struct asn1_template asn1_OCSPSingleResponse_tag_singleExtensions_13[] = {
/* 0 */ { 0, sizeof(Extensions), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Extensions}
};
/* generate_template_type: OCSPSingleResponse_tag__9 */
const struct asn1_template asn1_OCSPSingleResponse_tag__9[] = {
/* 0 */ { 0, sizeof(struct OCSPSingleResponse), ((void *)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct OCSPSingleResponse, certID), asn1_OCSPCertID },
/* 2 */ { A1_OP_TYPE , offsetof(struct OCSPSingleResponse, certStatus), asn1_OCSPCertStatus },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), offsetof(struct OCSPSingleResponse, thisUpdate), asn1_OCSPCertStatus_revoked_tag_revocationTime_3 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPSingleResponse, nextUpdate), asn1_OCSPSingleResponse_tag_nextUpdate_11 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct OCSPSingleResponse, singleExtensions), asn1_OCSPSingleResponse_tag_singleExtensions_13 }
};
/* generate_template_type: OCSPSingleResponse */
const struct asn1_template asn1_OCSPSingleResponse[] = {
/* 0 */ { 0, sizeof(OCSPSingleResponse), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPSingleResponse_tag__9 }
};

int
decode_OCSPSingleResponse(const unsigned char *p, size_t len, OCSPSingleResponse *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPSingleResponse, 0|0, p, len, data, size);
}


int
encode_OCSPSingleResponse(unsigned char *p, size_t len, const OCSPSingleResponse *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPSingleResponse, p, len, data, size);
    return ret;
}


size_t
length_OCSPSingleResponse(const OCSPSingleResponse *data)
{
    return _asn1_length(asn1_OCSPSingleResponse, data);
}


void
free_OCSPSingleResponse(OCSPSingleResponse *data)
{
    _asn1_free_top(asn1_OCSPSingleResponse, data);
}


int
copy_OCSPSingleResponse(const OCSPSingleResponse *from, OCSPSingleResponse *to)
{
    return _asn1_copy_top(asn1_OCSPSingleResponse, from, to);
}

extern const struct asn1_template asn1_OCSPInnerRequest[];
/* template_members: OCSPInnerRequest exp exp */
extern const struct asn1_template asn1_OCSPInnerRequest_tag__14[];
/* tsequence: members isstruct: 1 */
/* template_members: OCSPInnerRequest exp exp */
extern const struct asn1_template asn1_OCSPInnerRequest_tag_singleRequestExtensions_15[];
/* generate_template_type: OCSPInnerRequest_tag_singleRequestExtensions_15 */
/* generate_template_type: OCSPInnerRequest_tag__14 */
const struct asn1_template asn1_OCSPInnerRequest_tag__14[] = {
/* 0 */ { 0, sizeof(struct OCSPInnerRequest), ((void *)2) },
/* 1 */ { A1_OP_TYPE , offsetof(struct OCSPInnerRequest, reqCert), asn1_OCSPCertID },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPInnerRequest, singleRequestExtensions), asn1_OCSPSingleResponse_tag_singleExtensions_13 }
};
/* generate_template_type: OCSPInnerRequest */
const struct asn1_template asn1_OCSPInnerRequest[] = {
/* 0 */ { 0, sizeof(OCSPInnerRequest), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPInnerRequest_tag__14 }
};

int
decode_OCSPInnerRequest(const unsigned char *p, size_t len, OCSPInnerRequest *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPInnerRequest, 0|0, p, len, data, size);
}


int
encode_OCSPInnerRequest(unsigned char *p, size_t len, const OCSPInnerRequest *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPInnerRequest, p, len, data, size);
    return ret;
}


size_t
length_OCSPInnerRequest(const OCSPInnerRequest *data)
{
    return _asn1_length(asn1_OCSPInnerRequest, data);
}


void
free_OCSPInnerRequest(OCSPInnerRequest *data)
{
    _asn1_free_top(asn1_OCSPInnerRequest, data);
}


int
copy_OCSPInnerRequest(const OCSPInnerRequest *from, OCSPInnerRequest *to)
{
    return _asn1_copy_top(asn1_OCSPInnerRequest, from, to);
}

extern const struct asn1_template asn1_OCSPTBSRequest[];
/* template_members: OCSPTBSRequest exp exp */
extern const struct asn1_template asn1_OCSPTBSRequest_tag__16[];
/* tsequence: members isstruct: 1 */
/* template_members: OCSPTBSRequest exp exp */
extern const struct asn1_template asn1_OCSPTBSRequest_tag_version_17[];
/* generate_template_type: OCSPTBSRequest_tag_version_17 */
const struct asn1_template asn1_OCSPTBSRequest_tag_version_17[] = {
/* 0 */ { 0, sizeof(OCSPVersion), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPVersion }
};
/* template_members: OCSPTBSRequest exp exp */
extern const struct asn1_template asn1_OCSPTBSRequest_tag_requestorName_18[];
/* generate_template_type: OCSPTBSRequest_tag_requestorName_18 */
const struct asn1_template asn1_OCSPTBSRequest_tag_requestorName_18[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_GeneralName}
};
/* template_members: OCSPTBSRequest exp exp */
extern const struct asn1_template asn1_OCSPTBSRequest_tag_requestList_19[];
extern const struct asn1_template asn1_OCSPTBSRequest_requestList_0[];
/* generate_template_type: OCSPTBSRequest_requestList_0 */
const struct asn1_template asn1_OCSPTBSRequest_requestList_0[] = {
/* 0 */ { 0, sizeof(OCSPInnerRequest), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPInnerRequest }
};
/* generate_template_type: OCSPTBSRequest_tag_requestList_19 */
const struct asn1_template asn1_OCSPTBSRequest_tag_requestList_19[] = {
/* 0 */ { 0, sizeof(struct OCSPTBSRequest), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_OCSPTBSRequest_requestList_0 }
};
/* template_members: OCSPTBSRequest exp exp */
extern const struct asn1_template asn1_OCSPTBSRequest_tag_requestExtensions_20[];
/* generate_template_type: OCSPTBSRequest_tag_requestExtensions_20 */
/* generate_template_type: OCSPTBSRequest_tag__16 */
const struct asn1_template asn1_OCSPTBSRequest_tag__16[] = {
/* 0 */ { 0, sizeof(struct OCSPTBSRequest), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPTBSRequest, version), asn1_OCSPTBSRequest_tag_version_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct OCSPTBSRequest, requestorName), asn1_OCSPTBSRequest_tag_requestorName_18 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), offsetof(struct OCSPTBSRequest, requestList), asn1_OCSPTBSRequest_tag_requestList_19 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct OCSPTBSRequest, requestExtensions), asn1_OCSPSingleResponse_tag_singleExtensions_13 }
};
/* generate_template_type: OCSPTBSRequest */
const struct asn1_template asn1_OCSPTBSRequest[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(OCSPTBSRequest), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPTBSRequest_tag__16 }
};

int
decode_OCSPTBSRequest(const unsigned char *p, size_t len, OCSPTBSRequest *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPTBSRequest, 0|0, p, len, data, size);
}


int
encode_OCSPTBSRequest(unsigned char *p, size_t len, const OCSPTBSRequest *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPTBSRequest, p, len, data, size);
    return ret;
}


size_t
length_OCSPTBSRequest(const OCSPTBSRequest *data)
{
    return _asn1_length(asn1_OCSPTBSRequest, data);
}


void
free_OCSPTBSRequest(OCSPTBSRequest *data)
{
    _asn1_free_top(asn1_OCSPTBSRequest, data);
}


int
copy_OCSPTBSRequest(const OCSPTBSRequest *from, OCSPTBSRequest *to)
{
    return _asn1_copy_top(asn1_OCSPTBSRequest, from, to);
}

extern const struct asn1_template asn1_OCSPSignature[];
/* template_members: OCSPSignature exp exp */
extern const struct asn1_template asn1_OCSPSignature_tag__21[];
/* tsequence: members isstruct: 1 */
/* template_members: OCSPSignature exp exp */
extern const struct asn1_template asn1_OCSPSignature_tag_signature_22[];
/* generate_template_type: OCSPSignature_tag_signature_22 */
const struct asn1_template asn1_OCSPSignature_tag_signature_22[] = {
/* 0 */ { 0, sizeof(OCSPSignature), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* template_members: OCSPSignature exp exp */
extern const struct asn1_template asn1_OCSPSignature_tag_certs_23[];
/* template_members: OCSPSignature exp exp */
extern const struct asn1_template asn1_OCSPSignature_tag_certs_24[];
extern const struct asn1_template asn1_OCSPSignature_certs_1[];
/* generate_template_type: OCSPSignature_certs_1 */
const struct asn1_template asn1_OCSPSignature_certs_1[] = {
/* 0 */ { 0, sizeof(Certificate), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Certificate}
};
/* generate_template_type: OCSPSignature_tag_certs_24 */
const struct asn1_template asn1_OCSPSignature_tag_certs_24[] = {
/* 0 */ { 0, sizeof(struct OCSPSignature), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_OCSPSignature_certs_1 }
};
/* generate_template_type: OCSPSignature_tag_certs_23 */
const struct asn1_template asn1_OCSPSignature_tag_certs_23[] = {
/* 0 */ { 0, sizeof(struct OCSPSignature), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPSignature_tag_certs_24 }
};
/* generate_template_type: OCSPSignature_tag__21 */
const struct asn1_template asn1_OCSPSignature_tag__21[] = {
/* 0 */ { 0, sizeof(struct OCSPSignature), ((void *)3) },
/* 1 */ { A1_OP_TYPE_EXTERN , offsetof(struct OCSPSignature, signatureAlgorithm), &asn1_extern_AlgorithmIdentifier},
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct OCSPSignature, signature), asn1_OCSPSignature_tag_signature_22 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPSignature, certs), asn1_OCSPSignature_tag_certs_23 }
};
/* generate_template_type: OCSPSignature */
const struct asn1_template asn1_OCSPSignature[] = {
/* 0 */ { 0, sizeof(OCSPSignature), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPSignature_tag__21 }
};

int
decode_OCSPSignature(const unsigned char *p, size_t len, OCSPSignature *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPSignature, 0|0, p, len, data, size);
}


int
encode_OCSPSignature(unsigned char *p, size_t len, const OCSPSignature *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPSignature, p, len, data, size);
    return ret;
}


size_t
length_OCSPSignature(const OCSPSignature *data)
{
    return _asn1_length(asn1_OCSPSignature, data);
}


void
free_OCSPSignature(OCSPSignature *data)
{
    _asn1_free_top(asn1_OCSPSignature, data);
}


int
copy_OCSPSignature(const OCSPSignature *from, OCSPSignature *to)
{
    return _asn1_copy_top(asn1_OCSPSignature, from, to);
}

extern const struct asn1_template asn1_OCSPRequest[];
/* template_members: OCSPRequest exp exp */
extern const struct asn1_template asn1_OCSPRequest_tag__25[];
/* tsequence: members isstruct: 1 */
/* template_members: OCSPRequest exp exp */
extern const struct asn1_template asn1_OCSPRequest_tag_optionalSignature_26[];
/* generate_template_type: OCSPRequest_tag_optionalSignature_26 */
const struct asn1_template asn1_OCSPRequest_tag_optionalSignature_26[] = {
/* 0 */ { 0, sizeof(OCSPSignature), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPSignature }
};
/* generate_template_type: OCSPRequest_tag__25 */
const struct asn1_template asn1_OCSPRequest_tag__25[] = {
/* 0 */ { 0, sizeof(struct OCSPRequest), ((void *)2) },
/* 1 */ { A1_OP_TYPE , offsetof(struct OCSPRequest, tbsRequest), asn1_OCSPTBSRequest },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPRequest, optionalSignature), asn1_OCSPRequest_tag_optionalSignature_26 }
};
/* generate_template_type: OCSPRequest */
const struct asn1_template asn1_OCSPRequest[] = {
/* 0 */ { 0, sizeof(OCSPRequest), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPRequest_tag__25 }
};

int
decode_OCSPRequest(const unsigned char *p, size_t len, OCSPRequest *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPRequest, 0|0, p, len, data, size);
}


int
encode_OCSPRequest(unsigned char *p, size_t len, const OCSPRequest *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPRequest, p, len, data, size);
    return ret;
}


size_t
length_OCSPRequest(const OCSPRequest *data)
{
    return _asn1_length(asn1_OCSPRequest, data);
}


void
free_OCSPRequest(OCSPRequest *data)
{
    _asn1_free_top(asn1_OCSPRequest, data);
}


int
copy_OCSPRequest(const OCSPRequest *from, OCSPRequest *to)
{
    return _asn1_copy_top(asn1_OCSPRequest, from, to);
}

extern const struct asn1_template asn1_OCSPResponseBytes[];
/* template_members: OCSPResponseBytes exp exp */
extern const struct asn1_template asn1_OCSPResponseBytes_tag__27[];
/* tsequence: members isstruct: 1 */
/* template_members: OCSPResponseBytes exp exp */
extern const struct asn1_template asn1_OCSPResponseBytes_tag_responseType_28[];
/* generate_template_type: OCSPResponseBytes_tag_responseType_28 */
const struct asn1_template asn1_OCSPResponseBytes_tag_responseType_28[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* template_members: OCSPResponseBytes exp exp */
extern const struct asn1_template asn1_OCSPResponseBytes_tag_response_29[];
/* generate_template_type: OCSPResponseBytes_tag_response_29 */
/* generate_template_type: OCSPResponseBytes_tag__27 */
const struct asn1_template asn1_OCSPResponseBytes_tag__27[] = {
/* 0 */ { 0, sizeof(struct OCSPResponseBytes), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct OCSPResponseBytes, responseType), asn1_OCSPResponseBytes_tag_responseType_28 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct OCSPResponseBytes, response), asn1_OCSPCertID_tag_issuerNameHash_7 }
};
/* generate_template_type: OCSPResponseBytes */
const struct asn1_template asn1_OCSPResponseBytes[] = {
/* 0 */ { 0, sizeof(OCSPResponseBytes), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPResponseBytes_tag__27 }
};

int
decode_OCSPResponseBytes(const unsigned char *p, size_t len, OCSPResponseBytes *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPResponseBytes, 0|0, p, len, data, size);
}


int
encode_OCSPResponseBytes(unsigned char *p, size_t len, const OCSPResponseBytes *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPResponseBytes, p, len, data, size);
    return ret;
}


size_t
length_OCSPResponseBytes(const OCSPResponseBytes *data)
{
    return _asn1_length(asn1_OCSPResponseBytes, data);
}


void
free_OCSPResponseBytes(OCSPResponseBytes *data)
{
    _asn1_free_top(asn1_OCSPResponseBytes, data);
}


int
copy_OCSPResponseBytes(const OCSPResponseBytes *from, OCSPResponseBytes *to)
{
    return _asn1_copy_top(asn1_OCSPResponseBytes, from, to);
}

extern const struct asn1_template asn1_OCSPResponseStatus[];
/* template_members: OCSPResponseStatus exp exp */
extern const struct asn1_template asn1_OCSPResponseStatus_tag__30[];
/* generate_template_type: OCSPResponseStatus_tag__30 */
/* generate_template_type: OCSPResponseStatus */
const struct asn1_template asn1_OCSPResponseStatus[] = {
/* 0 */ { 0, sizeof(OCSPResponseStatus), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_OCSPVersion_tag__0 }
};

int
decode_OCSPResponseStatus(const unsigned char *p, size_t len, OCSPResponseStatus *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPResponseStatus, 0|0, p, len, data, size);
}


int
encode_OCSPResponseStatus(unsigned char *p, size_t len, const OCSPResponseStatus *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPResponseStatus, p, len, data, size);
    return ret;
}


size_t
length_OCSPResponseStatus(const OCSPResponseStatus *data)
{
    return _asn1_length(asn1_OCSPResponseStatus, data);
}


void
free_OCSPResponseStatus(OCSPResponseStatus *data)
{
    _asn1_free_top(asn1_OCSPResponseStatus, data);
}


int
copy_OCSPResponseStatus(const OCSPResponseStatus *from, OCSPResponseStatus *to)
{
    return _asn1_copy_top(asn1_OCSPResponseStatus, from, to);
}

extern const struct asn1_template asn1_OCSPResponse[];
/* template_members: OCSPResponse exp exp */
extern const struct asn1_template asn1_OCSPResponse_tag__31[];
/* tsequence: members isstruct: 1 */
/* template_members: OCSPResponse exp exp */
extern const struct asn1_template asn1_OCSPResponse_tag_responseBytes_32[];
/* generate_template_type: OCSPResponse_tag_responseBytes_32 */
const struct asn1_template asn1_OCSPResponse_tag_responseBytes_32[] = {
/* 0 */ { 0, sizeof(OCSPResponseBytes), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPResponseBytes }
};
/* generate_template_type: OCSPResponse_tag__31 */
const struct asn1_template asn1_OCSPResponse_tag__31[] = {
/* 0 */ { 0, sizeof(struct OCSPResponse), ((void *)2) },
/* 1 */ { A1_OP_TYPE , offsetof(struct OCSPResponse, responseStatus), asn1_OCSPResponseStatus },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPResponse, responseBytes), asn1_OCSPResponse_tag_responseBytes_32 }
};
/* generate_template_type: OCSPResponse */
const struct asn1_template asn1_OCSPResponse[] = {
/* 0 */ { 0, sizeof(OCSPResponse), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPResponse_tag__31 }
};

int
decode_OCSPResponse(const unsigned char *p, size_t len, OCSPResponse *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPResponse, 0|0, p, len, data, size);
}


int
encode_OCSPResponse(unsigned char *p, size_t len, const OCSPResponse *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPResponse, p, len, data, size);
    return ret;
}


size_t
length_OCSPResponse(const OCSPResponse *data)
{
    return _asn1_length(asn1_OCSPResponse, data);
}


void
free_OCSPResponse(OCSPResponse *data)
{
    _asn1_free_top(asn1_OCSPResponse, data);
}


int
copy_OCSPResponse(const OCSPResponse *from, OCSPResponse *to)
{
    return _asn1_copy_top(asn1_OCSPResponse, from, to);
}

extern const struct asn1_template asn1_OCSPKeyHash[];
/* template_members: OCSPKeyHash exp exp */
extern const struct asn1_template asn1_OCSPKeyHash_tag__33[];
/* generate_template_type: OCSPKeyHash_tag__33 */
/* generate_template_type: OCSPKeyHash */
const struct asn1_template asn1_OCSPKeyHash[] = {
/* 0 */ { 0, sizeof(OCSPKeyHash), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_OCSPCertID_tag_issuerNameHash_7 }
};

int
decode_OCSPKeyHash(const unsigned char *p, size_t len, OCSPKeyHash *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPKeyHash, 0|0, p, len, data, size);
}


int
encode_OCSPKeyHash(unsigned char *p, size_t len, const OCSPKeyHash *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPKeyHash, p, len, data, size);
    return ret;
}


size_t
length_OCSPKeyHash(const OCSPKeyHash *data)
{
    return _asn1_length(asn1_OCSPKeyHash, data);
}


void
free_OCSPKeyHash(OCSPKeyHash *data)
{
    _asn1_free_top(asn1_OCSPKeyHash, data);
}


int
copy_OCSPKeyHash(const OCSPKeyHash *from, OCSPKeyHash *to)
{
    return _asn1_copy_top(asn1_OCSPKeyHash, from, to);
}

extern const struct asn1_template asn1_OCSPResponderID[];
extern const struct asn1_template asn1_OCSPResponderID_choice_byName[];
/* template_members: Name exp exp */
extern const struct asn1_template asn1_Name_tag__34[];
/* generate_template_type: Name_tag__34 */
const struct asn1_template asn1_Name_tag__34[] = {
/* 0 */ { 0, sizeof(Name), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Name}
};
/* generate_template_type: OCSPResponderID_choice_byName */
const struct asn1_template asn1_OCSPResponderID_choice_byName[] = {
/* 0 */ { 0, sizeof(Name), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_Name_tag__34 }
};
extern const struct asn1_template asn1_OCSPResponderID_choice_byKey[];
/* template_members: OCSPKeyHash exp exp */
extern const struct asn1_template asn1_OCSPKeyHash_tag__35[];
/* generate_template_type: OCSPKeyHash_tag__35 */
const struct asn1_template asn1_OCSPKeyHash_tag__35[] = {
/* 0 */ { 0, sizeof(OCSPKeyHash), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPKeyHash }
};
/* generate_template_type: OCSPResponderID_choice_byKey */
const struct asn1_template asn1_OCSPResponderID_choice_byKey[] = {
/* 0 */ { 0, sizeof(OCSPKeyHash), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), 0, asn1_OCSPKeyHash_tag__35 }
};
static const struct asn1_template asn1_choice_OCSPResponderID_1[] = {
/* 0 */ { 0, offsetof(OCSPResponderID, element), ((void *)2) },
/* 1 */ { choice_OCSPResponderID_byName, offsetof(OCSPResponderID, u.byName), asn1_OCSPResponderID_choice_byName },
/* 2 */ { choice_OCSPResponderID_byKey, offsetof(OCSPResponderID, u.byKey), asn1_OCSPResponderID_choice_byKey }
};
/* generate_template_type: OCSPResponderID */
const struct asn1_template asn1_OCSPResponderID[] = {
/* 0 */ { 0, sizeof(OCSPResponderID), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_OCSPResponderID_1 }
};

int
decode_OCSPResponderID(const unsigned char *p, size_t len, OCSPResponderID *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPResponderID, 0|0, p, len, data, size);
}


int
encode_OCSPResponderID(unsigned char *p, size_t len, const OCSPResponderID *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPResponderID, p, len, data, size);
    return ret;
}


size_t
length_OCSPResponderID(const OCSPResponderID *data)
{
    return _asn1_length(asn1_OCSPResponderID, data);
}


void
free_OCSPResponderID(OCSPResponderID *data)
{
    _asn1_free_top(asn1_OCSPResponderID, data);
}


int
copy_OCSPResponderID(const OCSPResponderID *from, OCSPResponderID *to)
{
    return _asn1_copy_top(asn1_OCSPResponderID, from, to);
}

extern const struct asn1_template asn1_OCSPResponseData[];
/* template_members: OCSPResponseData exp exp */
extern const struct asn1_template asn1_OCSPResponseData_tag__36[];
/* tsequence: members isstruct: 1 */
/* template_members: OCSPResponseData exp exp */
extern const struct asn1_template asn1_OCSPResponseData_tag_version_37[];
/* generate_template_type: OCSPResponseData_tag_version_37 */
/* template_members: OCSPResponseData exp exp */
extern const struct asn1_template asn1_OCSPResponseData_tag_producedAt_38[];
/* generate_template_type: OCSPResponseData_tag_producedAt_38 */
/* template_members: OCSPResponseData exp exp */
extern const struct asn1_template asn1_OCSPResponseData_tag_responses_39[];
extern const struct asn1_template asn1_OCSPResponseData_responses_2[];
/* generate_template_type: OCSPResponseData_responses_2 */
const struct asn1_template asn1_OCSPResponseData_responses_2[] = {
/* 0 */ { 0, sizeof(OCSPSingleResponse), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPSingleResponse }
};
/* generate_template_type: OCSPResponseData_tag_responses_39 */
const struct asn1_template asn1_OCSPResponseData_tag_responses_39[] = {
/* 0 */ { 0, sizeof(struct OCSPResponseData), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_OCSPResponseData_responses_2 }
};
/* template_members: OCSPResponseData exp exp */
extern const struct asn1_template asn1_OCSPResponseData_tag_responseExtensions_40[];
/* generate_template_type: OCSPResponseData_tag_responseExtensions_40 */
/* generate_template_type: OCSPResponseData_tag__36 */
const struct asn1_template asn1_OCSPResponseData_tag__36[] = {
/* 0 */ { 0, sizeof(struct OCSPResponseData), ((void *)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPResponseData, version), asn1_OCSPTBSRequest_tag_version_17 },
/* 2 */ { A1_OP_TYPE , offsetof(struct OCSPResponseData, responderID), asn1_OCSPResponderID },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), offsetof(struct OCSPResponseData, producedAt), asn1_OCSPCertStatus_revoked_tag_revocationTime_3 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), offsetof(struct OCSPResponseData, responses), asn1_OCSPResponseData_tag_responses_39 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct OCSPResponseData, responseExtensions), asn1_OCSPSingleResponse_tag_singleExtensions_13 }
};
/* generate_template_type: OCSPResponseData */
const struct asn1_template asn1_OCSPResponseData[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(OCSPResponseData), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPResponseData_tag__36 }
};

int
decode_OCSPResponseData(const unsigned char *p, size_t len, OCSPResponseData *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPResponseData, 0|0, p, len, data, size);
}


int
encode_OCSPResponseData(unsigned char *p, size_t len, const OCSPResponseData *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPResponseData, p, len, data, size);
    return ret;
}


size_t
length_OCSPResponseData(const OCSPResponseData *data)
{
    return _asn1_length(asn1_OCSPResponseData, data);
}


void
free_OCSPResponseData(OCSPResponseData *data)
{
    _asn1_free_top(asn1_OCSPResponseData, data);
}


int
copy_OCSPResponseData(const OCSPResponseData *from, OCSPResponseData *to)
{
    return _asn1_copy_top(asn1_OCSPResponseData, from, to);
}

extern const struct asn1_template asn1_OCSPBasicOCSPResponse[];
/* template_members: OCSPBasicOCSPResponse exp exp */
extern const struct asn1_template asn1_OCSPBasicOCSPResponse_tag__41[];
/* tsequence: members isstruct: 1 */
/* template_members: OCSPBasicOCSPResponse exp exp */
extern const struct asn1_template asn1_OCSPBasicOCSPResponse_tag_signature_42[];
/* generate_template_type: OCSPBasicOCSPResponse_tag_signature_42 */
const struct asn1_template asn1_OCSPBasicOCSPResponse_tag_signature_42[] = {
/* 0 */ { 0, sizeof(OCSPBasicOCSPResponse), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* template_members: OCSPBasicOCSPResponse exp exp */
extern const struct asn1_template asn1_OCSPBasicOCSPResponse_tag_certs_43[];
/* template_members: OCSPBasicOCSPResponse exp exp */
extern const struct asn1_template asn1_OCSPBasicOCSPResponse_tag_certs_44[];
extern const struct asn1_template asn1_OCSPBasicOCSPResponse_certs_3[];
/* generate_template_type: OCSPBasicOCSPResponse_certs_3 */
/* generate_template_type: OCSPBasicOCSPResponse_tag_certs_44 */
const struct asn1_template asn1_OCSPBasicOCSPResponse_tag_certs_44[] = {
/* 0 */ { 0, sizeof(struct OCSPBasicOCSPResponse), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_OCSPSignature_certs_1 }
};
/* generate_template_type: OCSPBasicOCSPResponse_tag_certs_43 */
const struct asn1_template asn1_OCSPBasicOCSPResponse_tag_certs_43[] = {
/* 0 */ { 0, sizeof(struct OCSPBasicOCSPResponse), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPBasicOCSPResponse_tag_certs_44 }
};
/* generate_template_type: OCSPBasicOCSPResponse_tag__41 */
const struct asn1_template asn1_OCSPBasicOCSPResponse_tag__41[] = {
/* 0 */ { 0, sizeof(struct OCSPBasicOCSPResponse), ((void *)4) },
/* 1 */ { A1_OP_TYPE , offsetof(struct OCSPBasicOCSPResponse, tbsResponseData), asn1_OCSPResponseData },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct OCSPBasicOCSPResponse, signatureAlgorithm), &asn1_extern_AlgorithmIdentifier},
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct OCSPBasicOCSPResponse, signature), asn1_OCSPBasicOCSPResponse_tag_signature_42 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPBasicOCSPResponse, certs), asn1_OCSPBasicOCSPResponse_tag_certs_43 }
};
/* generate_template_type: OCSPBasicOCSPResponse */
const struct asn1_template asn1_OCSPBasicOCSPResponse[] = {
/* 0 */ { 0, sizeof(OCSPBasicOCSPResponse), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPBasicOCSPResponse_tag__41 }
};

int
decode_OCSPBasicOCSPResponse(const unsigned char *p, size_t len, OCSPBasicOCSPResponse *data, size_t *size)
{
    return _asn1_decode_top(asn1_OCSPBasicOCSPResponse, 0|0, p, len, data, size);
}


int
encode_OCSPBasicOCSPResponse(unsigned char *p, size_t len, const OCSPBasicOCSPResponse *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OCSPBasicOCSPResponse, p, len, data, size);
    return ret;
}


size_t
length_OCSPBasicOCSPResponse(const OCSPBasicOCSPResponse *data)
{
    return _asn1_length(asn1_OCSPBasicOCSPResponse, data);
}


void
free_OCSPBasicOCSPResponse(OCSPBasicOCSPResponse *data)
{
    _asn1_free_top(asn1_OCSPBasicOCSPResponse, data);
}


int
copy_OCSPBasicOCSPResponse(const OCSPBasicOCSPResponse *from, OCSPBasicOCSPResponse *to)
{
    return _asn1_copy_top(asn1_OCSPBasicOCSPResponse, from, to);
}

static unsigned oid_id_pkix_ocsp_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 48, 1 };
const heim_oid asn1_oid_id_pkix_ocsp = { 9, oid_id_pkix_ocsp_variable_num };

static unsigned oid_id_pkix_ocsp_basic_variable_num[10] =  {1, 3, 6, 1, 5, 5, 7, 48, 1, 1 };
const heim_oid asn1_oid_id_pkix_ocsp_basic = { 10, oid_id_pkix_ocsp_basic_variable_num };

static unsigned oid_id_pkix_ocsp_nonce_variable_num[10] =  {1, 3, 6, 1, 5, 5, 7, 48, 1, 2 };
const heim_oid asn1_oid_id_pkix_ocsp_nonce = { 10, oid_id_pkix_ocsp_nonce_variable_num };

