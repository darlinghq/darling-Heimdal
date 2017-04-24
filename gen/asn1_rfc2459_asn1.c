/* Generated from /Users/andyhyatt/Downloads/Heimdal-498.50.8/lib/asn1/rfc2459.asn1 */
/* Do not edit */

#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "rfc2459_asn1.h"
#include "rfc2459_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_heim_any = {
	(asn1_type_encode)encode_heim_any,
	(asn1_type_decode)decode_heim_any,
	(asn1_type_length)length_heim_any,
	(asn1_type_copy)copy_heim_any,
	(asn1_type_release)free_heim_any,
	sizeof(heim_any)
};
extern const struct asn1_template asn1_Version[];
/* template_members: Version exp exp */
extern const struct asn1_template asn1_Version_tag__0[];
/* generate_template_type: Version_tag__0 */
const struct asn1_template asn1_Version_tag__0[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, NULL }
};
/* generate_template_type: Version */
const struct asn1_template asn1_Version[] = {
/* 0 */ { 0, sizeof(Version), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_Version_tag__0 }
};

int
decode_Version(const unsigned char *p, size_t len, Version *data, size_t *size)
{
    return _asn1_decode_top(asn1_Version, 0|0, p, len, data, size);
}


int
encode_Version(unsigned char *p, size_t len, const Version *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Version, p, len, data, size);
    return ret;
}


size_t
length_Version(const Version *data)
{
    return _asn1_length(asn1_Version, data);
}


void
free_Version(Version *data)
{
    _asn1_free_top(asn1_Version, data);
}


int
copy_Version(const Version *from, Version *to)
{
    return _asn1_copy_top(asn1_Version, from, to);
}

static unsigned oid_id_pkcs_1_variable_num[6] =  {1, 2, 840, 113549, 1, 1 };
const heim_oid asn1_oid_id_pkcs_1 = { 6, oid_id_pkcs_1_variable_num };

static unsigned oid_id_pkcs1_rsaEncryption_variable_num[7] =  {1, 2, 840, 113549, 1, 1, 1 };
const heim_oid asn1_oid_id_pkcs1_rsaEncryption = { 7, oid_id_pkcs1_rsaEncryption_variable_num };

static unsigned oid_id_pkcs1_md2WithRSAEncryption_variable_num[7] =  {1, 2, 840, 113549, 1, 1, 2 };
const heim_oid asn1_oid_id_pkcs1_md2WithRSAEncryption = { 7, oid_id_pkcs1_md2WithRSAEncryption_variable_num };

static unsigned oid_id_pkcs1_md5WithRSAEncryption_variable_num[7] =  {1, 2, 840, 113549, 1, 1, 4 };
const heim_oid asn1_oid_id_pkcs1_md5WithRSAEncryption = { 7, oid_id_pkcs1_md5WithRSAEncryption_variable_num };

static unsigned oid_id_pkcs1_sha1WithRSAEncryption_variable_num[7] =  {1, 2, 840, 113549, 1, 1, 5 };
const heim_oid asn1_oid_id_pkcs1_sha1WithRSAEncryption = { 7, oid_id_pkcs1_sha1WithRSAEncryption_variable_num };

static unsigned oid_id_pkcs1_sha256WithRSAEncryption_variable_num[7] =  {1, 2, 840, 113549, 1, 1, 11 };
const heim_oid asn1_oid_id_pkcs1_sha256WithRSAEncryption = { 7, oid_id_pkcs1_sha256WithRSAEncryption_variable_num };

static unsigned oid_id_pkcs1_sha384WithRSAEncryption_variable_num[7] =  {1, 2, 840, 113549, 1, 1, 12 };
const heim_oid asn1_oid_id_pkcs1_sha384WithRSAEncryption = { 7, oid_id_pkcs1_sha384WithRSAEncryption_variable_num };

static unsigned oid_id_pkcs1_sha512WithRSAEncryption_variable_num[7] =  {1, 2, 840, 113549, 1, 1, 13 };
const heim_oid asn1_oid_id_pkcs1_sha512WithRSAEncryption = { 7, oid_id_pkcs1_sha512WithRSAEncryption_variable_num };

static unsigned oid_id_heim_rsa_pkcs1_x509_variable_num[6] =  {1, 2, 752, 43, 16, 1 };
const heim_oid asn1_oid_id_heim_rsa_pkcs1_x509 = { 6, oid_id_heim_rsa_pkcs1_x509_variable_num };

static unsigned oid_id_pkcs_2_variable_num[6] =  {1, 2, 840, 113549, 1, 2 };
const heim_oid asn1_oid_id_pkcs_2 = { 6, oid_id_pkcs_2_variable_num };

static unsigned oid_id_pkcs2_md2_variable_num[7] =  {1, 2, 840, 113549, 1, 2, 2 };
const heim_oid asn1_oid_id_pkcs2_md2 = { 7, oid_id_pkcs2_md2_variable_num };

static unsigned oid_id_pkcs2_md4_variable_num[7] =  {1, 2, 840, 113549, 1, 2, 4 };
const heim_oid asn1_oid_id_pkcs2_md4 = { 7, oid_id_pkcs2_md4_variable_num };

static unsigned oid_id_pkcs2_md5_variable_num[7] =  {1, 2, 840, 113549, 1, 2, 5 };
const heim_oid asn1_oid_id_pkcs2_md5 = { 7, oid_id_pkcs2_md5_variable_num };

static unsigned oid_id_rsa_digestAlgorithm_variable_num[5] =  {1, 2, 840, 113549, 2 };
const heim_oid asn1_oid_id_rsa_digestAlgorithm = { 5, oid_id_rsa_digestAlgorithm_variable_num };

static unsigned oid_id_rsa_digest_md2_variable_num[6] =  {1, 2, 840, 113549, 2, 2 };
const heim_oid asn1_oid_id_rsa_digest_md2 = { 6, oid_id_rsa_digest_md2_variable_num };

static unsigned oid_id_rsa_digest_md4_variable_num[6] =  {1, 2, 840, 113549, 2, 4 };
const heim_oid asn1_oid_id_rsa_digest_md4 = { 6, oid_id_rsa_digest_md4_variable_num };

static unsigned oid_id_rsa_digest_md5_variable_num[6] =  {1, 2, 840, 113549, 2, 5 };
const heim_oid asn1_oid_id_rsa_digest_md5 = { 6, oid_id_rsa_digest_md5_variable_num };

static unsigned oid_id_pkcs_3_variable_num[6] =  {1, 2, 840, 113549, 1, 3 };
const heim_oid asn1_oid_id_pkcs_3 = { 6, oid_id_pkcs_3_variable_num };

static unsigned oid_id_pkcs3_rc2_cbc_variable_num[7] =  {1, 2, 840, 113549, 1, 3, 2 };
const heim_oid asn1_oid_id_pkcs3_rc2_cbc = { 7, oid_id_pkcs3_rc2_cbc_variable_num };

static unsigned oid_id_pkcs3_rc4_variable_num[7] =  {1, 2, 840, 113549, 1, 3, 4 };
const heim_oid asn1_oid_id_pkcs3_rc4 = { 7, oid_id_pkcs3_rc4_variable_num };

static unsigned oid_id_pkcs3_des_ede3_cbc_variable_num[7] =  {1, 2, 840, 113549, 1, 3, 7 };
const heim_oid asn1_oid_id_pkcs3_des_ede3_cbc = { 7, oid_id_pkcs3_des_ede3_cbc_variable_num };

static unsigned oid_id_rsadsi_encalg_variable_num[5] =  {1, 2, 840, 113549, 3 };
const heim_oid asn1_oid_id_rsadsi_encalg = { 5, oid_id_rsadsi_encalg_variable_num };

static unsigned oid_id_rsadsi_rc2_cbc_variable_num[6] =  {1, 2, 840, 113549, 3, 2 };
const heim_oid asn1_oid_id_rsadsi_rc2_cbc = { 6, oid_id_rsadsi_rc2_cbc_variable_num };

static unsigned oid_id_rsadsi_des_ede3_cbc_variable_num[6] =  {1, 2, 840, 113549, 3, 7 };
const heim_oid asn1_oid_id_rsadsi_des_ede3_cbc = { 6, oid_id_rsadsi_des_ede3_cbc_variable_num };

static unsigned oid_id_secsig_sha_1_variable_num[6] =  {1, 3, 14, 3, 2, 26 };
const heim_oid asn1_oid_id_secsig_sha_1 = { 6, oid_id_secsig_sha_1_variable_num };

static unsigned oid_id_secsig_sha_1WithRSAEncryption_variable_num[6] =  {1, 3, 14, 3, 2, 29 };
const heim_oid asn1_oid_id_secsig_sha_1WithRSAEncryption = { 6, oid_id_secsig_sha_1WithRSAEncryption_variable_num };

static unsigned oid_id_nistAlgorithm_variable_num[7] =  {2, 16, 840, 1, 101, 3, 4 };
const heim_oid asn1_oid_id_nistAlgorithm = { 7, oid_id_nistAlgorithm_variable_num };

static unsigned oid_id_nist_aes_algs_variable_num[8] =  {2, 16, 840, 1, 101, 3, 4, 1 };
const heim_oid asn1_oid_id_nist_aes_algs = { 8, oid_id_nist_aes_algs_variable_num };

static unsigned oid_id_aes_128_cbc_variable_num[9] =  {2, 16, 840, 1, 101, 3, 4, 1, 2 };
const heim_oid asn1_oid_id_aes_128_cbc = { 9, oid_id_aes_128_cbc_variable_num };

static unsigned oid_id_aes_192_cbc_variable_num[9] =  {2, 16, 840, 1, 101, 3, 4, 1, 22 };
const heim_oid asn1_oid_id_aes_192_cbc = { 9, oid_id_aes_192_cbc_variable_num };

static unsigned oid_id_aes_256_cbc_variable_num[9] =  {2, 16, 840, 1, 101, 3, 4, 1, 42 };
const heim_oid asn1_oid_id_aes_256_cbc = { 9, oid_id_aes_256_cbc_variable_num };

static unsigned oid_id_nist_sha_algs_variable_num[8] =  {2, 16, 840, 1, 101, 3, 4, 2 };
const heim_oid asn1_oid_id_nist_sha_algs = { 8, oid_id_nist_sha_algs_variable_num };

static unsigned oid_id_sha256_variable_num[9] =  {2, 16, 840, 1, 101, 3, 4, 2, 1 };
const heim_oid asn1_oid_id_sha256 = { 9, oid_id_sha256_variable_num };

static unsigned oid_id_sha224_variable_num[9] =  {2, 16, 840, 1, 101, 3, 4, 2, 4 };
const heim_oid asn1_oid_id_sha224 = { 9, oid_id_sha224_variable_num };

static unsigned oid_id_sha384_variable_num[9] =  {2, 16, 840, 1, 101, 3, 4, 2, 2 };
const heim_oid asn1_oid_id_sha384 = { 9, oid_id_sha384_variable_num };

static unsigned oid_id_sha512_variable_num[9] =  {2, 16, 840, 1, 101, 3, 4, 2, 3 };
const heim_oid asn1_oid_id_sha512 = { 9, oid_id_sha512_variable_num };

static unsigned oid_id_dhpublicnumber_variable_num[6] =  {1, 2, 840, 10046, 2, 1 };
const heim_oid asn1_oid_id_dhpublicnumber = { 6, oid_id_dhpublicnumber_variable_num };

static unsigned oid_id_ecPublicKey_variable_num[6] =  {1, 2, 840, 10045, 2, 1 };
const heim_oid asn1_oid_id_ecPublicKey = { 6, oid_id_ecPublicKey_variable_num };

static unsigned oid_id_ecDH_variable_num[5] =  {1, 3, 132, 1, 12 };
const heim_oid asn1_oid_id_ecDH = { 5, oid_id_ecDH_variable_num };

static unsigned oid_id_ecMQV_variable_num[5] =  {1, 3, 132, 1, 13 };
const heim_oid asn1_oid_id_ecMQV = { 5, oid_id_ecMQV_variable_num };

static unsigned oid_id_ecdsa_with_SHA256_variable_num[7] =  {1, 2, 840, 10045, 4, 3, 2 };
const heim_oid asn1_oid_id_ecdsa_with_SHA256 = { 7, oid_id_ecdsa_with_SHA256_variable_num };

static unsigned oid_id_ecdsa_with_SHA1_variable_num[6] =  {1, 2, 840, 10045, 4, 1 };
const heim_oid asn1_oid_id_ecdsa_with_SHA1 = { 6, oid_id_ecdsa_with_SHA1_variable_num };

static unsigned oid_id_ec_group_secp256r1_variable_num[7] =  {1, 2, 840, 10045, 3, 1, 7 };
const heim_oid asn1_oid_id_ec_group_secp256r1 = { 7, oid_id_ec_group_secp256r1_variable_num };

static unsigned oid_id_ec_group_secp160r1_variable_num[5] =  {1, 3, 132, 0, 8 };
const heim_oid asn1_oid_id_ec_group_secp160r1 = { 5, oid_id_ec_group_secp160r1_variable_num };

static unsigned oid_id_ec_group_secp160r2_variable_num[5] =  {1, 3, 132, 0, 30 };
const heim_oid asn1_oid_id_ec_group_secp160r2 = { 5, oid_id_ec_group_secp160r2_variable_num };

static unsigned oid_id_x9_57_variable_num[5] =  {1, 2, 840, 10046, 4 };
const heim_oid asn1_oid_id_x9_57 = { 5, oid_id_x9_57_variable_num };

static unsigned oid_id_dsa_variable_num[6] =  {1, 2, 840, 10046, 4, 1 };
const heim_oid asn1_oid_id_dsa = { 6, oid_id_dsa_variable_num };

static unsigned oid_id_dsa_with_sha1_variable_num[6] =  {1, 2, 840, 10046, 4, 3 };
const heim_oid asn1_oid_id_dsa_with_sha1 = { 6, oid_id_dsa_with_sha1_variable_num };

static unsigned oid_id_x520_at_variable_num[3] =  {2, 5, 4 };
const heim_oid asn1_oid_id_x520_at = { 3, oid_id_x520_at_variable_num };

static unsigned oid_id_at_commonName_variable_num[4] =  {2, 5, 4, 3 };
const heim_oid asn1_oid_id_at_commonName = { 4, oid_id_at_commonName_variable_num };

static unsigned oid_id_at_surname_variable_num[4] =  {2, 5, 4, 4 };
const heim_oid asn1_oid_id_at_surname = { 4, oid_id_at_surname_variable_num };

static unsigned oid_id_at_serialNumber_variable_num[4] =  {2, 5, 4, 5 };
const heim_oid asn1_oid_id_at_serialNumber = { 4, oid_id_at_serialNumber_variable_num };

static unsigned oid_id_at_countryName_variable_num[4] =  {2, 5, 4, 6 };
const heim_oid asn1_oid_id_at_countryName = { 4, oid_id_at_countryName_variable_num };

static unsigned oid_id_at_localityName_variable_num[4] =  {2, 5, 4, 7 };
const heim_oid asn1_oid_id_at_localityName = { 4, oid_id_at_localityName_variable_num };

static unsigned oid_id_at_stateOrProvinceName_variable_num[4] =  {2, 5, 4, 8 };
const heim_oid asn1_oid_id_at_stateOrProvinceName = { 4, oid_id_at_stateOrProvinceName_variable_num };

static unsigned oid_id_at_streetAddress_variable_num[4] =  {2, 5, 4, 9 };
const heim_oid asn1_oid_id_at_streetAddress = { 4, oid_id_at_streetAddress_variable_num };

static unsigned oid_id_at_organizationName_variable_num[4] =  {2, 5, 4, 10 };
const heim_oid asn1_oid_id_at_organizationName = { 4, oid_id_at_organizationName_variable_num };

static unsigned oid_id_at_organizationalUnitName_variable_num[4] =  {2, 5, 4, 11 };
const heim_oid asn1_oid_id_at_organizationalUnitName = { 4, oid_id_at_organizationalUnitName_variable_num };

static unsigned oid_id_at_title_variable_num[4] =  {2, 5, 4, 12 };
const heim_oid asn1_oid_id_at_title = { 4, oid_id_at_title_variable_num };

static unsigned oid_id_at_description_variable_num[4] =  {2, 5, 4, 13 };
const heim_oid asn1_oid_id_at_description = { 4, oid_id_at_description_variable_num };

static unsigned oid_id_at_name_variable_num[4] =  {2, 5, 4, 41 };
const heim_oid asn1_oid_id_at_name = { 4, oid_id_at_name_variable_num };

static unsigned oid_id_at_givenName_variable_num[4] =  {2, 5, 4, 42 };
const heim_oid asn1_oid_id_at_givenName = { 4, oid_id_at_givenName_variable_num };

static unsigned oid_id_at_initials_variable_num[4] =  {2, 5, 4, 43 };
const heim_oid asn1_oid_id_at_initials = { 4, oid_id_at_initials_variable_num };

static unsigned oid_id_at_generationQualifier_variable_num[4] =  {2, 5, 4, 44 };
const heim_oid asn1_oid_id_at_generationQualifier = { 4, oid_id_at_generationQualifier_variable_num };

static unsigned oid_id_at_pseudonym_variable_num[4] =  {2, 5, 4, 65 };
const heim_oid asn1_oid_id_at_pseudonym = { 4, oid_id_at_pseudonym_variable_num };

static unsigned oid_id_Userid_variable_num[7] =  {0, 9, 2342, 19200300, 100, 1, 1 };
const heim_oid asn1_oid_id_Userid = { 7, oid_id_Userid_variable_num };

static unsigned oid_id_domainComponent_variable_num[7] =  {0, 9, 2342, 19200300, 100, 1, 25 };
const heim_oid asn1_oid_id_domainComponent = { 7, oid_id_domainComponent_variable_num };

static unsigned oid_id_x509_ce_variable_num[3] =  {2, 5, 29 };
const heim_oid asn1_oid_id_x509_ce = { 3, oid_id_x509_ce_variable_num };

extern const struct asn1_template asn1_AlgorithmIdentifier[];
/* template_members: AlgorithmIdentifier exp exp */
extern const struct asn1_template asn1_AlgorithmIdentifier_tag__1[];
/* tsequence: members isstruct: 1 */
/* template_members: AlgorithmIdentifier exp exp */
extern const struct asn1_template asn1_AlgorithmIdentifier_tag_algorithm_2[];
/* generate_template_type: AlgorithmIdentifier_tag_algorithm_2 */
const struct asn1_template asn1_AlgorithmIdentifier_tag_algorithm_2[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* generate_template_type: AlgorithmIdentifier_tag__1 */
const struct asn1_template asn1_AlgorithmIdentifier_tag__1[] = {
/* 0 */ { 0, sizeof(struct AlgorithmIdentifier), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct AlgorithmIdentifier, algorithm), asn1_AlgorithmIdentifier_tag_algorithm_2 },
/* 2 */ { A1_OP_TYPE_EXTERN |A1_FLAG_OPTIONAL, offsetof(struct AlgorithmIdentifier, parameters), &asn1_extern_heim_any}
};
/* generate_template_type: AlgorithmIdentifier */
const struct asn1_template asn1_AlgorithmIdentifier[] = {
/* 0 */ { 0, sizeof(AlgorithmIdentifier), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AlgorithmIdentifier_tag__1 }
};

int
decode_AlgorithmIdentifier(const unsigned char *p, size_t len, AlgorithmIdentifier *data, size_t *size)
{
    return _asn1_decode_top(asn1_AlgorithmIdentifier, 0|0, p, len, data, size);
}


int
encode_AlgorithmIdentifier(unsigned char *p, size_t len, const AlgorithmIdentifier *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AlgorithmIdentifier, p, len, data, size);
    return ret;
}


size_t
length_AlgorithmIdentifier(const AlgorithmIdentifier *data)
{
    return _asn1_length(asn1_AlgorithmIdentifier, data);
}


void
free_AlgorithmIdentifier(AlgorithmIdentifier *data)
{
    _asn1_free_top(asn1_AlgorithmIdentifier, data);
}


int
copy_AlgorithmIdentifier(const AlgorithmIdentifier *from, AlgorithmIdentifier *to)
{
    return _asn1_copy_top(asn1_AlgorithmIdentifier, from, to);
}

extern const struct asn1_template asn1_AttributeType[];
/* template_members: AttributeType exp exp */
extern const struct asn1_template asn1_AttributeType_tag__3[];
/* generate_template_type: AttributeType_tag__3 */
/* generate_template_type: AttributeType */
const struct asn1_template asn1_AttributeType[] = {
/* 0 */ { 0, sizeof(AttributeType), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_AlgorithmIdentifier_tag_algorithm_2 }
};

int
decode_AttributeType(const unsigned char *p, size_t len, AttributeType *data, size_t *size)
{
    return _asn1_decode_top(asn1_AttributeType, 0|0, p, len, data, size);
}


int
encode_AttributeType(unsigned char *p, size_t len, const AttributeType *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AttributeType, p, len, data, size);
    return ret;
}


size_t
length_AttributeType(const AttributeType *data)
{
    return _asn1_length(asn1_AttributeType, data);
}


void
free_AttributeType(AttributeType *data)
{
    _asn1_free_top(asn1_AttributeType, data);
}


int
copy_AttributeType(const AttributeType *from, AttributeType *to)
{
    return _asn1_copy_top(asn1_AttributeType, from, to);
}

extern const struct asn1_template asn1_AttributeValue[];
/* generate_template_type: AttributeValue */
const struct asn1_template asn1_AttributeValue[] = {
/* 0 */ { 0, sizeof(AttributeValue), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_heim_any}
};

int
decode_AttributeValue(const unsigned char *p, size_t len, AttributeValue *data, size_t *size)
{
    return _asn1_decode_top(asn1_AttributeValue, 0|0, p, len, data, size);
}


int
encode_AttributeValue(unsigned char *p, size_t len, const AttributeValue *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AttributeValue, p, len, data, size);
    return ret;
}


size_t
length_AttributeValue(const AttributeValue *data)
{
    return _asn1_length(asn1_AttributeValue, data);
}


void
free_AttributeValue(AttributeValue *data)
{
    _asn1_free_top(asn1_AttributeValue, data);
}


int
copy_AttributeValue(const AttributeValue *from, AttributeValue *to)
{
    return _asn1_copy_top(asn1_AttributeValue, from, to);
}

extern const struct asn1_template asn1_DirectoryString[];
extern const struct asn1_template asn1_DirectoryString_choice_ia5String[];
/* template_members: heim_ia5_string exp exp */
extern const struct asn1_template asn1_heim_ia5_string_tag__4[];
/* generate_template_type: heim_ia5_string_tag__4 */
const struct asn1_template asn1_heim_ia5_string_tag__4[] = {
/* 0 */ { 0, sizeof(heim_ia5_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_IA5_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_ia5String */
const struct asn1_template asn1_DirectoryString_choice_ia5String[] = {
/* 0 */ { 0, sizeof(heim_ia5_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_IA5String), 0, asn1_heim_ia5_string_tag__4 }
};
extern const struct asn1_template asn1_DirectoryString_choice_teletexString[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag__5[];
/* generate_template_type: heim_general_string_tag__5 */
const struct asn1_template asn1_heim_general_string_tag__5[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_TELETEX_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_teletexString */
const struct asn1_template asn1_DirectoryString_choice_teletexString[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_TeletexString), 0, asn1_heim_general_string_tag__5 }
};
extern const struct asn1_template asn1_DirectoryString_choice_printableString[];
/* template_members: heim_printable_string exp exp */
extern const struct asn1_template asn1_heim_printable_string_tag__6[];
/* generate_template_type: heim_printable_string_tag__6 */
const struct asn1_template asn1_heim_printable_string_tag__6[] = {
/* 0 */ { 0, sizeof(heim_printable_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_PRINTABLE_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_printableString */
const struct asn1_template asn1_DirectoryString_choice_printableString[] = {
/* 0 */ { 0, sizeof(heim_printable_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_PrintableString), 0, asn1_heim_printable_string_tag__6 }
};
extern const struct asn1_template asn1_DirectoryString_choice_universalString[];
/* template_members: heim_universal_string exp exp */
extern const struct asn1_template asn1_heim_universal_string_tag__7[];
/* generate_template_type: heim_universal_string_tag__7 */
const struct asn1_template asn1_heim_universal_string_tag__7[] = {
/* 0 */ { 0, sizeof(heim_universal_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UNIVERSAL_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_universalString */
const struct asn1_template asn1_DirectoryString_choice_universalString[] = {
/* 0 */ { 0, sizeof(heim_universal_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GraphicString), 0, asn1_heim_universal_string_tag__7 }
};
extern const struct asn1_template asn1_DirectoryString_choice_utf8String[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag__8[];
/* generate_template_type: heim_utf8_string_tag__8 */
const struct asn1_template asn1_heim_utf8_string_tag__8[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UTF8_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_utf8String */
const struct asn1_template asn1_DirectoryString_choice_utf8String[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_heim_utf8_string_tag__8 }
};
extern const struct asn1_template asn1_DirectoryString_choice_bmpString[];
/* template_members: heim_bmp_string exp exp */
extern const struct asn1_template asn1_heim_bmp_string_tag__9[];
/* generate_template_type: heim_bmp_string_tag__9 */
const struct asn1_template asn1_heim_bmp_string_tag__9[] = {
/* 0 */ { 0, sizeof(heim_bmp_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_BMP_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_bmpString */
const struct asn1_template asn1_DirectoryString_choice_bmpString[] = {
/* 0 */ { 0, sizeof(heim_bmp_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BMPString), 0, asn1_heim_bmp_string_tag__9 }
};
static const struct asn1_template asn1_choice_DirectoryString_0[] = {
/* 0 */ { 0, offsetof(DirectoryString, element), ((void *)6) },
/* 1 */ { choice_DirectoryString_ia5String, offsetof(DirectoryString, u.ia5String), asn1_DirectoryString_choice_ia5String },
/* 2 */ { choice_DirectoryString_teletexString, offsetof(DirectoryString, u.teletexString), asn1_DirectoryString_choice_teletexString },
/* 3 */ { choice_DirectoryString_printableString, offsetof(DirectoryString, u.printableString), asn1_DirectoryString_choice_printableString },
/* 4 */ { choice_DirectoryString_universalString, offsetof(DirectoryString, u.universalString), asn1_DirectoryString_choice_universalString },
/* 5 */ { choice_DirectoryString_utf8String, offsetof(DirectoryString, u.utf8String), asn1_DirectoryString_choice_utf8String },
/* 6 */ { choice_DirectoryString_bmpString, offsetof(DirectoryString, u.bmpString), asn1_DirectoryString_choice_bmpString }
};
/* generate_template_type: DirectoryString */
const struct asn1_template asn1_DirectoryString[] = {
/* 0 */ { 0, sizeof(DirectoryString), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_DirectoryString_0 }
};

int
decode_DirectoryString(const unsigned char *p, size_t len, DirectoryString *data, size_t *size)
{
    return _asn1_decode_top(asn1_DirectoryString, 0|0, p, len, data, size);
}


int
encode_DirectoryString(unsigned char *p, size_t len, const DirectoryString *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DirectoryString, p, len, data, size);
    return ret;
}


size_t
length_DirectoryString(const DirectoryString *data)
{
    return _asn1_length(asn1_DirectoryString, data);
}


void
free_DirectoryString(DirectoryString *data)
{
    _asn1_free_top(asn1_DirectoryString, data);
}


int
copy_DirectoryString(const DirectoryString *from, DirectoryString *to)
{
    return _asn1_copy_top(asn1_DirectoryString, from, to);
}

extern const struct asn1_template asn1_Attribute[];
/* template_members: Attribute exp exp */
extern const struct asn1_template asn1_Attribute_tag__10[];
/* tsequence: members isstruct: 1 */
/* template_members: Attribute exp exp */
extern const struct asn1_template asn1_Attribute_tag_value_11[];
extern const struct asn1_template asn1_Attribute_value_0[];
/* generate_template_type: Attribute_value_0 */
const struct asn1_template asn1_Attribute_value_0[] = {
/* 0 */ { 0, sizeof(heim_any), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_heim_any}
};
/* generate_template_type: Attribute_tag_value_11 */
const struct asn1_template asn1_Attribute_tag_value_11[] = {
/* 0 */ { 0, sizeof(struct Attribute), ((void *)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_Attribute_value_0 }
};
/* generate_template_type: Attribute_tag__10 */
const struct asn1_template asn1_Attribute_tag__10[] = {
/* 0 */ { 0, sizeof(struct Attribute), ((void *)2) },
/* 1 */ { A1_OP_TYPE , offsetof(struct Attribute, type), asn1_AttributeType },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), offsetof(struct Attribute, value), asn1_Attribute_tag_value_11 }
};
/* generate_template_type: Attribute */
const struct asn1_template asn1_Attribute[] = {
/* 0 */ { 0, sizeof(Attribute), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Attribute_tag__10 }
};

int
decode_Attribute(const unsigned char *p, size_t len, Attribute *data, size_t *size)
{
    return _asn1_decode_top(asn1_Attribute, 0|0, p, len, data, size);
}


int
encode_Attribute(unsigned char *p, size_t len, const Attribute *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Attribute, p, len, data, size);
    return ret;
}


size_t
length_Attribute(const Attribute *data)
{
    return _asn1_length(asn1_Attribute, data);
}


void
free_Attribute(Attribute *data)
{
    _asn1_free_top(asn1_Attribute, data);
}


int
copy_Attribute(const Attribute *from, Attribute *to)
{
    return _asn1_copy_top(asn1_Attribute, from, to);
}

extern const struct asn1_template asn1_AttributeTypeAndValue[];
/* template_members: AttributeTypeAndValue exp exp */
extern const struct asn1_template asn1_AttributeTypeAndValue_tag__12[];
/* tsequence: members isstruct: 1 */
/* generate_template_type: AttributeTypeAndValue_tag__12 */
const struct asn1_template asn1_AttributeTypeAndValue_tag__12[] = {
/* 0 */ { 0, sizeof(struct AttributeTypeAndValue), ((void *)2) },
/* 1 */ { A1_OP_TYPE , offsetof(struct AttributeTypeAndValue, type), asn1_AttributeType },
/* 2 */ { A1_OP_TYPE , offsetof(struct AttributeTypeAndValue, value), asn1_DirectoryString }
};
/* generate_template_type: AttributeTypeAndValue */
const struct asn1_template asn1_AttributeTypeAndValue[] = {
/* 0 */ { 0, sizeof(AttributeTypeAndValue), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AttributeTypeAndValue_tag__12 }
};

int
decode_AttributeTypeAndValue(const unsigned char *p, size_t len, AttributeTypeAndValue *data, size_t *size)
{
    return _asn1_decode_top(asn1_AttributeTypeAndValue, 0|0, p, len, data, size);
}


int
encode_AttributeTypeAndValue(unsigned char *p, size_t len, const AttributeTypeAndValue *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AttributeTypeAndValue, p, len, data, size);
    return ret;
}


size_t
length_AttributeTypeAndValue(const AttributeTypeAndValue *data)
{
    return _asn1_length(asn1_AttributeTypeAndValue, data);
}


void
free_AttributeTypeAndValue(AttributeTypeAndValue *data)
{
    _asn1_free_top(asn1_AttributeTypeAndValue, data);
}


int
copy_AttributeTypeAndValue(const AttributeTypeAndValue *from, AttributeTypeAndValue *to)
{
    return _asn1_copy_top(asn1_AttributeTypeAndValue, from, to);
}

extern const struct asn1_template asn1_RelativeDistinguishedName[];
/* template_members: RelativeDistinguishedName exp exp */
extern const struct asn1_template asn1_RelativeDistinguishedName_tag__13[];
extern const struct asn1_template asn1_AttributeTypeAndValue_seofTstruct_1[];
/* generate_template_type: AttributeTypeAndValue_seofTstruct_1 */
const struct asn1_template asn1_AttributeTypeAndValue_seofTstruct_1[] = {
/* 0 */ { 0, sizeof(AttributeTypeAndValue), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AttributeTypeAndValue }
};
/* generate_template_type: RelativeDistinguishedName_tag__13 */
const struct asn1_template asn1_RelativeDistinguishedName_tag__13[] = {
/* 0 */ { 0, sizeof(AttributeTypeAndValue), ((void *)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_AttributeTypeAndValue_seofTstruct_1 }
};
/* generate_template_type: RelativeDistinguishedName */
const struct asn1_template asn1_RelativeDistinguishedName[] = {
/* 0 */ { 0, sizeof(RelativeDistinguishedName), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_RelativeDistinguishedName_tag__13 }
};

int
decode_RelativeDistinguishedName(const unsigned char *p, size_t len, RelativeDistinguishedName *data, size_t *size)
{
    return _asn1_decode_top(asn1_RelativeDistinguishedName, 0|0, p, len, data, size);
}


int
encode_RelativeDistinguishedName(unsigned char *p, size_t len, const RelativeDistinguishedName *data, size_t *size)
{
    int ret = _asn1_encode(asn1_RelativeDistinguishedName, p, len, data, size);
    return ret;
}


size_t
length_RelativeDistinguishedName(const RelativeDistinguishedName *data)
{
    return _asn1_length(asn1_RelativeDistinguishedName, data);
}


void
free_RelativeDistinguishedName(RelativeDistinguishedName *data)
{
    _asn1_free_top(asn1_RelativeDistinguishedName, data);
}


int
copy_RelativeDistinguishedName(const RelativeDistinguishedName *from, RelativeDistinguishedName *to)
{
    return _asn1_copy_top(asn1_RelativeDistinguishedName, from, to);
}

extern const struct asn1_template asn1_RDNSequence[];
/* template_members: RDNSequence exp exp */
extern const struct asn1_template asn1_RDNSequence_tag__14[];
extern const struct asn1_template asn1_RelativeDistinguishedName_seofTstruct_2[];
/* generate_template_type: RelativeDistinguishedName_seofTstruct_2 */
const struct asn1_template asn1_RelativeDistinguishedName_seofTstruct_2[] = {
/* 0 */ { 0, sizeof(RelativeDistinguishedName), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_RelativeDistinguishedName }
};
/* generate_template_type: RDNSequence_tag__14 */
const struct asn1_template asn1_RDNSequence_tag__14[] = {
/* 0 */ { 0, sizeof(RelativeDistinguishedName), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_RelativeDistinguishedName_seofTstruct_2 }
};
/* generate_template_type: RDNSequence */
const struct asn1_template asn1_RDNSequence[] = {
/* 0 */ { 0, sizeof(RDNSequence), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_RDNSequence_tag__14 }
};

int
decode_RDNSequence(const unsigned char *p, size_t len, RDNSequence *data, size_t *size)
{
    return _asn1_decode_top(asn1_RDNSequence, 0|0, p, len, data, size);
}


int
encode_RDNSequence(unsigned char *p, size_t len, const RDNSequence *data, size_t *size)
{
    int ret = _asn1_encode(asn1_RDNSequence, p, len, data, size);
    return ret;
}


size_t
length_RDNSequence(const RDNSequence *data)
{
    return _asn1_length(asn1_RDNSequence, data);
}


void
free_RDNSequence(RDNSequence *data)
{
    _asn1_free_top(asn1_RDNSequence, data);
}


int
copy_RDNSequence(const RDNSequence *from, RDNSequence *to)
{
    return _asn1_copy_top(asn1_RDNSequence, from, to);
}

extern const struct asn1_template asn1_Name[];
extern const struct asn1_template asn1_Name_choice_rdnSequence[];
/* generate_template_type: Name_choice_rdnSequence */
const struct asn1_template asn1_Name_choice_rdnSequence[] = {
/* 0 */ { 0, sizeof(RDNSequence), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_RDNSequence }
};
static const struct asn1_template asn1_choice_Name_1[] = {
/* 0 */ { 0, offsetof(Name, element), ((void *)1) },
/* 1 */ { choice_Name_rdnSequence, offsetof(Name, u.rdnSequence), asn1_Name_choice_rdnSequence }
};
/* generate_template_type: Name */
const struct asn1_template asn1_Name[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(Name), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_Name_1 }
};

int
decode_Name(const unsigned char *p, size_t len, Name *data, size_t *size)
{
    return _asn1_decode_top(asn1_Name, 0|0, p, len, data, size);
}


int
encode_Name(unsigned char *p, size_t len, const Name *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Name, p, len, data, size);
    return ret;
}


size_t
length_Name(const Name *data)
{
    return _asn1_length(asn1_Name, data);
}


void
free_Name(Name *data)
{
    _asn1_free_top(asn1_Name, data);
}


int
copy_Name(const Name *from, Name *to)
{
    return _asn1_copy_top(asn1_Name, from, to);
}

extern const struct asn1_template asn1_CertificateSerialNumber[];
/* template_members: CertificateSerialNumber exp exp */
extern const struct asn1_template asn1_CertificateSerialNumber_tag__15[];
/* generate_template_type: CertificateSerialNumber_tag__15 */
const struct asn1_template asn1_CertificateSerialNumber_tag__15[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_INTEGER), 0, NULL }
};
/* generate_template_type: CertificateSerialNumber */
const struct asn1_template asn1_CertificateSerialNumber[] = {
/* 0 */ { 0, sizeof(CertificateSerialNumber), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_CertificateSerialNumber_tag__15 }
};

int
decode_CertificateSerialNumber(const unsigned char *p, size_t len, CertificateSerialNumber *data, size_t *size)
{
    return _asn1_decode_top(asn1_CertificateSerialNumber, 0|0, p, len, data, size);
}


int
encode_CertificateSerialNumber(unsigned char *p, size_t len, const CertificateSerialNumber *data, size_t *size)
{
    int ret = _asn1_encode(asn1_CertificateSerialNumber, p, len, data, size);
    return ret;
}


size_t
length_CertificateSerialNumber(const CertificateSerialNumber *data)
{
    return _asn1_length(asn1_CertificateSerialNumber, data);
}


void
free_CertificateSerialNumber(CertificateSerialNumber *data)
{
    _asn1_free_top(asn1_CertificateSerialNumber, data);
}


int
copy_CertificateSerialNumber(const CertificateSerialNumber *from, CertificateSerialNumber *to)
{
    return _asn1_copy_top(asn1_CertificateSerialNumber, from, to);
}

extern const struct asn1_template asn1_Time[];
extern const struct asn1_template asn1_Time_choice_utcTime[];
/* template_members: time_t exp exp */
extern const struct asn1_template asn1_time_t_tag__16[];
/* generate_template_type: time_t_tag__16 */
const struct asn1_template asn1_time_t_tag__16[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UTC_TIME), 0, NULL }
};
/* generate_template_type: Time_choice_utcTime */
const struct asn1_template asn1_Time_choice_utcTime[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTCTime), 0, asn1_time_t_tag__16 }
};
extern const struct asn1_template asn1_Time_choice_generalTime[];
/* template_members: time_t exp exp */
extern const struct asn1_template asn1_time_t_tag__17[];
/* generate_template_type: time_t_tag__17 */
const struct asn1_template asn1_time_t_tag__17[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_GENERALIZED_TIME), 0, NULL }
};
/* generate_template_type: Time_choice_generalTime */
const struct asn1_template asn1_Time_choice_generalTime[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), 0, asn1_time_t_tag__17 }
};
static const struct asn1_template asn1_choice_Time_2[] = {
/* 0 */ { 0, offsetof(Time, element), ((void *)2) },
/* 1 */ { choice_Time_utcTime, offsetof(Time, u.utcTime), asn1_Time_choice_utcTime },
/* 2 */ { choice_Time_generalTime, offsetof(Time, u.generalTime), asn1_Time_choice_generalTime }
};
/* generate_template_type: Time */
const struct asn1_template asn1_Time[] = {
/* 0 */ { 0, sizeof(Time), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_Time_2 }
};

int
decode_Time(const unsigned char *p, size_t len, Time *data, size_t *size)
{
    return _asn1_decode_top(asn1_Time, 0|0, p, len, data, size);
}


int
encode_Time(unsigned char *p, size_t len, const Time *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Time, p, len, data, size);
    return ret;
}


size_t
length_Time(const Time *data)
{
    return _asn1_length(asn1_Time, data);
}


void
free_Time(Time *data)
{
    _asn1_free_top(asn1_Time, data);
}


int
copy_Time(const Time *from, Time *to)
{
    return _asn1_copy_top(asn1_Time, from, to);
}

extern const struct asn1_template asn1_Validity[];
/* template_members: Validity exp exp */
extern const struct asn1_template asn1_Validity_tag__18[];
/* tsequence: members isstruct: 1 */
/* generate_template_type: Validity_tag__18 */
const struct asn1_template asn1_Validity_tag__18[] = {
/* 0 */ { 0, sizeof(struct Validity), ((void *)2) },
/* 1 */ { A1_OP_TYPE , offsetof(struct Validity, notBefore), asn1_Time },
/* 2 */ { A1_OP_TYPE , offsetof(struct Validity, notAfter), asn1_Time }
};
/* generate_template_type: Validity */
const struct asn1_template asn1_Validity[] = {
/* 0 */ { 0, sizeof(Validity), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Validity_tag__18 }
};

int
decode_Validity(const unsigned char *p, size_t len, Validity *data, size_t *size)
{
    return _asn1_decode_top(asn1_Validity, 0|0, p, len, data, size);
}


int
encode_Validity(unsigned char *p, size_t len, const Validity *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Validity, p, len, data, size);
    return ret;
}


size_t
length_Validity(const Validity *data)
{
    return _asn1_length(asn1_Validity, data);
}


void
free_Validity(Validity *data)
{
    _asn1_free_top(asn1_Validity, data);
}


int
copy_Validity(const Validity *from, Validity *to)
{
    return _asn1_copy_top(asn1_Validity, from, to);
}

extern const struct asn1_template asn1_UniqueIdentifier[];
/* template_members: UniqueIdentifier exp exp */
extern const struct asn1_template asn1_UniqueIdentifier_tag__19[];
/* generate_template_type: UniqueIdentifier_tag__19 */
const struct asn1_template asn1_UniqueIdentifier_tag__19[] = {
/* 0 */ { 0, sizeof(UniqueIdentifier), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: UniqueIdentifier */
const struct asn1_template asn1_UniqueIdentifier[] = {
/* 0 */ { 0, sizeof(UniqueIdentifier), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_UniqueIdentifier_tag__19 }
};

int
decode_UniqueIdentifier(const unsigned char *p, size_t len, UniqueIdentifier *data, size_t *size)
{
    return _asn1_decode_top(asn1_UniqueIdentifier, 0|0, p, len, data, size);
}


int
encode_UniqueIdentifier(unsigned char *p, size_t len, const UniqueIdentifier *data, size_t *size)
{
    int ret = _asn1_encode(asn1_UniqueIdentifier, p, len, data, size);
    return ret;
}


size_t
length_UniqueIdentifier(const UniqueIdentifier *data)
{
    return _asn1_length(asn1_UniqueIdentifier, data);
}


void
free_UniqueIdentifier(UniqueIdentifier *data)
{
    _asn1_free_top(asn1_UniqueIdentifier, data);
}


int
copy_UniqueIdentifier(const UniqueIdentifier *from, UniqueIdentifier *to)
{
    return _asn1_copy_top(asn1_UniqueIdentifier, from, to);
}

extern const struct asn1_template asn1_SubjectPublicKeyInfo[];
/* template_members: SubjectPublicKeyInfo exp exp */
extern const struct asn1_template asn1_SubjectPublicKeyInfo_tag__20[];
/* tsequence: members isstruct: 1 */
/* template_members: SubjectPublicKeyInfo exp exp */
extern const struct asn1_template asn1_SubjectPublicKeyInfo_tag_subjectPublicKey_21[];
/* generate_template_type: SubjectPublicKeyInfo_tag_subjectPublicKey_21 */
const struct asn1_template asn1_SubjectPublicKeyInfo_tag_subjectPublicKey_21[] = {
/* 0 */ { 0, sizeof(SubjectPublicKeyInfo), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: SubjectPublicKeyInfo_tag__20 */
const struct asn1_template asn1_SubjectPublicKeyInfo_tag__20[] = {
/* 0 */ { 0, sizeof(struct SubjectPublicKeyInfo), ((void *)2) },
/* 1 */ { A1_OP_TYPE , offsetof(struct SubjectPublicKeyInfo, algorithm), asn1_AlgorithmIdentifier },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct SubjectPublicKeyInfo, subjectPublicKey), asn1_SubjectPublicKeyInfo_tag_subjectPublicKey_21 }
};
/* generate_template_type: SubjectPublicKeyInfo */
const struct asn1_template asn1_SubjectPublicKeyInfo[] = {
/* 0 */ { 0, sizeof(SubjectPublicKeyInfo), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_SubjectPublicKeyInfo_tag__20 }
};

int
decode_SubjectPublicKeyInfo(const unsigned char *p, size_t len, SubjectPublicKeyInfo *data, size_t *size)
{
    return _asn1_decode_top(asn1_SubjectPublicKeyInfo, 0|0, p, len, data, size);
}


int
encode_SubjectPublicKeyInfo(unsigned char *p, size_t len, const SubjectPublicKeyInfo *data, size_t *size)
{
    int ret = _asn1_encode(asn1_SubjectPublicKeyInfo, p, len, data, size);
    return ret;
}


size_t
length_SubjectPublicKeyInfo(const SubjectPublicKeyInfo *data)
{
    return _asn1_length(asn1_SubjectPublicKeyInfo, data);
}


void
free_SubjectPublicKeyInfo(SubjectPublicKeyInfo *data)
{
    _asn1_free_top(asn1_SubjectPublicKeyInfo, data);
}


int
copy_SubjectPublicKeyInfo(const SubjectPublicKeyInfo *from, SubjectPublicKeyInfo *to)
{
    return _asn1_copy_top(asn1_SubjectPublicKeyInfo, from, to);
}

extern const struct asn1_template asn1_Extension[];
/* template_members: Extension exp exp */
extern const struct asn1_template asn1_Extension_tag__22[];
/* tsequence: members isstruct: 1 */
/* template_members: Extension exp exp */
extern const struct asn1_template asn1_Extension_tag_extnID_23[];
/* generate_template_type: Extension_tag_extnID_23 */
/* template_members: Extension exp exp */
extern const struct asn1_template asn1_Extension_tag_critical_24[];
/* generate_template_type: Extension_tag_critical_24 */
const struct asn1_template asn1_Extension_tag_critical_24[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_BOOLEAN), 0, NULL }
};
/* template_members: Extension exp exp */
extern const struct asn1_template asn1_Extension_tag_extnValue_25[];
/* generate_template_type: Extension_tag_extnValue_25 */
const struct asn1_template asn1_Extension_tag_extnValue_25[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: Extension_tag__22 */
const struct asn1_template asn1_Extension_tag__22[] = {
/* 0 */ { 0, sizeof(struct Extension), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct Extension, extnID), asn1_AlgorithmIdentifier_tag_algorithm_2 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean)|A1_FLAG_OPTIONAL, offsetof(struct Extension, critical), asn1_Extension_tag_critical_24 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct Extension, extnValue), asn1_Extension_tag_extnValue_25 }
};
/* generate_template_type: Extension */
const struct asn1_template asn1_Extension[] = {
/* 0 */ { 0, sizeof(Extension), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Extension_tag__22 }
};

int
decode_Extension(const unsigned char *p, size_t len, Extension *data, size_t *size)
{
    return _asn1_decode_top(asn1_Extension, 0|0, p, len, data, size);
}


int
encode_Extension(unsigned char *p, size_t len, const Extension *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Extension, p, len, data, size);
    return ret;
}


size_t
length_Extension(const Extension *data)
{
    return _asn1_length(asn1_Extension, data);
}


void
free_Extension(Extension *data)
{
    _asn1_free_top(asn1_Extension, data);
}


int
copy_Extension(const Extension *from, Extension *to)
{
    return _asn1_copy_top(asn1_Extension, from, to);
}

extern const struct asn1_template asn1_Extensions[];
/* template_members: Extensions exp exp */
extern const struct asn1_template asn1_Extensions_tag__26[];
extern const struct asn1_template asn1_Extension_seofTstruct_3[];
/* generate_template_type: Extension_seofTstruct_3 */
const struct asn1_template asn1_Extension_seofTstruct_3[] = {
/* 0 */ { 0, sizeof(Extension), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Extension }
};
/* generate_template_type: Extensions_tag__26 */
const struct asn1_template asn1_Extensions_tag__26[] = {
/* 0 */ { 0, sizeof(Extension), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_Extension_seofTstruct_3 }
};
/* generate_template_type: Extensions */
const struct asn1_template asn1_Extensions[] = {
/* 0 */ { 0, sizeof(Extensions), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Extensions_tag__26 }
};

int
decode_Extensions(const unsigned char *p, size_t len, Extensions *data, size_t *size)
{
    return _asn1_decode_top(asn1_Extensions, 0|0, p, len, data, size);
}


int
encode_Extensions(unsigned char *p, size_t len, const Extensions *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Extensions, p, len, data, size);
    return ret;
}


size_t
length_Extensions(const Extensions *data)
{
    return _asn1_length(asn1_Extensions, data);
}


void
free_Extensions(Extensions *data)
{
    _asn1_free_top(asn1_Extensions, data);
}


int
copy_Extensions(const Extensions *from, Extensions *to)
{
    return _asn1_copy_top(asn1_Extensions, from, to);
}

int ASN1CALL
add_Extensions(Extensions *data, const Extension *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_Extension(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_Extensions(Extensions *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_Extension(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

extern const struct asn1_template asn1_TBSCertificate[];
/* template_members: TBSCertificate exp exp */
extern const struct asn1_template asn1_TBSCertificate_tag__27[];
/* tsequence: members isstruct: 1 */
/* template_members: TBSCertificate exp exp */
extern const struct asn1_template asn1_TBSCertificate_tag_version_28[];
/* generate_template_type: TBSCertificate_tag_version_28 */
const struct asn1_template asn1_TBSCertificate_tag_version_28[] = {
/* 0 */ { 0, sizeof(Version), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Version }
};
/* template_members: TBSCertificate exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_TBSCertificate_tag_issuerUniqueID_29[];
/* generate_template_type: TBSCertificate_tag_issuerUniqueID_29 */
const struct asn1_template asn1_TBSCertificate_tag_issuerUniqueID_29[] = {
/* 0 */ { 0, sizeof(TBSCertificate), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* template_members: TBSCertificate exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_TBSCertificate_tag_subjectUniqueID_30[];
/* generate_template_type: TBSCertificate_tag_subjectUniqueID_30 */
/* template_members: TBSCertificate exp exp */
extern const struct asn1_template asn1_TBSCertificate_tag_extensions_31[];
/* generate_template_type: TBSCertificate_tag_extensions_31 */
const struct asn1_template asn1_TBSCertificate_tag_extensions_31[] = {
/* 0 */ { 0, sizeof(Extensions), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Extensions }
};
/* generate_template_type: TBSCertificate_tag__27 */
const struct asn1_template asn1_TBSCertificate_tag__27[] = {
/* 0 */ { 0, sizeof(struct TBSCertificate), ((void *)10) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct TBSCertificate, version), asn1_TBSCertificate_tag_version_28 },
/* 2 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, serialNumber), asn1_CertificateSerialNumber },
/* 3 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, signature), asn1_AlgorithmIdentifier },
/* 4 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, issuer), asn1_Name },
/* 5 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, validity), asn1_Validity },
/* 6 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, subject), asn1_Name },
/* 7 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, subjectPublicKeyInfo), asn1_SubjectPublicKeyInfo },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct TBSCertificate, issuerUniqueID), asn1_TBSCertificate_tag_issuerUniqueID_29 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct TBSCertificate, subjectUniqueID), asn1_TBSCertificate_tag_issuerUniqueID_29 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct TBSCertificate, extensions), asn1_TBSCertificate_tag_extensions_31 }
};
/* generate_template_type: TBSCertificate */
const struct asn1_template asn1_TBSCertificate[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(TBSCertificate), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TBSCertificate_tag__27 }
};

int
decode_TBSCertificate(const unsigned char *p, size_t len, TBSCertificate *data, size_t *size)
{
    return _asn1_decode_top(asn1_TBSCertificate, 0|0, p, len, data, size);
}


int
encode_TBSCertificate(unsigned char *p, size_t len, const TBSCertificate *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TBSCertificate, p, len, data, size);
    return ret;
}


size_t
length_TBSCertificate(const TBSCertificate *data)
{
    return _asn1_length(asn1_TBSCertificate, data);
}


void
free_TBSCertificate(TBSCertificate *data)
{
    _asn1_free_top(asn1_TBSCertificate, data);
}


int
copy_TBSCertificate(const TBSCertificate *from, TBSCertificate *to)
{
    return _asn1_copy_top(asn1_TBSCertificate, from, to);
}

extern const struct asn1_template asn1_Certificate[];
/* template_members: Certificate exp exp */
extern const struct asn1_template asn1_Certificate_tag__32[];
/* tsequence: members isstruct: 1 */
/* template_members: Certificate exp exp */
extern const struct asn1_template asn1_Certificate_tag_signatureValue_33[];
/* generate_template_type: Certificate_tag_signatureValue_33 */
const struct asn1_template asn1_Certificate_tag_signatureValue_33[] = {
/* 0 */ { 0, sizeof(Certificate), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: Certificate_tag__32 */
const struct asn1_template asn1_Certificate_tag__32[] = {
/* 0 */ { 0, sizeof(struct Certificate), ((void *)3) },
/* 1 */ { A1_OP_TYPE , offsetof(struct Certificate, tbsCertificate), asn1_TBSCertificate },
/* 2 */ { A1_OP_TYPE , offsetof(struct Certificate, signatureAlgorithm), asn1_AlgorithmIdentifier },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct Certificate, signatureValue), asn1_Certificate_tag_signatureValue_33 }
};
/* generate_template_type: Certificate */
const struct asn1_template asn1_Certificate[] = {
/* 0 */ { 0, sizeof(Certificate), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Certificate_tag__32 }
};

int
decode_Certificate(const unsigned char *p, size_t len, Certificate *data, size_t *size)
{
    return _asn1_decode_top(asn1_Certificate, 0|0, p, len, data, size);
}


int
encode_Certificate(unsigned char *p, size_t len, const Certificate *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Certificate, p, len, data, size);
    return ret;
}


size_t
length_Certificate(const Certificate *data)
{
    return _asn1_length(asn1_Certificate, data);
}


void
free_Certificate(Certificate *data)
{
    _asn1_free_top(asn1_Certificate, data);
}


int
copy_Certificate(const Certificate *from, Certificate *to)
{
    return _asn1_copy_top(asn1_Certificate, from, to);
}

extern const struct asn1_template asn1_Certificates[];
/* template_members: Certificates exp exp */
extern const struct asn1_template asn1_Certificates_tag__34[];
extern const struct asn1_template asn1_Certificate_seofTstruct_4[];
/* generate_template_type: Certificate_seofTstruct_4 */
const struct asn1_template asn1_Certificate_seofTstruct_4[] = {
/* 0 */ { 0, sizeof(Certificate), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Certificate }
};
/* generate_template_type: Certificates_tag__34 */
const struct asn1_template asn1_Certificates_tag__34[] = {
/* 0 */ { 0, sizeof(Certificate), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_Certificate_seofTstruct_4 }
};
/* generate_template_type: Certificates */
const struct asn1_template asn1_Certificates[] = {
/* 0 */ { 0, sizeof(Certificates), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Certificates_tag__34 }
};

int
decode_Certificates(const unsigned char *p, size_t len, Certificates *data, size_t *size)
{
    return _asn1_decode_top(asn1_Certificates, 0|0, p, len, data, size);
}


int
encode_Certificates(unsigned char *p, size_t len, const Certificates *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Certificates, p, len, data, size);
    return ret;
}


size_t
length_Certificates(const Certificates *data)
{
    return _asn1_length(asn1_Certificates, data);
}


void
free_Certificates(Certificates *data)
{
    _asn1_free_top(asn1_Certificates, data);
}


int
copy_Certificates(const Certificates *from, Certificates *to)
{
    return _asn1_copy_top(asn1_Certificates, from, to);
}

extern const struct asn1_template asn1_ValidationParms[];
/* template_members: ValidationParms exp exp */
extern const struct asn1_template asn1_ValidationParms_tag__35[];
/* tsequence: members isstruct: 1 */
/* template_members: ValidationParms exp exp */
extern const struct asn1_template asn1_ValidationParms_tag_seed_36[];
/* generate_template_type: ValidationParms_tag_seed_36 */
const struct asn1_template asn1_ValidationParms_tag_seed_36[] = {
/* 0 */ { 0, sizeof(ValidationParms), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* template_members: ValidationParms exp exp */
extern const struct asn1_template asn1_ValidationParms_tag_pgenCounter_37[];
/* generate_template_type: ValidationParms_tag_pgenCounter_37 */
/* generate_template_type: ValidationParms_tag__35 */
const struct asn1_template asn1_ValidationParms_tag__35[] = {
/* 0 */ { 0, sizeof(struct ValidationParms), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct ValidationParms, seed), asn1_ValidationParms_tag_seed_36 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct ValidationParms, pgenCounter), asn1_CertificateSerialNumber_tag__15 }
};
/* generate_template_type: ValidationParms */
const struct asn1_template asn1_ValidationParms[] = {
/* 0 */ { 0, sizeof(ValidationParms), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ValidationParms_tag__35 }
};

int
decode_ValidationParms(const unsigned char *p, size_t len, ValidationParms *data, size_t *size)
{
    return _asn1_decode_top(asn1_ValidationParms, 0|0, p, len, data, size);
}


int
encode_ValidationParms(unsigned char *p, size_t len, const ValidationParms *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ValidationParms, p, len, data, size);
    return ret;
}


size_t
length_ValidationParms(const ValidationParms *data)
{
    return _asn1_length(asn1_ValidationParms, data);
}


void
free_ValidationParms(ValidationParms *data)
{
    _asn1_free_top(asn1_ValidationParms, data);
}


int
copy_ValidationParms(const ValidationParms *from, ValidationParms *to)
{
    return _asn1_copy_top(asn1_ValidationParms, from, to);
}

extern const struct asn1_template asn1_DomainParameters[];
/* template_members: DomainParameters exp exp */
extern const struct asn1_template asn1_DomainParameters_tag__38[];
/* tsequence: members isstruct: 1 */
/* template_members: DomainParameters exp exp */
extern const struct asn1_template asn1_DomainParameters_tag_p_39[];
/* generate_template_type: DomainParameters_tag_p_39 */
/* template_members: DomainParameters exp exp */
extern const struct asn1_template asn1_DomainParameters_tag_g_40[];
/* generate_template_type: DomainParameters_tag_g_40 */
/* template_members: DomainParameters exp exp */
extern const struct asn1_template asn1_DomainParameters_tag_q_41[];
/* generate_template_type: DomainParameters_tag_q_41 */
/* template_members: DomainParameters exp exp */
extern const struct asn1_template asn1_DomainParameters_tag_j_42[];
/* generate_template_type: DomainParameters_tag_j_42 */
/* generate_template_type: DomainParameters_tag__38 */
const struct asn1_template asn1_DomainParameters_tag__38[] = {
/* 0 */ { 0, sizeof(struct DomainParameters), ((void *)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DomainParameters, p), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DomainParameters, g), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DomainParameters, q), asn1_CertificateSerialNumber_tag__15 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct DomainParameters, j), asn1_CertificateSerialNumber_tag__15 },
/* 5 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct DomainParameters, validationParms), asn1_ValidationParms }
};
/* generate_template_type: DomainParameters */
const struct asn1_template asn1_DomainParameters[] = {
/* 0 */ { 0, sizeof(DomainParameters), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DomainParameters_tag__38 }
};

int
decode_DomainParameters(const unsigned char *p, size_t len, DomainParameters *data, size_t *size)
{
    return _asn1_decode_top(asn1_DomainParameters, 0|0, p, len, data, size);
}


int
encode_DomainParameters(unsigned char *p, size_t len, const DomainParameters *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DomainParameters, p, len, data, size);
    return ret;
}


size_t
length_DomainParameters(const DomainParameters *data)
{
    return _asn1_length(asn1_DomainParameters, data);
}


void
free_DomainParameters(DomainParameters *data)
{
    _asn1_free_top(asn1_DomainParameters, data);
}


int
copy_DomainParameters(const DomainParameters *from, DomainParameters *to)
{
    return _asn1_copy_top(asn1_DomainParameters, from, to);
}

extern const struct asn1_template asn1_DHParameter[];
/* template_members: DHParameter exp exp */
extern const struct asn1_template asn1_DHParameter_tag__43[];
/* tsequence: members isstruct: 1 */
/* template_members: DHParameter exp exp */
extern const struct asn1_template asn1_DHParameter_tag_prime_44[];
/* generate_template_type: DHParameter_tag_prime_44 */
/* template_members: DHParameter exp exp */
extern const struct asn1_template asn1_DHParameter_tag_base_45[];
/* generate_template_type: DHParameter_tag_base_45 */
/* template_members: DHParameter exp exp */
extern const struct asn1_template asn1_DHParameter_tag_privateValueLength_46[];
/* generate_template_type: DHParameter_tag_privateValueLength_46 */
/* generate_template_type: DHParameter_tag__43 */
const struct asn1_template asn1_DHParameter_tag__43[] = {
/* 0 */ { 0, sizeof(struct DHParameter), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DHParameter, prime), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DHParameter, base), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct DHParameter, privateValueLength), asn1_CertificateSerialNumber_tag__15 }
};
/* generate_template_type: DHParameter */
const struct asn1_template asn1_DHParameter[] = {
/* 0 */ { 0, sizeof(DHParameter), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DHParameter_tag__43 }
};

int
decode_DHParameter(const unsigned char *p, size_t len, DHParameter *data, size_t *size)
{
    return _asn1_decode_top(asn1_DHParameter, 0|0, p, len, data, size);
}


int
encode_DHParameter(unsigned char *p, size_t len, const DHParameter *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DHParameter, p, len, data, size);
    return ret;
}


size_t
length_DHParameter(const DHParameter *data)
{
    return _asn1_length(asn1_DHParameter, data);
}


void
free_DHParameter(DHParameter *data)
{
    _asn1_free_top(asn1_DHParameter, data);
}


int
copy_DHParameter(const DHParameter *from, DHParameter *to)
{
    return _asn1_copy_top(asn1_DHParameter, from, to);
}

extern const struct asn1_template asn1_DHPublicKey[];
/* template_members: DHPublicKey exp exp */
extern const struct asn1_template asn1_DHPublicKey_tag__47[];
/* generate_template_type: DHPublicKey_tag__47 */
/* generate_template_type: DHPublicKey */
const struct asn1_template asn1_DHPublicKey[] = {
/* 0 */ { 0, sizeof(DHPublicKey), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_CertificateSerialNumber_tag__15 }
};

int
decode_DHPublicKey(const unsigned char *p, size_t len, DHPublicKey *data, size_t *size)
{
    return _asn1_decode_top(asn1_DHPublicKey, 0|0, p, len, data, size);
}


int
encode_DHPublicKey(unsigned char *p, size_t len, const DHPublicKey *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DHPublicKey, p, len, data, size);
    return ret;
}


size_t
length_DHPublicKey(const DHPublicKey *data)
{
    return _asn1_length(asn1_DHPublicKey, data);
}


void
free_DHPublicKey(DHPublicKey *data)
{
    _asn1_free_top(asn1_DHPublicKey, data);
}


int
copy_DHPublicKey(const DHPublicKey *from, DHPublicKey *to)
{
    return _asn1_copy_top(asn1_DHPublicKey, from, to);
}

extern const struct asn1_template asn1_OtherName[];
/* template_members: OtherName exp exp */
extern const struct asn1_template asn1_OtherName_tag__48[];
/* tsequence: members isstruct: 1 */
/* template_members: OtherName exp exp */
extern const struct asn1_template asn1_OtherName_tag_type_id_49[];
/* generate_template_type: OtherName_tag_type_id_49 */
/* template_members: OtherName exp exp */
extern const struct asn1_template asn1_OtherName_tag_value_50[];
/* generate_template_type: OtherName_tag_value_50 */
/* generate_template_type: OtherName_tag__48 */
const struct asn1_template asn1_OtherName_tag__48[] = {
/* 0 */ { 0, sizeof(struct OtherName), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct OtherName, type_id), asn1_AlgorithmIdentifier_tag_algorithm_2 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct OtherName, value), asn1_Attribute_value_0 }
};
/* generate_template_type: OtherName */
const struct asn1_template asn1_OtherName[] = {
/* 0 */ { 0, sizeof(OtherName), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OtherName_tag__48 }
};

int
decode_OtherName(const unsigned char *p, size_t len, OtherName *data, size_t *size)
{
    return _asn1_decode_top(asn1_OtherName, 0|0, p, len, data, size);
}


int
encode_OtherName(unsigned char *p, size_t len, const OtherName *data, size_t *size)
{
    int ret = _asn1_encode(asn1_OtherName, p, len, data, size);
    return ret;
}


size_t
length_OtherName(const OtherName *data)
{
    return _asn1_length(asn1_OtherName, data);
}


void
free_OtherName(OtherName *data)
{
    _asn1_free_top(asn1_OtherName, data);
}


int
copy_OtherName(const OtherName *from, OtherName *to)
{
    return _asn1_copy_top(asn1_OtherName, from, to);
}

extern const struct asn1_template asn1_GeneralName[];
extern const struct asn1_template asn1_GeneralName_choice_otherName[];
/* template_members: GeneralName_otherName imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_GeneralName_otherName_tag__51[];
/* tsequence: members isstruct: 1 */
/* template_members: GeneralName_otherName exp exp */
extern const struct asn1_template asn1_GeneralName_otherName_tag_type_id_52[];
/* generate_template_type: GeneralName_otherName_tag_type_id_52 */
/* template_members: GeneralName_otherName exp exp */
extern const struct asn1_template asn1_GeneralName_otherName_tag_value_53[];
/* generate_template_type: GeneralName_otherName_tag_value_53 */
/* generate_template_type: GeneralName_otherName_tag__51 */
const struct asn1_template asn1_GeneralName_otherName_tag__51[] = {
/* 0 */ { 0, sizeof(struct GeneralName_otherName), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct GeneralName_otherName, type_id), asn1_AlgorithmIdentifier_tag_algorithm_2 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct GeneralName_otherName, value), asn1_Attribute_value_0 }
};
/* generate_template_type: GeneralName_choice_otherName */
const struct asn1_template asn1_GeneralName_choice_otherName[] = {
/* 0 */ { 0, sizeof(struct GeneralName_otherName), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_IMPLICIT, 0, asn1_GeneralName_otherName_tag__51 }
};
extern const struct asn1_template asn1_GeneralName_choice_rfc822Name[];
/* template_members: heim_ia5_string imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_heim_ia5_string_tag__54[];
/* generate_template_type: heim_ia5_string_tag__54 */
/* generate_template_type: GeneralName_choice_rfc822Name */
const struct asn1_template asn1_GeneralName_choice_rfc822Name[] = {
/* 0 */ { 0, sizeof(heim_ia5_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_IMPLICIT, 0, asn1_heim_ia5_string_tag__4 }
};
extern const struct asn1_template asn1_GeneralName_choice_dNSName[];
/* template_members: heim_ia5_string imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_heim_ia5_string_tag__55[];
/* generate_template_type: heim_ia5_string_tag__55 */
/* generate_template_type: GeneralName_choice_dNSName */
const struct asn1_template asn1_GeneralName_choice_dNSName[] = {
/* 0 */ { 0, sizeof(heim_ia5_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_IMPLICIT, 0, asn1_heim_ia5_string_tag__4 }
};
extern const struct asn1_template asn1_GeneralName_choice_directoryName[];
/* template_members: GeneralName_directoryName imp imp */
extern const struct asn1_template asn1_GeneralName_directoryName_tag__56[];
extern const struct asn1_template asn1_GeneralName_directoryName_choice_rdnSequence[];
/* generate_template_type: GeneralName_directoryName_choice_rdnSequence */
static const struct asn1_template asn1_choice_GeneralName_directoryName_4[] = {
/* 0 */ { 0, offsetof(struct GeneralName_directoryName, element), ((void *)1) },
/* 1 */ { choice_GeneralName_directoryName_rdnSequence, offsetof(struct GeneralName_directoryName, u.rdnSequence), asn1_Name_choice_rdnSequence }
};
/* generate_template_type: GeneralName_directoryName_tag__56 */
const struct asn1_template asn1_GeneralName_directoryName_tag__56[] = {
/* 0 */ { 0, sizeof(struct GeneralName_directoryName), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_GeneralName_directoryName_4 }
};
/* generate_template_type: GeneralName_choice_directoryName */
const struct asn1_template asn1_GeneralName_choice_directoryName[] = {
/* 0 */ { 0, sizeof(struct GeneralName_directoryName), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_IMPLICIT, 0, asn1_GeneralName_directoryName_tag__56 }
};
extern const struct asn1_template asn1_GeneralName_choice_uniformResourceIdentifier[];
/* template_members: heim_ia5_string imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_heim_ia5_string_tag__57[];
/* generate_template_type: heim_ia5_string_tag__57 */
/* generate_template_type: GeneralName_choice_uniformResourceIdentifier */
const struct asn1_template asn1_GeneralName_choice_uniformResourceIdentifier[] = {
/* 0 */ { 0, sizeof(heim_ia5_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,6)|A1_FLAG_IMPLICIT, 0, asn1_heim_ia5_string_tag__4 }
};
extern const struct asn1_template asn1_GeneralName_choice_iPAddress[];
/* template_members: heim_octet_string imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_heim_octet_string_tag__58[];
/* generate_template_type: heim_octet_string_tag__58 */
/* generate_template_type: GeneralName_choice_iPAddress */
const struct asn1_template asn1_GeneralName_choice_iPAddress[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,7)|A1_FLAG_IMPLICIT, 0, asn1_Extension_tag_extnValue_25 }
};
extern const struct asn1_template asn1_GeneralName_choice_registeredID[];
/* template_members: heim_oid imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_heim_oid_tag__59[];
/* generate_template_type: heim_oid_tag__59 */
/* generate_template_type: GeneralName_choice_registeredID */
const struct asn1_template asn1_GeneralName_choice_registeredID[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,8)|A1_FLAG_IMPLICIT, 0, asn1_AlgorithmIdentifier_tag_algorithm_2 }
};
static const struct asn1_template asn1_choice_GeneralName_3[] = {
/* 0 */ { 0, offsetof(GeneralName, element), ((void *)7) },
/* 1 */ { choice_GeneralName_otherName, offsetof(GeneralName, u.otherName), asn1_GeneralName_choice_otherName },
/* 2 */ { choice_GeneralName_rfc822Name, offsetof(GeneralName, u.rfc822Name), asn1_GeneralName_choice_rfc822Name },
/* 3 */ { choice_GeneralName_dNSName, offsetof(GeneralName, u.dNSName), asn1_GeneralName_choice_dNSName },
/* 4 */ { choice_GeneralName_directoryName, offsetof(GeneralName, u.directoryName), asn1_GeneralName_choice_directoryName },
/* 5 */ { choice_GeneralName_uniformResourceIdentifier, offsetof(GeneralName, u.uniformResourceIdentifier), asn1_GeneralName_choice_uniformResourceIdentifier },
/* 6 */ { choice_GeneralName_iPAddress, offsetof(GeneralName, u.iPAddress), asn1_GeneralName_choice_iPAddress },
/* 7 */ { choice_GeneralName_registeredID, offsetof(GeneralName, u.registeredID), asn1_GeneralName_choice_registeredID }
};
/* generate_template_type: GeneralName */
const struct asn1_template asn1_GeneralName[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_GeneralName_3 }
};

int
decode_GeneralName(const unsigned char *p, size_t len, GeneralName *data, size_t *size)
{
    return _asn1_decode_top(asn1_GeneralName, 0|0, p, len, data, size);
}


int
encode_GeneralName(unsigned char *p, size_t len, const GeneralName *data, size_t *size)
{
    int ret = _asn1_encode(asn1_GeneralName, p, len, data, size);
    return ret;
}


size_t
length_GeneralName(const GeneralName *data)
{
    return _asn1_length(asn1_GeneralName, data);
}


void
free_GeneralName(GeneralName *data)
{
    _asn1_free_top(asn1_GeneralName, data);
}


int
copy_GeneralName(const GeneralName *from, GeneralName *to)
{
    return _asn1_copy_top(asn1_GeneralName, from, to);
}

extern const struct asn1_template asn1_GeneralNames[];
/* template_members: GeneralNames exp exp */
extern const struct asn1_template asn1_GeneralNames_tag__60[];
extern const struct asn1_template asn1_GeneralName_seofTstruct_5[];
/* generate_template_type: GeneralName_seofTstruct_5 */
const struct asn1_template asn1_GeneralName_seofTstruct_5[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_GeneralName }
};
/* generate_template_type: GeneralNames_tag__60 */
const struct asn1_template asn1_GeneralNames_tag__60[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_GeneralName_seofTstruct_5 }
};
/* generate_template_type: GeneralNames */
const struct asn1_template asn1_GeneralNames[] = {
/* 0 */ { 0, sizeof(GeneralNames), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_GeneralNames_tag__60 }
};

int
decode_GeneralNames(const unsigned char *p, size_t len, GeneralNames *data, size_t *size)
{
    return _asn1_decode_top(asn1_GeneralNames, 0|0, p, len, data, size);
}


int
encode_GeneralNames(unsigned char *p, size_t len, const GeneralNames *data, size_t *size)
{
    int ret = _asn1_encode(asn1_GeneralNames, p, len, data, size);
    return ret;
}


size_t
length_GeneralNames(const GeneralNames *data)
{
    return _asn1_length(asn1_GeneralNames, data);
}


void
free_GeneralNames(GeneralNames *data)
{
    _asn1_free_top(asn1_GeneralNames, data);
}


int
copy_GeneralNames(const GeneralNames *from, GeneralNames *to)
{
    return _asn1_copy_top(asn1_GeneralNames, from, to);
}

int ASN1CALL
add_GeneralNames(GeneralNames *data, const GeneralName *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_GeneralName(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_GeneralNames(GeneralNames *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_GeneralName(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

static unsigned oid_id_x509_ce_keyUsage_variable_num[4] =  {2, 5, 29, 15 };
const heim_oid asn1_oid_id_x509_ce_keyUsage = { 4, oid_id_x509_ce_keyUsage_variable_num };

extern const struct asn1_template asn1_KeyUsage[];
/* template_members: KeyUsage exp exp */
extern const struct asn1_template asn1_KeyUsage_tag__61[];
static const struct asn1_template asn1_KeyUsage_bmember__0[] = {
/* 0 */ { 0, sizeof(KeyUsage), ((void *)9) },
/* 1 */ { 0, 0, 0 } /* digitalSignature */,
/* 2 */ { 0, 1, 0 } /* nonRepudiation */,
/* 3 */ { 0, 2, 0 } /* keyEncipherment */,
/* 4 */ { 0, 3, 0 } /* dataEncipherment */,
/* 5 */ { 0, 4, 0 } /* keyAgreement */,
/* 6 */ { 0, 5, 0 } /* keyCertSign */,
/* 7 */ { 0, 6, 0 } /* cRLSign */,
/* 8 */ { 0, 7, 0 } /* encipherOnly */,
/* 9 */ { 0, 8, 0 } /* decipherOnly */
};
/* generate_template_type: KeyUsage_tag__61 */
const struct asn1_template asn1_KeyUsage_tag__61[] = {
/* 0 */ { 0, sizeof(KeyUsage), ((void *)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_KeyUsage_bmember__0 }
};
/* generate_template_type: KeyUsage */
const struct asn1_template asn1_KeyUsage[] = {
/* 0 */ { 0, sizeof(KeyUsage), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_KeyUsage_tag__61 }
};

int
decode_KeyUsage(const unsigned char *p, size_t len, KeyUsage *data, size_t *size)
{
    return _asn1_decode_top(asn1_KeyUsage, 0|0, p, len, data, size);
}


int
encode_KeyUsage(unsigned char *p, size_t len, const KeyUsage *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KeyUsage, p, len, data, size);
    return ret;
}


size_t
length_KeyUsage(const KeyUsage *data)
{
    return _asn1_length(asn1_KeyUsage, data);
}


void
free_KeyUsage(KeyUsage *data)
{
    _asn1_free_top(asn1_KeyUsage, data);
}


int
copy_KeyUsage(const KeyUsage *from, KeyUsage *to)
{
    return _asn1_copy_top(asn1_KeyUsage, from, to);
}

unsigned KeyUsage2int(KeyUsage f)
{
unsigned r = 0;
if(f.digitalSignature) r |= (1U << 0);
if(f.nonRepudiation) r |= (1U << 1);
if(f.keyEncipherment) r |= (1U << 2);
if(f.dataEncipherment) r |= (1U << 3);
if(f.keyAgreement) r |= (1U << 4);
if(f.keyCertSign) r |= (1U << 5);
if(f.cRLSign) r |= (1U << 6);
if(f.encipherOnly) r |= (1U << 7);
if(f.decipherOnly) r |= (1U << 8);
return r;
}

KeyUsage int2KeyUsage(unsigned n)
{
	KeyUsage flags;

	memset(&flags, 0, sizeof(flags));

	flags.digitalSignature = (n >> 0) & 1;
	flags.nonRepudiation = (n >> 1) & 1;
	flags.keyEncipherment = (n >> 2) & 1;
	flags.dataEncipherment = (n >> 3) & 1;
	flags.keyAgreement = (n >> 4) & 1;
	flags.keyCertSign = (n >> 5) & 1;
	flags.cRLSign = (n >> 6) & 1;
	flags.encipherOnly = (n >> 7) & 1;
	flags.decipherOnly = (n >> 8) & 1;
	return flags;
}

static struct units KeyUsage_units[] = {
	{"decipherOnly",	1U << 8},
	{"encipherOnly",	1U << 7},
	{"cRLSign",	1U << 6},
	{"keyCertSign",	1U << 5},
	{"keyAgreement",	1U << 4},
	{"dataEncipherment",	1U << 3},
	{"keyEncipherment",	1U << 2},
	{"nonRepudiation",	1U << 1},
	{"digitalSignature",	1U << 0},
	{NULL,	0}
};

const struct units * asn1_KeyUsage_table_units = KeyUsage_units;
static unsigned oid_id_x509_ce_authorityKeyIdentifier_variable_num[4] =  {2, 5, 29, 35 };
const heim_oid asn1_oid_id_x509_ce_authorityKeyIdentifier = { 4, oid_id_x509_ce_authorityKeyIdentifier_variable_num };

extern const struct asn1_template asn1_KeyIdentifier[];
/* template_members: KeyIdentifier exp exp */
extern const struct asn1_template asn1_KeyIdentifier_tag__62[];
/* generate_template_type: KeyIdentifier_tag__62 */
/* generate_template_type: KeyIdentifier */
const struct asn1_template asn1_KeyIdentifier[] = {
/* 0 */ { 0, sizeof(KeyIdentifier), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_Extension_tag_extnValue_25 }
};

int
decode_KeyIdentifier(const unsigned char *p, size_t len, KeyIdentifier *data, size_t *size)
{
    return _asn1_decode_top(asn1_KeyIdentifier, 0|0, p, len, data, size);
}


int
encode_KeyIdentifier(unsigned char *p, size_t len, const KeyIdentifier *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KeyIdentifier, p, len, data, size);
    return ret;
}


size_t
length_KeyIdentifier(const KeyIdentifier *data)
{
    return _asn1_length(asn1_KeyIdentifier, data);
}


void
free_KeyIdentifier(KeyIdentifier *data)
{
    _asn1_free_top(asn1_KeyIdentifier, data);
}


int
copy_KeyIdentifier(const KeyIdentifier *from, KeyIdentifier *to)
{
    return _asn1_copy_top(asn1_KeyIdentifier, from, to);
}

extern const struct asn1_template asn1_AuthorityKeyIdentifier[];
/* template_members: AuthorityKeyIdentifier exp exp */
extern const struct asn1_template asn1_AuthorityKeyIdentifier_tag__63[];
/* tsequence: members isstruct: 1 */
/* template_members: AuthorityKeyIdentifier exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_AuthorityKeyIdentifier_tag_keyIdentifier_64[];
/* generate_template_type: AuthorityKeyIdentifier_tag_keyIdentifier_64 */
/* template_members: AuthorityKeyIdentifier exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_AuthorityKeyIdentifier_tag_authorityCertIssuer_65[];
extern const struct asn1_template asn1_AuthorityKeyIdentifier_authorityCertIssuer_6[];
/* generate_template_type: AuthorityKeyIdentifier_authorityCertIssuer_6 */
/* generate_template_type: AuthorityKeyIdentifier_tag_authorityCertIssuer_65 */
const struct asn1_template asn1_AuthorityKeyIdentifier_tag_authorityCertIssuer_65[] = {
/* 0 */ { 0, sizeof(struct AuthorityKeyIdentifier), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_GeneralName_seofTstruct_5 }
};
/* template_members: AuthorityKeyIdentifier exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_AuthorityKeyIdentifier_tag_authorityCertSerialNumber_66[];
/* generate_template_type: AuthorityKeyIdentifier_tag_authorityCertSerialNumber_66 */
/* generate_template_type: AuthorityKeyIdentifier_tag__63 */
const struct asn1_template asn1_AuthorityKeyIdentifier_tag__63[] = {
/* 0 */ { 0, sizeof(struct AuthorityKeyIdentifier), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct AuthorityKeyIdentifier, keyIdentifier), asn1_Extension_tag_extnValue_25 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct AuthorityKeyIdentifier, authorityCertIssuer), asn1_AuthorityKeyIdentifier_tag_authorityCertIssuer_65 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct AuthorityKeyIdentifier, authorityCertSerialNumber), asn1_CertificateSerialNumber_tag__15 }
};
/* generate_template_type: AuthorityKeyIdentifier */
const struct asn1_template asn1_AuthorityKeyIdentifier[] = {
/* 0 */ { 0, sizeof(AuthorityKeyIdentifier), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthorityKeyIdentifier_tag__63 }
};

int
decode_AuthorityKeyIdentifier(const unsigned char *p, size_t len, AuthorityKeyIdentifier *data, size_t *size)
{
    return _asn1_decode_top(asn1_AuthorityKeyIdentifier, 0|0, p, len, data, size);
}


int
encode_AuthorityKeyIdentifier(unsigned char *p, size_t len, const AuthorityKeyIdentifier *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AuthorityKeyIdentifier, p, len, data, size);
    return ret;
}


size_t
length_AuthorityKeyIdentifier(const AuthorityKeyIdentifier *data)
{
    return _asn1_length(asn1_AuthorityKeyIdentifier, data);
}


void
free_AuthorityKeyIdentifier(AuthorityKeyIdentifier *data)
{
    _asn1_free_top(asn1_AuthorityKeyIdentifier, data);
}


int
copy_AuthorityKeyIdentifier(const AuthorityKeyIdentifier *from, AuthorityKeyIdentifier *to)
{
    return _asn1_copy_top(asn1_AuthorityKeyIdentifier, from, to);
}

static unsigned oid_id_x509_ce_subjectKeyIdentifier_variable_num[4] =  {2, 5, 29, 14 };
const heim_oid asn1_oid_id_x509_ce_subjectKeyIdentifier = { 4, oid_id_x509_ce_subjectKeyIdentifier_variable_num };

extern const struct asn1_template asn1_SubjectKeyIdentifier[];
/* generate_template_type: SubjectKeyIdentifier */
const struct asn1_template asn1_SubjectKeyIdentifier[] = {
/* 0 */ { 0, sizeof(SubjectKeyIdentifier), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KeyIdentifier }
};

int
decode_SubjectKeyIdentifier(const unsigned char *p, size_t len, SubjectKeyIdentifier *data, size_t *size)
{
    return _asn1_decode_top(asn1_SubjectKeyIdentifier, 0|0, p, len, data, size);
}


int
encode_SubjectKeyIdentifier(unsigned char *p, size_t len, const SubjectKeyIdentifier *data, size_t *size)
{
    int ret = _asn1_encode(asn1_SubjectKeyIdentifier, p, len, data, size);
    return ret;
}


size_t
length_SubjectKeyIdentifier(const SubjectKeyIdentifier *data)
{
    return _asn1_length(asn1_SubjectKeyIdentifier, data);
}


void
free_SubjectKeyIdentifier(SubjectKeyIdentifier *data)
{
    _asn1_free_top(asn1_SubjectKeyIdentifier, data);
}


int
copy_SubjectKeyIdentifier(const SubjectKeyIdentifier *from, SubjectKeyIdentifier *to)
{
    return _asn1_copy_top(asn1_SubjectKeyIdentifier, from, to);
}

static unsigned oid_id_x509_ce_basicConstraints_variable_num[4] =  {2, 5, 29, 19 };
const heim_oid asn1_oid_id_x509_ce_basicConstraints = { 4, oid_id_x509_ce_basicConstraints_variable_num };

extern const struct asn1_template asn1_BasicConstraints[];
/* template_members: BasicConstraints exp exp */
extern const struct asn1_template asn1_BasicConstraints_tag__67[];
/* tsequence: members isstruct: 1 */
/* template_members: BasicConstraints exp exp */
extern const struct asn1_template asn1_BasicConstraints_tag_cA_68[];
/* generate_template_type: BasicConstraints_tag_cA_68 */
/* template_members: BasicConstraints exp exp */
extern const struct asn1_template asn1_BasicConstraints_tag_pathLenConstraint_69[];
/* generate_template_type: BasicConstraints_tag_pathLenConstraint_69 */
const struct asn1_template asn1_BasicConstraints_tag_pathLenConstraint_69[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* generate_template_type: BasicConstraints_tag__67 */
const struct asn1_template asn1_BasicConstraints_tag__67[] = {
/* 0 */ { 0, sizeof(struct BasicConstraints), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean)|A1_FLAG_OPTIONAL, offsetof(struct BasicConstraints, cA), asn1_Extension_tag_critical_24 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct BasicConstraints, pathLenConstraint), asn1_BasicConstraints_tag_pathLenConstraint_69 }
};
/* generate_template_type: BasicConstraints */
const struct asn1_template asn1_BasicConstraints[] = {
/* 0 */ { 0, sizeof(BasicConstraints), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_BasicConstraints_tag__67 }
};

int
decode_BasicConstraints(const unsigned char *p, size_t len, BasicConstraints *data, size_t *size)
{
    return _asn1_decode_top(asn1_BasicConstraints, 0|0, p, len, data, size);
}


int
encode_BasicConstraints(unsigned char *p, size_t len, const BasicConstraints *data, size_t *size)
{
    int ret = _asn1_encode(asn1_BasicConstraints, p, len, data, size);
    return ret;
}


size_t
length_BasicConstraints(const BasicConstraints *data)
{
    return _asn1_length(asn1_BasicConstraints, data);
}


void
free_BasicConstraints(BasicConstraints *data)
{
    _asn1_free_top(asn1_BasicConstraints, data);
}


int
copy_BasicConstraints(const BasicConstraints *from, BasicConstraints *to)
{
    return _asn1_copy_top(asn1_BasicConstraints, from, to);
}

static unsigned oid_id_x509_ce_nameConstraints_variable_num[4] =  {2, 5, 29, 30 };
const heim_oid asn1_oid_id_x509_ce_nameConstraints = { 4, oid_id_x509_ce_nameConstraints_variable_num };

extern const struct asn1_template asn1_BaseDistance[];
/* template_members: BaseDistance exp exp */
extern const struct asn1_template asn1_BaseDistance_tag__70[];
/* generate_template_type: BaseDistance_tag__70 */
/* generate_template_type: BaseDistance */
const struct asn1_template asn1_BaseDistance[] = {
/* 0 */ { 0, sizeof(BaseDistance), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_CertificateSerialNumber_tag__15 }
};

int
decode_BaseDistance(const unsigned char *p, size_t len, BaseDistance *data, size_t *size)
{
    return _asn1_decode_top(asn1_BaseDistance, 0|0, p, len, data, size);
}


int
encode_BaseDistance(unsigned char *p, size_t len, const BaseDistance *data, size_t *size)
{
    int ret = _asn1_encode(asn1_BaseDistance, p, len, data, size);
    return ret;
}


size_t
length_BaseDistance(const BaseDistance *data)
{
    return _asn1_length(asn1_BaseDistance, data);
}


void
free_BaseDistance(BaseDistance *data)
{
    _asn1_free_top(asn1_BaseDistance, data);
}


int
copy_BaseDistance(const BaseDistance *from, BaseDistance *to)
{
    return _asn1_copy_top(asn1_BaseDistance, from, to);
}

extern const struct asn1_template asn1_GeneralSubtree[];
/* template_members: GeneralSubtree exp exp */
extern const struct asn1_template asn1_GeneralSubtree_tag__71[];
/* tsequence: members isstruct: 1 */
/* template_members: GeneralSubtree exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_GeneralSubtree_tag_minimum_72[];
/* generate_template_type: GeneralSubtree_tag_minimum_72 */
/* template_members: GeneralSubtree exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_GeneralSubtree_tag_maximum_73[];
/* generate_template_type: GeneralSubtree_tag_maximum_73 */
/* generate_template_type: GeneralSubtree_tag__71 */
const struct asn1_template asn1_GeneralSubtree_tag__71[] = {
/* 0 */ { 0, sizeof(struct GeneralSubtree), ((void *)3) },
/* 1 */ { A1_OP_TYPE , offsetof(struct GeneralSubtree, base), asn1_GeneralName },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct GeneralSubtree, minimum), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct GeneralSubtree, maximum), asn1_CertificateSerialNumber_tag__15 }
};
/* generate_template_type: GeneralSubtree */
const struct asn1_template asn1_GeneralSubtree[] = {
/* 0 */ { 0, sizeof(GeneralSubtree), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_GeneralSubtree_tag__71 }
};

int
decode_GeneralSubtree(const unsigned char *p, size_t len, GeneralSubtree *data, size_t *size)
{
    return _asn1_decode_top(asn1_GeneralSubtree, 0|0, p, len, data, size);
}


int
encode_GeneralSubtree(unsigned char *p, size_t len, const GeneralSubtree *data, size_t *size)
{
    int ret = _asn1_encode(asn1_GeneralSubtree, p, len, data, size);
    return ret;
}


size_t
length_GeneralSubtree(const GeneralSubtree *data)
{
    return _asn1_length(asn1_GeneralSubtree, data);
}


void
free_GeneralSubtree(GeneralSubtree *data)
{
    _asn1_free_top(asn1_GeneralSubtree, data);
}


int
copy_GeneralSubtree(const GeneralSubtree *from, GeneralSubtree *to)
{
    return _asn1_copy_top(asn1_GeneralSubtree, from, to);
}

extern const struct asn1_template asn1_GeneralSubtrees[];
/* template_members: GeneralSubtrees exp exp */
extern const struct asn1_template asn1_GeneralSubtrees_tag__74[];
extern const struct asn1_template asn1_GeneralSubtree_seofTstruct_7[];
/* generate_template_type: GeneralSubtree_seofTstruct_7 */
const struct asn1_template asn1_GeneralSubtree_seofTstruct_7[] = {
/* 0 */ { 0, sizeof(GeneralSubtree), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_GeneralSubtree }
};
/* generate_template_type: GeneralSubtrees_tag__74 */
const struct asn1_template asn1_GeneralSubtrees_tag__74[] = {
/* 0 */ { 0, sizeof(GeneralSubtree), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_GeneralSubtree_seofTstruct_7 }
};
/* generate_template_type: GeneralSubtrees */
const struct asn1_template asn1_GeneralSubtrees[] = {
/* 0 */ { 0, sizeof(GeneralSubtrees), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_GeneralSubtrees_tag__74 }
};

int
decode_GeneralSubtrees(const unsigned char *p, size_t len, GeneralSubtrees *data, size_t *size)
{
    return _asn1_decode_top(asn1_GeneralSubtrees, 0|0, p, len, data, size);
}


int
encode_GeneralSubtrees(unsigned char *p, size_t len, const GeneralSubtrees *data, size_t *size)
{
    int ret = _asn1_encode(asn1_GeneralSubtrees, p, len, data, size);
    return ret;
}


size_t
length_GeneralSubtrees(const GeneralSubtrees *data)
{
    return _asn1_length(asn1_GeneralSubtrees, data);
}


void
free_GeneralSubtrees(GeneralSubtrees *data)
{
    _asn1_free_top(asn1_GeneralSubtrees, data);
}


int
copy_GeneralSubtrees(const GeneralSubtrees *from, GeneralSubtrees *to)
{
    return _asn1_copy_top(asn1_GeneralSubtrees, from, to);
}

extern const struct asn1_template asn1_NameConstraints[];
/* template_members: NameConstraints exp exp */
extern const struct asn1_template asn1_NameConstraints_tag__75[];
/* tsequence: members isstruct: 1 */
/* template_members: NameConstraints exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_NameConstraints_tag_permittedSubtrees_76[];
extern const struct asn1_template asn1_NameConstraints_permittedSubtrees_8[];
/* generate_template_type: NameConstraints_permittedSubtrees_8 */
/* generate_template_type: NameConstraints_tag_permittedSubtrees_76 */
const struct asn1_template asn1_NameConstraints_tag_permittedSubtrees_76[] = {
/* 0 */ { 0, sizeof(struct NameConstraints), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_GeneralSubtree_seofTstruct_7 }
};
/* template_members: NameConstraints exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_NameConstraints_tag_excludedSubtrees_77[];
extern const struct asn1_template asn1_NameConstraints_excludedSubtrees_9[];
/* generate_template_type: NameConstraints_excludedSubtrees_9 */
/* generate_template_type: NameConstraints_tag_excludedSubtrees_77 */
/* generate_template_type: NameConstraints_tag__75 */
const struct asn1_template asn1_NameConstraints_tag__75[] = {
/* 0 */ { 0, sizeof(struct NameConstraints), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct NameConstraints, permittedSubtrees), asn1_NameConstraints_tag_permittedSubtrees_76 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct NameConstraints, excludedSubtrees), asn1_NameConstraints_tag_permittedSubtrees_76 }
};
/* generate_template_type: NameConstraints */
const struct asn1_template asn1_NameConstraints[] = {
/* 0 */ { 0, sizeof(NameConstraints), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NameConstraints_tag__75 }
};

int
decode_NameConstraints(const unsigned char *p, size_t len, NameConstraints *data, size_t *size)
{
    return _asn1_decode_top(asn1_NameConstraints, 0|0, p, len, data, size);
}


int
encode_NameConstraints(unsigned char *p, size_t len, const NameConstraints *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NameConstraints, p, len, data, size);
    return ret;
}


size_t
length_NameConstraints(const NameConstraints *data)
{
    return _asn1_length(asn1_NameConstraints, data);
}


void
free_NameConstraints(NameConstraints *data)
{
    _asn1_free_top(asn1_NameConstraints, data);
}


int
copy_NameConstraints(const NameConstraints *from, NameConstraints *to)
{
    return _asn1_copy_top(asn1_NameConstraints, from, to);
}

static unsigned oid_id_x509_ce_privateKeyUsagePeriod_variable_num[4] =  {2, 5, 29, 16 };
const heim_oid asn1_oid_id_x509_ce_privateKeyUsagePeriod = { 4, oid_id_x509_ce_privateKeyUsagePeriod_variable_num };

static unsigned oid_id_x509_ce_certificatePolicies_variable_num[4] =  {2, 5, 29, 32 };
const heim_oid asn1_oid_id_x509_ce_certificatePolicies = { 4, oid_id_x509_ce_certificatePolicies_variable_num };

static unsigned oid_id_x509_ce_policyMappings_variable_num[4] =  {2, 5, 29, 33 };
const heim_oid asn1_oid_id_x509_ce_policyMappings = { 4, oid_id_x509_ce_policyMappings_variable_num };

static unsigned oid_id_x509_ce_subjectAltName_variable_num[4] =  {2, 5, 29, 17 };
const heim_oid asn1_oid_id_x509_ce_subjectAltName = { 4, oid_id_x509_ce_subjectAltName_variable_num };

static unsigned oid_id_x509_ce_issuerAltName_variable_num[4] =  {2, 5, 29, 18 };
const heim_oid asn1_oid_id_x509_ce_issuerAltName = { 4, oid_id_x509_ce_issuerAltName_variable_num };

static unsigned oid_id_x509_ce_subjectDirectoryAttributes_variable_num[4] =  {2, 5, 29, 9 };
const heim_oid asn1_oid_id_x509_ce_subjectDirectoryAttributes = { 4, oid_id_x509_ce_subjectDirectoryAttributes_variable_num };

static unsigned oid_id_x509_ce_policyConstraints_variable_num[4] =  {2, 5, 29, 36 };
const heim_oid asn1_oid_id_x509_ce_policyConstraints = { 4, oid_id_x509_ce_policyConstraints_variable_num };

static unsigned oid_id_x509_ce_extKeyUsage_variable_num[4] =  {2, 5, 29, 37 };
const heim_oid asn1_oid_id_x509_ce_extKeyUsage = { 4, oid_id_x509_ce_extKeyUsage_variable_num };

extern const struct asn1_template asn1_ExtKeyUsage[];
/* template_members: ExtKeyUsage exp exp */
extern const struct asn1_template asn1_ExtKeyUsage_tag__78[];
extern const struct asn1_template asn1_heim_oid_seofTstruct_10[];
/* template_members: heim_oid exp exp */
extern const struct asn1_template asn1_heim_oid_tag__79[];
/* generate_template_type: heim_oid_tag__79 */
/* generate_template_type: heim_oid_seofTstruct_10 */
const struct asn1_template asn1_heim_oid_seofTstruct_10[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_AlgorithmIdentifier_tag_algorithm_2 }
};
/* generate_template_type: ExtKeyUsage_tag__78 */
const struct asn1_template asn1_ExtKeyUsage_tag__78[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_heim_oid_seofTstruct_10 }
};
/* generate_template_type: ExtKeyUsage */
const struct asn1_template asn1_ExtKeyUsage[] = {
/* 0 */ { 0, sizeof(ExtKeyUsage), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ExtKeyUsage_tag__78 }
};

int
decode_ExtKeyUsage(const unsigned char *p, size_t len, ExtKeyUsage *data, size_t *size)
{
    return _asn1_decode_top(asn1_ExtKeyUsage, 0|0, p, len, data, size);
}


int
encode_ExtKeyUsage(unsigned char *p, size_t len, const ExtKeyUsage *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ExtKeyUsage, p, len, data, size);
    return ret;
}


size_t
length_ExtKeyUsage(const ExtKeyUsage *data)
{
    return _asn1_length(asn1_ExtKeyUsage, data);
}


void
free_ExtKeyUsage(ExtKeyUsage *data)
{
    _asn1_free_top(asn1_ExtKeyUsage, data);
}


int
copy_ExtKeyUsage(const ExtKeyUsage *from, ExtKeyUsage *to)
{
    return _asn1_copy_top(asn1_ExtKeyUsage, from, to);
}

static unsigned oid_id_x509_ce_cRLDistributionPoints_variable_num[4] =  {2, 5, 29, 31 };
const heim_oid asn1_oid_id_x509_ce_cRLDistributionPoints = { 4, oid_id_x509_ce_cRLDistributionPoints_variable_num };

static unsigned oid_id_x509_ce_deltaCRLIndicator_variable_num[4] =  {2, 5, 29, 27 };
const heim_oid asn1_oid_id_x509_ce_deltaCRLIndicator = { 4, oid_id_x509_ce_deltaCRLIndicator_variable_num };

static unsigned oid_id_x509_ce_issuingDistributionPoint_variable_num[4] =  {2, 5, 29, 28 };
const heim_oid asn1_oid_id_x509_ce_issuingDistributionPoint = { 4, oid_id_x509_ce_issuingDistributionPoint_variable_num };

static unsigned oid_id_x509_ce_holdInstructionCode_variable_num[4] =  {2, 5, 29, 23 };
const heim_oid asn1_oid_id_x509_ce_holdInstructionCode = { 4, oid_id_x509_ce_holdInstructionCode_variable_num };

static unsigned oid_id_x509_ce_invalidityDate_variable_num[4] =  {2, 5, 29, 24 };
const heim_oid asn1_oid_id_x509_ce_invalidityDate = { 4, oid_id_x509_ce_invalidityDate_variable_num };

static unsigned oid_id_x509_ce_certificateIssuer_variable_num[4] =  {2, 5, 29, 29 };
const heim_oid asn1_oid_id_x509_ce_certificateIssuer = { 4, oid_id_x509_ce_certificateIssuer_variable_num };

static unsigned oid_id_x509_ce_inhibitAnyPolicy_variable_num[4] =  {2, 5, 29, 54 };
const heim_oid asn1_oid_id_x509_ce_inhibitAnyPolicy = { 4, oid_id_x509_ce_inhibitAnyPolicy_variable_num };

extern const struct asn1_template asn1_DistributionPointReasonFlags[];
/* template_members: DistributionPointReasonFlags exp exp */
extern const struct asn1_template asn1_DistributionPointReasonFlags_tag__80[];
static const struct asn1_template asn1_DistributionPointReasonFlags_bmember__1[] = {
/* 0 */ { 0, sizeof(DistributionPointReasonFlags), ((void *)9) },
/* 1 */ { 0, 0, 0 } /* unused */,
/* 2 */ { 0, 1, 0 } /* keyCompromise */,
/* 3 */ { 0, 2, 0 } /* cACompromise */,
/* 4 */ { 0, 3, 0 } /* affiliationChanged */,
/* 5 */ { 0, 4, 0 } /* superseded */,
/* 6 */ { 0, 5, 0 } /* cessationOfOperation */,
/* 7 */ { 0, 6, 0 } /* certificateHold */,
/* 8 */ { 0, 7, 0 } /* privilegeWithdrawn */,
/* 9 */ { 0, 8, 0 } /* aACompromise */
};
/* generate_template_type: DistributionPointReasonFlags_tag__80 */
const struct asn1_template asn1_DistributionPointReasonFlags_tag__80[] = {
/* 0 */ { 0, sizeof(DistributionPointReasonFlags), ((void *)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_DistributionPointReasonFlags_bmember__1 }
};
/* generate_template_type: DistributionPointReasonFlags */
const struct asn1_template asn1_DistributionPointReasonFlags[] = {
/* 0 */ { 0, sizeof(DistributionPointReasonFlags), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_DistributionPointReasonFlags_tag__80 }
};

int
decode_DistributionPointReasonFlags(const unsigned char *p, size_t len, DistributionPointReasonFlags *data, size_t *size)
{
    return _asn1_decode_top(asn1_DistributionPointReasonFlags, 0|0, p, len, data, size);
}


int
encode_DistributionPointReasonFlags(unsigned char *p, size_t len, const DistributionPointReasonFlags *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DistributionPointReasonFlags, p, len, data, size);
    return ret;
}


size_t
length_DistributionPointReasonFlags(const DistributionPointReasonFlags *data)
{
    return _asn1_length(asn1_DistributionPointReasonFlags, data);
}


void
free_DistributionPointReasonFlags(DistributionPointReasonFlags *data)
{
    _asn1_free_top(asn1_DistributionPointReasonFlags, data);
}


int
copy_DistributionPointReasonFlags(const DistributionPointReasonFlags *from, DistributionPointReasonFlags *to)
{
    return _asn1_copy_top(asn1_DistributionPointReasonFlags, from, to);
}

unsigned DistributionPointReasonFlags2int(DistributionPointReasonFlags f)
{
unsigned r = 0;
if(f.unused) r |= (1U << 0);
if(f.keyCompromise) r |= (1U << 1);
if(f.cACompromise) r |= (1U << 2);
if(f.affiliationChanged) r |= (1U << 3);
if(f.superseded) r |= (1U << 4);
if(f.cessationOfOperation) r |= (1U << 5);
if(f.certificateHold) r |= (1U << 6);
if(f.privilegeWithdrawn) r |= (1U << 7);
if(f.aACompromise) r |= (1U << 8);
return r;
}

DistributionPointReasonFlags int2DistributionPointReasonFlags(unsigned n)
{
	DistributionPointReasonFlags flags;

	memset(&flags, 0, sizeof(flags));

	flags.unused = (n >> 0) & 1;
	flags.keyCompromise = (n >> 1) & 1;
	flags.cACompromise = (n >> 2) & 1;
	flags.affiliationChanged = (n >> 3) & 1;
	flags.superseded = (n >> 4) & 1;
	flags.cessationOfOperation = (n >> 5) & 1;
	flags.certificateHold = (n >> 6) & 1;
	flags.privilegeWithdrawn = (n >> 7) & 1;
	flags.aACompromise = (n >> 8) & 1;
	return flags;
}

static struct units DistributionPointReasonFlags_units[] = {
	{"aACompromise",	1U << 8},
	{"privilegeWithdrawn",	1U << 7},
	{"certificateHold",	1U << 6},
	{"cessationOfOperation",	1U << 5},
	{"superseded",	1U << 4},
	{"affiliationChanged",	1U << 3},
	{"cACompromise",	1U << 2},
	{"keyCompromise",	1U << 1},
	{"unused",	1U << 0},
	{NULL,	0}
};

const struct units * asn1_DistributionPointReasonFlags_table_units = DistributionPointReasonFlags_units;
extern const struct asn1_template asn1_DistributionPointName[];
extern const struct asn1_template asn1_DistributionPointName_choice_fullName[];
/* template_members: GeneralName imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_GeneralName_tag__81[];
extern const struct asn1_template asn1_GeneralName_seofTstruct_11[];
/* generate_template_type: GeneralName_seofTstruct_11 */
/* generate_template_type: GeneralName_tag__81 */
/* generate_template_type: DistributionPointName_choice_fullName */
const struct asn1_template asn1_DistributionPointName_choice_fullName[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_IMPLICIT, 0, asn1_GeneralNames_tag__60 }
};
extern const struct asn1_template asn1_DistributionPointName_choice_nameRelativeToCRLIssuer[];
/* template_members: RelativeDistinguishedName exp exp */
extern const struct asn1_template asn1_RelativeDistinguishedName_tag__82[];
/* generate_template_type: RelativeDistinguishedName_tag__82 */
/* generate_template_type: DistributionPointName_choice_nameRelativeToCRLIssuer */
const struct asn1_template asn1_DistributionPointName_choice_nameRelativeToCRLIssuer[] = {
/* 0 */ { 0, sizeof(RelativeDistinguishedName), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_RelativeDistinguishedName_seofTstruct_2 }
};
static const struct asn1_template asn1_choice_DistributionPointName_5[] = {
/* 0 */ { 0, offsetof(DistributionPointName, element), ((void *)2) },
/* 1 */ { choice_DistributionPointName_fullName, offsetof(DistributionPointName, u.fullName), asn1_DistributionPointName_choice_fullName },
/* 2 */ { choice_DistributionPointName_nameRelativeToCRLIssuer, offsetof(DistributionPointName, u.nameRelativeToCRLIssuer), asn1_DistributionPointName_choice_nameRelativeToCRLIssuer }
};
/* generate_template_type: DistributionPointName */
const struct asn1_template asn1_DistributionPointName[] = {
/* 0 */ { 0, sizeof(DistributionPointName), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_DistributionPointName_5 }
};

int
decode_DistributionPointName(const unsigned char *p, size_t len, DistributionPointName *data, size_t *size)
{
    return _asn1_decode_top(asn1_DistributionPointName, 0|0, p, len, data, size);
}


int
encode_DistributionPointName(unsigned char *p, size_t len, const DistributionPointName *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DistributionPointName, p, len, data, size);
    return ret;
}


size_t
length_DistributionPointName(const DistributionPointName *data)
{
    return _asn1_length(asn1_DistributionPointName, data);
}


void
free_DistributionPointName(DistributionPointName *data)
{
    _asn1_free_top(asn1_DistributionPointName, data);
}


int
copy_DistributionPointName(const DistributionPointName *from, DistributionPointName *to)
{
    return _asn1_copy_top(asn1_DistributionPointName, from, to);
}

extern const struct asn1_template asn1_DistributionPoint[];
/* template_members: DistributionPoint exp exp */
extern const struct asn1_template asn1_DistributionPoint_tag__83[];
/* tsequence: members isstruct: 1 */
/* template_members: DistributionPoint exp imp */
extern const struct asn1_template asn1_DistributionPoint_tag_distributionPoint_84[];
/* generate_template_type: DistributionPoint_tag_distributionPoint_84 */
/* template_members: DistributionPoint exp imp */
extern const struct asn1_template asn1_DistributionPoint_tag_reasons_85[];
/* generate_template_type: DistributionPoint_tag_reasons_85 */
/* template_members: DistributionPoint exp imp */
extern const struct asn1_template asn1_DistributionPoint_tag_cRLIssuer_86[];
/* generate_template_type: DistributionPoint_tag_cRLIssuer_86 */
/* generate_template_type: DistributionPoint_tag__83 */
const struct asn1_template asn1_DistributionPoint_tag__83[] = {
/* 0 */ { 0, sizeof(struct DistributionPoint), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct DistributionPoint, distributionPoint), asn1_Attribute_value_0 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct DistributionPoint, reasons), asn1_Attribute_value_0 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct DistributionPoint, cRLIssuer), asn1_Attribute_value_0 }
};
/* generate_template_type: DistributionPoint */
const struct asn1_template asn1_DistributionPoint[] = {
/* 0 */ { 0, sizeof(DistributionPoint), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DistributionPoint_tag__83 }
};

int
decode_DistributionPoint(const unsigned char *p, size_t len, DistributionPoint *data, size_t *size)
{
    return _asn1_decode_top(asn1_DistributionPoint, 0|0, p, len, data, size);
}


int
encode_DistributionPoint(unsigned char *p, size_t len, const DistributionPoint *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DistributionPoint, p, len, data, size);
    return ret;
}


size_t
length_DistributionPoint(const DistributionPoint *data)
{
    return _asn1_length(asn1_DistributionPoint, data);
}


void
free_DistributionPoint(DistributionPoint *data)
{
    _asn1_free_top(asn1_DistributionPoint, data);
}


int
copy_DistributionPoint(const DistributionPoint *from, DistributionPoint *to)
{
    return _asn1_copy_top(asn1_DistributionPoint, from, to);
}

extern const struct asn1_template asn1_CRLDistributionPoints[];
/* template_members: CRLDistributionPoints exp exp */
extern const struct asn1_template asn1_CRLDistributionPoints_tag__87[];
extern const struct asn1_template asn1_DistributionPoint_seofTstruct_12[];
/* generate_template_type: DistributionPoint_seofTstruct_12 */
const struct asn1_template asn1_DistributionPoint_seofTstruct_12[] = {
/* 0 */ { 0, sizeof(DistributionPoint), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DistributionPoint }
};
/* generate_template_type: CRLDistributionPoints_tag__87 */
const struct asn1_template asn1_CRLDistributionPoints_tag__87[] = {
/* 0 */ { 0, sizeof(DistributionPoint), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_DistributionPoint_seofTstruct_12 }
};
/* generate_template_type: CRLDistributionPoints */
const struct asn1_template asn1_CRLDistributionPoints[] = {
/* 0 */ { 0, sizeof(CRLDistributionPoints), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CRLDistributionPoints_tag__87 }
};

int
decode_CRLDistributionPoints(const unsigned char *p, size_t len, CRLDistributionPoints *data, size_t *size)
{
    return _asn1_decode_top(asn1_CRLDistributionPoints, 0|0, p, len, data, size);
}


int
encode_CRLDistributionPoints(unsigned char *p, size_t len, const CRLDistributionPoints *data, size_t *size)
{
    int ret = _asn1_encode(asn1_CRLDistributionPoints, p, len, data, size);
    return ret;
}


size_t
length_CRLDistributionPoints(const CRLDistributionPoints *data)
{
    return _asn1_length(asn1_CRLDistributionPoints, data);
}


void
free_CRLDistributionPoints(CRLDistributionPoints *data)
{
    _asn1_free_top(asn1_CRLDistributionPoints, data);
}


int
copy_CRLDistributionPoints(const CRLDistributionPoints *from, CRLDistributionPoints *to)
{
    return _asn1_copy_top(asn1_CRLDistributionPoints, from, to);
}

int ASN1CALL
add_CRLDistributionPoints(CRLDistributionPoints *data, const DistributionPoint *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_DistributionPoint(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_CRLDistributionPoints(CRLDistributionPoints *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_DistributionPoint(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

extern const struct asn1_template asn1_DSASigValue[];
/* template_members: DSASigValue exp exp */
extern const struct asn1_template asn1_DSASigValue_tag__88[];
/* tsequence: members isstruct: 1 */
/* template_members: DSASigValue exp exp */
extern const struct asn1_template asn1_DSASigValue_tag_r_89[];
/* generate_template_type: DSASigValue_tag_r_89 */
/* template_members: DSASigValue exp exp */
extern const struct asn1_template asn1_DSASigValue_tag_s_90[];
/* generate_template_type: DSASigValue_tag_s_90 */
/* generate_template_type: DSASigValue_tag__88 */
const struct asn1_template asn1_DSASigValue_tag__88[] = {
/* 0 */ { 0, sizeof(struct DSASigValue), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DSASigValue, r), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DSASigValue, s), asn1_CertificateSerialNumber_tag__15 }
};
/* generate_template_type: DSASigValue */
const struct asn1_template asn1_DSASigValue[] = {
/* 0 */ { 0, sizeof(DSASigValue), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DSASigValue_tag__88 }
};

int
decode_DSASigValue(const unsigned char *p, size_t len, DSASigValue *data, size_t *size)
{
    return _asn1_decode_top(asn1_DSASigValue, 0|0, p, len, data, size);
}


int
encode_DSASigValue(unsigned char *p, size_t len, const DSASigValue *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DSASigValue, p, len, data, size);
    return ret;
}


size_t
length_DSASigValue(const DSASigValue *data)
{
    return _asn1_length(asn1_DSASigValue, data);
}


void
free_DSASigValue(DSASigValue *data)
{
    _asn1_free_top(asn1_DSASigValue, data);
}


int
copy_DSASigValue(const DSASigValue *from, DSASigValue *to)
{
    return _asn1_copy_top(asn1_DSASigValue, from, to);
}

extern const struct asn1_template asn1_DSAPublicKey[];
/* template_members: DSAPublicKey exp exp */
extern const struct asn1_template asn1_DSAPublicKey_tag__91[];
/* generate_template_type: DSAPublicKey_tag__91 */
/* generate_template_type: DSAPublicKey */
const struct asn1_template asn1_DSAPublicKey[] = {
/* 0 */ { 0, sizeof(DSAPublicKey), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_CertificateSerialNumber_tag__15 }
};

int
decode_DSAPublicKey(const unsigned char *p, size_t len, DSAPublicKey *data, size_t *size)
{
    return _asn1_decode_top(asn1_DSAPublicKey, 0|0, p, len, data, size);
}


int
encode_DSAPublicKey(unsigned char *p, size_t len, const DSAPublicKey *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DSAPublicKey, p, len, data, size);
    return ret;
}


size_t
length_DSAPublicKey(const DSAPublicKey *data)
{
    return _asn1_length(asn1_DSAPublicKey, data);
}


void
free_DSAPublicKey(DSAPublicKey *data)
{
    _asn1_free_top(asn1_DSAPublicKey, data);
}


int
copy_DSAPublicKey(const DSAPublicKey *from, DSAPublicKey *to)
{
    return _asn1_copy_top(asn1_DSAPublicKey, from, to);
}

extern const struct asn1_template asn1_DSAParams[];
/* template_members: DSAParams exp exp */
extern const struct asn1_template asn1_DSAParams_tag__92[];
/* tsequence: members isstruct: 1 */
/* template_members: DSAParams exp exp */
extern const struct asn1_template asn1_DSAParams_tag_p_93[];
/* generate_template_type: DSAParams_tag_p_93 */
/* template_members: DSAParams exp exp */
extern const struct asn1_template asn1_DSAParams_tag_q_94[];
/* generate_template_type: DSAParams_tag_q_94 */
/* template_members: DSAParams exp exp */
extern const struct asn1_template asn1_DSAParams_tag_g_95[];
/* generate_template_type: DSAParams_tag_g_95 */
/* generate_template_type: DSAParams_tag__92 */
const struct asn1_template asn1_DSAParams_tag__92[] = {
/* 0 */ { 0, sizeof(struct DSAParams), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DSAParams, p), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DSAParams, q), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DSAParams, g), asn1_CertificateSerialNumber_tag__15 }
};
/* generate_template_type: DSAParams */
const struct asn1_template asn1_DSAParams[] = {
/* 0 */ { 0, sizeof(DSAParams), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DSAParams_tag__92 }
};

int
decode_DSAParams(const unsigned char *p, size_t len, DSAParams *data, size_t *size)
{
    return _asn1_decode_top(asn1_DSAParams, 0|0, p, len, data, size);
}


int
encode_DSAParams(unsigned char *p, size_t len, const DSAParams *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DSAParams, p, len, data, size);
    return ret;
}


size_t
length_DSAParams(const DSAParams *data)
{
    return _asn1_length(asn1_DSAParams, data);
}


void
free_DSAParams(DSAParams *data)
{
    _asn1_free_top(asn1_DSAParams, data);
}


int
copy_DSAParams(const DSAParams *from, DSAParams *to)
{
    return _asn1_copy_top(asn1_DSAParams, from, to);
}

extern const struct asn1_template asn1_ECPoint[];
/* template_members: ECPoint exp exp */
extern const struct asn1_template asn1_ECPoint_tag__96[];
/* generate_template_type: ECPoint_tag__96 */
/* generate_template_type: ECPoint */
const struct asn1_template asn1_ECPoint[] = {
/* 0 */ { 0, sizeof(ECPoint), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_Extension_tag_extnValue_25 }
};

int
decode_ECPoint(const unsigned char *p, size_t len, ECPoint *data, size_t *size)
{
    return _asn1_decode_top(asn1_ECPoint, 0|0, p, len, data, size);
}


int
encode_ECPoint(unsigned char *p, size_t len, const ECPoint *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ECPoint, p, len, data, size);
    return ret;
}


size_t
length_ECPoint(const ECPoint *data)
{
    return _asn1_length(asn1_ECPoint, data);
}


void
free_ECPoint(ECPoint *data)
{
    _asn1_free_top(asn1_ECPoint, data);
}


int
copy_ECPoint(const ECPoint *from, ECPoint *to)
{
    return _asn1_copy_top(asn1_ECPoint, from, to);
}

extern const struct asn1_template asn1_ECParameters[];
extern const struct asn1_template asn1_ECParameters_choice_namedCurve[];
/* template_members: heim_oid exp exp */
extern const struct asn1_template asn1_heim_oid_tag__97[];
/* generate_template_type: heim_oid_tag__97 */
/* generate_template_type: ECParameters_choice_namedCurve */
static const struct asn1_template asn1_choice_ECParameters_6[] = {
/* 0 */ { 0, offsetof(ECParameters, element), ((void *)1) },
/* 1 */ { choice_ECParameters_namedCurve, offsetof(ECParameters, u.namedCurve), asn1_heim_oid_seofTstruct_10 }
};
/* generate_template_type: ECParameters */
const struct asn1_template asn1_ECParameters[] = {
/* 0 */ { 0, sizeof(ECParameters), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_ECParameters_6 }
};

int
decode_ECParameters(const unsigned char *p, size_t len, ECParameters *data, size_t *size)
{
    return _asn1_decode_top(asn1_ECParameters, 0|0, p, len, data, size);
}


int
encode_ECParameters(unsigned char *p, size_t len, const ECParameters *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ECParameters, p, len, data, size);
    return ret;
}


size_t
length_ECParameters(const ECParameters *data)
{
    return _asn1_length(asn1_ECParameters, data);
}


void
free_ECParameters(ECParameters *data)
{
    _asn1_free_top(asn1_ECParameters, data);
}


int
copy_ECParameters(const ECParameters *from, ECParameters *to)
{
    return _asn1_copy_top(asn1_ECParameters, from, to);
}

extern const struct asn1_template asn1_ECDSA_Sig_Value[];
/* template_members: ECDSA_Sig_Value exp exp */
extern const struct asn1_template asn1_ECDSA_Sig_Value_tag__98[];
/* tsequence: members isstruct: 1 */
/* template_members: ECDSA_Sig_Value exp exp */
extern const struct asn1_template asn1_ECDSA_Sig_Value_tag_r_99[];
/* generate_template_type: ECDSA_Sig_Value_tag_r_99 */
/* template_members: ECDSA_Sig_Value exp exp */
extern const struct asn1_template asn1_ECDSA_Sig_Value_tag_s_100[];
/* generate_template_type: ECDSA_Sig_Value_tag_s_100 */
/* generate_template_type: ECDSA_Sig_Value_tag__98 */
const struct asn1_template asn1_ECDSA_Sig_Value_tag__98[] = {
/* 0 */ { 0, sizeof(struct ECDSA_Sig_Value), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct ECDSA_Sig_Value, r), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct ECDSA_Sig_Value, s), asn1_CertificateSerialNumber_tag__15 }
};
/* generate_template_type: ECDSA_Sig_Value */
const struct asn1_template asn1_ECDSA_Sig_Value[] = {
/* 0 */ { 0, sizeof(ECDSA_Sig_Value), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ECDSA_Sig_Value_tag__98 }
};

int
decode_ECDSA_Sig_Value(const unsigned char *p, size_t len, ECDSA_Sig_Value *data, size_t *size)
{
    return _asn1_decode_top(asn1_ECDSA_Sig_Value, 0|0, p, len, data, size);
}


int
encode_ECDSA_Sig_Value(unsigned char *p, size_t len, const ECDSA_Sig_Value *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ECDSA_Sig_Value, p, len, data, size);
    return ret;
}


size_t
length_ECDSA_Sig_Value(const ECDSA_Sig_Value *data)
{
    return _asn1_length(asn1_ECDSA_Sig_Value, data);
}


void
free_ECDSA_Sig_Value(ECDSA_Sig_Value *data)
{
    _asn1_free_top(asn1_ECDSA_Sig_Value, data);
}


int
copy_ECDSA_Sig_Value(const ECDSA_Sig_Value *from, ECDSA_Sig_Value *to)
{
    return _asn1_copy_top(asn1_ECDSA_Sig_Value, from, to);
}

extern const struct asn1_template asn1_RSAPublicKey[];
/* template_members: RSAPublicKey exp exp */
extern const struct asn1_template asn1_RSAPublicKey_tag__101[];
/* tsequence: members isstruct: 1 */
/* template_members: RSAPublicKey exp exp */
extern const struct asn1_template asn1_RSAPublicKey_tag_modulus_102[];
/* generate_template_type: RSAPublicKey_tag_modulus_102 */
/* template_members: RSAPublicKey exp exp */
extern const struct asn1_template asn1_RSAPublicKey_tag_publicExponent_103[];
/* generate_template_type: RSAPublicKey_tag_publicExponent_103 */
/* generate_template_type: RSAPublicKey_tag__101 */
const struct asn1_template asn1_RSAPublicKey_tag__101[] = {
/* 0 */ { 0, sizeof(struct RSAPublicKey), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPublicKey, modulus), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPublicKey, publicExponent), asn1_CertificateSerialNumber_tag__15 }
};
/* generate_template_type: RSAPublicKey */
const struct asn1_template asn1_RSAPublicKey[] = {
/* 0 */ { 0, sizeof(RSAPublicKey), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_RSAPublicKey_tag__101 }
};

int
decode_RSAPublicKey(const unsigned char *p, size_t len, RSAPublicKey *data, size_t *size)
{
    return _asn1_decode_top(asn1_RSAPublicKey, 0|0, p, len, data, size);
}


int
encode_RSAPublicKey(unsigned char *p, size_t len, const RSAPublicKey *data, size_t *size)
{
    int ret = _asn1_encode(asn1_RSAPublicKey, p, len, data, size);
    return ret;
}


size_t
length_RSAPublicKey(const RSAPublicKey *data)
{
    return _asn1_length(asn1_RSAPublicKey, data);
}


void
free_RSAPublicKey(RSAPublicKey *data)
{
    _asn1_free_top(asn1_RSAPublicKey, data);
}


int
copy_RSAPublicKey(const RSAPublicKey *from, RSAPublicKey *to)
{
    return _asn1_copy_top(asn1_RSAPublicKey, from, to);
}

extern const struct asn1_template asn1_RSAPrivateKey[];
/* template_members: RSAPrivateKey exp exp */
extern const struct asn1_template asn1_RSAPrivateKey_tag__104[];
/* tsequence: members isstruct: 1 */
/* template_members: RSAPrivateKey exp exp */
extern const struct asn1_template asn1_RSAPrivateKey_tag_version_105[];
/* generate_template_type: RSAPrivateKey_tag_version_105 */
/* template_members: RSAPrivateKey exp exp */
extern const struct asn1_template asn1_RSAPrivateKey_tag_modulus_106[];
/* generate_template_type: RSAPrivateKey_tag_modulus_106 */
/* template_members: RSAPrivateKey exp exp */
extern const struct asn1_template asn1_RSAPrivateKey_tag_publicExponent_107[];
/* generate_template_type: RSAPrivateKey_tag_publicExponent_107 */
/* template_members: RSAPrivateKey exp exp */
extern const struct asn1_template asn1_RSAPrivateKey_tag_privateExponent_108[];
/* generate_template_type: RSAPrivateKey_tag_privateExponent_108 */
/* template_members: RSAPrivateKey exp exp */
extern const struct asn1_template asn1_RSAPrivateKey_tag_prime1_109[];
/* generate_template_type: RSAPrivateKey_tag_prime1_109 */
/* template_members: RSAPrivateKey exp exp */
extern const struct asn1_template asn1_RSAPrivateKey_tag_prime2_110[];
/* generate_template_type: RSAPrivateKey_tag_prime2_110 */
/* template_members: RSAPrivateKey exp exp */
extern const struct asn1_template asn1_RSAPrivateKey_tag_exponent1_111[];
/* generate_template_type: RSAPrivateKey_tag_exponent1_111 */
/* template_members: RSAPrivateKey exp exp */
extern const struct asn1_template asn1_RSAPrivateKey_tag_exponent2_112[];
/* generate_template_type: RSAPrivateKey_tag_exponent2_112 */
/* template_members: RSAPrivateKey exp exp */
extern const struct asn1_template asn1_RSAPrivateKey_tag_coefficient_113[];
/* generate_template_type: RSAPrivateKey_tag_coefficient_113 */
/* generate_template_type: RSAPrivateKey_tag__104 */
const struct asn1_template asn1_RSAPrivateKey_tag__104[] = {
/* 0 */ { 0, sizeof(struct RSAPrivateKey), ((void *)9) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, version), asn1_BasicConstraints_tag_pathLenConstraint_69 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, modulus), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, publicExponent), asn1_CertificateSerialNumber_tag__15 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, privateExponent), asn1_CertificateSerialNumber_tag__15 },
/* 5 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, prime1), asn1_CertificateSerialNumber_tag__15 },
/* 6 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, prime2), asn1_CertificateSerialNumber_tag__15 },
/* 7 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, exponent1), asn1_CertificateSerialNumber_tag__15 },
/* 8 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, exponent2), asn1_CertificateSerialNumber_tag__15 },
/* 9 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, coefficient), asn1_CertificateSerialNumber_tag__15 }
};
/* generate_template_type: RSAPrivateKey */
const struct asn1_template asn1_RSAPrivateKey[] = {
/* 0 */ { 0, sizeof(RSAPrivateKey), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_RSAPrivateKey_tag__104 }
};

int
decode_RSAPrivateKey(const unsigned char *p, size_t len, RSAPrivateKey *data, size_t *size)
{
    return _asn1_decode_top(asn1_RSAPrivateKey, 0|0, p, len, data, size);
}


int
encode_RSAPrivateKey(unsigned char *p, size_t len, const RSAPrivateKey *data, size_t *size)
{
    int ret = _asn1_encode(asn1_RSAPrivateKey, p, len, data, size);
    return ret;
}


size_t
length_RSAPrivateKey(const RSAPrivateKey *data)
{
    return _asn1_length(asn1_RSAPrivateKey, data);
}


void
free_RSAPrivateKey(RSAPrivateKey *data)
{
    _asn1_free_top(asn1_RSAPrivateKey, data);
}


int
copy_RSAPrivateKey(const RSAPrivateKey *from, RSAPrivateKey *to)
{
    return _asn1_copy_top(asn1_RSAPrivateKey, from, to);
}

extern const struct asn1_template asn1_DigestInfo[];
/* template_members: DigestInfo exp exp */
extern const struct asn1_template asn1_DigestInfo_tag__114[];
/* tsequence: members isstruct: 1 */
/* template_members: DigestInfo exp exp */
extern const struct asn1_template asn1_DigestInfo_tag_digest_115[];
/* generate_template_type: DigestInfo_tag_digest_115 */
/* generate_template_type: DigestInfo_tag__114 */
const struct asn1_template asn1_DigestInfo_tag__114[] = {
/* 0 */ { 0, sizeof(struct DigestInfo), ((void *)2) },
/* 1 */ { A1_OP_TYPE , offsetof(struct DigestInfo, digestAlgorithm), asn1_AlgorithmIdentifier },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct DigestInfo, digest), asn1_Extension_tag_extnValue_25 }
};
/* generate_template_type: DigestInfo */
const struct asn1_template asn1_DigestInfo[] = {
/* 0 */ { 0, sizeof(DigestInfo), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestInfo_tag__114 }
};

int
decode_DigestInfo(const unsigned char *p, size_t len, DigestInfo *data, size_t *size)
{
    return _asn1_decode_top(asn1_DigestInfo, 0|0, p, len, data, size);
}


int
encode_DigestInfo(unsigned char *p, size_t len, const DigestInfo *data, size_t *size)
{
    int ret = _asn1_encode(asn1_DigestInfo, p, len, data, size);
    return ret;
}


size_t
length_DigestInfo(const DigestInfo *data)
{
    return _asn1_length(asn1_DigestInfo, data);
}


void
free_DigestInfo(DigestInfo *data)
{
    _asn1_free_top(asn1_DigestInfo, data);
}


int
copy_DigestInfo(const DigestInfo *from, DigestInfo *to)
{
    return _asn1_copy_top(asn1_DigestInfo, from, to);
}

extern const struct asn1_template asn1_TBSCRLCertList[];
/* template_members: TBSCRLCertList exp exp */
extern const struct asn1_template asn1_TBSCRLCertList_tag__116[];
/* tsequence: members isstruct: 1 */
/* template_members: TBSCRLCertList exp exp */
extern const struct asn1_template asn1_TBSCRLCertList_tag_revokedCertificates_117[];
extern const struct asn1_template asn1_TBSCRLCertList_seofTstruct_13[];
/* template_members: TBSCRLCertList_revokedCertificates_val exp exp */
extern const struct asn1_template asn1_TBSCRLCertList_revokedCertificates_val_tag__118[];
/* tsequence: members isstruct: 1 */
/* generate_template_type: TBSCRLCertList_revokedCertificates_val_tag__118 */
const struct asn1_template asn1_TBSCRLCertList_revokedCertificates_val_tag__118[] = {
/* 0 */ { 0, sizeof(struct TBSCRLCertList_revokedCertificates_val), ((void *)3) },
/* 1 */ { A1_OP_TYPE , offsetof(struct TBSCRLCertList_revokedCertificates_val, userCertificate), asn1_CertificateSerialNumber },
/* 2 */ { A1_OP_TYPE , offsetof(struct TBSCRLCertList_revokedCertificates_val, revocationDate), asn1_Time },
/* 3 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct TBSCRLCertList_revokedCertificates_val, crlEntryExtensions), asn1_Extensions }
};
/* generate_template_type: TBSCRLCertList_seofTstruct_13 */
const struct asn1_template asn1_TBSCRLCertList_seofTstruct_13[] = {
/* 0 */ { 0, sizeof(struct TBSCRLCertList_revokedCertificates_val), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TBSCRLCertList_revokedCertificates_val_tag__118 }
};
/* generate_template_type: TBSCRLCertList_tag_revokedCertificates_117 */
const struct asn1_template asn1_TBSCRLCertList_tag_revokedCertificates_117[] = {
/* 0 */ { 0, sizeof(struct TBSCRLCertList), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_TBSCRLCertList_seofTstruct_13 }
};
/* template_members: TBSCRLCertList exp exp */
extern const struct asn1_template asn1_TBSCRLCertList_tag_crlExtensions_119[];
/* generate_template_type: TBSCRLCertList_tag_crlExtensions_119 */
/* generate_template_type: TBSCRLCertList_tag__116 */
const struct asn1_template asn1_TBSCRLCertList_tag__116[] = {
/* 0 */ { 0, sizeof(struct TBSCRLCertList), ((void *)7) },
/* 1 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct TBSCRLCertList, version), asn1_Version },
/* 2 */ { A1_OP_TYPE , offsetof(struct TBSCRLCertList, signature), asn1_AlgorithmIdentifier },
/* 3 */ { A1_OP_TYPE , offsetof(struct TBSCRLCertList, issuer), asn1_Name },
/* 4 */ { A1_OP_TYPE , offsetof(struct TBSCRLCertList, thisUpdate), asn1_Time },
/* 5 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct TBSCRLCertList, nextUpdate), asn1_Time },
/* 6 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_OPTIONAL, offsetof(struct TBSCRLCertList, revokedCertificates), asn1_TBSCRLCertList_tag_revokedCertificates_117 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct TBSCRLCertList, crlExtensions), asn1_TBSCertificate_tag_extensions_31 }
};
/* generate_template_type: TBSCRLCertList */
const struct asn1_template asn1_TBSCRLCertList[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(TBSCRLCertList), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TBSCRLCertList_tag__116 }
};

int
decode_TBSCRLCertList(const unsigned char *p, size_t len, TBSCRLCertList *data, size_t *size)
{
    return _asn1_decode_top(asn1_TBSCRLCertList, 0|0, p, len, data, size);
}


int
encode_TBSCRLCertList(unsigned char *p, size_t len, const TBSCRLCertList *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TBSCRLCertList, p, len, data, size);
    return ret;
}


size_t
length_TBSCRLCertList(const TBSCRLCertList *data)
{
    return _asn1_length(asn1_TBSCRLCertList, data);
}


void
free_TBSCRLCertList(TBSCRLCertList *data)
{
    _asn1_free_top(asn1_TBSCRLCertList, data);
}


int
copy_TBSCRLCertList(const TBSCRLCertList *from, TBSCRLCertList *to)
{
    return _asn1_copy_top(asn1_TBSCRLCertList, from, to);
}

extern const struct asn1_template asn1_CRLCertificateList[];
/* template_members: CRLCertificateList exp exp */
extern const struct asn1_template asn1_CRLCertificateList_tag__120[];
/* tsequence: members isstruct: 1 */
/* template_members: CRLCertificateList exp exp */
extern const struct asn1_template asn1_CRLCertificateList_tag_signatureValue_121[];
/* generate_template_type: CRLCertificateList_tag_signatureValue_121 */
const struct asn1_template asn1_CRLCertificateList_tag_signatureValue_121[] = {
/* 0 */ { 0, sizeof(CRLCertificateList), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: CRLCertificateList_tag__120 */
const struct asn1_template asn1_CRLCertificateList_tag__120[] = {
/* 0 */ { 0, sizeof(struct CRLCertificateList), ((void *)3) },
/* 1 */ { A1_OP_TYPE , offsetof(struct CRLCertificateList, tbsCertList), asn1_TBSCRLCertList },
/* 2 */ { A1_OP_TYPE , offsetof(struct CRLCertificateList, signatureAlgorithm), asn1_AlgorithmIdentifier },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct CRLCertificateList, signatureValue), asn1_CRLCertificateList_tag_signatureValue_121 }
};
/* generate_template_type: CRLCertificateList */
const struct asn1_template asn1_CRLCertificateList[] = {
/* 0 */ { 0, sizeof(CRLCertificateList), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CRLCertificateList_tag__120 }
};

int
decode_CRLCertificateList(const unsigned char *p, size_t len, CRLCertificateList *data, size_t *size)
{
    return _asn1_decode_top(asn1_CRLCertificateList, 0|0, p, len, data, size);
}


int
encode_CRLCertificateList(unsigned char *p, size_t len, const CRLCertificateList *data, size_t *size)
{
    int ret = _asn1_encode(asn1_CRLCertificateList, p, len, data, size);
    return ret;
}


size_t
length_CRLCertificateList(const CRLCertificateList *data)
{
    return _asn1_length(asn1_CRLCertificateList, data);
}


void
free_CRLCertificateList(CRLCertificateList *data)
{
    _asn1_free_top(asn1_CRLCertificateList, data);
}


int
copy_CRLCertificateList(const CRLCertificateList *from, CRLCertificateList *to)
{
    return _asn1_copy_top(asn1_CRLCertificateList, from, to);
}

static unsigned oid_id_x509_ce_cRLNumber_variable_num[4] =  {2, 5, 29, 20 };
const heim_oid asn1_oid_id_x509_ce_cRLNumber = { 4, oid_id_x509_ce_cRLNumber_variable_num };

static unsigned oid_id_x509_ce_freshestCRL_variable_num[4] =  {2, 5, 29, 46 };
const heim_oid asn1_oid_id_x509_ce_freshestCRL = { 4, oid_id_x509_ce_freshestCRL_variable_num };

static unsigned oid_id_x509_ce_cRLReason_variable_num[4] =  {2, 5, 29, 21 };
const heim_oid asn1_oid_id_x509_ce_cRLReason = { 4, oid_id_x509_ce_cRLReason_variable_num };

extern const struct asn1_template asn1_CRLReason[];
/* template_members: CRLReason exp exp */
extern const struct asn1_template asn1_CRLReason_tag__122[];
/* generate_template_type: CRLReason_tag__122 */
/* generate_template_type: CRLReason */
const struct asn1_template asn1_CRLReason[] = {
/* 0 */ { 0, sizeof(CRLReason), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_Version_tag__0 }
};

int
decode_CRLReason(const unsigned char *p, size_t len, CRLReason *data, size_t *size)
{
    return _asn1_decode_top(asn1_CRLReason, 0|0, p, len, data, size);
}


int
encode_CRLReason(unsigned char *p, size_t len, const CRLReason *data, size_t *size)
{
    int ret = _asn1_encode(asn1_CRLReason, p, len, data, size);
    return ret;
}


size_t
length_CRLReason(const CRLReason *data)
{
    return _asn1_length(asn1_CRLReason, data);
}


void
free_CRLReason(CRLReason *data)
{
    _asn1_free_top(asn1_CRLReason, data);
}


int
copy_CRLReason(const CRLReason *from, CRLReason *to)
{
    return _asn1_copy_top(asn1_CRLReason, from, to);
}

extern const struct asn1_template asn1_PKIXXmppAddr[];
/* template_members: PKIXXmppAddr exp exp */
extern const struct asn1_template asn1_PKIXXmppAddr_tag__123[];
/* generate_template_type: PKIXXmppAddr_tag__123 */
/* generate_template_type: PKIXXmppAddr */
const struct asn1_template asn1_PKIXXmppAddr[] = {
/* 0 */ { 0, sizeof(PKIXXmppAddr), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_heim_utf8_string_tag__8 }
};

int
decode_PKIXXmppAddr(const unsigned char *p, size_t len, PKIXXmppAddr *data, size_t *size)
{
    return _asn1_decode_top(asn1_PKIXXmppAddr, 0|0, p, len, data, size);
}


int
encode_PKIXXmppAddr(unsigned char *p, size_t len, const PKIXXmppAddr *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PKIXXmppAddr, p, len, data, size);
    return ret;
}


size_t
length_PKIXXmppAddr(const PKIXXmppAddr *data)
{
    return _asn1_length(asn1_PKIXXmppAddr, data);
}


void
free_PKIXXmppAddr(PKIXXmppAddr *data)
{
    _asn1_free_top(asn1_PKIXXmppAddr, data);
}


int
copy_PKIXXmppAddr(const PKIXXmppAddr *from, PKIXXmppAddr *to)
{
    return _asn1_copy_top(asn1_PKIXXmppAddr, from, to);
}

static unsigned oid_id_pkix_variable_num[7] =  {1, 3, 6, 1, 5, 5, 7 };
const heim_oid asn1_oid_id_pkix = { 7, oid_id_pkix_variable_num };

static unsigned oid_id_pkix_on_variable_num[8] =  {1, 3, 6, 1, 5, 5, 7, 8 };
const heim_oid asn1_oid_id_pkix_on = { 8, oid_id_pkix_on_variable_num };

static unsigned oid_id_pkix_on_xmppAddr_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 8, 5 };
const heim_oid asn1_oid_id_pkix_on_xmppAddr = { 9, oid_id_pkix_on_xmppAddr_variable_num };

static unsigned oid_id_pkix_on_dnsSRV_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 8, 7 };
const heim_oid asn1_oid_id_pkix_on_dnsSRV = { 9, oid_id_pkix_on_dnsSRV_variable_num };

static unsigned oid_id_pkix_kp_variable_num[8] =  {1, 3, 6, 1, 5, 5, 7, 3 };
const heim_oid asn1_oid_id_pkix_kp = { 8, oid_id_pkix_kp_variable_num };

static unsigned oid_id_pkix_kp_serverAuth_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 3, 1 };
const heim_oid asn1_oid_id_pkix_kp_serverAuth = { 9, oid_id_pkix_kp_serverAuth_variable_num };

static unsigned oid_id_pkix_kp_clientAuth_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 3, 2 };
const heim_oid asn1_oid_id_pkix_kp_clientAuth = { 9, oid_id_pkix_kp_clientAuth_variable_num };

static unsigned oid_id_pkix_kp_emailProtection_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 3, 4 };
const heim_oid asn1_oid_id_pkix_kp_emailProtection = { 9, oid_id_pkix_kp_emailProtection_variable_num };

static unsigned oid_id_pkix_kp_timeStamping_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 3, 8 };
const heim_oid asn1_oid_id_pkix_kp_timeStamping = { 9, oid_id_pkix_kp_timeStamping_variable_num };

static unsigned oid_id_pkix_kp_OCSPSigning_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 3, 9 };
const heim_oid asn1_oid_id_pkix_kp_OCSPSigning = { 9, oid_id_pkix_kp_OCSPSigning_variable_num };

static unsigned oid_id_pkix_pe_variable_num[8] =  {1, 3, 6, 1, 5, 5, 7, 1 };
const heim_oid asn1_oid_id_pkix_pe = { 8, oid_id_pkix_pe_variable_num };

static unsigned oid_id_pkix_pe_authorityInfoAccess_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 1, 1 };
const heim_oid asn1_oid_id_pkix_pe_authorityInfoAccess = { 9, oid_id_pkix_pe_authorityInfoAccess_variable_num };

extern const struct asn1_template asn1_AccessDescription[];
/* template_members: AccessDescription exp exp */
extern const struct asn1_template asn1_AccessDescription_tag__124[];
/* tsequence: members isstruct: 1 */
/* template_members: AccessDescription exp exp */
extern const struct asn1_template asn1_AccessDescription_tag_accessMethod_125[];
/* generate_template_type: AccessDescription_tag_accessMethod_125 */
/* generate_template_type: AccessDescription_tag__124 */
const struct asn1_template asn1_AccessDescription_tag__124[] = {
/* 0 */ { 0, sizeof(struct AccessDescription), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct AccessDescription, accessMethod), asn1_AlgorithmIdentifier_tag_algorithm_2 },
/* 2 */ { A1_OP_TYPE , offsetof(struct AccessDescription, accessLocation), asn1_GeneralName }
};
/* generate_template_type: AccessDescription */
const struct asn1_template asn1_AccessDescription[] = {
/* 0 */ { 0, sizeof(AccessDescription), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AccessDescription_tag__124 }
};

int
decode_AccessDescription(const unsigned char *p, size_t len, AccessDescription *data, size_t *size)
{
    return _asn1_decode_top(asn1_AccessDescription, 0|0, p, len, data, size);
}


int
encode_AccessDescription(unsigned char *p, size_t len, const AccessDescription *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AccessDescription, p, len, data, size);
    return ret;
}


size_t
length_AccessDescription(const AccessDescription *data)
{
    return _asn1_length(asn1_AccessDescription, data);
}


void
free_AccessDescription(AccessDescription *data)
{
    _asn1_free_top(asn1_AccessDescription, data);
}


int
copy_AccessDescription(const AccessDescription *from, AccessDescription *to)
{
    return _asn1_copy_top(asn1_AccessDescription, from, to);
}

extern const struct asn1_template asn1_AuthorityInfoAccessSyntax[];
/* template_members: AuthorityInfoAccessSyntax exp exp */
extern const struct asn1_template asn1_AuthorityInfoAccessSyntax_tag__126[];
extern const struct asn1_template asn1_AccessDescription_seofTstruct_14[];
/* generate_template_type: AccessDescription_seofTstruct_14 */
const struct asn1_template asn1_AccessDescription_seofTstruct_14[] = {
/* 0 */ { 0, sizeof(AccessDescription), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AccessDescription }
};
/* generate_template_type: AuthorityInfoAccessSyntax_tag__126 */
const struct asn1_template asn1_AuthorityInfoAccessSyntax_tag__126[] = {
/* 0 */ { 0, sizeof(AccessDescription), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_AccessDescription_seofTstruct_14 }
};
/* generate_template_type: AuthorityInfoAccessSyntax */
const struct asn1_template asn1_AuthorityInfoAccessSyntax[] = {
/* 0 */ { 0, sizeof(AuthorityInfoAccessSyntax), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthorityInfoAccessSyntax_tag__126 }
};

int
decode_AuthorityInfoAccessSyntax(const unsigned char *p, size_t len, AuthorityInfoAccessSyntax *data, size_t *size)
{
    return _asn1_decode_top(asn1_AuthorityInfoAccessSyntax, 0|0, p, len, data, size);
}


int
encode_AuthorityInfoAccessSyntax(unsigned char *p, size_t len, const AuthorityInfoAccessSyntax *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AuthorityInfoAccessSyntax, p, len, data, size);
    return ret;
}


size_t
length_AuthorityInfoAccessSyntax(const AuthorityInfoAccessSyntax *data)
{
    return _asn1_length(asn1_AuthorityInfoAccessSyntax, data);
}


void
free_AuthorityInfoAccessSyntax(AuthorityInfoAccessSyntax *data)
{
    _asn1_free_top(asn1_AuthorityInfoAccessSyntax, data);
}


int
copy_AuthorityInfoAccessSyntax(const AuthorityInfoAccessSyntax *from, AuthorityInfoAccessSyntax *to)
{
    return _asn1_copy_top(asn1_AuthorityInfoAccessSyntax, from, to);
}

static unsigned oid_id_pkix_pe_proxyCertInfo_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 1, 14 };
const heim_oid asn1_oid_id_pkix_pe_proxyCertInfo = { 9, oid_id_pkix_pe_proxyCertInfo_variable_num };

static unsigned oid_id_pkix_ppl_variable_num[8] =  {1, 3, 6, 1, 5, 5, 7, 21 };
const heim_oid asn1_oid_id_pkix_ppl = { 8, oid_id_pkix_ppl_variable_num };

static unsigned oid_id_pkix_ppl_anyLanguage_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 21, 0 };
const heim_oid asn1_oid_id_pkix_ppl_anyLanguage = { 9, oid_id_pkix_ppl_anyLanguage_variable_num };

static unsigned oid_id_pkix_ppl_inheritAll_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 21, 1 };
const heim_oid asn1_oid_id_pkix_ppl_inheritAll = { 9, oid_id_pkix_ppl_inheritAll_variable_num };

static unsigned oid_id_pkix_ppl_independent_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 21, 2 };
const heim_oid asn1_oid_id_pkix_ppl_independent = { 9, oid_id_pkix_ppl_independent_variable_num };

extern const struct asn1_template asn1_ProxyPolicy[];
/* template_members: ProxyPolicy exp exp */
extern const struct asn1_template asn1_ProxyPolicy_tag__127[];
/* tsequence: members isstruct: 1 */
/* template_members: ProxyPolicy exp exp */
extern const struct asn1_template asn1_ProxyPolicy_tag_policyLanguage_128[];
/* generate_template_type: ProxyPolicy_tag_policyLanguage_128 */
/* template_members: ProxyPolicy exp exp */
extern const struct asn1_template asn1_ProxyPolicy_tag_policy_129[];
/* generate_template_type: ProxyPolicy_tag_policy_129 */
/* generate_template_type: ProxyPolicy_tag__127 */
const struct asn1_template asn1_ProxyPolicy_tag__127[] = {
/* 0 */ { 0, sizeof(struct ProxyPolicy), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct ProxyPolicy, policyLanguage), asn1_AlgorithmIdentifier_tag_algorithm_2 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString)|A1_FLAG_OPTIONAL, offsetof(struct ProxyPolicy, policy), asn1_Extension_tag_extnValue_25 }
};
/* generate_template_type: ProxyPolicy */
const struct asn1_template asn1_ProxyPolicy[] = {
/* 0 */ { 0, sizeof(ProxyPolicy), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ProxyPolicy_tag__127 }
};

int
decode_ProxyPolicy(const unsigned char *p, size_t len, ProxyPolicy *data, size_t *size)
{
    return _asn1_decode_top(asn1_ProxyPolicy, 0|0, p, len, data, size);
}


int
encode_ProxyPolicy(unsigned char *p, size_t len, const ProxyPolicy *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ProxyPolicy, p, len, data, size);
    return ret;
}


size_t
length_ProxyPolicy(const ProxyPolicy *data)
{
    return _asn1_length(asn1_ProxyPolicy, data);
}


void
free_ProxyPolicy(ProxyPolicy *data)
{
    _asn1_free_top(asn1_ProxyPolicy, data);
}


int
copy_ProxyPolicy(const ProxyPolicy *from, ProxyPolicy *to)
{
    return _asn1_copy_top(asn1_ProxyPolicy, from, to);
}

extern const struct asn1_template asn1_ProxyCertInfo[];
/* template_members: ProxyCertInfo exp exp */
extern const struct asn1_template asn1_ProxyCertInfo_tag__130[];
/* tsequence: members isstruct: 1 */
/* template_members: ProxyCertInfo exp exp */
extern const struct asn1_template asn1_ProxyCertInfo_tag_pCPathLenConstraint_131[];
/* generate_template_type: ProxyCertInfo_tag_pCPathLenConstraint_131 */
/* generate_template_type: ProxyCertInfo_tag__130 */
const struct asn1_template asn1_ProxyCertInfo_tag__130[] = {
/* 0 */ { 0, sizeof(struct ProxyCertInfo), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct ProxyCertInfo, pCPathLenConstraint), asn1_BasicConstraints_tag_pathLenConstraint_69 },
/* 2 */ { A1_OP_TYPE , offsetof(struct ProxyCertInfo, proxyPolicy), asn1_ProxyPolicy }
};
/* generate_template_type: ProxyCertInfo */
const struct asn1_template asn1_ProxyCertInfo[] = {
/* 0 */ { 0, sizeof(ProxyCertInfo), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ProxyCertInfo_tag__130 }
};

int
decode_ProxyCertInfo(const unsigned char *p, size_t len, ProxyCertInfo *data, size_t *size)
{
    return _asn1_decode_top(asn1_ProxyCertInfo, 0|0, p, len, data, size);
}


int
encode_ProxyCertInfo(unsigned char *p, size_t len, const ProxyCertInfo *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ProxyCertInfo, p, len, data, size);
    return ret;
}


size_t
length_ProxyCertInfo(const ProxyCertInfo *data)
{
    return _asn1_length(asn1_ProxyCertInfo, data);
}


void
free_ProxyCertInfo(ProxyCertInfo *data)
{
    _asn1_free_top(asn1_ProxyCertInfo, data);
}


int
copy_ProxyCertInfo(const ProxyCertInfo *from, ProxyCertInfo *to)
{
    return _asn1_copy_top(asn1_ProxyCertInfo, from, to);
}

static unsigned oid_id_uspkicommon_card_id_variable_num[8] =  {2, 16, 840, 1, 101, 3, 6, 6 };
const heim_oid asn1_oid_id_uspkicommon_card_id = { 8, oid_id_uspkicommon_card_id_variable_num };

static unsigned oid_id_uspkicommon_piv_interim_variable_num[9] =  {2, 16, 840, 1, 101, 3, 6, 9, 1 };
const heim_oid asn1_oid_id_uspkicommon_piv_interim = { 9, oid_id_uspkicommon_piv_interim_variable_num };

static unsigned oid_id_netscape_variable_num[5] =  {2, 16, 840, 1, 113730 };
const heim_oid asn1_oid_id_netscape = { 5, oid_id_netscape_variable_num };

static unsigned oid_id_netscape_cert_comment_variable_num[7] =  {2, 16, 840, 1, 113730, 1, 13 };
const heim_oid asn1_oid_id_netscape_cert_comment = { 7, oid_id_netscape_cert_comment_variable_num };

static unsigned oid_id_ms_cert_enroll_domaincontroller_variable_num[9] =  {1, 3, 6, 1, 4, 1, 311, 20, 2 };
const heim_oid asn1_oid_id_ms_cert_enroll_domaincontroller = { 9, oid_id_ms_cert_enroll_domaincontroller_variable_num };

static unsigned oid_id_ms_client_authentication_variable_num[9] =  {1, 3, 6, 1, 5, 5, 7, 3, 2 };
const heim_oid asn1_oid_id_ms_client_authentication = { 9, oid_id_ms_client_authentication_variable_num };

