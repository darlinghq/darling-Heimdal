/* Generated from /Users/andyhyatt/Downloads/Heimdal-498.50.8/lib/asn1/pkcs9.asn1 */
/* Do not edit */

#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "pkcs9_asn1.h"
#include "pkcs9_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static unsigned oid_id_pkcs_9_variable_num[6] =  {1, 2, 840, 113549, 1, 9 };
const heim_oid asn1_oid_id_pkcs_9 = { 6, oid_id_pkcs_9_variable_num };

static unsigned oid_id_pkcs9_emailAddress_variable_num[7] =  {1, 2, 840, 113549, 1, 9, 1 };
const heim_oid asn1_oid_id_pkcs9_emailAddress = { 7, oid_id_pkcs9_emailAddress_variable_num };

static unsigned oid_id_pkcs9_contentType_variable_num[7] =  {1, 2, 840, 113549, 1, 9, 3 };
const heim_oid asn1_oid_id_pkcs9_contentType = { 7, oid_id_pkcs9_contentType_variable_num };

static unsigned oid_id_pkcs9_messageDigest_variable_num[7] =  {1, 2, 840, 113549, 1, 9, 4 };
const heim_oid asn1_oid_id_pkcs9_messageDigest = { 7, oid_id_pkcs9_messageDigest_variable_num };

static unsigned oid_id_pkcs9_signingTime_variable_num[7] =  {1, 2, 840, 113549, 1, 9, 5 };
const heim_oid asn1_oid_id_pkcs9_signingTime = { 7, oid_id_pkcs9_signingTime_variable_num };

static unsigned oid_id_pkcs9_countersignature_variable_num[7] =  {1, 2, 840, 113549, 1, 9, 6 };
const heim_oid asn1_oid_id_pkcs9_countersignature = { 7, oid_id_pkcs9_countersignature_variable_num };

static unsigned oid_id_pkcs_9_at_friendlyName_variable_num[7] =  {1, 2, 840, 113549, 1, 9, 20 };
const heim_oid asn1_oid_id_pkcs_9_at_friendlyName = { 7, oid_id_pkcs_9_at_friendlyName_variable_num };

static unsigned oid_id_pkcs_9_at_localKeyId_variable_num[7] =  {1, 2, 840, 113549, 1, 9, 21 };
const heim_oid asn1_oid_id_pkcs_9_at_localKeyId = { 7, oid_id_pkcs_9_at_localKeyId_variable_num };

static unsigned oid_id_pkcs_9_at_certTypes_variable_num[7] =  {1, 2, 840, 113549, 1, 9, 22 };
const heim_oid asn1_oid_id_pkcs_9_at_certTypes = { 7, oid_id_pkcs_9_at_certTypes_variable_num };

static unsigned oid_id_pkcs_9_at_certTypes_x509_variable_num[8] =  {1, 2, 840, 113549, 1, 9, 22, 1 };
const heim_oid asn1_oid_id_pkcs_9_at_certTypes_x509 = { 8, oid_id_pkcs_9_at_certTypes_x509_variable_num };

extern const struct asn1_template asn1_PKCS9_BMPString[];
/* template_members: PKCS9_BMPString exp exp */
extern const struct asn1_template asn1_PKCS9_BMPString_tag__0[];
/* generate_template_type: PKCS9_BMPString_tag__0 */
const struct asn1_template asn1_PKCS9_BMPString_tag__0[] = {
/* 0 */ { 0, sizeof(heim_bmp_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_BMP_STRING), 0, NULL }
};
/* generate_template_type: PKCS9_BMPString */
const struct asn1_template asn1_PKCS9_BMPString[] = {
/* 0 */ { 0, sizeof(PKCS9_BMPString), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BMPString), 0, asn1_PKCS9_BMPString_tag__0 }
};

int
decode_PKCS9_BMPString(const unsigned char *p, size_t len, PKCS9_BMPString *data, size_t *size)
{
    return _asn1_decode_top(asn1_PKCS9_BMPString, 0|0, p, len, data, size);
}


int
encode_PKCS9_BMPString(unsigned char *p, size_t len, const PKCS9_BMPString *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PKCS9_BMPString, p, len, data, size);
    return ret;
}


size_t
length_PKCS9_BMPString(const PKCS9_BMPString *data)
{
    return _asn1_length(asn1_PKCS9_BMPString, data);
}


void
free_PKCS9_BMPString(PKCS9_BMPString *data)
{
    _asn1_free_top(asn1_PKCS9_BMPString, data);
}


int
copy_PKCS9_BMPString(const PKCS9_BMPString *from, PKCS9_BMPString *to)
{
    return _asn1_copy_top(asn1_PKCS9_BMPString, from, to);
}

extern const struct asn1_template asn1_PKCS9_friendlyName[];
/* template_members: PKCS9_friendlyName exp exp */
extern const struct asn1_template asn1_PKCS9_friendlyName_tag__1[];
extern const struct asn1_template asn1_PKCS9_BMPString_seofTstruct_0[];
/* generate_template_type: PKCS9_BMPString_seofTstruct_0 */
const struct asn1_template asn1_PKCS9_BMPString_seofTstruct_0[] = {
/* 0 */ { 0, sizeof(PKCS9_BMPString), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PKCS9_BMPString }
};
/* generate_template_type: PKCS9_friendlyName_tag__1 */
const struct asn1_template asn1_PKCS9_friendlyName_tag__1[] = {
/* 0 */ { 0, sizeof(PKCS9_BMPString), ((void *)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_PKCS9_BMPString_seofTstruct_0 }
};
/* generate_template_type: PKCS9_friendlyName */
const struct asn1_template asn1_PKCS9_friendlyName[] = {
/* 0 */ { 0, sizeof(PKCS9_friendlyName), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_PKCS9_friendlyName_tag__1 }
};

int
decode_PKCS9_friendlyName(const unsigned char *p, size_t len, PKCS9_friendlyName *data, size_t *size)
{
    return _asn1_decode_top(asn1_PKCS9_friendlyName, 0|0, p, len, data, size);
}


int
encode_PKCS9_friendlyName(unsigned char *p, size_t len, const PKCS9_friendlyName *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PKCS9_friendlyName, p, len, data, size);
    return ret;
}


size_t
length_PKCS9_friendlyName(const PKCS9_friendlyName *data)
{
    return _asn1_length(asn1_PKCS9_friendlyName, data);
}


void
free_PKCS9_friendlyName(PKCS9_friendlyName *data)
{
    _asn1_free_top(asn1_PKCS9_friendlyName, data);
}


int
copy_PKCS9_friendlyName(const PKCS9_friendlyName *from, PKCS9_friendlyName *to)
{
    return _asn1_copy_top(asn1_PKCS9_friendlyName, from, to);
}

