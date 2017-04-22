/* Generated from /Users/andyhyatt/Downloads/Heimdal-498.50.8/lib/asn1/pkinit.asn1 */
/* Do not edit */

#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "pkinit_asn1.h"
#include "pkinit_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_EncryptionKey = {
	(asn1_type_encode)encode_EncryptionKey,
	(asn1_type_decode)decode_EncryptionKey,
	(asn1_type_length)length_EncryptionKey,
	(asn1_type_copy)copy_EncryptionKey,
	(asn1_type_release)free_EncryptionKey,
	sizeof(EncryptionKey)
};
static const struct asn1_type_func asn1_extern_PrincipalName = {
	(asn1_type_encode)encode_PrincipalName,
	(asn1_type_decode)decode_PrincipalName,
	(asn1_type_length)length_PrincipalName,
	(asn1_type_copy)copy_PrincipalName,
	(asn1_type_release)free_PrincipalName,
	sizeof(PrincipalName)
};
static const struct asn1_type_func asn1_extern_Realm = {
	(asn1_type_encode)encode_Realm,
	(asn1_type_decode)decode_Realm,
	(asn1_type_length)length_Realm,
	(asn1_type_copy)copy_Realm,
	(asn1_type_release)free_Realm,
	sizeof(Realm)
};
static const struct asn1_type_func asn1_extern_KerberosTime = {
	(asn1_type_encode)encode_KerberosTime,
	(asn1_type_decode)decode_KerberosTime,
	(asn1_type_length)length_KerberosTime,
	(asn1_type_copy)copy_KerberosTime,
	(asn1_type_release)free_KerberosTime,
	sizeof(KerberosTime)
};
static const struct asn1_type_func asn1_extern_Checksum = {
	(asn1_type_encode)encode_Checksum,
	(asn1_type_decode)decode_Checksum,
	(asn1_type_length)length_Checksum,
	(asn1_type_copy)copy_Checksum,
	(asn1_type_release)free_Checksum,
	sizeof(Checksum)
};
static const struct asn1_type_func asn1_extern_Ticket = {
	(asn1_type_encode)encode_Ticket,
	(asn1_type_decode)decode_Ticket,
	(asn1_type_length)length_Ticket,
	(asn1_type_copy)copy_Ticket,
	(asn1_type_release)free_Ticket,
	sizeof(Ticket)
};
static const struct asn1_type_func asn1_extern_IssuerAndSerialNumber = {
	(asn1_type_encode)encode_IssuerAndSerialNumber,
	(asn1_type_decode)decode_IssuerAndSerialNumber,
	(asn1_type_length)length_IssuerAndSerialNumber,
	(asn1_type_copy)copy_IssuerAndSerialNumber,
	(asn1_type_release)free_IssuerAndSerialNumber,
	sizeof(IssuerAndSerialNumber)
};
static const struct asn1_type_func asn1_extern_SubjectPublicKeyInfo = {
	(asn1_type_encode)encode_SubjectPublicKeyInfo,
	(asn1_type_decode)decode_SubjectPublicKeyInfo,
	(asn1_type_length)length_SubjectPublicKeyInfo,
	(asn1_type_copy)copy_SubjectPublicKeyInfo,
	(asn1_type_release)free_SubjectPublicKeyInfo,
	sizeof(SubjectPublicKeyInfo)
};
static const struct asn1_type_func asn1_extern_AlgorithmIdentifier = {
	(asn1_type_encode)encode_AlgorithmIdentifier,
	(asn1_type_decode)decode_AlgorithmIdentifier,
	(asn1_type_length)length_AlgorithmIdentifier,
	(asn1_type_copy)copy_AlgorithmIdentifier,
	(asn1_type_release)free_AlgorithmIdentifier,
	sizeof(AlgorithmIdentifier)
};
static const struct asn1_type_func asn1_extern_heim_any = {
	(asn1_type_encode)encode_heim_any,
	(asn1_type_decode)decode_heim_any,
	(asn1_type_length)length_heim_any,
	(asn1_type_copy)copy_heim_any,
	(asn1_type_release)free_heim_any,
	sizeof(heim_any)
};
static unsigned oid_id_pkinit_variable_num[7] =  {1, 3, 6, 1, 5, 2, 3 };
const heim_oid asn1_oid_id_pkinit = { 7, oid_id_pkinit_variable_num };

static unsigned oid_id_pkauthdata_variable_num[8] =  {1, 3, 6, 1, 5, 2, 3, 1 };
const heim_oid asn1_oid_id_pkauthdata = { 8, oid_id_pkauthdata_variable_num };

static unsigned oid_id_pkdhkeydata_variable_num[8] =  {1, 3, 6, 1, 5, 2, 3, 2 };
const heim_oid asn1_oid_id_pkdhkeydata = { 8, oid_id_pkdhkeydata_variable_num };

static unsigned oid_id_pkrkeydata_variable_num[8] =  {1, 3, 6, 1, 5, 2, 3, 3 };
const heim_oid asn1_oid_id_pkrkeydata = { 8, oid_id_pkrkeydata_variable_num };

static unsigned oid_id_pkekuoid_variable_num[8] =  {1, 3, 6, 1, 5, 2, 3, 4 };
const heim_oid asn1_oid_id_pkekuoid = { 8, oid_id_pkekuoid_variable_num };

static unsigned oid_id_pkkdcekuoid_variable_num[8] =  {1, 3, 6, 1, 5, 2, 3, 5 };
const heim_oid asn1_oid_id_pkkdcekuoid = { 8, oid_id_pkkdcekuoid_variable_num };

static unsigned oid_id_apple_system_id_variable_num[7] =  {1, 2, 840, 113635, 100, 4, 4 };
const heim_oid asn1_oid_id_apple_system_id = { 7, oid_id_apple_system_id_variable_num };

static unsigned oid_id_pkinit_kdf_variable_num[8] =  {1, 3, 6, 1, 5, 2, 3, 6 };
const heim_oid asn1_oid_id_pkinit_kdf = { 8, oid_id_pkinit_kdf_variable_num };

static unsigned oid_id_pkinit_kdf_ah_sha1_variable_num[9] =  {1, 3, 6, 1, 5, 2, 3, 6, 1 };
const heim_oid asn1_oid_id_pkinit_kdf_ah_sha1 = { 9, oid_id_pkinit_kdf_ah_sha1_variable_num };

static unsigned oid_id_pkinit_kdf_ah_sha256_variable_num[9] =  {1, 3, 6, 1, 5, 2, 3, 6, 2 };
const heim_oid asn1_oid_id_pkinit_kdf_ah_sha256 = { 9, oid_id_pkinit_kdf_ah_sha256_variable_num };

static unsigned oid_id_pkinit_kdf_ah_sha512_variable_num[9] =  {1, 3, 6, 1, 5, 2, 3, 6, 3 };
const heim_oid asn1_oid_id_pkinit_kdf_ah_sha512 = { 9, oid_id_pkinit_kdf_ah_sha512_variable_num };

static unsigned oid_id_pkinit_san_variable_num[7] =  {1, 3, 6, 1, 5, 2, 2 };
const heim_oid asn1_oid_id_pkinit_san = { 7, oid_id_pkinit_san_variable_num };

static unsigned oid_id_pkinit_ms_eku_variable_num[10] =  {1, 3, 6, 1, 4, 1, 311, 20, 2, 2 };
const heim_oid asn1_oid_id_pkinit_ms_eku = { 10, oid_id_pkinit_ms_eku_variable_num };

static unsigned oid_id_pkinit_ms_san_variable_num[10] =  {1, 3, 6, 1, 4, 1, 311, 20, 2, 3 };
const heim_oid asn1_oid_id_pkinit_ms_san = { 10, oid_id_pkinit_ms_san_variable_num };

extern const struct asn1_template asn1_MS_UPN_SAN[];
/* template_members: MS_UPN_SAN exp exp */
extern const struct asn1_template asn1_MS_UPN_SAN_tag__0[];
/* generate_template_type: MS_UPN_SAN_tag__0 */
const struct asn1_template asn1_MS_UPN_SAN_tag__0[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UTF8_STRING), 0, NULL }
};
/* generate_template_type: MS_UPN_SAN */
const struct asn1_template asn1_MS_UPN_SAN[] = {
/* 0 */ { 0, sizeof(MS_UPN_SAN), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_MS_UPN_SAN_tag__0 }
};

int
decode_MS_UPN_SAN(const unsigned char *p, size_t len, MS_UPN_SAN *data, size_t *size)
{
    return _asn1_decode_top(asn1_MS_UPN_SAN, 0|0, p, len, data, size);
}


int
encode_MS_UPN_SAN(unsigned char *p, size_t len, const MS_UPN_SAN *data, size_t *size)
{
    int ret = _asn1_encode(asn1_MS_UPN_SAN, p, len, data, size);
    return ret;
}


size_t
length_MS_UPN_SAN(const MS_UPN_SAN *data)
{
    return _asn1_length(asn1_MS_UPN_SAN, data);
}


void
free_MS_UPN_SAN(MS_UPN_SAN *data)
{
    _asn1_free_top(asn1_MS_UPN_SAN, data);
}


int
copy_MS_UPN_SAN(const MS_UPN_SAN *from, MS_UPN_SAN *to)
{
    return _asn1_copy_top(asn1_MS_UPN_SAN, from, to);
}

extern const struct asn1_template asn1_DHNonce[];
/* template_members: DHNonce exp exp */
extern const struct asn1_template asn1_DHNonce_tag__1[];
/* generate_template_type: DHNonce_tag__1 */
const struct asn1_template asn1_DHNonce_tag__1[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: DHNonce */
const struct asn1_template asn1_DHNonce[] = {
/* 0 */ { 0, sizeof(DHNonce), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_DHNonce_tag__1 }
};

int
decode_DHNonce(const unsigned char *p, size_t len, DHNonce *data, size_t *size)
{
    return _asn1_decode_top(asn1_DHNonce, 0|0, p, len, data, size);
}


int
encode_DHNonce(unsigned char *p, size_t len, const DHNonce *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DHNonce, p, len, data, size);
    return ret;
}


size_t
length_DHNonce(const DHNonce *data)
{
    return _asn1_length(asn1_DHNonce, data);
}


void
free_DHNonce(DHNonce *data)
{
    _asn1_free_top(asn1_DHNonce, data);
}


int
copy_DHNonce(const DHNonce *from, DHNonce *to)
{
    return _asn1_copy_top(asn1_DHNonce, from, to);
}

extern const struct asn1_template asn1_KDFAlgorithmId[];
/* template_members: KDFAlgorithmId exp exp */
extern const struct asn1_template asn1_KDFAlgorithmId_tag__2[];
/* tsequence: members isstruct: 1 */
/* template_members: KDFAlgorithmId exp exp */
extern const struct asn1_template asn1_KDFAlgorithmId_tag_kdf_id_3[];
/* template_members: heim_oid exp exp */
extern const struct asn1_template asn1_heim_oid_tag_kdf_id_4[];
/* generate_template_type: heim_oid_tag_kdf_id_4 */
const struct asn1_template asn1_heim_oid_tag_kdf_id_4[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* generate_template_type: KDFAlgorithmId_tag_kdf_id_3 */
const struct asn1_template asn1_KDFAlgorithmId_tag_kdf_id_3[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_heim_oid_tag_kdf_id_4 }
};
/* generate_template_type: KDFAlgorithmId_tag__2 */
const struct asn1_template asn1_KDFAlgorithmId_tag__2[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KDFAlgorithmId), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDFAlgorithmId, kdf_id), asn1_KDFAlgorithmId_tag_kdf_id_3 }
};
/* generate_template_type: KDFAlgorithmId */
const struct asn1_template asn1_KDFAlgorithmId[] = {
/* 0 */ { 0, sizeof(KDFAlgorithmId), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDFAlgorithmId_tag__2 }
};

int
decode_KDFAlgorithmId(const unsigned char *p, size_t len, KDFAlgorithmId *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDFAlgorithmId, 0|0, p, len, data, size);
}


int
encode_KDFAlgorithmId(unsigned char *p, size_t len, const KDFAlgorithmId *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDFAlgorithmId, p, len, data, size);
    return ret;
}


size_t
length_KDFAlgorithmId(const KDFAlgorithmId *data)
{
    return _asn1_length(asn1_KDFAlgorithmId, data);
}


void
free_KDFAlgorithmId(KDFAlgorithmId *data)
{
    _asn1_free_top(asn1_KDFAlgorithmId, data);
}


int
copy_KDFAlgorithmId(const KDFAlgorithmId *from, KDFAlgorithmId *to)
{
    return _asn1_copy_top(asn1_KDFAlgorithmId, from, to);
}

extern const struct asn1_template asn1_TrustedCA[];
/* template_members: TrustedCA exp exp */
extern const struct asn1_template asn1_TrustedCA_tag__5[];
/* tsequence: members isstruct: 1 */
/* template_members: TrustedCA exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_TrustedCA_tag_caName_6[];
/* generate_template_type: TrustedCA_tag_caName_6 */
/* template_members: TrustedCA exp exp */
extern const struct asn1_template asn1_TrustedCA_tag_certificateSerialNumber_7[];
/* template_members: heim_integer exp exp */
extern const struct asn1_template asn1_heim_integer_tag_certificateSerialNumber_8[];
/* generate_template_type: heim_integer_tag_certificateSerialNumber_8 */
const struct asn1_template asn1_heim_integer_tag_certificateSerialNumber_8[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_INTEGER), 0, NULL }
};
/* generate_template_type: TrustedCA_tag_certificateSerialNumber_7 */
const struct asn1_template asn1_TrustedCA_tag_certificateSerialNumber_7[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_heim_integer_tag_certificateSerialNumber_8 }
};
/* template_members: TrustedCA exp exp */
extern const struct asn1_template asn1_TrustedCA_tag_subjectKeyIdentifier_9[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_subjectKeyIdentifier_10[];
/* generate_template_type: heim_octet_string_tag_subjectKeyIdentifier_10 */
/* generate_template_type: TrustedCA_tag_subjectKeyIdentifier_9 */
const struct asn1_template asn1_TrustedCA_tag_subjectKeyIdentifier_9[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_DHNonce_tag__1 }
};
/* generate_template_type: TrustedCA_tag__5 */
const struct asn1_template asn1_TrustedCA_tag__5[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct TrustedCA), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, offsetof(struct TrustedCA, caName), asn1_DHNonce_tag__1 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct TrustedCA, certificateSerialNumber), asn1_TrustedCA_tag_certificateSerialNumber_7 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct TrustedCA, subjectKeyIdentifier), asn1_TrustedCA_tag_subjectKeyIdentifier_9 }
};
/* generate_template_type: TrustedCA */
const struct asn1_template asn1_TrustedCA[] = {
/* 0 */ { 0, sizeof(TrustedCA), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TrustedCA_tag__5 }
};

int
decode_TrustedCA(const unsigned char *p, size_t len, TrustedCA *data, size_t *size)
{
    return _asn1_decode_top(asn1_TrustedCA, 0|0, p, len, data, size);
}


int
encode_TrustedCA(unsigned char *p, size_t len, const TrustedCA *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TrustedCA, p, len, data, size);
    return ret;
}


size_t
length_TrustedCA(const TrustedCA *data)
{
    return _asn1_length(asn1_TrustedCA, data);
}


void
free_TrustedCA(TrustedCA *data)
{
    _asn1_free_top(asn1_TrustedCA, data);
}


int
copy_TrustedCA(const TrustedCA *from, TrustedCA *to)
{
    return _asn1_copy_top(asn1_TrustedCA, from, to);
}

extern const struct asn1_template asn1_ExternalPrincipalIdentifier[];
/* template_members: ExternalPrincipalIdentifier exp exp */
extern const struct asn1_template asn1_ExternalPrincipalIdentifier_tag__11[];
/* tsequence: members isstruct: 1 */
/* template_members: ExternalPrincipalIdentifier exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_ExternalPrincipalIdentifier_tag_subjectName_12[];
/* generate_template_type: ExternalPrincipalIdentifier_tag_subjectName_12 */
/* template_members: ExternalPrincipalIdentifier exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_ExternalPrincipalIdentifier_tag_issuerAndSerialNumber_13[];
/* generate_template_type: ExternalPrincipalIdentifier_tag_issuerAndSerialNumber_13 */
/* template_members: ExternalPrincipalIdentifier exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_ExternalPrincipalIdentifier_tag_subjectKeyIdentifier_14[];
/* generate_template_type: ExternalPrincipalIdentifier_tag_subjectKeyIdentifier_14 */
/* generate_template_type: ExternalPrincipalIdentifier_tag__11 */
const struct asn1_template asn1_ExternalPrincipalIdentifier_tag__11[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct ExternalPrincipalIdentifier), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct ExternalPrincipalIdentifier, subjectName), asn1_DHNonce_tag__1 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct ExternalPrincipalIdentifier, issuerAndSerialNumber), asn1_DHNonce_tag__1 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct ExternalPrincipalIdentifier, subjectKeyIdentifier), asn1_DHNonce_tag__1 }
};
/* generate_template_type: ExternalPrincipalIdentifier */
const struct asn1_template asn1_ExternalPrincipalIdentifier[] = {
/* 0 */ { 0, sizeof(ExternalPrincipalIdentifier), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ExternalPrincipalIdentifier_tag__11 }
};

int
decode_ExternalPrincipalIdentifier(const unsigned char *p, size_t len, ExternalPrincipalIdentifier *data, size_t *size)
{
    return _asn1_decode_top(asn1_ExternalPrincipalIdentifier, 0|0, p, len, data, size);
}


int
encode_ExternalPrincipalIdentifier(unsigned char *p, size_t len, const ExternalPrincipalIdentifier *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ExternalPrincipalIdentifier, p, len, data, size);
    return ret;
}


size_t
length_ExternalPrincipalIdentifier(const ExternalPrincipalIdentifier *data)
{
    return _asn1_length(asn1_ExternalPrincipalIdentifier, data);
}


void
free_ExternalPrincipalIdentifier(ExternalPrincipalIdentifier *data)
{
    _asn1_free_top(asn1_ExternalPrincipalIdentifier, data);
}


int
copy_ExternalPrincipalIdentifier(const ExternalPrincipalIdentifier *from, ExternalPrincipalIdentifier *to)
{
    return _asn1_copy_top(asn1_ExternalPrincipalIdentifier, from, to);
}

extern const struct asn1_template asn1_ExternalPrincipalIdentifiers[];
/* template_members: ExternalPrincipalIdentifiers exp exp */
extern const struct asn1_template asn1_ExternalPrincipalIdentifiers_tag__15[];
extern const struct asn1_template asn1_ExternalPrincipalIdentifier_seofTstruct_0[];
/* generate_template_type: ExternalPrincipalIdentifier_seofTstruct_0 */
const struct asn1_template asn1_ExternalPrincipalIdentifier_seofTstruct_0[] = {
/* 0 */ { 0, sizeof(ExternalPrincipalIdentifier), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ExternalPrincipalIdentifier }
};
/* generate_template_type: ExternalPrincipalIdentifiers_tag__15 */
const struct asn1_template asn1_ExternalPrincipalIdentifiers_tag__15[] = {
/* 0 */ { 0, sizeof(ExternalPrincipalIdentifier), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_ExternalPrincipalIdentifier_seofTstruct_0 }
};
/* generate_template_type: ExternalPrincipalIdentifiers */
const struct asn1_template asn1_ExternalPrincipalIdentifiers[] = {
/* 0 */ { 0, sizeof(ExternalPrincipalIdentifiers), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ExternalPrincipalIdentifiers_tag__15 }
};

int
decode_ExternalPrincipalIdentifiers(const unsigned char *p, size_t len, ExternalPrincipalIdentifiers *data, size_t *size)
{
    return _asn1_decode_top(asn1_ExternalPrincipalIdentifiers, 0|0, p, len, data, size);
}


int
encode_ExternalPrincipalIdentifiers(unsigned char *p, size_t len, const ExternalPrincipalIdentifiers *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ExternalPrincipalIdentifiers, p, len, data, size);
    return ret;
}


size_t
length_ExternalPrincipalIdentifiers(const ExternalPrincipalIdentifiers *data)
{
    return _asn1_length(asn1_ExternalPrincipalIdentifiers, data);
}


void
free_ExternalPrincipalIdentifiers(ExternalPrincipalIdentifiers *data)
{
    _asn1_free_top(asn1_ExternalPrincipalIdentifiers, data);
}


int
copy_ExternalPrincipalIdentifiers(const ExternalPrincipalIdentifiers *from, ExternalPrincipalIdentifiers *to)
{
    return _asn1_copy_top(asn1_ExternalPrincipalIdentifiers, from, to);
}

extern const struct asn1_template asn1_PA_PK_AS_REQ[];
/* template_members: PA_PK_AS_REQ exp exp */
extern const struct asn1_template asn1_PA_PK_AS_REQ_tag__16[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_PK_AS_REQ exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_PA_PK_AS_REQ_tag_signedAuthPack_17[];
/* generate_template_type: PA_PK_AS_REQ_tag_signedAuthPack_17 */
/* template_members: PA_PK_AS_REQ exp exp */
extern const struct asn1_template asn1_PA_PK_AS_REQ_tag_trustedCertifiers_18[];
/* generate_template_type: PA_PK_AS_REQ_tag_trustedCertifiers_18 */
const struct asn1_template asn1_PA_PK_AS_REQ_tag_trustedCertifiers_18[] = {
/* 0 */ { 0, sizeof(ExternalPrincipalIdentifiers), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ExternalPrincipalIdentifiers }
};
/* template_members: PA_PK_AS_REQ exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_PA_PK_AS_REQ_tag_kdcPkId_19[];
/* generate_template_type: PA_PK_AS_REQ_tag_kdcPkId_19 */
/* generate_template_type: PA_PK_AS_REQ_tag__16 */
const struct asn1_template asn1_PA_PK_AS_REQ_tag__16[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_PK_AS_REQ), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, offsetof(struct PA_PK_AS_REQ, signedAuthPack), asn1_DHNonce_tag__1 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_PK_AS_REQ, trustedCertifiers), asn1_PA_PK_AS_REQ_tag_trustedCertifiers_18 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct PA_PK_AS_REQ, kdcPkId), asn1_DHNonce_tag__1 }
};
/* generate_template_type: PA_PK_AS_REQ */
const struct asn1_template asn1_PA_PK_AS_REQ[] = {
/* 0 */ { 0, sizeof(PA_PK_AS_REQ), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_PK_AS_REQ_tag__16 }
};

int
decode_PA_PK_AS_REQ(const unsigned char *p, size_t len, PA_PK_AS_REQ *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_PK_AS_REQ, 0|0, p, len, data, size);
}


int
encode_PA_PK_AS_REQ(unsigned char *p, size_t len, const PA_PK_AS_REQ *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_PK_AS_REQ, p, len, data, size);
    return ret;
}


size_t
length_PA_PK_AS_REQ(const PA_PK_AS_REQ *data)
{
    return _asn1_length(asn1_PA_PK_AS_REQ, data);
}


void
free_PA_PK_AS_REQ(PA_PK_AS_REQ *data)
{
    _asn1_free_top(asn1_PA_PK_AS_REQ, data);
}


int
copy_PA_PK_AS_REQ(const PA_PK_AS_REQ *from, PA_PK_AS_REQ *to)
{
    return _asn1_copy_top(asn1_PA_PK_AS_REQ, from, to);
}

extern const struct asn1_template asn1_PKAuthenticator[];
/* template_members: PKAuthenticator exp exp */
extern const struct asn1_template asn1_PKAuthenticator_tag__20[];
/* tsequence: members isstruct: 1 */
/* template_members: PKAuthenticator exp exp */
extern const struct asn1_template asn1_PKAuthenticator_tag_cusec_21[];
/* template_members: heim_integer exp exp */
extern const struct asn1_template asn1_heim_integer_tag_cusec_22[];
/* generate_template_type: heim_integer_tag_cusec_22 */
/* generate_template_type: PKAuthenticator_tag_cusec_21 */
/* template_members: PKAuthenticator exp exp */
extern const struct asn1_template asn1_PKAuthenticator_tag_ctime_23[];
/* generate_template_type: PKAuthenticator_tag_ctime_23 */
const struct asn1_template asn1_PKAuthenticator_tag_ctime_23[] = {
/* 0 */ { 0, sizeof(KerberosTime), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_KerberosTime}
};
/* template_members: PKAuthenticator exp exp */
extern const struct asn1_template asn1_PKAuthenticator_tag_nonce_24[];
/* template_members: unsigned exp exp */
extern const struct asn1_template asn1_unsigned_tag_nonce_25[];
/* generate_template_type: unsigned_tag_nonce_25 */
const struct asn1_template asn1_unsigned_tag_nonce_25[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* generate_template_type: PKAuthenticator_tag_nonce_24 */
const struct asn1_template asn1_PKAuthenticator_tag_nonce_24[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_unsigned_tag_nonce_25 }
};
/* template_members: PKAuthenticator exp exp */
extern const struct asn1_template asn1_PKAuthenticator_tag_paChecksum_26[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_paChecksum_27[];
/* generate_template_type: heim_octet_string_tag_paChecksum_27 */
/* generate_template_type: PKAuthenticator_tag_paChecksum_26 */
/* generate_template_type: PKAuthenticator_tag__20 */
const struct asn1_template asn1_PKAuthenticator_tag__20[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PKAuthenticator), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PKAuthenticator, cusec), asn1_TrustedCA_tag_certificateSerialNumber_7 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PKAuthenticator, ctime), asn1_PKAuthenticator_tag_ctime_23 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct PKAuthenticator, nonce), asn1_PKAuthenticator_tag_nonce_24 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct PKAuthenticator, paChecksum), asn1_TrustedCA_tag_subjectKeyIdentifier_9 }
};
/* generate_template_type: PKAuthenticator */
const struct asn1_template asn1_PKAuthenticator[] = {
/* 0 */ { 0, sizeof(PKAuthenticator), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKAuthenticator_tag__20 }
};

int
decode_PKAuthenticator(const unsigned char *p, size_t len, PKAuthenticator *data, size_t *size)
{
    return _asn1_decode_top(asn1_PKAuthenticator, 0|0, p, len, data, size);
}


int
encode_PKAuthenticator(unsigned char *p, size_t len, const PKAuthenticator *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PKAuthenticator, p, len, data, size);
    return ret;
}


size_t
length_PKAuthenticator(const PKAuthenticator *data)
{
    return _asn1_length(asn1_PKAuthenticator, data);
}


void
free_PKAuthenticator(PKAuthenticator *data)
{
    _asn1_free_top(asn1_PKAuthenticator, data);
}


int
copy_PKAuthenticator(const PKAuthenticator *from, PKAuthenticator *to)
{
    return _asn1_copy_top(asn1_PKAuthenticator, from, to);
}

extern const struct asn1_template asn1_AuthPack[];
/* template_members: AuthPack exp exp */
extern const struct asn1_template asn1_AuthPack_tag__28[];
/* tsequence: members isstruct: 1 */
/* template_members: AuthPack exp exp */
extern const struct asn1_template asn1_AuthPack_tag_pkAuthenticator_29[];
/* generate_template_type: AuthPack_tag_pkAuthenticator_29 */
const struct asn1_template asn1_AuthPack_tag_pkAuthenticator_29[] = {
/* 0 */ { 0, sizeof(PKAuthenticator), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PKAuthenticator }
};
/* template_members: AuthPack exp exp */
extern const struct asn1_template asn1_AuthPack_tag_clientPublicValue_30[];
/* generate_template_type: AuthPack_tag_clientPublicValue_30 */
const struct asn1_template asn1_AuthPack_tag_clientPublicValue_30[] = {
/* 0 */ { 0, sizeof(SubjectPublicKeyInfo), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_SubjectPublicKeyInfo}
};
/* template_members: AuthPack exp exp */
extern const struct asn1_template asn1_AuthPack_tag_supportedCMSTypes_31[];
/* template_members: AuthPack exp exp */
extern const struct asn1_template asn1_AuthPack_tag_supportedCMSTypes_32[];
extern const struct asn1_template asn1_AuthPack_supportedCMSTypes_1[];
/* generate_template_type: AuthPack_supportedCMSTypes_1 */
const struct asn1_template asn1_AuthPack_supportedCMSTypes_1[] = {
/* 0 */ { 0, sizeof(AlgorithmIdentifier), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_AlgorithmIdentifier}
};
/* generate_template_type: AuthPack_tag_supportedCMSTypes_32 */
const struct asn1_template asn1_AuthPack_tag_supportedCMSTypes_32[] = {
/* 0 */ { 0, sizeof(struct AuthPack), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_AuthPack_supportedCMSTypes_1 }
};
/* generate_template_type: AuthPack_tag_supportedCMSTypes_31 */
const struct asn1_template asn1_AuthPack_tag_supportedCMSTypes_31[] = {
/* 0 */ { 0, sizeof(struct AuthPack), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthPack_tag_supportedCMSTypes_32 }
};
/* template_members: AuthPack exp exp */
extern const struct asn1_template asn1_AuthPack_tag_clientDHNonce_33[];
/* generate_template_type: AuthPack_tag_clientDHNonce_33 */
const struct asn1_template asn1_AuthPack_tag_clientDHNonce_33[] = {
/* 0 */ { 0, sizeof(DHNonce), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DHNonce }
};
/* template_members: AuthPack exp exp */
extern const struct asn1_template asn1_AuthPack_tag_supportedKDFs_34[];
/* template_members: AuthPack exp exp */
extern const struct asn1_template asn1_AuthPack_tag_supportedKDFs_35[];
extern const struct asn1_template asn1_AuthPack_supportedKDFs_2[];
/* generate_template_type: AuthPack_supportedKDFs_2 */
const struct asn1_template asn1_AuthPack_supportedKDFs_2[] = {
/* 0 */ { 0, sizeof(KDFAlgorithmId), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDFAlgorithmId }
};
/* generate_template_type: AuthPack_tag_supportedKDFs_35 */
const struct asn1_template asn1_AuthPack_tag_supportedKDFs_35[] = {
/* 0 */ { 0, sizeof(struct AuthPack), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_AuthPack_supportedKDFs_2 }
};
/* generate_template_type: AuthPack_tag_supportedKDFs_34 */
const struct asn1_template asn1_AuthPack_tag_supportedKDFs_34[] = {
/* 0 */ { 0, sizeof(struct AuthPack), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthPack_tag_supportedKDFs_35 }
};
/* generate_template_type: AuthPack_tag__28 */
const struct asn1_template asn1_AuthPack_tag__28[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct AuthPack), ((void *)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AuthPack, pkAuthenticator), asn1_AuthPack_tag_pkAuthenticator_29 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct AuthPack, clientPublicValue), asn1_AuthPack_tag_clientPublicValue_30 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct AuthPack, supportedCMSTypes), asn1_AuthPack_tag_supportedCMSTypes_31 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct AuthPack, clientDHNonce), asn1_AuthPack_tag_clientDHNonce_33 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct AuthPack, supportedKDFs), asn1_AuthPack_tag_supportedKDFs_34 }
};
/* generate_template_type: AuthPack */
const struct asn1_template asn1_AuthPack[] = {
/* 0 */ { 0, sizeof(AuthPack), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthPack_tag__28 }
};

int
decode_AuthPack(const unsigned char *p, size_t len, AuthPack *data, size_t *size)
{
    return _asn1_decode_top(asn1_AuthPack, 0|0, p, len, data, size);
}


int
encode_AuthPack(unsigned char *p, size_t len, const AuthPack *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AuthPack, p, len, data, size);
    return ret;
}


size_t
length_AuthPack(const AuthPack *data)
{
    return _asn1_length(asn1_AuthPack, data);
}


void
free_AuthPack(AuthPack *data)
{
    _asn1_free_top(asn1_AuthPack, data);
}


int
copy_AuthPack(const AuthPack *from, AuthPack *to)
{
    return _asn1_copy_top(asn1_AuthPack, from, to);
}

extern const struct asn1_template asn1_TD_TRUSTED_CERTIFIERS[];
/* generate_template_type: TD_TRUSTED_CERTIFIERS */
const struct asn1_template asn1_TD_TRUSTED_CERTIFIERS[] = {
/* 0 */ { 0, sizeof(TD_TRUSTED_CERTIFIERS), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ExternalPrincipalIdentifiers }
};

int
decode_TD_TRUSTED_CERTIFIERS(const unsigned char *p, size_t len, TD_TRUSTED_CERTIFIERS *data, size_t *size)
{
    return _asn1_decode_top(asn1_TD_TRUSTED_CERTIFIERS, 0|0, p, len, data, size);
}


int
encode_TD_TRUSTED_CERTIFIERS(unsigned char *p, size_t len, const TD_TRUSTED_CERTIFIERS *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TD_TRUSTED_CERTIFIERS, p, len, data, size);
    return ret;
}


size_t
length_TD_TRUSTED_CERTIFIERS(const TD_TRUSTED_CERTIFIERS *data)
{
    return _asn1_length(asn1_TD_TRUSTED_CERTIFIERS, data);
}


void
free_TD_TRUSTED_CERTIFIERS(TD_TRUSTED_CERTIFIERS *data)
{
    _asn1_free_top(asn1_TD_TRUSTED_CERTIFIERS, data);
}


int
copy_TD_TRUSTED_CERTIFIERS(const TD_TRUSTED_CERTIFIERS *from, TD_TRUSTED_CERTIFIERS *to)
{
    return _asn1_copy_top(asn1_TD_TRUSTED_CERTIFIERS, from, to);
}

extern const struct asn1_template asn1_TD_INVALID_CERTIFICATES[];
/* generate_template_type: TD_INVALID_CERTIFICATES */
const struct asn1_template asn1_TD_INVALID_CERTIFICATES[] = {
/* 0 */ { 0, sizeof(TD_INVALID_CERTIFICATES), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ExternalPrincipalIdentifiers }
};

int
decode_TD_INVALID_CERTIFICATES(const unsigned char *p, size_t len, TD_INVALID_CERTIFICATES *data, size_t *size)
{
    return _asn1_decode_top(asn1_TD_INVALID_CERTIFICATES, 0|0, p, len, data, size);
}


int
encode_TD_INVALID_CERTIFICATES(unsigned char *p, size_t len, const TD_INVALID_CERTIFICATES *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TD_INVALID_CERTIFICATES, p, len, data, size);
    return ret;
}


size_t
length_TD_INVALID_CERTIFICATES(const TD_INVALID_CERTIFICATES *data)
{
    return _asn1_length(asn1_TD_INVALID_CERTIFICATES, data);
}


void
free_TD_INVALID_CERTIFICATES(TD_INVALID_CERTIFICATES *data)
{
    _asn1_free_top(asn1_TD_INVALID_CERTIFICATES, data);
}


int
copy_TD_INVALID_CERTIFICATES(const TD_INVALID_CERTIFICATES *from, TD_INVALID_CERTIFICATES *to)
{
    return _asn1_copy_top(asn1_TD_INVALID_CERTIFICATES, from, to);
}

extern const struct asn1_template asn1_KRB5PrincipalName[];
/* template_members: KRB5PrincipalName exp exp */
extern const struct asn1_template asn1_KRB5PrincipalName_tag__36[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB5PrincipalName exp exp */
extern const struct asn1_template asn1_KRB5PrincipalName_tag_realm_37[];
/* generate_template_type: KRB5PrincipalName_tag_realm_37 */
const struct asn1_template asn1_KRB5PrincipalName_tag_realm_37[] = {
/* 0 */ { 0, sizeof(Realm), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Realm}
};
/* template_members: KRB5PrincipalName exp exp */
extern const struct asn1_template asn1_KRB5PrincipalName_tag_principalName_38[];
/* generate_template_type: KRB5PrincipalName_tag_principalName_38 */
const struct asn1_template asn1_KRB5PrincipalName_tag_principalName_38[] = {
/* 0 */ { 0, sizeof(PrincipalName), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_PrincipalName}
};
/* generate_template_type: KRB5PrincipalName_tag__36 */
const struct asn1_template asn1_KRB5PrincipalName_tag__36[] = {
/* 0 */ { 0, sizeof(struct KRB5PrincipalName), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB5PrincipalName, realm), asn1_KRB5PrincipalName_tag_realm_37 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB5PrincipalName, principalName), asn1_KRB5PrincipalName_tag_principalName_38 }
};
/* generate_template_type: KRB5PrincipalName */
const struct asn1_template asn1_KRB5PrincipalName[] = {
/* 0 */ { 0, sizeof(KRB5PrincipalName), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5PrincipalName_tag__36 }
};

int
decode_KRB5PrincipalName(const unsigned char *p, size_t len, KRB5PrincipalName *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5PrincipalName, 0|0, p, len, data, size);
}


int
encode_KRB5PrincipalName(unsigned char *p, size_t len, const KRB5PrincipalName *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5PrincipalName, p, len, data, size);
    return ret;
}


size_t
length_KRB5PrincipalName(const KRB5PrincipalName *data)
{
    return _asn1_length(asn1_KRB5PrincipalName, data);
}


void
free_KRB5PrincipalName(KRB5PrincipalName *data)
{
    _asn1_free_top(asn1_KRB5PrincipalName, data);
}


int
copy_KRB5PrincipalName(const KRB5PrincipalName *from, KRB5PrincipalName *to)
{
    return _asn1_copy_top(asn1_KRB5PrincipalName, from, to);
}

extern const struct asn1_template asn1_AD_INITIAL_VERIFIED_CAS[];
/* template_members: AD_INITIAL_VERIFIED_CAS exp exp */
extern const struct asn1_template asn1_AD_INITIAL_VERIFIED_CAS_tag__39[];
extern const struct asn1_template asn1_ExternalPrincipalIdentifier_seofTstruct_3[];
/* generate_template_type: ExternalPrincipalIdentifier_seofTstruct_3 */
/* generate_template_type: AD_INITIAL_VERIFIED_CAS_tag__39 */
/* generate_template_type: AD_INITIAL_VERIFIED_CAS */
const struct asn1_template asn1_AD_INITIAL_VERIFIED_CAS[] = {
/* 0 */ { 0, sizeof(AD_INITIAL_VERIFIED_CAS), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ExternalPrincipalIdentifiers_tag__15 }
};

int
decode_AD_INITIAL_VERIFIED_CAS(const unsigned char *p, size_t len, AD_INITIAL_VERIFIED_CAS *data, size_t *size)
{
    return _asn1_decode_top(asn1_AD_INITIAL_VERIFIED_CAS, 0|0, p, len, data, size);
}


int
encode_AD_INITIAL_VERIFIED_CAS(unsigned char *p, size_t len, const AD_INITIAL_VERIFIED_CAS *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AD_INITIAL_VERIFIED_CAS, p, len, data, size);
    return ret;
}


size_t
length_AD_INITIAL_VERIFIED_CAS(const AD_INITIAL_VERIFIED_CAS *data)
{
    return _asn1_length(asn1_AD_INITIAL_VERIFIED_CAS, data);
}


void
free_AD_INITIAL_VERIFIED_CAS(AD_INITIAL_VERIFIED_CAS *data)
{
    _asn1_free_top(asn1_AD_INITIAL_VERIFIED_CAS, data);
}


int
copy_AD_INITIAL_VERIFIED_CAS(const AD_INITIAL_VERIFIED_CAS *from, AD_INITIAL_VERIFIED_CAS *to)
{
    return _asn1_copy_top(asn1_AD_INITIAL_VERIFIED_CAS, from, to);
}

extern const struct asn1_template asn1_DHRepInfo[];
/* template_members: DHRepInfo exp exp */
extern const struct asn1_template asn1_DHRepInfo_tag__40[];
/* tsequence: members isstruct: 1 */
/* template_members: DHRepInfo exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_DHRepInfo_tag_dhSignedData_41[];
/* generate_template_type: DHRepInfo_tag_dhSignedData_41 */
/* template_members: DHRepInfo exp exp */
extern const struct asn1_template asn1_DHRepInfo_tag_serverDHNonce_42[];
/* generate_template_type: DHRepInfo_tag_serverDHNonce_42 */
/* template_members: DHRepInfo exp exp */
extern const struct asn1_template asn1_DHRepInfo_tag_kdf_43[];
/* generate_template_type: DHRepInfo_tag_kdf_43 */
/* generate_template_type: DHRepInfo_tag__40 */
const struct asn1_template asn1_DHRepInfo_tag__40[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct DHRepInfo), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, offsetof(struct DHRepInfo, dhSignedData), asn1_DHNonce_tag__1 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct DHRepInfo, serverDHNonce), asn1_AuthPack_tag_clientDHNonce_33 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct DHRepInfo, kdf), asn1_AuthPack_supportedKDFs_2 }
};
/* generate_template_type: DHRepInfo */
const struct asn1_template asn1_DHRepInfo[] = {
/* 0 */ { 0, sizeof(DHRepInfo), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DHRepInfo_tag__40 }
};

int
decode_DHRepInfo(const unsigned char *p, size_t len, DHRepInfo *data, size_t *size)
{
    return _asn1_decode_top(asn1_DHRepInfo, 0|0, p, len, data, size);
}


int
encode_DHRepInfo(unsigned char *p, size_t len, const DHRepInfo *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DHRepInfo, p, len, data, size);
    return ret;
}


size_t
length_DHRepInfo(const DHRepInfo *data)
{
    return _asn1_length(asn1_DHRepInfo, data);
}


void
free_DHRepInfo(DHRepInfo *data)
{
    _asn1_free_top(asn1_DHRepInfo, data);
}


int
copy_DHRepInfo(const DHRepInfo *from, DHRepInfo *to)
{
    return _asn1_copy_top(asn1_DHRepInfo, from, to);
}

extern const struct asn1_template asn1_PA_PK_AS_REP[];
extern const struct asn1_template asn1_PA_PK_AS_REP_choice_dhInfo[];
/* template_members: DHRepInfo exp exp */
extern const struct asn1_template asn1_DHRepInfo_tag__44[];
/* generate_template_type: DHRepInfo_tag__44 */
const struct asn1_template asn1_DHRepInfo_tag__44[] = {
/* 0 */ { 0, sizeof(DHRepInfo), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DHRepInfo }
};
/* generate_template_type: PA_PK_AS_REP_choice_dhInfo */
const struct asn1_template asn1_PA_PK_AS_REP_choice_dhInfo[] = {
/* 0 */ { 0, sizeof(DHRepInfo), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_DHRepInfo_tag__44 }
};
extern const struct asn1_template asn1_PA_PK_AS_REP_choice_encKeyPack[];
/* template_members: heim_octet_string imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_heim_octet_string_tag__45[];
/* generate_template_type: heim_octet_string_tag__45 */
/* generate_template_type: PA_PK_AS_REP_choice_encKeyPack */
const struct asn1_template asn1_PA_PK_AS_REP_choice_encKeyPack[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_IMPLICIT, 0, asn1_DHNonce_tag__1 }
};
static const struct asn1_template asn1_choice_PA_PK_AS_REP_0[] = {
/* 0 */ { offsetof(PA_PK_AS_REP, u.asn1_ellipsis), offsetof(PA_PK_AS_REP, element), ((void *)2) },
/* 1 */ { choice_PA_PK_AS_REP_dhInfo, offsetof(PA_PK_AS_REP, u.dhInfo), asn1_PA_PK_AS_REP_choice_dhInfo },
/* 2 */ { choice_PA_PK_AS_REP_encKeyPack, offsetof(PA_PK_AS_REP, u.encKeyPack), asn1_PA_PK_AS_REP_choice_encKeyPack }
};
/* generate_template_type: PA_PK_AS_REP */
const struct asn1_template asn1_PA_PK_AS_REP[] = {
/* 0 */ { 0, sizeof(PA_PK_AS_REP), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_PA_PK_AS_REP_0 }
};

int
decode_PA_PK_AS_REP(const unsigned char *p, size_t len, PA_PK_AS_REP *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_PK_AS_REP, 0|0, p, len, data, size);
}


int
encode_PA_PK_AS_REP(unsigned char *p, size_t len, const PA_PK_AS_REP *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_PK_AS_REP, p, len, data, size);
    return ret;
}


size_t
length_PA_PK_AS_REP(const PA_PK_AS_REP *data)
{
    return _asn1_length(asn1_PA_PK_AS_REP, data);
}


void
free_PA_PK_AS_REP(PA_PK_AS_REP *data)
{
    _asn1_free_top(asn1_PA_PK_AS_REP, data);
}


int
copy_PA_PK_AS_REP(const PA_PK_AS_REP *from, PA_PK_AS_REP *to)
{
    return _asn1_copy_top(asn1_PA_PK_AS_REP, from, to);
}

extern const struct asn1_template asn1_KDCDHKeyInfo[];
/* template_members: KDCDHKeyInfo exp exp */
extern const struct asn1_template asn1_KDCDHKeyInfo_tag__46[];
/* tsequence: members isstruct: 1 */
/* template_members: KDCDHKeyInfo exp exp */
extern const struct asn1_template asn1_KDCDHKeyInfo_tag_subjectPublicKey_47[];
/* template_members: KDCDHKeyInfo exp exp */
extern const struct asn1_template asn1_KDCDHKeyInfo_tag_subjectPublicKey_48[];
/* generate_template_type: KDCDHKeyInfo_tag_subjectPublicKey_48 */
const struct asn1_template asn1_KDCDHKeyInfo_tag_subjectPublicKey_48[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: KDCDHKeyInfo_tag_subjectPublicKey_47 */
const struct asn1_template asn1_KDCDHKeyInfo_tag_subjectPublicKey_47[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_KDCDHKeyInfo_tag_subjectPublicKey_48 }
};
/* template_members: KDCDHKeyInfo exp exp */
extern const struct asn1_template asn1_KDCDHKeyInfo_tag_nonce_49[];
/* template_members: unsigned exp exp */
extern const struct asn1_template asn1_unsigned_tag_nonce_50[];
/* generate_template_type: unsigned_tag_nonce_50 */
/* generate_template_type: KDCDHKeyInfo_tag_nonce_49 */
/* template_members: KDCDHKeyInfo exp exp */
extern const struct asn1_template asn1_KDCDHKeyInfo_tag_dhKeyExpiration_51[];
/* generate_template_type: KDCDHKeyInfo_tag_dhKeyExpiration_51 */
/* generate_template_type: KDCDHKeyInfo_tag__46 */
const struct asn1_template asn1_KDCDHKeyInfo_tag__46[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KDCDHKeyInfo), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDCDHKeyInfo, subjectPublicKey), asn1_KDCDHKeyInfo_tag_subjectPublicKey_47 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KDCDHKeyInfo, nonce), asn1_PKAuthenticator_tag_nonce_24 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KDCDHKeyInfo, dhKeyExpiration), asn1_PKAuthenticator_tag_ctime_23 }
};
/* generate_template_type: KDCDHKeyInfo */
const struct asn1_template asn1_KDCDHKeyInfo[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCDHKeyInfo_tag__46 }
};

int
decode_KDCDHKeyInfo(const unsigned char *p, size_t len, KDCDHKeyInfo *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDCDHKeyInfo, 0|0, p, len, data, size);
}


int
encode_KDCDHKeyInfo(unsigned char *p, size_t len, const KDCDHKeyInfo *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDCDHKeyInfo, p, len, data, size);
    return ret;
}


size_t
length_KDCDHKeyInfo(const KDCDHKeyInfo *data)
{
    return _asn1_length(asn1_KDCDHKeyInfo, data);
}


void
free_KDCDHKeyInfo(KDCDHKeyInfo *data)
{
    _asn1_free_top(asn1_KDCDHKeyInfo, data);
}


int
copy_KDCDHKeyInfo(const KDCDHKeyInfo *from, KDCDHKeyInfo *to)
{
    return _asn1_copy_top(asn1_KDCDHKeyInfo, from, to);
}

extern const struct asn1_template asn1_ReplyKeyPack[];
/* template_members: ReplyKeyPack exp exp */
extern const struct asn1_template asn1_ReplyKeyPack_tag__52[];
/* tsequence: members isstruct: 1 */
/* template_members: ReplyKeyPack exp exp */
extern const struct asn1_template asn1_ReplyKeyPack_tag_replyKey_53[];
/* generate_template_type: ReplyKeyPack_tag_replyKey_53 */
const struct asn1_template asn1_ReplyKeyPack_tag_replyKey_53[] = {
/* 0 */ { 0, sizeof(EncryptionKey), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_EncryptionKey}
};
/* template_members: ReplyKeyPack exp exp */
extern const struct asn1_template asn1_ReplyKeyPack_tag_asChecksum_54[];
/* generate_template_type: ReplyKeyPack_tag_asChecksum_54 */
const struct asn1_template asn1_ReplyKeyPack_tag_asChecksum_54[] = {
/* 0 */ { 0, sizeof(Checksum), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Checksum}
};
/* generate_template_type: ReplyKeyPack_tag__52 */
const struct asn1_template asn1_ReplyKeyPack_tag__52[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct ReplyKeyPack), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct ReplyKeyPack, replyKey), asn1_ReplyKeyPack_tag_replyKey_53 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct ReplyKeyPack, asChecksum), asn1_ReplyKeyPack_tag_asChecksum_54 }
};
/* generate_template_type: ReplyKeyPack */
const struct asn1_template asn1_ReplyKeyPack[] = {
/* 0 */ { 0, sizeof(ReplyKeyPack), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ReplyKeyPack_tag__52 }
};

int
decode_ReplyKeyPack(const unsigned char *p, size_t len, ReplyKeyPack *data, size_t *size)
{
    return _asn1_decode_top(asn1_ReplyKeyPack, 0|0, p, len, data, size);
}


int
encode_ReplyKeyPack(unsigned char *p, size_t len, const ReplyKeyPack *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ReplyKeyPack, p, len, data, size);
    return ret;
}


size_t
length_ReplyKeyPack(const ReplyKeyPack *data)
{
    return _asn1_length(asn1_ReplyKeyPack, data);
}


void
free_ReplyKeyPack(ReplyKeyPack *data)
{
    _asn1_free_top(asn1_ReplyKeyPack, data);
}


int
copy_ReplyKeyPack(const ReplyKeyPack *from, ReplyKeyPack *to)
{
    return _asn1_copy_top(asn1_ReplyKeyPack, from, to);
}

extern const struct asn1_template asn1_TD_DH_PARAMETERS[];
/* template_members: TD_DH_PARAMETERS exp exp */
extern const struct asn1_template asn1_TD_DH_PARAMETERS_tag__55[];
extern const struct asn1_template asn1_AlgorithmIdentifier_seofTstruct_4[];
/* generate_template_type: AlgorithmIdentifier_seofTstruct_4 */
/* generate_template_type: TD_DH_PARAMETERS_tag__55 */
const struct asn1_template asn1_TD_DH_PARAMETERS_tag__55[] = {
/* 0 */ { 0, sizeof(AlgorithmIdentifier), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_AuthPack_supportedCMSTypes_1 }
};
/* generate_template_type: TD_DH_PARAMETERS */
const struct asn1_template asn1_TD_DH_PARAMETERS[] = {
/* 0 */ { 0, sizeof(TD_DH_PARAMETERS), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TD_DH_PARAMETERS_tag__55 }
};

int
decode_TD_DH_PARAMETERS(const unsigned char *p, size_t len, TD_DH_PARAMETERS *data, size_t *size)
{
    return _asn1_decode_top(asn1_TD_DH_PARAMETERS, 0|0, p, len, data, size);
}


int
encode_TD_DH_PARAMETERS(unsigned char *p, size_t len, const TD_DH_PARAMETERS *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TD_DH_PARAMETERS, p, len, data, size);
    return ret;
}


size_t
length_TD_DH_PARAMETERS(const TD_DH_PARAMETERS *data)
{
    return _asn1_length(asn1_TD_DH_PARAMETERS, data);
}


void
free_TD_DH_PARAMETERS(TD_DH_PARAMETERS *data)
{
    _asn1_free_top(asn1_TD_DH_PARAMETERS, data);
}


int
copy_TD_DH_PARAMETERS(const TD_DH_PARAMETERS *from, TD_DH_PARAMETERS *to)
{
    return _asn1_copy_top(asn1_TD_DH_PARAMETERS, from, to);
}

extern const struct asn1_template asn1_PKAuthenticator_Win2k[];
/* template_members: PKAuthenticator_Win2k exp exp */
extern const struct asn1_template asn1_PKAuthenticator_Win2k_tag__56[];
/* tsequence: members isstruct: 1 */
/* template_members: PKAuthenticator_Win2k exp exp */
extern const struct asn1_template asn1_PKAuthenticator_Win2k_tag_kdcName_57[];
/* generate_template_type: PKAuthenticator_Win2k_tag_kdcName_57 */
/* template_members: PKAuthenticator_Win2k exp exp */
extern const struct asn1_template asn1_PKAuthenticator_Win2k_tag_kdcRealm_58[];
/* generate_template_type: PKAuthenticator_Win2k_tag_kdcRealm_58 */
/* template_members: PKAuthenticator_Win2k exp exp */
extern const struct asn1_template asn1_PKAuthenticator_Win2k_tag_cusec_59[];
/* template_members: unsigned exp exp */
extern const struct asn1_template asn1_unsigned_tag_cusec_60[];
/* generate_template_type: unsigned_tag_cusec_60 */
/* generate_template_type: PKAuthenticator_Win2k_tag_cusec_59 */
/* template_members: PKAuthenticator_Win2k exp exp */
extern const struct asn1_template asn1_PKAuthenticator_Win2k_tag_ctime_61[];
/* generate_template_type: PKAuthenticator_Win2k_tag_ctime_61 */
/* template_members: PKAuthenticator_Win2k exp exp */
extern const struct asn1_template asn1_PKAuthenticator_Win2k_tag_nonce_62[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_nonce_63[];
/* generate_template_type: int_tag_nonce_63 */
const struct asn1_template asn1_int_tag_nonce_63[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_INTEGER), 0, NULL }
};
/* generate_template_type: PKAuthenticator_Win2k_tag_nonce_62 */
const struct asn1_template asn1_PKAuthenticator_Win2k_tag_nonce_62[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_int_tag_nonce_63 }
};
/* generate_template_type: PKAuthenticator_Win2k_tag__56 */
const struct asn1_template asn1_PKAuthenticator_Win2k_tag__56[] = {
/* 0 */ { 0, sizeof(struct PKAuthenticator_Win2k), ((void *)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PKAuthenticator_Win2k, kdcName), asn1_KRB5PrincipalName_tag_principalName_38 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PKAuthenticator_Win2k, kdcRealm), asn1_KRB5PrincipalName_tag_realm_37 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct PKAuthenticator_Win2k, cusec), asn1_PKAuthenticator_tag_nonce_24 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct PKAuthenticator_Win2k, ctime), asn1_PKAuthenticator_tag_ctime_23 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct PKAuthenticator_Win2k, nonce), asn1_PKAuthenticator_Win2k_tag_nonce_62 }
};
/* generate_template_type: PKAuthenticator_Win2k */
const struct asn1_template asn1_PKAuthenticator_Win2k[] = {
/* 0 */ { 0, sizeof(PKAuthenticator_Win2k), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKAuthenticator_Win2k_tag__56 }
};

int
decode_PKAuthenticator_Win2k(const unsigned char *p, size_t len, PKAuthenticator_Win2k *data, size_t *size)
{
    return _asn1_decode_top(asn1_PKAuthenticator_Win2k, 0|0, p, len, data, size);
}


int
encode_PKAuthenticator_Win2k(unsigned char *p, size_t len, const PKAuthenticator_Win2k *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PKAuthenticator_Win2k, p, len, data, size);
    return ret;
}


size_t
length_PKAuthenticator_Win2k(const PKAuthenticator_Win2k *data)
{
    return _asn1_length(asn1_PKAuthenticator_Win2k, data);
}


void
free_PKAuthenticator_Win2k(PKAuthenticator_Win2k *data)
{
    _asn1_free_top(asn1_PKAuthenticator_Win2k, data);
}


int
copy_PKAuthenticator_Win2k(const PKAuthenticator_Win2k *from, PKAuthenticator_Win2k *to)
{
    return _asn1_copy_top(asn1_PKAuthenticator_Win2k, from, to);
}

extern const struct asn1_template asn1_AuthPack_Win2k[];
/* template_members: AuthPack_Win2k exp exp */
extern const struct asn1_template asn1_AuthPack_Win2k_tag__64[];
/* tsequence: members isstruct: 1 */
/* template_members: AuthPack_Win2k exp exp */
extern const struct asn1_template asn1_AuthPack_Win2k_tag_pkAuthenticator_65[];
/* generate_template_type: AuthPack_Win2k_tag_pkAuthenticator_65 */
const struct asn1_template asn1_AuthPack_Win2k_tag_pkAuthenticator_65[] = {
/* 0 */ { 0, sizeof(PKAuthenticator_Win2k), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PKAuthenticator_Win2k }
};
/* template_members: AuthPack_Win2k exp exp */
extern const struct asn1_template asn1_AuthPack_Win2k_tag_clientPublicValue_66[];
/* generate_template_type: AuthPack_Win2k_tag_clientPublicValue_66 */
/* generate_template_type: AuthPack_Win2k_tag__64 */
const struct asn1_template asn1_AuthPack_Win2k_tag__64[] = {
/* 0 */ { 0, sizeof(struct AuthPack_Win2k), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AuthPack_Win2k, pkAuthenticator), asn1_AuthPack_Win2k_tag_pkAuthenticator_65 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct AuthPack_Win2k, clientPublicValue), asn1_AuthPack_tag_clientPublicValue_30 }
};
/* generate_template_type: AuthPack_Win2k */
const struct asn1_template asn1_AuthPack_Win2k[] = {
/* 0 */ { 0, sizeof(AuthPack_Win2k), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthPack_Win2k_tag__64 }
};

int
decode_AuthPack_Win2k(const unsigned char *p, size_t len, AuthPack_Win2k *data, size_t *size)
{
    return _asn1_decode_top(asn1_AuthPack_Win2k, 0|0, p, len, data, size);
}


int
encode_AuthPack_Win2k(unsigned char *p, size_t len, const AuthPack_Win2k *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AuthPack_Win2k, p, len, data, size);
    return ret;
}


size_t
length_AuthPack_Win2k(const AuthPack_Win2k *data)
{
    return _asn1_length(asn1_AuthPack_Win2k, data);
}


void
free_AuthPack_Win2k(AuthPack_Win2k *data)
{
    _asn1_free_top(asn1_AuthPack_Win2k, data);
}


int
copy_AuthPack_Win2k(const AuthPack_Win2k *from, AuthPack_Win2k *to)
{
    return _asn1_copy_top(asn1_AuthPack_Win2k, from, to);
}

extern const struct asn1_template asn1_TrustedCA_Win2k[];
extern const struct asn1_template asn1_TrustedCA_Win2k_choice_caName[];
/* template_members: heim_any exp exp */
extern const struct asn1_template asn1_heim_any_tag__67[];
/* generate_template_type: heim_any_tag__67 */
const struct asn1_template asn1_heim_any_tag__67[] = {
/* 0 */ { 0, sizeof(heim_any), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_heim_any}
};
/* generate_template_type: TrustedCA_Win2k_choice_caName */
const struct asn1_template asn1_TrustedCA_Win2k_choice_caName[] = {
/* 0 */ { 0, sizeof(heim_any), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_heim_any_tag__67 }
};
extern const struct asn1_template asn1_TrustedCA_Win2k_choice_issuerAndSerial[];
/* template_members: IssuerAndSerialNumber exp exp */
extern const struct asn1_template asn1_IssuerAndSerialNumber_tag__68[];
/* generate_template_type: IssuerAndSerialNumber_tag__68 */
const struct asn1_template asn1_IssuerAndSerialNumber_tag__68[] = {
/* 0 */ { 0, sizeof(IssuerAndSerialNumber), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_IssuerAndSerialNumber}
};
/* generate_template_type: TrustedCA_Win2k_choice_issuerAndSerial */
const struct asn1_template asn1_TrustedCA_Win2k_choice_issuerAndSerial[] = {
/* 0 */ { 0, sizeof(IssuerAndSerialNumber), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), 0, asn1_IssuerAndSerialNumber_tag__68 }
};
static const struct asn1_template asn1_choice_TrustedCA_Win2k_1[] = {
/* 0 */ { 0, offsetof(TrustedCA_Win2k, element), ((void *)2) },
/* 1 */ { choice_TrustedCA_Win2k_caName, offsetof(TrustedCA_Win2k, u.caName), asn1_TrustedCA_Win2k_choice_caName },
/* 2 */ { choice_TrustedCA_Win2k_issuerAndSerial, offsetof(TrustedCA_Win2k, u.issuerAndSerial), asn1_TrustedCA_Win2k_choice_issuerAndSerial }
};
/* generate_template_type: TrustedCA_Win2k */
const struct asn1_template asn1_TrustedCA_Win2k[] = {
/* 0 */ { 0, sizeof(TrustedCA_Win2k), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_TrustedCA_Win2k_1 }
};

int
decode_TrustedCA_Win2k(const unsigned char *p, size_t len, TrustedCA_Win2k *data, size_t *size)
{
    return _asn1_decode_top(asn1_TrustedCA_Win2k, 0|0, p, len, data, size);
}


int
encode_TrustedCA_Win2k(unsigned char *p, size_t len, const TrustedCA_Win2k *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TrustedCA_Win2k, p, len, data, size);
    return ret;
}


size_t
length_TrustedCA_Win2k(const TrustedCA_Win2k *data)
{
    return _asn1_length(asn1_TrustedCA_Win2k, data);
}


void
free_TrustedCA_Win2k(TrustedCA_Win2k *data)
{
    _asn1_free_top(asn1_TrustedCA_Win2k, data);
}


int
copy_TrustedCA_Win2k(const TrustedCA_Win2k *from, TrustedCA_Win2k *to)
{
    return _asn1_copy_top(asn1_TrustedCA_Win2k, from, to);
}

extern const struct asn1_template asn1_PA_PK_AS_REQ_Win2k[];
/* template_members: PA_PK_AS_REQ_Win2k exp exp */
extern const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag__69[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_PK_AS_REQ_Win2k exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag_signed_auth_pack_70[];
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag_signed_auth_pack_70 */
/* template_members: PA_PK_AS_REQ_Win2k exp exp */
extern const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_71[];
/* template_members: PA_PK_AS_REQ_Win2k exp exp */
extern const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_72[];
extern const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_trusted_certifiers_5[];
/* generate_template_type: PA_PK_AS_REQ_Win2k_trusted_certifiers_5 */
const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_trusted_certifiers_5[] = {
/* 0 */ { 0, sizeof(TrustedCA_Win2k), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TrustedCA_Win2k }
};
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_72 */
const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_72[] = {
/* 0 */ { 0, sizeof(struct PA_PK_AS_REQ_Win2k), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PA_PK_AS_REQ_Win2k_trusted_certifiers_5 }
};
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_71 */
const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_71[] = {
/* 0 */ { 0, sizeof(struct PA_PK_AS_REQ_Win2k), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_72 }
};
/* template_members: PA_PK_AS_REQ_Win2k exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag_kdc_cert_73[];
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag_kdc_cert_73 */
/* template_members: PA_PK_AS_REQ_Win2k exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag_encryption_cert_74[];
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag_encryption_cert_74 */
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag__69 */
const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag__69[] = {
/* 0 */ { 0, sizeof(struct PA_PK_AS_REQ_Win2k), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, offsetof(struct PA_PK_AS_REQ_Win2k, signed_auth_pack), asn1_DHNonce_tag__1 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PA_PK_AS_REQ_Win2k, trusted_certifiers), asn1_PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_71 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,3)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct PA_PK_AS_REQ_Win2k, kdc_cert), asn1_DHNonce_tag__1 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,4)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct PA_PK_AS_REQ_Win2k, encryption_cert), asn1_DHNonce_tag__1 }
};
/* generate_template_type: PA_PK_AS_REQ_Win2k */
const struct asn1_template asn1_PA_PK_AS_REQ_Win2k[] = {
/* 0 */ { 0, sizeof(PA_PK_AS_REQ_Win2k), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_PK_AS_REQ_Win2k_tag__69 }
};

int
decode_PA_PK_AS_REQ_Win2k(const unsigned char *p, size_t len, PA_PK_AS_REQ_Win2k *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_PK_AS_REQ_Win2k, 0|0, p, len, data, size);
}


int
encode_PA_PK_AS_REQ_Win2k(unsigned char *p, size_t len, const PA_PK_AS_REQ_Win2k *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_PK_AS_REQ_Win2k, p, len, data, size);
    return ret;
}


size_t
length_PA_PK_AS_REQ_Win2k(const PA_PK_AS_REQ_Win2k *data)
{
    return _asn1_length(asn1_PA_PK_AS_REQ_Win2k, data);
}


void
free_PA_PK_AS_REQ_Win2k(PA_PK_AS_REQ_Win2k *data)
{
    _asn1_free_top(asn1_PA_PK_AS_REQ_Win2k, data);
}


int
copy_PA_PK_AS_REQ_Win2k(const PA_PK_AS_REQ_Win2k *from, PA_PK_AS_REQ_Win2k *to)
{
    return _asn1_copy_top(asn1_PA_PK_AS_REQ_Win2k, from, to);
}

extern const struct asn1_template asn1_PA_PK_AS_REP_Win2k[];
extern const struct asn1_template asn1_PA_PK_AS_REP_Win2k_choice_dhSignedData[];
/* template_members: heim_octet_string imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_heim_octet_string_tag__75[];
/* generate_template_type: heim_octet_string_tag__75 */
/* generate_template_type: PA_PK_AS_REP_Win2k_choice_dhSignedData */
const struct asn1_template asn1_PA_PK_AS_REP_Win2k_choice_dhSignedData[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, 0, asn1_DHNonce_tag__1 }
};
extern const struct asn1_template asn1_PA_PK_AS_REP_Win2k_choice_encKeyPack[];
/* template_members: heim_octet_string imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_heim_octet_string_tag__76[];
/* generate_template_type: heim_octet_string_tag__76 */
/* generate_template_type: PA_PK_AS_REP_Win2k_choice_encKeyPack */
static const struct asn1_template asn1_choice_PA_PK_AS_REP_Win2k_2[] = {
/* 0 */ { 0, offsetof(PA_PK_AS_REP_Win2k, element), ((void *)2) },
/* 1 */ { choice_PA_PK_AS_REP_Win2k_dhSignedData, offsetof(PA_PK_AS_REP_Win2k, u.dhSignedData), asn1_PA_PK_AS_REP_Win2k_choice_dhSignedData },
/* 2 */ { choice_PA_PK_AS_REP_Win2k_encKeyPack, offsetof(PA_PK_AS_REP_Win2k, u.encKeyPack), asn1_PA_PK_AS_REP_choice_encKeyPack }
};
/* generate_template_type: PA_PK_AS_REP_Win2k */
const struct asn1_template asn1_PA_PK_AS_REP_Win2k[] = {
/* 0 */ { 0, sizeof(PA_PK_AS_REP_Win2k), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_PA_PK_AS_REP_Win2k_2 }
};

int
decode_PA_PK_AS_REP_Win2k(const unsigned char *p, size_t len, PA_PK_AS_REP_Win2k *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_PK_AS_REP_Win2k, 0|0, p, len, data, size);
}


int
encode_PA_PK_AS_REP_Win2k(unsigned char *p, size_t len, const PA_PK_AS_REP_Win2k *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_PK_AS_REP_Win2k, p, len, data, size);
    return ret;
}


size_t
length_PA_PK_AS_REP_Win2k(const PA_PK_AS_REP_Win2k *data)
{
    return _asn1_length(asn1_PA_PK_AS_REP_Win2k, data);
}


void
free_PA_PK_AS_REP_Win2k(PA_PK_AS_REP_Win2k *data)
{
    _asn1_free_top(asn1_PA_PK_AS_REP_Win2k, data);
}


int
copy_PA_PK_AS_REP_Win2k(const PA_PK_AS_REP_Win2k *from, PA_PK_AS_REP_Win2k *to)
{
    return _asn1_copy_top(asn1_PA_PK_AS_REP_Win2k, from, to);
}

extern const struct asn1_template asn1_KDCDHKeyInfo_Win2k[];
/* template_members: KDCDHKeyInfo_Win2k exp exp */
extern const struct asn1_template asn1_KDCDHKeyInfo_Win2k_tag__77[];
/* tsequence: members isstruct: 1 */
/* template_members: KDCDHKeyInfo_Win2k exp exp */
extern const struct asn1_template asn1_KDCDHKeyInfo_Win2k_tag_nonce_78[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_nonce_79[];
/* generate_template_type: int_tag_nonce_79 */
/* generate_template_type: KDCDHKeyInfo_Win2k_tag_nonce_78 */
/* template_members: KDCDHKeyInfo_Win2k exp exp */
extern const struct asn1_template asn1_KDCDHKeyInfo_Win2k_tag_subjectPublicKey_80[];
/* template_members: KDCDHKeyInfo_Win2k exp exp */
extern const struct asn1_template asn1_KDCDHKeyInfo_Win2k_tag_subjectPublicKey_81[];
/* generate_template_type: KDCDHKeyInfo_Win2k_tag_subjectPublicKey_81 */
const struct asn1_template asn1_KDCDHKeyInfo_Win2k_tag_subjectPublicKey_81[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo_Win2k), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: KDCDHKeyInfo_Win2k_tag_subjectPublicKey_80 */
const struct asn1_template asn1_KDCDHKeyInfo_Win2k_tag_subjectPublicKey_80[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo_Win2k), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_KDCDHKeyInfo_Win2k_tag_subjectPublicKey_81 }
};
/* generate_template_type: KDCDHKeyInfo_Win2k_tag__77 */
const struct asn1_template asn1_KDCDHKeyInfo_Win2k_tag__77[] = {
/* 0 */ { 0, sizeof(struct KDCDHKeyInfo_Win2k), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDCDHKeyInfo_Win2k, nonce), asn1_PKAuthenticator_Win2k_tag_nonce_62 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KDCDHKeyInfo_Win2k, subjectPublicKey), asn1_KDCDHKeyInfo_Win2k_tag_subjectPublicKey_80 }
};
/* generate_template_type: KDCDHKeyInfo_Win2k */
const struct asn1_template asn1_KDCDHKeyInfo_Win2k[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo_Win2k), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCDHKeyInfo_Win2k_tag__77 }
};

int
decode_KDCDHKeyInfo_Win2k(const unsigned char *p, size_t len, KDCDHKeyInfo_Win2k *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDCDHKeyInfo_Win2k, 0|0, p, len, data, size);
}


int
encode_KDCDHKeyInfo_Win2k(unsigned char *p, size_t len, const KDCDHKeyInfo_Win2k *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDCDHKeyInfo_Win2k, p, len, data, size);
    return ret;
}


size_t
length_KDCDHKeyInfo_Win2k(const KDCDHKeyInfo_Win2k *data)
{
    return _asn1_length(asn1_KDCDHKeyInfo_Win2k, data);
}


void
free_KDCDHKeyInfo_Win2k(KDCDHKeyInfo_Win2k *data)
{
    _asn1_free_top(asn1_KDCDHKeyInfo_Win2k, data);
}


int
copy_KDCDHKeyInfo_Win2k(const KDCDHKeyInfo_Win2k *from, KDCDHKeyInfo_Win2k *to)
{
    return _asn1_copy_top(asn1_KDCDHKeyInfo_Win2k, from, to);
}

extern const struct asn1_template asn1_ReplyKeyPack_Win2k[];
/* template_members: ReplyKeyPack_Win2k exp exp */
extern const struct asn1_template asn1_ReplyKeyPack_Win2k_tag__82[];
/* tsequence: members isstruct: 1 */
/* template_members: ReplyKeyPack_Win2k exp exp */
extern const struct asn1_template asn1_ReplyKeyPack_Win2k_tag_replyKey_83[];
/* generate_template_type: ReplyKeyPack_Win2k_tag_replyKey_83 */
/* template_members: ReplyKeyPack_Win2k exp exp */
extern const struct asn1_template asn1_ReplyKeyPack_Win2k_tag_nonce_84[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_nonce_85[];
/* generate_template_type: int_tag_nonce_85 */
/* generate_template_type: ReplyKeyPack_Win2k_tag_nonce_84 */
/* generate_template_type: ReplyKeyPack_Win2k_tag__82 */
const struct asn1_template asn1_ReplyKeyPack_Win2k_tag__82[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct ReplyKeyPack_Win2k), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct ReplyKeyPack_Win2k, replyKey), asn1_ReplyKeyPack_tag_replyKey_53 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct ReplyKeyPack_Win2k, nonce), asn1_PKAuthenticator_Win2k_tag_nonce_62 }
};
/* generate_template_type: ReplyKeyPack_Win2k */
const struct asn1_template asn1_ReplyKeyPack_Win2k[] = {
/* 0 */ { 0, sizeof(ReplyKeyPack_Win2k), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ReplyKeyPack_Win2k_tag__82 }
};

int
decode_ReplyKeyPack_Win2k(const unsigned char *p, size_t len, ReplyKeyPack_Win2k *data, size_t *size)
{
    return _asn1_decode_top(asn1_ReplyKeyPack_Win2k, 0|0, p, len, data, size);
}


int
encode_ReplyKeyPack_Win2k(unsigned char *p, size_t len, const ReplyKeyPack_Win2k *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ReplyKeyPack_Win2k, p, len, data, size);
    return ret;
}


size_t
length_ReplyKeyPack_Win2k(const ReplyKeyPack_Win2k *data)
{
    return _asn1_length(asn1_ReplyKeyPack_Win2k, data);
}


void
free_ReplyKeyPack_Win2k(ReplyKeyPack_Win2k *data)
{
    _asn1_free_top(asn1_ReplyKeyPack_Win2k, data);
}


int
copy_ReplyKeyPack_Win2k(const ReplyKeyPack_Win2k *from, ReplyKeyPack_Win2k *to)
{
    return _asn1_copy_top(asn1_ReplyKeyPack_Win2k, from, to);
}

extern const struct asn1_template asn1_PA_PK_AS_REP_BTMM[];
/* template_members: PA_PK_AS_REP_BTMM exp exp */
extern const struct asn1_template asn1_PA_PK_AS_REP_BTMM_tag__86[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_PK_AS_REP_BTMM exp exp */
extern const struct asn1_template asn1_PA_PK_AS_REP_BTMM_tag_dhSignedData_87[];
/* generate_template_type: PA_PK_AS_REP_BTMM_tag_dhSignedData_87 */
/* template_members: PA_PK_AS_REP_BTMM exp exp */
extern const struct asn1_template asn1_PA_PK_AS_REP_BTMM_tag_encKeyPack_88[];
/* generate_template_type: PA_PK_AS_REP_BTMM_tag_encKeyPack_88 */
/* generate_template_type: PA_PK_AS_REP_BTMM_tag__86 */
const struct asn1_template asn1_PA_PK_AS_REP_BTMM_tag__86[] = {
/* 0 */ { 0, sizeof(struct PA_PK_AS_REP_BTMM), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct PA_PK_AS_REP_BTMM, dhSignedData), asn1_heim_any_tag__67 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_PK_AS_REP_BTMM, encKeyPack), asn1_heim_any_tag__67 }
};
/* generate_template_type: PA_PK_AS_REP_BTMM */
const struct asn1_template asn1_PA_PK_AS_REP_BTMM[] = {
/* 0 */ { 0, sizeof(PA_PK_AS_REP_BTMM), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_PK_AS_REP_BTMM_tag__86 }
};

int
decode_PA_PK_AS_REP_BTMM(const unsigned char *p, size_t len, PA_PK_AS_REP_BTMM *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_PK_AS_REP_BTMM, 0|0, p, len, data, size);
}


int
encode_PA_PK_AS_REP_BTMM(unsigned char *p, size_t len, const PA_PK_AS_REP_BTMM *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_PK_AS_REP_BTMM, p, len, data, size);
    return ret;
}


size_t
length_PA_PK_AS_REP_BTMM(const PA_PK_AS_REP_BTMM *data)
{
    return _asn1_length(asn1_PA_PK_AS_REP_BTMM, data);
}


void
free_PA_PK_AS_REP_BTMM(PA_PK_AS_REP_BTMM *data)
{
    _asn1_free_top(asn1_PA_PK_AS_REP_BTMM, data);
}


int
copy_PA_PK_AS_REP_BTMM(const PA_PK_AS_REP_BTMM *from, PA_PK_AS_REP_BTMM *to)
{
    return _asn1_copy_top(asn1_PA_PK_AS_REP_BTMM, from, to);
}

extern const struct asn1_template asn1_PkinitSP80056AOtherInfo[];
/* template_members: PkinitSP80056AOtherInfo exp exp */
extern const struct asn1_template asn1_PkinitSP80056AOtherInfo_tag__89[];
/* tsequence: members isstruct: 1 */
/* template_members: PkinitSP80056AOtherInfo exp exp */
extern const struct asn1_template asn1_PkinitSP80056AOtherInfo_tag_partyUInfo_90[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_partyUInfo_91[];
/* generate_template_type: heim_octet_string_tag_partyUInfo_91 */
/* generate_template_type: PkinitSP80056AOtherInfo_tag_partyUInfo_90 */
/* template_members: PkinitSP80056AOtherInfo exp exp */
extern const struct asn1_template asn1_PkinitSP80056AOtherInfo_tag_partyVInfo_92[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_partyVInfo_93[];
/* generate_template_type: heim_octet_string_tag_partyVInfo_93 */
/* generate_template_type: PkinitSP80056AOtherInfo_tag_partyVInfo_92 */
/* template_members: PkinitSP80056AOtherInfo exp exp */
extern const struct asn1_template asn1_PkinitSP80056AOtherInfo_tag_suppPubInfo_94[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_suppPubInfo_95[];
/* generate_template_type: heim_octet_string_tag_suppPubInfo_95 */
/* generate_template_type: PkinitSP80056AOtherInfo_tag_suppPubInfo_94 */
/* template_members: PkinitSP80056AOtherInfo exp exp */
extern const struct asn1_template asn1_PkinitSP80056AOtherInfo_tag_suppPrivInfo_96[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_suppPrivInfo_97[];
/* generate_template_type: heim_octet_string_tag_suppPrivInfo_97 */
/* generate_template_type: PkinitSP80056AOtherInfo_tag_suppPrivInfo_96 */
/* generate_template_type: PkinitSP80056AOtherInfo_tag__89 */
const struct asn1_template asn1_PkinitSP80056AOtherInfo_tag__89[] = {
/* 0 */ { 0, sizeof(struct PkinitSP80056AOtherInfo), ((void *)5) },
/* 1 */ { A1_OP_TYPE_EXTERN , offsetof(struct PkinitSP80056AOtherInfo, algorithmID), &asn1_extern_AlgorithmIdentifier},
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PkinitSP80056AOtherInfo, partyUInfo), asn1_TrustedCA_tag_subjectKeyIdentifier_9 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PkinitSP80056AOtherInfo, partyVInfo), asn1_TrustedCA_tag_subjectKeyIdentifier_9 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PkinitSP80056AOtherInfo, suppPubInfo), asn1_TrustedCA_tag_subjectKeyIdentifier_9 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct PkinitSP80056AOtherInfo, suppPrivInfo), asn1_TrustedCA_tag_subjectKeyIdentifier_9 }
};
/* generate_template_type: PkinitSP80056AOtherInfo */
const struct asn1_template asn1_PkinitSP80056AOtherInfo[] = {
/* 0 */ { 0, sizeof(PkinitSP80056AOtherInfo), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PkinitSP80056AOtherInfo_tag__89 }
};

int
decode_PkinitSP80056AOtherInfo(const unsigned char *p, size_t len, PkinitSP80056AOtherInfo *data, size_t *size)
{
    return _asn1_decode_top(asn1_PkinitSP80056AOtherInfo, 0|0, p, len, data, size);
}


int
encode_PkinitSP80056AOtherInfo(unsigned char *p, size_t len, const PkinitSP80056AOtherInfo *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PkinitSP80056AOtherInfo, p, len, data, size);
    return ret;
}


size_t
length_PkinitSP80056AOtherInfo(const PkinitSP80056AOtherInfo *data)
{
    return _asn1_length(asn1_PkinitSP80056AOtherInfo, data);
}


void
free_PkinitSP80056AOtherInfo(PkinitSP80056AOtherInfo *data)
{
    _asn1_free_top(asn1_PkinitSP80056AOtherInfo, data);
}


int
copy_PkinitSP80056AOtherInfo(const PkinitSP80056AOtherInfo *from, PkinitSP80056AOtherInfo *to)
{
    return _asn1_copy_top(asn1_PkinitSP80056AOtherInfo, from, to);
}

extern const struct asn1_template asn1_PkinitSuppPubInfo[];
/* template_members: PkinitSuppPubInfo exp exp */
extern const struct asn1_template asn1_PkinitSuppPubInfo_tag__98[];
/* tsequence: members isstruct: 1 */
/* template_members: PkinitSuppPubInfo exp exp */
extern const struct asn1_template asn1_PkinitSuppPubInfo_tag_enctype_99[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_enctype_100[];
/* generate_template_type: int_tag_enctype_100 */
/* generate_template_type: PkinitSuppPubInfo_tag_enctype_99 */
/* template_members: PkinitSuppPubInfo exp exp */
extern const struct asn1_template asn1_PkinitSuppPubInfo_tag_as_REQ_101[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_as_REQ_102[];
/* generate_template_type: heim_octet_string_tag_as_REQ_102 */
/* generate_template_type: PkinitSuppPubInfo_tag_as_REQ_101 */
/* template_members: PkinitSuppPubInfo exp exp */
extern const struct asn1_template asn1_PkinitSuppPubInfo_tag_pk_as_rep_103[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_pk_as_rep_104[];
/* generate_template_type: heim_octet_string_tag_pk_as_rep_104 */
/* generate_template_type: PkinitSuppPubInfo_tag_pk_as_rep_103 */
/* template_members: PkinitSuppPubInfo exp exp */
extern const struct asn1_template asn1_PkinitSuppPubInfo_tag_ticket_105[];
/* generate_template_type: PkinitSuppPubInfo_tag_ticket_105 */
const struct asn1_template asn1_PkinitSuppPubInfo_tag_ticket_105[] = {
/* 0 */ { 0, sizeof(Ticket), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Ticket}
};
/* generate_template_type: PkinitSuppPubInfo_tag__98 */
const struct asn1_template asn1_PkinitSuppPubInfo_tag__98[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PkinitSuppPubInfo), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PkinitSuppPubInfo, enctype), asn1_PKAuthenticator_Win2k_tag_nonce_62 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PkinitSuppPubInfo, as_REQ), asn1_TrustedCA_tag_subjectKeyIdentifier_9 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PkinitSuppPubInfo, pk_as_rep), asn1_TrustedCA_tag_subjectKeyIdentifier_9 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct PkinitSuppPubInfo, ticket), asn1_PkinitSuppPubInfo_tag_ticket_105 }
};
/* generate_template_type: PkinitSuppPubInfo */
const struct asn1_template asn1_PkinitSuppPubInfo[] = {
/* 0 */ { 0, sizeof(PkinitSuppPubInfo), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PkinitSuppPubInfo_tag__98 }
};

int
decode_PkinitSuppPubInfo(const unsigned char *p, size_t len, PkinitSuppPubInfo *data, size_t *size)
{
    return _asn1_decode_top(asn1_PkinitSuppPubInfo, 0|0, p, len, data, size);
}


int
encode_PkinitSuppPubInfo(unsigned char *p, size_t len, const PkinitSuppPubInfo *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PkinitSuppPubInfo, p, len, data, size);
    return ret;
}


size_t
length_PkinitSuppPubInfo(const PkinitSuppPubInfo *data)
{
    return _asn1_length(asn1_PkinitSuppPubInfo, data);
}


void
free_PkinitSuppPubInfo(PkinitSuppPubInfo *data)
{
    _asn1_free_top(asn1_PkinitSuppPubInfo, data);
}


int
copy_PkinitSuppPubInfo(const PkinitSuppPubInfo *from, PkinitSuppPubInfo *to)
{
    return _asn1_copy_top(asn1_PkinitSuppPubInfo, from, to);
}

