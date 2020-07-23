/* Generated from /Users/ariel/git/darling/src/external/Heimdal/lib/gssapi/mech/gssapi.asn1 */
/* Do not edit */

#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "gssapi_asn1.h"
#include "gssapi_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_heim_any_set = {
	(asn1_type_encode)encode_heim_any_set,
	(asn1_type_decode)decode_heim_any_set,
	(asn1_type_length)length_heim_any_set,
	(asn1_type_copy)copy_heim_any_set,
	(asn1_type_release)free_heim_any_set,
	sizeof(heim_any_set)
};
extern const struct asn1_template asn1_GSSAPIContextToken[];
/* template_members: GSSAPIContextToken imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_GSSAPIContextToken_tag__0[];
/* tsequence: members isstruct: 1 */
/* template_members: GSSAPIContextToken exp exp */
extern const struct asn1_template asn1_GSSAPIContextToken_tag_thisMech_1[];
/* generate_template_type: GSSAPIContextToken_tag_thisMech_1 */
const struct asn1_template asn1_GSSAPIContextToken_tag_thisMech_1[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* generate_template_type: GSSAPIContextToken_tag__0 */
const struct asn1_template asn1_GSSAPIContextToken_tag__0[] = {
/* 0 */ { 0, sizeof(struct GSSAPIContextToken), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct GSSAPIContextToken, thisMech), asn1_GSSAPIContextToken_tag_thisMech_1 },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct GSSAPIContextToken, innerContextToken), &asn1_extern_heim_any_set}
};
/* generate_template_type: GSSAPIContextToken */
const struct asn1_template asn1_GSSAPIContextToken[] = {
/* 0 */ { 0, sizeof(GSSAPIContextToken), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,0)|A1_FLAG_IMPLICIT, 0, asn1_GSSAPIContextToken_tag__0 }
};

int
decode_GSSAPIContextToken(const unsigned char *p, size_t len, GSSAPIContextToken *data, size_t *size)
{
    return _asn1_decode_top(asn1_GSSAPIContextToken, 0|0, p, len, data, size);
}


int
encode_GSSAPIContextToken(unsigned char *p, size_t len, const GSSAPIContextToken *data, size_t *size)
{
    int ret = _asn1_encode(asn1_GSSAPIContextToken, p, len, data, size);
    return ret;
}


size_t
length_GSSAPIContextToken(const GSSAPIContextToken *data)
{
    return _asn1_length(asn1_GSSAPIContextToken, data);
}


void
free_GSSAPIContextToken(GSSAPIContextToken *data)
{
    _asn1_free_top(asn1_GSSAPIContextToken, data);
}


int
copy_GSSAPIContextToken(const GSSAPIContextToken *from, GSSAPIContextToken *to)
{
    return _asn1_copy_top(asn1_GSSAPIContextToken, from, to);
}

extern const struct asn1_template asn1_IAKERB_HEADER[];
/* template_members: IAKERB_HEADER exp exp */
extern const struct asn1_template asn1_IAKERB_HEADER_tag__2[];
/* tsequence: members isstruct: 1 */
/* template_members: IAKERB_HEADER exp exp */
extern const struct asn1_template asn1_IAKERB_HEADER_tag_target_realm_3[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_target_realm_4[];
/* generate_template_type: heim_utf8_string_tag_target_realm_4 */
const struct asn1_template asn1_heim_utf8_string_tag_target_realm_4[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UTF8_STRING), 0, NULL }
};
/* generate_template_type: IAKERB_HEADER_tag_target_realm_3 */
const struct asn1_template asn1_IAKERB_HEADER_tag_target_realm_3[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_heim_utf8_string_tag_target_realm_4 }
};
/* template_members: IAKERB_HEADER exp exp */
extern const struct asn1_template asn1_IAKERB_HEADER_tag_cookie_5[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_cookie_6[];
/* generate_template_type: heim_octet_string_tag_cookie_6 */
const struct asn1_template asn1_heim_octet_string_tag_cookie_6[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: IAKERB_HEADER_tag_cookie_5 */
const struct asn1_template asn1_IAKERB_HEADER_tag_cookie_5[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_heim_octet_string_tag_cookie_6 }
};
/* generate_template_type: IAKERB_HEADER_tag__2 */
const struct asn1_template asn1_IAKERB_HEADER_tag__2[] = {
/* 0 */ { 0, sizeof(struct IAKERB_HEADER), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct IAKERB_HEADER, target_realm), asn1_IAKERB_HEADER_tag_target_realm_3 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct IAKERB_HEADER, cookie), asn1_IAKERB_HEADER_tag_cookie_5 }
};
/* generate_template_type: IAKERB_HEADER */
const struct asn1_template asn1_IAKERB_HEADER[] = {
/* 0 */ { 0, sizeof(IAKERB_HEADER), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_IAKERB_HEADER_tag__2 }
};

int
decode_IAKERB_HEADER(const unsigned char *p, size_t len, IAKERB_HEADER *data, size_t *size)
{
    return _asn1_decode_top(asn1_IAKERB_HEADER, 0|0, p, len, data, size);
}


int
encode_IAKERB_HEADER(unsigned char *p, size_t len, const IAKERB_HEADER *data, size_t *size)
{
    int ret = _asn1_encode(asn1_IAKERB_HEADER, p, len, data, size);
    return ret;
}


size_t
length_IAKERB_HEADER(const IAKERB_HEADER *data)
{
    return _asn1_length(asn1_IAKERB_HEADER, data);
}


void
free_IAKERB_HEADER(IAKERB_HEADER *data)
{
    _asn1_free_top(asn1_IAKERB_HEADER, data);
}


int
copy_IAKERB_HEADER(const IAKERB_HEADER *from, IAKERB_HEADER *to)
{
    return _asn1_copy_top(asn1_IAKERB_HEADER, from, to);
}

