/* Generated from /Users/ariel/git/darling/src/external/Heimdal/lib/asn1/krb5.asn1 */
/* Do not edit */

#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "krb5_asn1.h"
#include "krb5_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

extern const struct asn1_template asn1_NAME_TYPE[];
/* template_members: NAME_TYPE exp exp */
extern const struct asn1_template asn1_NAME_TYPE_tag__0[];
/* generate_template_type: NAME_TYPE_tag__0 */
const struct asn1_template asn1_NAME_TYPE_tag__0[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, NULL }
};
/* generate_template_type: NAME_TYPE */
const struct asn1_template asn1_NAME_TYPE[] = {
/* 0 */ { 0, sizeof(NAME_TYPE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int
decode_NAME_TYPE(const unsigned char *p, size_t len, NAME_TYPE *data, size_t *size)
{
    return _asn1_decode_top(asn1_NAME_TYPE, 0|0, p, len, data, size);
}


int
encode_NAME_TYPE(unsigned char *p, size_t len, const NAME_TYPE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NAME_TYPE, p, len, data, size);
    return ret;
}


size_t
length_NAME_TYPE(const NAME_TYPE *data)
{
    return _asn1_length(asn1_NAME_TYPE, data);
}


void
free_NAME_TYPE(NAME_TYPE *data)
{
    _asn1_free_top(asn1_NAME_TYPE, data);
}


int
copy_NAME_TYPE(const NAME_TYPE *from, NAME_TYPE *to)
{
    return _asn1_copy_top(asn1_NAME_TYPE, from, to);
}

extern const struct asn1_template asn1_MESSAGE_TYPE[];
/* template_members: MESSAGE_TYPE exp exp */
extern const struct asn1_template asn1_MESSAGE_TYPE_tag__1[];
/* generate_template_type: MESSAGE_TYPE_tag__1 */
/* generate_template_type: MESSAGE_TYPE */
const struct asn1_template asn1_MESSAGE_TYPE[] = {
/* 0 */ { 0, sizeof(MESSAGE_TYPE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int
decode_MESSAGE_TYPE(const unsigned char *p, size_t len, MESSAGE_TYPE *data, size_t *size)
{
    return _asn1_decode_top(asn1_MESSAGE_TYPE, 0|0, p, len, data, size);
}


int
encode_MESSAGE_TYPE(unsigned char *p, size_t len, const MESSAGE_TYPE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_MESSAGE_TYPE, p, len, data, size);
    return ret;
}


size_t
length_MESSAGE_TYPE(const MESSAGE_TYPE *data)
{
    return _asn1_length(asn1_MESSAGE_TYPE, data);
}


void
free_MESSAGE_TYPE(MESSAGE_TYPE *data)
{
    _asn1_free_top(asn1_MESSAGE_TYPE, data);
}


int
copy_MESSAGE_TYPE(const MESSAGE_TYPE *from, MESSAGE_TYPE *to)
{
    return _asn1_copy_top(asn1_MESSAGE_TYPE, from, to);
}

extern const struct asn1_template asn1_PADATA_TYPE[];
/* template_members: PADATA_TYPE exp exp */
extern const struct asn1_template asn1_PADATA_TYPE_tag__2[];
/* generate_template_type: PADATA_TYPE_tag__2 */
/* generate_template_type: PADATA_TYPE */
const struct asn1_template asn1_PADATA_TYPE[] = {
/* 0 */ { 0, sizeof(PADATA_TYPE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int
decode_PADATA_TYPE(const unsigned char *p, size_t len, PADATA_TYPE *data, size_t *size)
{
    return _asn1_decode_top(asn1_PADATA_TYPE, 0|0, p, len, data, size);
}


int
encode_PADATA_TYPE(unsigned char *p, size_t len, const PADATA_TYPE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PADATA_TYPE, p, len, data, size);
    return ret;
}


size_t
length_PADATA_TYPE(const PADATA_TYPE *data)
{
    return _asn1_length(asn1_PADATA_TYPE, data);
}


void
free_PADATA_TYPE(PADATA_TYPE *data)
{
    _asn1_free_top(asn1_PADATA_TYPE, data);
}


int
copy_PADATA_TYPE(const PADATA_TYPE *from, PADATA_TYPE *to)
{
    return _asn1_copy_top(asn1_PADATA_TYPE, from, to);
}

extern const struct asn1_template asn1_AUTHDATA_TYPE[];
/* template_members: AUTHDATA_TYPE exp exp */
extern const struct asn1_template asn1_AUTHDATA_TYPE_tag__3[];
/* generate_template_type: AUTHDATA_TYPE_tag__3 */
/* generate_template_type: AUTHDATA_TYPE */
const struct asn1_template asn1_AUTHDATA_TYPE[] = {
/* 0 */ { 0, sizeof(AUTHDATA_TYPE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int
decode_AUTHDATA_TYPE(const unsigned char *p, size_t len, AUTHDATA_TYPE *data, size_t *size)
{
    return _asn1_decode_top(asn1_AUTHDATA_TYPE, 0|0, p, len, data, size);
}


int
encode_AUTHDATA_TYPE(unsigned char *p, size_t len, const AUTHDATA_TYPE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AUTHDATA_TYPE, p, len, data, size);
    return ret;
}


size_t
length_AUTHDATA_TYPE(const AUTHDATA_TYPE *data)
{
    return _asn1_length(asn1_AUTHDATA_TYPE, data);
}


void
free_AUTHDATA_TYPE(AUTHDATA_TYPE *data)
{
    _asn1_free_top(asn1_AUTHDATA_TYPE, data);
}


int
copy_AUTHDATA_TYPE(const AUTHDATA_TYPE *from, AUTHDATA_TYPE *to)
{
    return _asn1_copy_top(asn1_AUTHDATA_TYPE, from, to);
}

extern const struct asn1_template asn1_CKSUMTYPE[];
/* template_members: CKSUMTYPE exp exp */
extern const struct asn1_template asn1_CKSUMTYPE_tag__4[];
/* generate_template_type: CKSUMTYPE_tag__4 */
/* generate_template_type: CKSUMTYPE */
const struct asn1_template asn1_CKSUMTYPE[] = {
/* 0 */ { 0, sizeof(CKSUMTYPE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int
decode_CKSUMTYPE(const unsigned char *p, size_t len, CKSUMTYPE *data, size_t *size)
{
    return _asn1_decode_top(asn1_CKSUMTYPE, 0|0, p, len, data, size);
}


int
encode_CKSUMTYPE(unsigned char *p, size_t len, const CKSUMTYPE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_CKSUMTYPE, p, len, data, size);
    return ret;
}


size_t
length_CKSUMTYPE(const CKSUMTYPE *data)
{
    return _asn1_length(asn1_CKSUMTYPE, data);
}


void
free_CKSUMTYPE(CKSUMTYPE *data)
{
    _asn1_free_top(asn1_CKSUMTYPE, data);
}


int
copy_CKSUMTYPE(const CKSUMTYPE *from, CKSUMTYPE *to)
{
    return _asn1_copy_top(asn1_CKSUMTYPE, from, to);
}

extern const struct asn1_template asn1_ENCTYPE[];
/* template_members: ENCTYPE exp exp */
extern const struct asn1_template asn1_ENCTYPE_tag__5[];
/* generate_template_type: ENCTYPE_tag__5 */
/* generate_template_type: ENCTYPE */
const struct asn1_template asn1_ENCTYPE[] = {
/* 0 */ { 0, sizeof(ENCTYPE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int
decode_ENCTYPE(const unsigned char *p, size_t len, ENCTYPE *data, size_t *size)
{
    return _asn1_decode_top(asn1_ENCTYPE, 0|0, p, len, data, size);
}


int
encode_ENCTYPE(unsigned char *p, size_t len, const ENCTYPE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ENCTYPE, p, len, data, size);
    return ret;
}


size_t
length_ENCTYPE(const ENCTYPE *data)
{
    return _asn1_length(asn1_ENCTYPE, data);
}


void
free_ENCTYPE(ENCTYPE *data)
{
    _asn1_free_top(asn1_ENCTYPE, data);
}


int
copy_ENCTYPE(const ENCTYPE *from, ENCTYPE *to)
{
    return _asn1_copy_top(asn1_ENCTYPE, from, to);
}

extern const struct asn1_template asn1_KRB5_SRP_GROUP[];
/* template_members: KRB5_SRP_GROUP exp exp */
extern const struct asn1_template asn1_KRB5_SRP_GROUP_tag__6[];
/* generate_template_type: KRB5_SRP_GROUP_tag__6 */
/* generate_template_type: KRB5_SRP_GROUP */
const struct asn1_template asn1_KRB5_SRP_GROUP[] = {
/* 0 */ { 0, sizeof(KRB5_SRP_GROUP), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int
decode_KRB5_SRP_GROUP(const unsigned char *p, size_t len, KRB5_SRP_GROUP *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_SRP_GROUP, 0|0, p, len, data, size);
}


int
encode_KRB5_SRP_GROUP(unsigned char *p, size_t len, const KRB5_SRP_GROUP *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_SRP_GROUP, p, len, data, size);
    return ret;
}


size_t
length_KRB5_SRP_GROUP(const KRB5_SRP_GROUP *data)
{
    return _asn1_length(asn1_KRB5_SRP_GROUP, data);
}


void
free_KRB5_SRP_GROUP(KRB5_SRP_GROUP *data)
{
    _asn1_free_top(asn1_KRB5_SRP_GROUP, data);
}


int
copy_KRB5_SRP_GROUP(const KRB5_SRP_GROUP *from, KRB5_SRP_GROUP *to)
{
    return _asn1_copy_top(asn1_KRB5_SRP_GROUP, from, to);
}

extern const struct asn1_template asn1_krb5uint32[];
/* template_members: krb5uint32 exp exp */
extern const struct asn1_template asn1_krb5uint32_tag__7[];
/* generate_template_type: krb5uint32_tag__7 */
const struct asn1_template asn1_krb5uint32_tag__7[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* generate_template_type: krb5uint32 */
const struct asn1_template asn1_krb5uint32[] = {
/* 0 */ { 0, sizeof(krb5uint32), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_krb5uint32_tag__7 }
};

int
decode_krb5uint32(const unsigned char *p, size_t len, krb5uint32 *data, size_t *size)
{
    return _asn1_decode_top(asn1_krb5uint32, 0|0, p, len, data, size);
}


int
encode_krb5uint32(unsigned char *p, size_t len, const krb5uint32 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_krb5uint32, p, len, data, size);
    return ret;
}


size_t
length_krb5uint32(const krb5uint32 *data)
{
    return _asn1_length(asn1_krb5uint32, data);
}


void
free_krb5uint32(krb5uint32 *data)
{
    _asn1_free_top(asn1_krb5uint32, data);
}


int
copy_krb5uint32(const krb5uint32 *from, krb5uint32 *to)
{
    return _asn1_copy_top(asn1_krb5uint32, from, to);
}

extern const struct asn1_template asn1_krb5int32[];
/* template_members: krb5int32 exp exp */
extern const struct asn1_template asn1_krb5int32_tag__8[];
/* generate_template_type: krb5int32_tag__8 */
const struct asn1_template asn1_krb5int32_tag__8[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_INTEGER), 0, NULL }
};
/* generate_template_type: krb5int32 */
const struct asn1_template asn1_krb5int32[] = {
/* 0 */ { 0, sizeof(krb5int32), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_krb5int32_tag__8 }
};

int
decode_krb5int32(const unsigned char *p, size_t len, krb5int32 *data, size_t *size)
{
    return _asn1_decode_top(asn1_krb5int32, 0|0, p, len, data, size);
}


int
encode_krb5int32(unsigned char *p, size_t len, const krb5int32 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_krb5int32, p, len, data, size);
    return ret;
}


size_t
length_krb5int32(const krb5int32 *data)
{
    return _asn1_length(asn1_krb5int32, data);
}


void
free_krb5int32(krb5int32 *data)
{
    _asn1_free_top(asn1_krb5int32, data);
}


int
copy_krb5int32(const krb5int32 *from, krb5int32 *to)
{
    return _asn1_copy_top(asn1_krb5int32, from, to);
}

extern const struct asn1_template asn1_KerberosString[];
/* template_members: KerberosString exp exp */
extern const struct asn1_template asn1_KerberosString_tag__9[];
/* generate_template_type: KerberosString_tag__9 */
const struct asn1_template asn1_KerberosString_tag__9[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_GENERAL_STRING), 0, NULL }
};
/* generate_template_type: KerberosString */
const struct asn1_template asn1_KerberosString[] = {
/* 0 */ { 0, sizeof(KerberosString), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralString), 0, asn1_KerberosString_tag__9 }
};

int
decode_KerberosString(const unsigned char *p, size_t len, KerberosString *data, size_t *size)
{
    return _asn1_decode_top(asn1_KerberosString, 0|0, p, len, data, size);
}


int
encode_KerberosString(unsigned char *p, size_t len, const KerberosString *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KerberosString, p, len, data, size);
    return ret;
}


size_t
length_KerberosString(const KerberosString *data)
{
    return _asn1_length(asn1_KerberosString, data);
}


void
free_KerberosString(KerberosString *data)
{
    _asn1_free_top(asn1_KerberosString, data);
}


int
copy_KerberosString(const KerberosString *from, KerberosString *to)
{
    return _asn1_copy_top(asn1_KerberosString, from, to);
}

extern const struct asn1_template asn1_Realm[];
/* template_members: Realm exp exp */
extern const struct asn1_template asn1_Realm_tag__10[];
/* generate_template_type: Realm_tag__10 */
/* generate_template_type: Realm */
const struct asn1_template asn1_Realm[] = {
/* 0 */ { 0, sizeof(Realm), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralString), 0, asn1_KerberosString_tag__9 }
};

int
decode_Realm(const unsigned char *p, size_t len, Realm *data, size_t *size)
{
    return _asn1_decode_top(asn1_Realm, 0|0, p, len, data, size);
}


int
encode_Realm(unsigned char *p, size_t len, const Realm *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Realm, p, len, data, size);
    return ret;
}


size_t
length_Realm(const Realm *data)
{
    return _asn1_length(asn1_Realm, data);
}


void
free_Realm(Realm *data)
{
    _asn1_free_top(asn1_Realm, data);
}


int
copy_Realm(const Realm *from, Realm *to)
{
    return _asn1_copy_top(asn1_Realm, from, to);
}

extern const struct asn1_template asn1_PrincipalName[];
/* template_members: PrincipalName exp exp */
extern const struct asn1_template asn1_PrincipalName_tag__11[];
/* tsequence: members isstruct: 1 */
/* template_members: PrincipalName exp exp */
extern const struct asn1_template asn1_PrincipalName_tag_name_type_12[];
/* generate_template_type: PrincipalName_tag_name_type_12 */
const struct asn1_template asn1_PrincipalName_tag_name_type_12[] = {
/* 0 */ { 0, sizeof(NAME_TYPE), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_NAME_TYPE }
};
/* template_members: PrincipalName exp exp */
extern const struct asn1_template asn1_PrincipalName_tag_name_string_13[];
/* template_members: PrincipalName exp exp */
extern const struct asn1_template asn1_PrincipalName_tag_name_string_14[];
extern const struct asn1_template asn1_PrincipalName_name_string_0[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag__15[];
/* generate_template_type: heim_general_string_tag__15 */
/* generate_template_type: PrincipalName_name_string_0 */
const struct asn1_template asn1_PrincipalName_name_string_0[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralString), 0, asn1_KerberosString_tag__9 }
};
/* generate_template_type: PrincipalName_tag_name_string_14 */
const struct asn1_template asn1_PrincipalName_tag_name_string_14[] = {
/* 0 */ { 0, sizeof(struct PrincipalName), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PrincipalName_name_string_0 }
};
/* generate_template_type: PrincipalName_tag_name_string_13 */
const struct asn1_template asn1_PrincipalName_tag_name_string_13[] = {
/* 0 */ { 0, sizeof(struct PrincipalName), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PrincipalName_tag_name_string_14 }
};
/* generate_template_type: PrincipalName_tag__11 */
const struct asn1_template asn1_PrincipalName_tag__11[] = {
/* 0 */ { 0, sizeof(struct PrincipalName), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PrincipalName, name_type), asn1_PrincipalName_tag_name_type_12 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PrincipalName, name_string), asn1_PrincipalName_tag_name_string_13 }
};
/* generate_template_type: PrincipalName */
const struct asn1_template asn1_PrincipalName[] = {
/* 0 */ { 0, sizeof(PrincipalName), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PrincipalName_tag__11 }
};

int
decode_PrincipalName(const unsigned char *p, size_t len, PrincipalName *data, size_t *size)
{
    return _asn1_decode_top(asn1_PrincipalName, 0|0, p, len, data, size);
}


int
encode_PrincipalName(unsigned char *p, size_t len, const PrincipalName *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PrincipalName, p, len, data, size);
    return ret;
}


size_t
length_PrincipalName(const PrincipalName *data)
{
    return _asn1_length(asn1_PrincipalName, data);
}


void
free_PrincipalName(PrincipalName *data)
{
    _asn1_free_top(asn1_PrincipalName, data);
}


int
copy_PrincipalName(const PrincipalName *from, PrincipalName *to)
{
    return _asn1_copy_top(asn1_PrincipalName, from, to);
}

extern const struct asn1_template asn1_Principal[];
/* template_members: Principal exp exp */
extern const struct asn1_template asn1_Principal_tag__16[];
/* tsequence: members isstruct: 1 */
/* template_members: Principal exp exp */
extern const struct asn1_template asn1_Principal_tag_name_17[];
/* generate_template_type: Principal_tag_name_17 */
const struct asn1_template asn1_Principal_tag_name_17[] = {
/* 0 */ { 0, sizeof(PrincipalName), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PrincipalName }
};
/* template_members: Principal exp exp */
extern const struct asn1_template asn1_Principal_tag_realm_18[];
/* generate_template_type: Principal_tag_realm_18 */
const struct asn1_template asn1_Principal_tag_realm_18[] = {
/* 0 */ { 0, sizeof(Realm), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Realm }
};
/* generate_template_type: Principal_tag__16 */
const struct asn1_template asn1_Principal_tag__16[] = {
/* 0 */ { 0, sizeof(struct Principal), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct Principal, name), asn1_Principal_tag_name_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct Principal, realm), asn1_Principal_tag_realm_18 }
};
/* generate_template_type: Principal */
const struct asn1_template asn1_Principal[] = {
/* 0 */ { 0, sizeof(Principal), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Principal_tag__16 }
};

int
decode_Principal(const unsigned char *p, size_t len, Principal *data, size_t *size)
{
    return _asn1_decode_top(asn1_Principal, 0|0, p, len, data, size);
}


int
encode_Principal(unsigned char *p, size_t len, const Principal *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Principal, p, len, data, size);
    return ret;
}


size_t
length_Principal(const Principal *data)
{
    return _asn1_length(asn1_Principal, data);
}


void
free_Principal(Principal *data)
{
    _asn1_free_top(asn1_Principal, data);
}


int
copy_Principal(const Principal *from, Principal *to)
{
    return _asn1_copy_top(asn1_Principal, from, to);
}

extern const struct asn1_template asn1_Principals[];
/* template_members: Principals exp exp */
extern const struct asn1_template asn1_Principals_tag__19[];
extern const struct asn1_template asn1_Principal_seofTstruct_1[];
/* generate_template_type: Principal_seofTstruct_1 */
const struct asn1_template asn1_Principal_seofTstruct_1[] = {
/* 0 */ { 0, sizeof(Principal), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Principal }
};
/* generate_template_type: Principals_tag__19 */
const struct asn1_template asn1_Principals_tag__19[] = {
/* 0 */ { 0, sizeof(Principal), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_Principal_seofTstruct_1 }
};
/* generate_template_type: Principals */
const struct asn1_template asn1_Principals[] = {
/* 0 */ { 0, sizeof(Principals), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Principals_tag__19 }
};

int
decode_Principals(const unsigned char *p, size_t len, Principals *data, size_t *size)
{
    return _asn1_decode_top(asn1_Principals, 0|0, p, len, data, size);
}


int
encode_Principals(unsigned char *p, size_t len, const Principals *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Principals, p, len, data, size);
    return ret;
}


size_t
length_Principals(const Principals *data)
{
    return _asn1_length(asn1_Principals, data);
}


void
free_Principals(Principals *data)
{
    _asn1_free_top(asn1_Principals, data);
}


int
copy_Principals(const Principals *from, Principals *to)
{
    return _asn1_copy_top(asn1_Principals, from, to);
}

int ASN1CALL
add_Principals(Principals *data, const Principal *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_Principal(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_Principals(Principals *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_Principal(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

extern const struct asn1_template asn1_HostAddress[];
/* template_members: HostAddress exp exp */
extern const struct asn1_template asn1_HostAddress_tag__20[];
/* tsequence: members isstruct: 1 */
/* template_members: HostAddress exp exp */
extern const struct asn1_template asn1_HostAddress_tag_addr_type_21[];
/* generate_template_type: HostAddress_tag_addr_type_21 */
const struct asn1_template asn1_HostAddress_tag_addr_type_21[] = {
/* 0 */ { 0, sizeof(krb5int32), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_krb5int32 }
};
/* template_members: HostAddress exp exp */
extern const struct asn1_template asn1_HostAddress_tag_address_22[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_address_23[];
/* generate_template_type: heim_octet_string_tag_address_23 */
const struct asn1_template asn1_heim_octet_string_tag_address_23[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: HostAddress_tag_address_22 */
const struct asn1_template asn1_HostAddress_tag_address_22[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_heim_octet_string_tag_address_23 }
};
/* generate_template_type: HostAddress_tag__20 */
const struct asn1_template asn1_HostAddress_tag__20[] = {
/* 0 */ { 0, sizeof(struct HostAddress), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct HostAddress, addr_type), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct HostAddress, address), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: HostAddress */
const struct asn1_template asn1_HostAddress[] = {
/* 0 */ { 0, sizeof(HostAddress), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_HostAddress_tag__20 }
};

int
decode_HostAddress(const unsigned char *p, size_t len, HostAddress *data, size_t *size)
{
    return _asn1_decode_top(asn1_HostAddress, 0|0, p, len, data, size);
}


int
encode_HostAddress(unsigned char *p, size_t len, const HostAddress *data, size_t *size)
{
    int ret = _asn1_encode(asn1_HostAddress, p, len, data, size);
    return ret;
}


size_t
length_HostAddress(const HostAddress *data)
{
    return _asn1_length(asn1_HostAddress, data);
}


void
free_HostAddress(HostAddress *data)
{
    _asn1_free_top(asn1_HostAddress, data);
}


int
copy_HostAddress(const HostAddress *from, HostAddress *to)
{
    return _asn1_copy_top(asn1_HostAddress, from, to);
}

extern const struct asn1_template asn1_HostAddresses[];
/* template_members: HostAddresses exp exp */
extern const struct asn1_template asn1_HostAddresses_tag__24[];
extern const struct asn1_template asn1_HostAddress_seofTstruct_2[];
/* generate_template_type: HostAddress_seofTstruct_2 */
const struct asn1_template asn1_HostAddress_seofTstruct_2[] = {
/* 0 */ { 0, sizeof(HostAddress), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_HostAddress }
};
/* generate_template_type: HostAddresses_tag__24 */
const struct asn1_template asn1_HostAddresses_tag__24[] = {
/* 0 */ { 0, sizeof(HostAddress), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_HostAddress_seofTstruct_2 }
};
/* generate_template_type: HostAddresses */
const struct asn1_template asn1_HostAddresses[] = {
/* 0 */ { 0, sizeof(HostAddresses), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_HostAddresses_tag__24 }
};

int
decode_HostAddresses(const unsigned char *p, size_t len, HostAddresses *data, size_t *size)
{
    return _asn1_decode_top(asn1_HostAddresses, 0|0, p, len, data, size);
}


int
encode_HostAddresses(unsigned char *p, size_t len, const HostAddresses *data, size_t *size)
{
    int ret = _asn1_encode(asn1_HostAddresses, p, len, data, size);
    return ret;
}


size_t
length_HostAddresses(const HostAddresses *data)
{
    return _asn1_length(asn1_HostAddresses, data);
}


void
free_HostAddresses(HostAddresses *data)
{
    _asn1_free_top(asn1_HostAddresses, data);
}


int
copy_HostAddresses(const HostAddresses *from, HostAddresses *to)
{
    return _asn1_copy_top(asn1_HostAddresses, from, to);
}

extern const struct asn1_template asn1_KerberosTime[];
/* template_members: KerberosTime exp exp */
extern const struct asn1_template asn1_KerberosTime_tag__25[];
/* generate_template_type: KerberosTime_tag__25 */
const struct asn1_template asn1_KerberosTime_tag__25[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_GENERALIZED_TIME), 0, NULL }
};
/* generate_template_type: KerberosTime */
const struct asn1_template asn1_KerberosTime[] = {
/* 0 */ { 0, sizeof(KerberosTime), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), 0, asn1_KerberosTime_tag__25 }
};

int
decode_KerberosTime(const unsigned char *p, size_t len, KerberosTime *data, size_t *size)
{
    return _asn1_decode_top(asn1_KerberosTime, 0|0, p, len, data, size);
}


int
encode_KerberosTime(unsigned char *p, size_t len, const KerberosTime *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KerberosTime, p, len, data, size);
    return ret;
}


size_t
length_KerberosTime(const KerberosTime *data)
{
    return _asn1_length(asn1_KerberosTime, data);
}


void
free_KerberosTime(KerberosTime *data)
{
    _asn1_free_top(asn1_KerberosTime, data);
}


int
copy_KerberosTime(const KerberosTime *from, KerberosTime *to)
{
    return _asn1_copy_top(asn1_KerberosTime, from, to);
}

extern const struct asn1_template asn1_AuthorizationDataElement[];
/* template_members: AuthorizationDataElement exp exp */
extern const struct asn1_template asn1_AuthorizationDataElement_tag__26[];
/* tsequence: members isstruct: 1 */
/* template_members: AuthorizationDataElement exp exp */
extern const struct asn1_template asn1_AuthorizationDataElement_tag_ad_type_27[];
/* generate_template_type: AuthorizationDataElement_tag_ad_type_27 */
/* template_members: AuthorizationDataElement exp exp */
extern const struct asn1_template asn1_AuthorizationDataElement_tag_ad_data_28[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_ad_data_29[];
/* generate_template_type: heim_octet_string_tag_ad_data_29 */
/* generate_template_type: AuthorizationDataElement_tag_ad_data_28 */
/* generate_template_type: AuthorizationDataElement_tag__26 */
const struct asn1_template asn1_AuthorizationDataElement_tag__26[] = {
/* 0 */ { 0, sizeof(struct AuthorizationDataElement), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AuthorizationDataElement, ad_type), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct AuthorizationDataElement, ad_data), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: AuthorizationDataElement */
const struct asn1_template asn1_AuthorizationDataElement[] = {
/* 0 */ { 0, sizeof(AuthorizationDataElement), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthorizationDataElement_tag__26 }
};

int
decode_AuthorizationDataElement(const unsigned char *p, size_t len, AuthorizationDataElement *data, size_t *size)
{
    return _asn1_decode_top(asn1_AuthorizationDataElement, 0|0, p, len, data, size);
}


int
encode_AuthorizationDataElement(unsigned char *p, size_t len, const AuthorizationDataElement *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AuthorizationDataElement, p, len, data, size);
    return ret;
}


size_t
length_AuthorizationDataElement(const AuthorizationDataElement *data)
{
    return _asn1_length(asn1_AuthorizationDataElement, data);
}


void
free_AuthorizationDataElement(AuthorizationDataElement *data)
{
    _asn1_free_top(asn1_AuthorizationDataElement, data);
}


int
copy_AuthorizationDataElement(const AuthorizationDataElement *from, AuthorizationDataElement *to)
{
    return _asn1_copy_top(asn1_AuthorizationDataElement, from, to);
}

extern const struct asn1_template asn1_AuthorizationData[];
/* template_members: AuthorizationData exp exp */
extern const struct asn1_template asn1_AuthorizationData_tag__30[];
extern const struct asn1_template asn1_AuthorizationDataElement_seofTstruct_3[];
/* generate_template_type: AuthorizationDataElement_seofTstruct_3 */
const struct asn1_template asn1_AuthorizationDataElement_seofTstruct_3[] = {
/* 0 */ { 0, sizeof(AuthorizationDataElement), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AuthorizationDataElement }
};
/* generate_template_type: AuthorizationData_tag__30 */
const struct asn1_template asn1_AuthorizationData_tag__30[] = {
/* 0 */ { 0, sizeof(AuthorizationDataElement), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_AuthorizationDataElement_seofTstruct_3 }
};
/* generate_template_type: AuthorizationData */
const struct asn1_template asn1_AuthorizationData[] = {
/* 0 */ { 0, sizeof(AuthorizationData), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthorizationData_tag__30 }
};

int
decode_AuthorizationData(const unsigned char *p, size_t len, AuthorizationData *data, size_t *size)
{
    return _asn1_decode_top(asn1_AuthorizationData, 0|0, p, len, data, size);
}


int
encode_AuthorizationData(unsigned char *p, size_t len, const AuthorizationData *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AuthorizationData, p, len, data, size);
    return ret;
}


size_t
length_AuthorizationData(const AuthorizationData *data)
{
    return _asn1_length(asn1_AuthorizationData, data);
}


void
free_AuthorizationData(AuthorizationData *data)
{
    _asn1_free_top(asn1_AuthorizationData, data);
}


int
copy_AuthorizationData(const AuthorizationData *from, AuthorizationData *to)
{
    return _asn1_copy_top(asn1_AuthorizationData, from, to);
}

int ASN1CALL
add_AuthorizationData(AuthorizationData *data, const AuthorizationDataElement *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_AuthorizationDataElement(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_AuthorizationData(AuthorizationData *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_AuthorizationDataElement(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

extern const struct asn1_template asn1_APOptions[];
/* template_members: APOptions exp exp */
extern const struct asn1_template asn1_APOptions_tag__31[];
static const struct asn1_template asn1_APOptions_bmember__0[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(APOptions), ((void *)3) },
/* 1 */ { 0, 0, 0 } /* reserved */,
/* 2 */ { 0, 1, 0 } /* use_session_key */,
/* 3 */ { 0, 2, 0 } /* mutual_required */
};
/* generate_template_type: APOptions_tag__31 */
const struct asn1_template asn1_APOptions_tag__31[] = {
/* 0 */ { 0, sizeof(APOptions), ((void *)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_APOptions_bmember__0 }
};
/* generate_template_type: APOptions */
const struct asn1_template asn1_APOptions[] = {
/* 0 */ { 0, sizeof(APOptions), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_APOptions_tag__31 }
};

int
decode_APOptions(const unsigned char *p, size_t len, APOptions *data, size_t *size)
{
    return _asn1_decode_top(asn1_APOptions, 0|0, p, len, data, size);
}


int
encode_APOptions(unsigned char *p, size_t len, const APOptions *data, size_t *size)
{
    int ret = _asn1_encode(asn1_APOptions, p, len, data, size);
    return ret;
}


size_t
length_APOptions(const APOptions *data)
{
    return _asn1_length(asn1_APOptions, data);
}


void
free_APOptions(APOptions *data)
{
    _asn1_free_top(asn1_APOptions, data);
}


int
copy_APOptions(const APOptions *from, APOptions *to)
{
    return _asn1_copy_top(asn1_APOptions, from, to);
}

unsigned APOptions2int(APOptions f)
{
unsigned r = 0;
if(f.reserved) r |= (1U << 0);
if(f.use_session_key) r |= (1U << 1);
if(f.mutual_required) r |= (1U << 2);
return r;
}

APOptions int2APOptions(unsigned n)
{
	APOptions flags;

	memset(&flags, 0, sizeof(flags));

	flags.reserved = (n >> 0) & 1;
	flags.use_session_key = (n >> 1) & 1;
	flags.mutual_required = (n >> 2) & 1;
	return flags;
}

static struct units APOptions_units[] = {
	{"mutual-required",	1U << 2},
	{"use-session-key",	1U << 1},
	{"reserved",	1U << 0},
	{NULL,	0}
};

const struct units * asn1_APOptions_table_units = APOptions_units;
extern const struct asn1_template asn1_TicketFlags[];
/* template_members: TicketFlags exp exp */
extern const struct asn1_template asn1_TicketFlags_tag__32[];
static const struct asn1_template asn1_TicketFlags_bmember__1[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(TicketFlags), ((void *)16) },
/* 1 */ { 0, 0, 0 } /* reserved */,
/* 2 */ { 0, 1, 0 } /* forwardable */,
/* 3 */ { 0, 2, 0 } /* forwarded */,
/* 4 */ { 0, 3, 0 } /* proxiable */,
/* 5 */ { 0, 4, 0 } /* proxy */,
/* 6 */ { 0, 5, 0 } /* may_postdate */,
/* 7 */ { 0, 6, 0 } /* postdated */,
/* 8 */ { 0, 7, 0 } /* invalid */,
/* 9 */ { 0, 8, 0 } /* renewable */,
/* 10 */ { 0, 9, 0 } /* initial */,
/* 11 */ { 0, 10, 0 } /* pre_authent */,
/* 12 */ { 0, 11, 0 } /* hw_authent */,
/* 13 */ { 0, 12, 0 } /* transited_policy_checked */,
/* 14 */ { 0, 13, 0 } /* ok_as_delegate */,
/* 15 */ { 0, 14, 0 } /* anonymous */,
/* 16 */ { 0, 15, 0 } /* enc_pa_rep */
};
/* generate_template_type: TicketFlags_tag__32 */
const struct asn1_template asn1_TicketFlags_tag__32[] = {
/* 0 */ { 0, sizeof(TicketFlags), ((void *)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_TicketFlags_bmember__1 }
};
/* generate_template_type: TicketFlags */
const struct asn1_template asn1_TicketFlags[] = {
/* 0 */ { 0, sizeof(TicketFlags), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_TicketFlags_tag__32 }
};

int
decode_TicketFlags(const unsigned char *p, size_t len, TicketFlags *data, size_t *size)
{
    return _asn1_decode_top(asn1_TicketFlags, 0|0, p, len, data, size);
}


int
encode_TicketFlags(unsigned char *p, size_t len, const TicketFlags *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TicketFlags, p, len, data, size);
    return ret;
}


size_t
length_TicketFlags(const TicketFlags *data)
{
    return _asn1_length(asn1_TicketFlags, data);
}


void
free_TicketFlags(TicketFlags *data)
{
    _asn1_free_top(asn1_TicketFlags, data);
}


int
copy_TicketFlags(const TicketFlags *from, TicketFlags *to)
{
    return _asn1_copy_top(asn1_TicketFlags, from, to);
}

unsigned TicketFlags2int(TicketFlags f)
{
unsigned r = 0;
if(f.reserved) r |= (1U << 0);
if(f.forwardable) r |= (1U << 1);
if(f.forwarded) r |= (1U << 2);
if(f.proxiable) r |= (1U << 3);
if(f.proxy) r |= (1U << 4);
if(f.may_postdate) r |= (1U << 5);
if(f.postdated) r |= (1U << 6);
if(f.invalid) r |= (1U << 7);
if(f.renewable) r |= (1U << 8);
if(f.initial) r |= (1U << 9);
if(f.pre_authent) r |= (1U << 10);
if(f.hw_authent) r |= (1U << 11);
if(f.transited_policy_checked) r |= (1U << 12);
if(f.ok_as_delegate) r |= (1U << 13);
if(f.anonymous) r |= (1U << 14);
if(f.enc_pa_rep) r |= (1U << 15);
return r;
}

TicketFlags int2TicketFlags(unsigned n)
{
	TicketFlags flags;

	memset(&flags, 0, sizeof(flags));

	flags.reserved = (n >> 0) & 1;
	flags.forwardable = (n >> 1) & 1;
	flags.forwarded = (n >> 2) & 1;
	flags.proxiable = (n >> 3) & 1;
	flags.proxy = (n >> 4) & 1;
	flags.may_postdate = (n >> 5) & 1;
	flags.postdated = (n >> 6) & 1;
	flags.invalid = (n >> 7) & 1;
	flags.renewable = (n >> 8) & 1;
	flags.initial = (n >> 9) & 1;
	flags.pre_authent = (n >> 10) & 1;
	flags.hw_authent = (n >> 11) & 1;
	flags.transited_policy_checked = (n >> 12) & 1;
	flags.ok_as_delegate = (n >> 13) & 1;
	flags.anonymous = (n >> 14) & 1;
	flags.enc_pa_rep = (n >> 15) & 1;
	return flags;
}

static struct units TicketFlags_units[] = {
	{"enc-pa-rep",	1U << 15},
	{"anonymous",	1U << 14},
	{"ok-as-delegate",	1U << 13},
	{"transited-policy-checked",	1U << 12},
	{"hw-authent",	1U << 11},
	{"pre-authent",	1U << 10},
	{"initial",	1U << 9},
	{"renewable",	1U << 8},
	{"invalid",	1U << 7},
	{"postdated",	1U << 6},
	{"may-postdate",	1U << 5},
	{"proxy",	1U << 4},
	{"proxiable",	1U << 3},
	{"forwarded",	1U << 2},
	{"forwardable",	1U << 1},
	{"reserved",	1U << 0},
	{NULL,	0}
};

const struct units * asn1_TicketFlags_table_units = TicketFlags_units;
extern const struct asn1_template asn1_KDCOptions[];
/* template_members: KDCOptions exp exp */
extern const struct asn1_template asn1_KDCOptions_tag__33[];
static const struct asn1_template asn1_KDCOptions_bmember__2[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(KDCOptions), ((void *)15) },
/* 1 */ { 0, 0, 0 } /* reserved */,
/* 2 */ { 0, 1, 0 } /* forwardable */,
/* 3 */ { 0, 2, 0 } /* forwarded */,
/* 4 */ { 0, 3, 0 } /* proxiable */,
/* 5 */ { 0, 4, 0 } /* proxy */,
/* 6 */ { 0, 5, 0 } /* allow_postdate */,
/* 7 */ { 0, 6, 0 } /* postdated */,
/* 8 */ { 0, 8, 0 } /* renewable */,
/* 9 */ { 0, 15, 0 } /* canonicalize */,
/* 10 */ { 0, 16, 0 } /* request_anonymous */,
/* 11 */ { 0, 26, 0 } /* disable_transited_check */,
/* 12 */ { 0, 27, 0 } /* renewable_ok */,
/* 13 */ { 0, 28, 0 } /* enc_tkt_in_skey */,
/* 14 */ { 0, 30, 0 } /* renew */,
/* 15 */ { 0, 31, 0 } /* validate */
};
/* generate_template_type: KDCOptions_tag__33 */
const struct asn1_template asn1_KDCOptions_tag__33[] = {
/* 0 */ { 0, sizeof(KDCOptions), ((void *)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_KDCOptions_bmember__2 }
};
/* generate_template_type: KDCOptions */
const struct asn1_template asn1_KDCOptions[] = {
/* 0 */ { 0, sizeof(KDCOptions), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_KDCOptions_tag__33 }
};

int
decode_KDCOptions(const unsigned char *p, size_t len, KDCOptions *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDCOptions, 0|0, p, len, data, size);
}


int
encode_KDCOptions(unsigned char *p, size_t len, const KDCOptions *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDCOptions, p, len, data, size);
    return ret;
}


size_t
length_KDCOptions(const KDCOptions *data)
{
    return _asn1_length(asn1_KDCOptions, data);
}


void
free_KDCOptions(KDCOptions *data)
{
    _asn1_free_top(asn1_KDCOptions, data);
}


int
copy_KDCOptions(const KDCOptions *from, KDCOptions *to)
{
    return _asn1_copy_top(asn1_KDCOptions, from, to);
}

unsigned KDCOptions2int(KDCOptions f)
{
unsigned r = 0;
if(f.reserved) r |= (1U << 0);
if(f.forwardable) r |= (1U << 1);
if(f.forwarded) r |= (1U << 2);
if(f.proxiable) r |= (1U << 3);
if(f.proxy) r |= (1U << 4);
if(f.allow_postdate) r |= (1U << 5);
if(f.postdated) r |= (1U << 6);
if(f.renewable) r |= (1U << 8);
if(f.canonicalize) r |= (1U << 15);
if(f.request_anonymous) r |= (1U << 16);
if(f.disable_transited_check) r |= (1U << 26);
if(f.renewable_ok) r |= (1U << 27);
if(f.enc_tkt_in_skey) r |= (1U << 28);
if(f.renew) r |= (1U << 30);
if(f.validate) r |= (1U << 31);
return r;
}

KDCOptions int2KDCOptions(unsigned n)
{
	KDCOptions flags;

	memset(&flags, 0, sizeof(flags));

	flags.reserved = (n >> 0) & 1;
	flags.forwardable = (n >> 1) & 1;
	flags.forwarded = (n >> 2) & 1;
	flags.proxiable = (n >> 3) & 1;
	flags.proxy = (n >> 4) & 1;
	flags.allow_postdate = (n >> 5) & 1;
	flags.postdated = (n >> 6) & 1;
	flags.renewable = (n >> 8) & 1;
	flags.canonicalize = (n >> 15) & 1;
	flags.request_anonymous = (n >> 16) & 1;
	flags.disable_transited_check = (n >> 26) & 1;
	flags.renewable_ok = (n >> 27) & 1;
	flags.enc_tkt_in_skey = (n >> 28) & 1;
	flags.renew = (n >> 30) & 1;
	flags.validate = (n >> 31) & 1;
	return flags;
}

static struct units KDCOptions_units[] = {
	{"validate",	1U << 31},
	{"renew",	1U << 30},
	{"enc-tkt-in-skey",	1U << 28},
	{"renewable-ok",	1U << 27},
	{"disable-transited-check",	1U << 26},
	{"request-anonymous",	1U << 16},
	{"canonicalize",	1U << 15},
	{"renewable",	1U << 8},
	{"postdated",	1U << 6},
	{"allow-postdate",	1U << 5},
	{"proxy",	1U << 4},
	{"proxiable",	1U << 3},
	{"forwarded",	1U << 2},
	{"forwardable",	1U << 1},
	{"reserved",	1U << 0},
	{NULL,	0}
};

const struct units * asn1_KDCOptions_table_units = KDCOptions_units;
extern const struct asn1_template asn1_LR_TYPE[];
/* template_members: LR_TYPE exp exp */
extern const struct asn1_template asn1_LR_TYPE_tag__34[];
/* generate_template_type: LR_TYPE_tag__34 */
/* generate_template_type: LR_TYPE */
const struct asn1_template asn1_LR_TYPE[] = {
/* 0 */ { 0, sizeof(LR_TYPE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int
decode_LR_TYPE(const unsigned char *p, size_t len, LR_TYPE *data, size_t *size)
{
    return _asn1_decode_top(asn1_LR_TYPE, 0|0, p, len, data, size);
}


int
encode_LR_TYPE(unsigned char *p, size_t len, const LR_TYPE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_LR_TYPE, p, len, data, size);
    return ret;
}


size_t
length_LR_TYPE(const LR_TYPE *data)
{
    return _asn1_length(asn1_LR_TYPE, data);
}


void
free_LR_TYPE(LR_TYPE *data)
{
    _asn1_free_top(asn1_LR_TYPE, data);
}


int
copy_LR_TYPE(const LR_TYPE *from, LR_TYPE *to)
{
    return _asn1_copy_top(asn1_LR_TYPE, from, to);
}

extern const struct asn1_template asn1_LastReq[];
/* template_members: LastReq exp exp */
extern const struct asn1_template asn1_LastReq_tag__35[];
extern const struct asn1_template asn1_LastReq_seofTstruct_4[];
/* template_members: LastReq_val exp exp */
extern const struct asn1_template asn1_LastReq_val_tag__36[];
/* tsequence: members isstruct: 1 */
/* template_members: LastReq_val exp exp */
extern const struct asn1_template asn1_LastReq_val_tag_lr_type_37[];
/* generate_template_type: LastReq_val_tag_lr_type_37 */
const struct asn1_template asn1_LastReq_val_tag_lr_type_37[] = {
/* 0 */ { 0, sizeof(LR_TYPE), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_LR_TYPE }
};
/* template_members: LastReq_val exp exp */
extern const struct asn1_template asn1_LastReq_val_tag_lr_value_38[];
/* generate_template_type: LastReq_val_tag_lr_value_38 */
const struct asn1_template asn1_LastReq_val_tag_lr_value_38[] = {
/* 0 */ { 0, sizeof(KerberosTime), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KerberosTime }
};
/* generate_template_type: LastReq_val_tag__36 */
const struct asn1_template asn1_LastReq_val_tag__36[] = {
/* 0 */ { 0, sizeof(struct LastReq_val), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct LastReq_val, lr_type), asn1_LastReq_val_tag_lr_type_37 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct LastReq_val, lr_value), asn1_LastReq_val_tag_lr_value_38 }
};
/* generate_template_type: LastReq_seofTstruct_4 */
const struct asn1_template asn1_LastReq_seofTstruct_4[] = {
/* 0 */ { 0, sizeof(struct LastReq_val), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_LastReq_val_tag__36 }
};
/* generate_template_type: LastReq_tag__35 */
const struct asn1_template asn1_LastReq_tag__35[] = {
/* 0 */ { 0, sizeof(LastReq), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_LastReq_seofTstruct_4 }
};
/* generate_template_type: LastReq */
const struct asn1_template asn1_LastReq[] = {
/* 0 */ { 0, sizeof(LastReq), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_LastReq_tag__35 }
};

int
decode_LastReq(const unsigned char *p, size_t len, LastReq *data, size_t *size)
{
    return _asn1_decode_top(asn1_LastReq, 0|0, p, len, data, size);
}


int
encode_LastReq(unsigned char *p, size_t len, const LastReq *data, size_t *size)
{
    int ret = _asn1_encode(asn1_LastReq, p, len, data, size);
    return ret;
}


size_t
length_LastReq(const LastReq *data)
{
    return _asn1_length(asn1_LastReq, data);
}


void
free_LastReq(LastReq *data)
{
    _asn1_free_top(asn1_LastReq, data);
}


int
copy_LastReq(const LastReq *from, LastReq *to)
{
    return _asn1_copy_top(asn1_LastReq, from, to);
}

extern const struct asn1_template asn1_EncryptedData[];
/* template_members: EncryptedData exp exp */
extern const struct asn1_template asn1_EncryptedData_tag__39[];
/* tsequence: members isstruct: 1 */
/* template_members: EncryptedData exp exp */
extern const struct asn1_template asn1_EncryptedData_tag_etype_40[];
/* generate_template_type: EncryptedData_tag_etype_40 */
const struct asn1_template asn1_EncryptedData_tag_etype_40[] = {
/* 0 */ { 0, sizeof(ENCTYPE), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ENCTYPE }
};
/* template_members: EncryptedData exp exp */
extern const struct asn1_template asn1_EncryptedData_tag_kvno_41[];
/* generate_template_type: EncryptedData_tag_kvno_41 */
/* template_members: EncryptedData exp exp */
extern const struct asn1_template asn1_EncryptedData_tag_cipher_42[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_cipher_43[];
/* generate_template_type: heim_octet_string_tag_cipher_43 */
/* generate_template_type: EncryptedData_tag_cipher_42 */
/* generate_template_type: EncryptedData_tag__39 */
const struct asn1_template asn1_EncryptedData_tag__39[] = {
/* 0 */ { 0, sizeof(struct EncryptedData), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncryptedData, etype), asn1_EncryptedData_tag_etype_40 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct EncryptedData, kvno), asn1_HostAddress_tag_addr_type_21 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct EncryptedData, cipher), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: EncryptedData */
const struct asn1_template asn1_EncryptedData[] = {
/* 0 */ { 0, sizeof(EncryptedData), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncryptedData_tag__39 }
};

int
decode_EncryptedData(const unsigned char *p, size_t len, EncryptedData *data, size_t *size)
{
    return _asn1_decode_top(asn1_EncryptedData, 0|0, p, len, data, size);
}


int
encode_EncryptedData(unsigned char *p, size_t len, const EncryptedData *data, size_t *size)
{
    int ret = _asn1_encode(asn1_EncryptedData, p, len, data, size);
    return ret;
}


size_t
length_EncryptedData(const EncryptedData *data)
{
    return _asn1_length(asn1_EncryptedData, data);
}


void
free_EncryptedData(EncryptedData *data)
{
    _asn1_free_top(asn1_EncryptedData, data);
}


int
copy_EncryptedData(const EncryptedData *from, EncryptedData *to)
{
    return _asn1_copy_top(asn1_EncryptedData, from, to);
}

extern const struct asn1_template asn1_EncryptionKey[];
/* template_members: EncryptionKey exp exp */
extern const struct asn1_template asn1_EncryptionKey_tag__44[];
/* tsequence: members isstruct: 1 */
/* template_members: EncryptionKey exp exp */
extern const struct asn1_template asn1_EncryptionKey_tag_keytype_45[];
/* generate_template_type: EncryptionKey_tag_keytype_45 */
/* template_members: EncryptionKey exp exp */
extern const struct asn1_template asn1_EncryptionKey_tag_keyvalue_46[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_keyvalue_47[];
/* generate_template_type: heim_octet_string_tag_keyvalue_47 */
/* generate_template_type: EncryptionKey_tag_keyvalue_46 */
/* generate_template_type: EncryptionKey_tag__44 */
const struct asn1_template asn1_EncryptionKey_tag__44[] = {
/* 0 */ { 0, sizeof(struct EncryptionKey), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncryptionKey, keytype), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct EncryptionKey, keyvalue), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: EncryptionKey */
const struct asn1_template asn1_EncryptionKey[] = {
/* 0 */ { 0, sizeof(EncryptionKey), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncryptionKey_tag__44 }
};

int
decode_EncryptionKey(const unsigned char *p, size_t len, EncryptionKey *data, size_t *size)
{
    return _asn1_decode_top(asn1_EncryptionKey, 0|0, p, len, data, size);
}


int
encode_EncryptionKey(unsigned char *p, size_t len, const EncryptionKey *data, size_t *size)
{
    int ret = _asn1_encode(asn1_EncryptionKey, p, len, data, size);
    return ret;
}


size_t
length_EncryptionKey(const EncryptionKey *data)
{
    return _asn1_length(asn1_EncryptionKey, data);
}


void
free_EncryptionKey(EncryptionKey *data)
{
    _asn1_free_top(asn1_EncryptionKey, data);
}


int
copy_EncryptionKey(const EncryptionKey *from, EncryptionKey *to)
{
    return _asn1_copy_top(asn1_EncryptionKey, from, to);
}

extern const struct asn1_template asn1_TransitedEncoding[];
/* template_members: TransitedEncoding exp exp */
extern const struct asn1_template asn1_TransitedEncoding_tag__48[];
/* tsequence: members isstruct: 1 */
/* template_members: TransitedEncoding exp exp */
extern const struct asn1_template asn1_TransitedEncoding_tag_tr_type_49[];
/* generate_template_type: TransitedEncoding_tag_tr_type_49 */
/* template_members: TransitedEncoding exp exp */
extern const struct asn1_template asn1_TransitedEncoding_tag_contents_50[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_contents_51[];
/* generate_template_type: heim_octet_string_tag_contents_51 */
/* generate_template_type: TransitedEncoding_tag_contents_50 */
/* generate_template_type: TransitedEncoding_tag__48 */
const struct asn1_template asn1_TransitedEncoding_tag__48[] = {
/* 0 */ { 0, sizeof(struct TransitedEncoding), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TransitedEncoding, tr_type), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct TransitedEncoding, contents), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: TransitedEncoding */
const struct asn1_template asn1_TransitedEncoding[] = {
/* 0 */ { 0, sizeof(TransitedEncoding), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TransitedEncoding_tag__48 }
};

int
decode_TransitedEncoding(const unsigned char *p, size_t len, TransitedEncoding *data, size_t *size)
{
    return _asn1_decode_top(asn1_TransitedEncoding, 0|0, p, len, data, size);
}


int
encode_TransitedEncoding(unsigned char *p, size_t len, const TransitedEncoding *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TransitedEncoding, p, len, data, size);
    return ret;
}


size_t
length_TransitedEncoding(const TransitedEncoding *data)
{
    return _asn1_length(asn1_TransitedEncoding, data);
}


void
free_TransitedEncoding(TransitedEncoding *data)
{
    _asn1_free_top(asn1_TransitedEncoding, data);
}


int
copy_TransitedEncoding(const TransitedEncoding *from, TransitedEncoding *to)
{
    return _asn1_copy_top(asn1_TransitedEncoding, from, to);
}

extern const struct asn1_template asn1_Ticket[];
/* template_members: Ticket exp exp */
extern const struct asn1_template asn1_Ticket_tag__52[];
/* template_members: Ticket exp exp */
extern const struct asn1_template asn1_Ticket_tag__53[];
/* tsequence: members isstruct: 1 */
/* template_members: Ticket exp exp */
extern const struct asn1_template asn1_Ticket_tag_tkt_vno_54[];
/* generate_template_type: Ticket_tag_tkt_vno_54 */
/* template_members: Ticket exp exp */
extern const struct asn1_template asn1_Ticket_tag_realm_55[];
/* generate_template_type: Ticket_tag_realm_55 */
/* template_members: Ticket exp exp */
extern const struct asn1_template asn1_Ticket_tag_sname_56[];
/* generate_template_type: Ticket_tag_sname_56 */
/* template_members: Ticket exp exp */
extern const struct asn1_template asn1_Ticket_tag_enc_part_57[];
/* generate_template_type: Ticket_tag_enc_part_57 */
const struct asn1_template asn1_Ticket_tag_enc_part_57[] = {
/* 0 */ { 0, sizeof(EncryptedData), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EncryptedData }
};
/* generate_template_type: Ticket_tag__53 */
const struct asn1_template asn1_Ticket_tag__53[] = {
/* 0 */ { 0, sizeof(struct Ticket), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct Ticket, tkt_vno), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct Ticket, realm), asn1_Principal_tag_realm_18 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct Ticket, sname), asn1_Principal_tag_name_17 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct Ticket, enc_part), asn1_Ticket_tag_enc_part_57 }
};
/* generate_template_type: Ticket_tag__52 */
const struct asn1_template asn1_Ticket_tag__52[] = {
/* 0 */ { 0, sizeof(struct Ticket), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Ticket_tag__53 }
};
/* generate_template_type: Ticket */
const struct asn1_template asn1_Ticket[] = {
/* 0 */ { 0, sizeof(Ticket), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,1), 0, asn1_Ticket_tag__52 }
};

int
decode_Ticket(const unsigned char *p, size_t len, Ticket *data, size_t *size)
{
    return _asn1_decode_top(asn1_Ticket, 0|0, p, len, data, size);
}


int
encode_Ticket(unsigned char *p, size_t len, const Ticket *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Ticket, p, len, data, size);
    return ret;
}


size_t
length_Ticket(const Ticket *data)
{
    return _asn1_length(asn1_Ticket, data);
}


void
free_Ticket(Ticket *data)
{
    _asn1_free_top(asn1_Ticket, data);
}


int
copy_Ticket(const Ticket *from, Ticket *to)
{
    return _asn1_copy_top(asn1_Ticket, from, to);
}

extern const struct asn1_template asn1_EncTicketPart[];
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag__58[];
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag__59[];
/* tsequence: members isstruct: 1 */
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag_flags_60[];
/* generate_template_type: EncTicketPart_tag_flags_60 */
const struct asn1_template asn1_EncTicketPart_tag_flags_60[] = {
/* 0 */ { 0, sizeof(TicketFlags), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TicketFlags }
};
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag_key_61[];
/* generate_template_type: EncTicketPart_tag_key_61 */
const struct asn1_template asn1_EncTicketPart_tag_key_61[] = {
/* 0 */ { 0, sizeof(EncryptionKey), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EncryptionKey }
};
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag_crealm_62[];
/* generate_template_type: EncTicketPart_tag_crealm_62 */
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag_cname_63[];
/* generate_template_type: EncTicketPart_tag_cname_63 */
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag_transited_64[];
/* generate_template_type: EncTicketPart_tag_transited_64 */
const struct asn1_template asn1_EncTicketPart_tag_transited_64[] = {
/* 0 */ { 0, sizeof(TransitedEncoding), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TransitedEncoding }
};
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag_authtime_65[];
/* generate_template_type: EncTicketPart_tag_authtime_65 */
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag_starttime_66[];
/* generate_template_type: EncTicketPart_tag_starttime_66 */
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag_endtime_67[];
/* generate_template_type: EncTicketPart_tag_endtime_67 */
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag_renew_till_68[];
/* generate_template_type: EncTicketPart_tag_renew_till_68 */
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag_caddr_69[];
/* generate_template_type: EncTicketPart_tag_caddr_69 */
const struct asn1_template asn1_EncTicketPart_tag_caddr_69[] = {
/* 0 */ { 0, sizeof(HostAddresses), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_HostAddresses }
};
/* template_members: EncTicketPart exp exp */
extern const struct asn1_template asn1_EncTicketPart_tag_authorization_data_70[];
/* generate_template_type: EncTicketPart_tag_authorization_data_70 */
const struct asn1_template asn1_EncTicketPart_tag_authorization_data_70[] = {
/* 0 */ { 0, sizeof(AuthorizationData), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AuthorizationData }
};
/* generate_template_type: EncTicketPart_tag__59 */
const struct asn1_template asn1_EncTicketPart_tag__59[] = {
/* 0 */ { 0, sizeof(struct EncTicketPart), ((void *)11) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncTicketPart, flags), asn1_EncTicketPart_tag_flags_60 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct EncTicketPart, key), asn1_EncTicketPart_tag_key_61 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct EncTicketPart, crealm), asn1_Principal_tag_realm_18 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct EncTicketPart, cname), asn1_Principal_tag_name_17 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct EncTicketPart, transited), asn1_EncTicketPart_tag_transited_64 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct EncTicketPart, authtime), asn1_LastReq_val_tag_lr_value_38 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct EncTicketPart, starttime), asn1_LastReq_val_tag_lr_value_38 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7), offsetof(struct EncTicketPart, endtime), asn1_LastReq_val_tag_lr_value_38 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8)|A1_FLAG_OPTIONAL, offsetof(struct EncTicketPart, renew_till), asn1_LastReq_val_tag_lr_value_38 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9)|A1_FLAG_OPTIONAL, offsetof(struct EncTicketPart, caddr), asn1_EncTicketPart_tag_caddr_69 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,10)|A1_FLAG_OPTIONAL, offsetof(struct EncTicketPart, authorization_data), asn1_EncTicketPart_tag_authorization_data_70 }
};
/* generate_template_type: EncTicketPart_tag__58 */
const struct asn1_template asn1_EncTicketPart_tag__58[] = {
/* 0 */ { 0, sizeof(struct EncTicketPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncTicketPart_tag__59 }
};
/* generate_template_type: EncTicketPart */
const struct asn1_template asn1_EncTicketPart[] = {
/* 0 */ { 0, sizeof(EncTicketPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,3), 0, asn1_EncTicketPart_tag__58 }
};

int
decode_EncTicketPart(const unsigned char *p, size_t len, EncTicketPart *data, size_t *size)
{
    return _asn1_decode_top(asn1_EncTicketPart, 0|0, p, len, data, size);
}


int
encode_EncTicketPart(unsigned char *p, size_t len, const EncTicketPart *data, size_t *size)
{
    int ret = _asn1_encode(asn1_EncTicketPart, p, len, data, size);
    return ret;
}


size_t
length_EncTicketPart(const EncTicketPart *data)
{
    return _asn1_length(asn1_EncTicketPart, data);
}


void
free_EncTicketPart(EncTicketPart *data)
{
    _asn1_free_top(asn1_EncTicketPart, data);
}


int
copy_EncTicketPart(const EncTicketPart *from, EncTicketPart *to)
{
    return _asn1_copy_top(asn1_EncTicketPart, from, to);
}

extern const struct asn1_template asn1_Checksum[];
/* template_members: Checksum exp exp */
extern const struct asn1_template asn1_Checksum_tag__71[];
/* tsequence: members isstruct: 1 */
/* template_members: Checksum exp exp */
extern const struct asn1_template asn1_Checksum_tag_cksumtype_72[];
/* generate_template_type: Checksum_tag_cksumtype_72 */
const struct asn1_template asn1_Checksum_tag_cksumtype_72[] = {
/* 0 */ { 0, sizeof(CKSUMTYPE), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CKSUMTYPE }
};
/* template_members: Checksum exp exp */
extern const struct asn1_template asn1_Checksum_tag_checksum_73[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_checksum_74[];
/* generate_template_type: heim_octet_string_tag_checksum_74 */
/* generate_template_type: Checksum_tag_checksum_73 */
/* generate_template_type: Checksum_tag__71 */
const struct asn1_template asn1_Checksum_tag__71[] = {
/* 0 */ { 0, sizeof(struct Checksum), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct Checksum, cksumtype), asn1_Checksum_tag_cksumtype_72 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct Checksum, checksum), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: Checksum */
const struct asn1_template asn1_Checksum[] = {
/* 0 */ { 0, sizeof(Checksum), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Checksum_tag__71 }
};

int
decode_Checksum(const unsigned char *p, size_t len, Checksum *data, size_t *size)
{
    return _asn1_decode_top(asn1_Checksum, 0|0, p, len, data, size);
}


int
encode_Checksum(unsigned char *p, size_t len, const Checksum *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Checksum, p, len, data, size);
    return ret;
}


size_t
length_Checksum(const Checksum *data)
{
    return _asn1_length(asn1_Checksum, data);
}


void
free_Checksum(Checksum *data)
{
    _asn1_free_top(asn1_Checksum, data);
}


int
copy_Checksum(const Checksum *from, Checksum *to)
{
    return _asn1_copy_top(asn1_Checksum, from, to);
}

extern const struct asn1_template asn1_Authenticator[];
/* template_members: Authenticator exp exp */
extern const struct asn1_template asn1_Authenticator_tag__75[];
/* template_members: Authenticator exp exp */
extern const struct asn1_template asn1_Authenticator_tag__76[];
/* tsequence: members isstruct: 1 */
/* template_members: Authenticator exp exp */
extern const struct asn1_template asn1_Authenticator_tag_authenticator_vno_77[];
/* generate_template_type: Authenticator_tag_authenticator_vno_77 */
/* template_members: Authenticator exp exp */
extern const struct asn1_template asn1_Authenticator_tag_crealm_78[];
/* generate_template_type: Authenticator_tag_crealm_78 */
/* template_members: Authenticator exp exp */
extern const struct asn1_template asn1_Authenticator_tag_cname_79[];
/* generate_template_type: Authenticator_tag_cname_79 */
/* template_members: Authenticator exp exp */
extern const struct asn1_template asn1_Authenticator_tag_cksum_80[];
/* generate_template_type: Authenticator_tag_cksum_80 */
const struct asn1_template asn1_Authenticator_tag_cksum_80[] = {
/* 0 */ { 0, sizeof(Checksum), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Checksum }
};
/* template_members: Authenticator exp exp */
extern const struct asn1_template asn1_Authenticator_tag_cusec_81[];
/* generate_template_type: Authenticator_tag_cusec_81 */
/* template_members: Authenticator exp exp */
extern const struct asn1_template asn1_Authenticator_tag_ctime_82[];
/* generate_template_type: Authenticator_tag_ctime_82 */
/* template_members: Authenticator exp exp */
extern const struct asn1_template asn1_Authenticator_tag_subkey_83[];
/* generate_template_type: Authenticator_tag_subkey_83 */
/* template_members: Authenticator exp exp */
extern const struct asn1_template asn1_Authenticator_tag_seq_number_84[];
/* generate_template_type: Authenticator_tag_seq_number_84 */
const struct asn1_template asn1_Authenticator_tag_seq_number_84[] = {
/* 0 */ { 0, sizeof(krb5uint32), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_krb5uint32 }
};
/* template_members: Authenticator exp exp */
extern const struct asn1_template asn1_Authenticator_tag_authorization_data_85[];
/* generate_template_type: Authenticator_tag_authorization_data_85 */
/* generate_template_type: Authenticator_tag__76 */
const struct asn1_template asn1_Authenticator_tag__76[] = {
/* 0 */ { 0, sizeof(struct Authenticator), ((void *)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct Authenticator, authenticator_vno), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct Authenticator, crealm), asn1_Principal_tag_realm_18 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct Authenticator, cname), asn1_Principal_tag_name_17 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct Authenticator, cksum), asn1_Authenticator_tag_cksum_80 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct Authenticator, cusec), asn1_HostAddress_tag_addr_type_21 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct Authenticator, ctime), asn1_LastReq_val_tag_lr_value_38 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct Authenticator, subkey), asn1_EncTicketPart_tag_key_61 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct Authenticator, seq_number), asn1_Authenticator_tag_seq_number_84 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8)|A1_FLAG_OPTIONAL, offsetof(struct Authenticator, authorization_data), asn1_EncTicketPart_tag_authorization_data_70 }
};
/* generate_template_type: Authenticator_tag__75 */
const struct asn1_template asn1_Authenticator_tag__75[] = {
/* 0 */ { 0, sizeof(struct Authenticator), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Authenticator_tag__76 }
};
/* generate_template_type: Authenticator */
const struct asn1_template asn1_Authenticator[] = {
/* 0 */ { 0, sizeof(Authenticator), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,2), 0, asn1_Authenticator_tag__75 }
};

int
decode_Authenticator(const unsigned char *p, size_t len, Authenticator *data, size_t *size)
{
    return _asn1_decode_top(asn1_Authenticator, 0|0, p, len, data, size);
}


int
encode_Authenticator(unsigned char *p, size_t len, const Authenticator *data, size_t *size)
{
    int ret = _asn1_encode(asn1_Authenticator, p, len, data, size);
    return ret;
}


size_t
length_Authenticator(const Authenticator *data)
{
    return _asn1_length(asn1_Authenticator, data);
}


void
free_Authenticator(Authenticator *data)
{
    _asn1_free_top(asn1_Authenticator, data);
}


int
copy_Authenticator(const Authenticator *from, Authenticator *to)
{
    return _asn1_copy_top(asn1_Authenticator, from, to);
}

extern const struct asn1_template asn1_PA_DATA[];
/* template_members: PA_DATA exp exp */
extern const struct asn1_template asn1_PA_DATA_tag__86[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_DATA exp exp */
extern const struct asn1_template asn1_PA_DATA_tag_padata_type_87[];
/* generate_template_type: PA_DATA_tag_padata_type_87 */
const struct asn1_template asn1_PA_DATA_tag_padata_type_87[] = {
/* 0 */ { 0, sizeof(PADATA_TYPE), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PADATA_TYPE }
};
/* template_members: PA_DATA exp exp */
extern const struct asn1_template asn1_PA_DATA_tag_padata_value_88[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_padata_value_89[];
/* generate_template_type: heim_octet_string_tag_padata_value_89 */
/* generate_template_type: PA_DATA_tag_padata_value_88 */
/* generate_template_type: PA_DATA_tag__86 */
const struct asn1_template asn1_PA_DATA_tag__86[] = {
/* 0 */ { 0, sizeof(struct PA_DATA), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_DATA, padata_type), asn1_PA_DATA_tag_padata_type_87 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct PA_DATA, padata_value), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: PA_DATA */
const struct asn1_template asn1_PA_DATA[] = {
/* 0 */ { 0, sizeof(PA_DATA), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_DATA_tag__86 }
};

int
decode_PA_DATA(const unsigned char *p, size_t len, PA_DATA *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_DATA, 0|0, p, len, data, size);
}


int
encode_PA_DATA(unsigned char *p, size_t len, const PA_DATA *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_DATA, p, len, data, size);
    return ret;
}


size_t
length_PA_DATA(const PA_DATA *data)
{
    return _asn1_length(asn1_PA_DATA, data);
}


void
free_PA_DATA(PA_DATA *data)
{
    _asn1_free_top(asn1_PA_DATA, data);
}


int
copy_PA_DATA(const PA_DATA *from, PA_DATA *to)
{
    return _asn1_copy_top(asn1_PA_DATA, from, to);
}

extern const struct asn1_template asn1_ETYPE_INFO_ENTRY[];
/* template_members: ETYPE_INFO_ENTRY exp exp */
extern const struct asn1_template asn1_ETYPE_INFO_ENTRY_tag__90[];
/* tsequence: members isstruct: 1 */
/* template_members: ETYPE_INFO_ENTRY exp exp */
extern const struct asn1_template asn1_ETYPE_INFO_ENTRY_tag_etype_91[];
/* generate_template_type: ETYPE_INFO_ENTRY_tag_etype_91 */
/* template_members: ETYPE_INFO_ENTRY exp exp */
extern const struct asn1_template asn1_ETYPE_INFO_ENTRY_tag_salt_92[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_salt_93[];
/* generate_template_type: heim_octet_string_tag_salt_93 */
/* generate_template_type: ETYPE_INFO_ENTRY_tag_salt_92 */
/* template_members: ETYPE_INFO_ENTRY exp exp */
extern const struct asn1_template asn1_ETYPE_INFO_ENTRY_tag_salttype_94[];
/* generate_template_type: ETYPE_INFO_ENTRY_tag_salttype_94 */
/* generate_template_type: ETYPE_INFO_ENTRY_tag__90 */
const struct asn1_template asn1_ETYPE_INFO_ENTRY_tag__90[] = {
/* 0 */ { 0, sizeof(struct ETYPE_INFO_ENTRY), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct ETYPE_INFO_ENTRY, etype), asn1_EncryptedData_tag_etype_40 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct ETYPE_INFO_ENTRY, salt), asn1_HostAddress_tag_address_22 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct ETYPE_INFO_ENTRY, salttype), asn1_HostAddress_tag_addr_type_21 }
};
/* generate_template_type: ETYPE_INFO_ENTRY */
const struct asn1_template asn1_ETYPE_INFO_ENTRY[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO_ENTRY), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ETYPE_INFO_ENTRY_tag__90 }
};

int
decode_ETYPE_INFO_ENTRY(const unsigned char *p, size_t len, ETYPE_INFO_ENTRY *data, size_t *size)
{
    return _asn1_decode_top(asn1_ETYPE_INFO_ENTRY, 0|0, p, len, data, size);
}


int
encode_ETYPE_INFO_ENTRY(unsigned char *p, size_t len, const ETYPE_INFO_ENTRY *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ETYPE_INFO_ENTRY, p, len, data, size);
    return ret;
}


size_t
length_ETYPE_INFO_ENTRY(const ETYPE_INFO_ENTRY *data)
{
    return _asn1_length(asn1_ETYPE_INFO_ENTRY, data);
}


void
free_ETYPE_INFO_ENTRY(ETYPE_INFO_ENTRY *data)
{
    _asn1_free_top(asn1_ETYPE_INFO_ENTRY, data);
}


int
copy_ETYPE_INFO_ENTRY(const ETYPE_INFO_ENTRY *from, ETYPE_INFO_ENTRY *to)
{
    return _asn1_copy_top(asn1_ETYPE_INFO_ENTRY, from, to);
}

extern const struct asn1_template asn1_ETYPE_INFO[];
/* template_members: ETYPE_INFO exp exp */
extern const struct asn1_template asn1_ETYPE_INFO_tag__95[];
extern const struct asn1_template asn1_ETYPE_INFO_ENTRY_seofTstruct_5[];
/* generate_template_type: ETYPE_INFO_ENTRY_seofTstruct_5 */
const struct asn1_template asn1_ETYPE_INFO_ENTRY_seofTstruct_5[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO_ENTRY), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ETYPE_INFO_ENTRY }
};
/* generate_template_type: ETYPE_INFO_tag__95 */
const struct asn1_template asn1_ETYPE_INFO_tag__95[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO_ENTRY), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_ETYPE_INFO_ENTRY_seofTstruct_5 }
};
/* generate_template_type: ETYPE_INFO */
const struct asn1_template asn1_ETYPE_INFO[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ETYPE_INFO_tag__95 }
};

int
decode_ETYPE_INFO(const unsigned char *p, size_t len, ETYPE_INFO *data, size_t *size)
{
    return _asn1_decode_top(asn1_ETYPE_INFO, 0|0, p, len, data, size);
}


int
encode_ETYPE_INFO(unsigned char *p, size_t len, const ETYPE_INFO *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ETYPE_INFO, p, len, data, size);
    return ret;
}


size_t
length_ETYPE_INFO(const ETYPE_INFO *data)
{
    return _asn1_length(asn1_ETYPE_INFO, data);
}


void
free_ETYPE_INFO(ETYPE_INFO *data)
{
    _asn1_free_top(asn1_ETYPE_INFO, data);
}


int
copy_ETYPE_INFO(const ETYPE_INFO *from, ETYPE_INFO *to)
{
    return _asn1_copy_top(asn1_ETYPE_INFO, from, to);
}

int ASN1CALL
add_ETYPE_INFO(ETYPE_INFO *data, const ETYPE_INFO_ENTRY *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_ETYPE_INFO_ENTRY(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_ETYPE_INFO(ETYPE_INFO *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_ETYPE_INFO_ENTRY(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

extern const struct asn1_template asn1_ETYPE_INFO2_ENTRY[];
/* template_members: ETYPE_INFO2_ENTRY exp exp */
extern const struct asn1_template asn1_ETYPE_INFO2_ENTRY_tag__96[];
/* tsequence: members isstruct: 1 */
/* template_members: ETYPE_INFO2_ENTRY exp exp */
extern const struct asn1_template asn1_ETYPE_INFO2_ENTRY_tag_etype_97[];
/* generate_template_type: ETYPE_INFO2_ENTRY_tag_etype_97 */
/* template_members: ETYPE_INFO2_ENTRY exp exp */
extern const struct asn1_template asn1_ETYPE_INFO2_ENTRY_tag_salt_98[];
/* generate_template_type: ETYPE_INFO2_ENTRY_tag_salt_98 */
const struct asn1_template asn1_ETYPE_INFO2_ENTRY_tag_salt_98[] = {
/* 0 */ { 0, sizeof(KerberosString), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KerberosString }
};
/* template_members: ETYPE_INFO2_ENTRY exp exp */
extern const struct asn1_template asn1_ETYPE_INFO2_ENTRY_tag_s2kparams_99[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_s2kparams_100[];
/* generate_template_type: heim_octet_string_tag_s2kparams_100 */
/* generate_template_type: ETYPE_INFO2_ENTRY_tag_s2kparams_99 */
/* generate_template_type: ETYPE_INFO2_ENTRY_tag__96 */
const struct asn1_template asn1_ETYPE_INFO2_ENTRY_tag__96[] = {
/* 0 */ { 0, sizeof(struct ETYPE_INFO2_ENTRY), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct ETYPE_INFO2_ENTRY, etype), asn1_EncryptedData_tag_etype_40 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct ETYPE_INFO2_ENTRY, salt), asn1_ETYPE_INFO2_ENTRY_tag_salt_98 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct ETYPE_INFO2_ENTRY, s2kparams), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: ETYPE_INFO2_ENTRY */
const struct asn1_template asn1_ETYPE_INFO2_ENTRY[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO2_ENTRY), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ETYPE_INFO2_ENTRY_tag__96 }
};

int
decode_ETYPE_INFO2_ENTRY(const unsigned char *p, size_t len, ETYPE_INFO2_ENTRY *data, size_t *size)
{
    return _asn1_decode_top(asn1_ETYPE_INFO2_ENTRY, 0|0, p, len, data, size);
}


int
encode_ETYPE_INFO2_ENTRY(unsigned char *p, size_t len, const ETYPE_INFO2_ENTRY *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ETYPE_INFO2_ENTRY, p, len, data, size);
    return ret;
}


size_t
length_ETYPE_INFO2_ENTRY(const ETYPE_INFO2_ENTRY *data)
{
    return _asn1_length(asn1_ETYPE_INFO2_ENTRY, data);
}


void
free_ETYPE_INFO2_ENTRY(ETYPE_INFO2_ENTRY *data)
{
    _asn1_free_top(asn1_ETYPE_INFO2_ENTRY, data);
}


int
copy_ETYPE_INFO2_ENTRY(const ETYPE_INFO2_ENTRY *from, ETYPE_INFO2_ENTRY *to)
{
    return _asn1_copy_top(asn1_ETYPE_INFO2_ENTRY, from, to);
}

extern const struct asn1_template asn1_ETYPE_INFO2[];
/* template_members: ETYPE_INFO2 exp exp */
extern const struct asn1_template asn1_ETYPE_INFO2_tag__101[];
extern const struct asn1_template asn1_ETYPE_INFO2_ENTRY_seofTstruct_6[];
/* generate_template_type: ETYPE_INFO2_ENTRY_seofTstruct_6 */
const struct asn1_template asn1_ETYPE_INFO2_ENTRY_seofTstruct_6[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO2_ENTRY), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ETYPE_INFO2_ENTRY }
};
/* generate_template_type: ETYPE_INFO2_tag__101 */
const struct asn1_template asn1_ETYPE_INFO2_tag__101[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO2_ENTRY), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_ETYPE_INFO2_ENTRY_seofTstruct_6 }
};
/* generate_template_type: ETYPE_INFO2 */
const struct asn1_template asn1_ETYPE_INFO2[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ETYPE_INFO2_tag__101 }
};

int
decode_ETYPE_INFO2(const unsigned char *p, size_t len, ETYPE_INFO2 *data, size_t *size)
{
    return _asn1_decode_top(asn1_ETYPE_INFO2, 0|0, p, len, data, size);
}


int
encode_ETYPE_INFO2(unsigned char *p, size_t len, const ETYPE_INFO2 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ETYPE_INFO2, p, len, data, size);
    return ret;
}


size_t
length_ETYPE_INFO2(const ETYPE_INFO2 *data)
{
    return _asn1_length(asn1_ETYPE_INFO2, data);
}


void
free_ETYPE_INFO2(ETYPE_INFO2 *data)
{
    _asn1_free_top(asn1_ETYPE_INFO2, data);
}


int
copy_ETYPE_INFO2(const ETYPE_INFO2 *from, ETYPE_INFO2 *to)
{
    return _asn1_copy_top(asn1_ETYPE_INFO2, from, to);
}

int ASN1CALL
add_ETYPE_INFO2(ETYPE_INFO2 *data, const ETYPE_INFO2_ENTRY *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_ETYPE_INFO2_ENTRY(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_ETYPE_INFO2(ETYPE_INFO2 *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_ETYPE_INFO2_ENTRY(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

extern const struct asn1_template asn1_METHOD_DATA[];
/* template_members: METHOD_DATA exp exp */
extern const struct asn1_template asn1_METHOD_DATA_tag__102[];
extern const struct asn1_template asn1_PA_DATA_seofTstruct_7[];
/* generate_template_type: PA_DATA_seofTstruct_7 */
const struct asn1_template asn1_PA_DATA_seofTstruct_7[] = {
/* 0 */ { 0, sizeof(PA_DATA), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PA_DATA }
};
/* generate_template_type: METHOD_DATA_tag__102 */
const struct asn1_template asn1_METHOD_DATA_tag__102[] = {
/* 0 */ { 0, sizeof(PA_DATA), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PA_DATA_seofTstruct_7 }
};
/* generate_template_type: METHOD_DATA */
const struct asn1_template asn1_METHOD_DATA[] = {
/* 0 */ { 0, sizeof(METHOD_DATA), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_METHOD_DATA_tag__102 }
};

int
decode_METHOD_DATA(const unsigned char *p, size_t len, METHOD_DATA *data, size_t *size)
{
    return _asn1_decode_top(asn1_METHOD_DATA, 0|0, p, len, data, size);
}


int
encode_METHOD_DATA(unsigned char *p, size_t len, const METHOD_DATA *data, size_t *size)
{
    int ret = _asn1_encode(asn1_METHOD_DATA, p, len, data, size);
    return ret;
}


size_t
length_METHOD_DATA(const METHOD_DATA *data)
{
    return _asn1_length(asn1_METHOD_DATA, data);
}


void
free_METHOD_DATA(METHOD_DATA *data)
{
    _asn1_free_top(asn1_METHOD_DATA, data);
}


int
copy_METHOD_DATA(const METHOD_DATA *from, METHOD_DATA *to)
{
    return _asn1_copy_top(asn1_METHOD_DATA, from, to);
}

int ASN1CALL
add_METHOD_DATA(METHOD_DATA *data, const PA_DATA *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_PA_DATA(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_METHOD_DATA(METHOD_DATA *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_PA_DATA(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

extern const struct asn1_template asn1_TypedData[];
/* template_members: TypedData exp exp */
extern const struct asn1_template asn1_TypedData_tag__103[];
/* tsequence: members isstruct: 1 */
/* template_members: TypedData exp exp */
extern const struct asn1_template asn1_TypedData_tag_data_type_104[];
/* generate_template_type: TypedData_tag_data_type_104 */
/* template_members: TypedData exp exp */
extern const struct asn1_template asn1_TypedData_tag_data_value_105[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_data_value_106[];
/* generate_template_type: heim_octet_string_tag_data_value_106 */
/* generate_template_type: TypedData_tag_data_value_105 */
/* generate_template_type: TypedData_tag__103 */
const struct asn1_template asn1_TypedData_tag__103[] = {
/* 0 */ { 0, sizeof(struct TypedData), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TypedData, data_type), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct TypedData, data_value), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: TypedData */
const struct asn1_template asn1_TypedData[] = {
/* 0 */ { 0, sizeof(TypedData), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TypedData_tag__103 }
};

int
decode_TypedData(const unsigned char *p, size_t len, TypedData *data, size_t *size)
{
    return _asn1_decode_top(asn1_TypedData, 0|0, p, len, data, size);
}


int
encode_TypedData(unsigned char *p, size_t len, const TypedData *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TypedData, p, len, data, size);
    return ret;
}


size_t
length_TypedData(const TypedData *data)
{
    return _asn1_length(asn1_TypedData, data);
}


void
free_TypedData(TypedData *data)
{
    _asn1_free_top(asn1_TypedData, data);
}


int
copy_TypedData(const TypedData *from, TypedData *to)
{
    return _asn1_copy_top(asn1_TypedData, from, to);
}

extern const struct asn1_template asn1_TYPED_DATA[];
/* template_members: TYPED_DATA exp exp */
extern const struct asn1_template asn1_TYPED_DATA_tag__107[];
extern const struct asn1_template asn1_TypedData_seofTstruct_8[];
/* generate_template_type: TypedData_seofTstruct_8 */
const struct asn1_template asn1_TypedData_seofTstruct_8[] = {
/* 0 */ { 0, sizeof(TypedData), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TypedData }
};
/* generate_template_type: TYPED_DATA_tag__107 */
const struct asn1_template asn1_TYPED_DATA_tag__107[] = {
/* 0 */ { 0, sizeof(TypedData), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_TypedData_seofTstruct_8 }
};
/* generate_template_type: TYPED_DATA */
const struct asn1_template asn1_TYPED_DATA[] = {
/* 0 */ { 0, sizeof(TYPED_DATA), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TYPED_DATA_tag__107 }
};

int
decode_TYPED_DATA(const unsigned char *p, size_t len, TYPED_DATA *data, size_t *size)
{
    return _asn1_decode_top(asn1_TYPED_DATA, 0|0, p, len, data, size);
}


int
encode_TYPED_DATA(unsigned char *p, size_t len, const TYPED_DATA *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TYPED_DATA, p, len, data, size);
    return ret;
}


size_t
length_TYPED_DATA(const TYPED_DATA *data)
{
    return _asn1_length(asn1_TYPED_DATA, data);
}


void
free_TYPED_DATA(TYPED_DATA *data)
{
    _asn1_free_top(asn1_TYPED_DATA, data);
}


int
copy_TYPED_DATA(const TYPED_DATA *from, TYPED_DATA *to)
{
    return _asn1_copy_top(asn1_TYPED_DATA, from, to);
}

extern const struct asn1_template asn1_KDC_REQ_BODY[];
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag__108[];
/* tsequence: members isstruct: 1 */
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_kdc_options_109[];
/* generate_template_type: KDC_REQ_BODY_tag_kdc_options_109 */
const struct asn1_template asn1_KDC_REQ_BODY_tag_kdc_options_109[] = {
/* 0 */ { 0, sizeof(KDCOptions), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDCOptions }
};
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_cname_110[];
/* generate_template_type: KDC_REQ_BODY_tag_cname_110 */
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_realm_111[];
/* generate_template_type: KDC_REQ_BODY_tag_realm_111 */
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_sname_112[];
/* generate_template_type: KDC_REQ_BODY_tag_sname_112 */
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_from_113[];
/* generate_template_type: KDC_REQ_BODY_tag_from_113 */
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_till_114[];
/* generate_template_type: KDC_REQ_BODY_tag_till_114 */
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_rtime_115[];
/* generate_template_type: KDC_REQ_BODY_tag_rtime_115 */
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_nonce_116[];
/* generate_template_type: KDC_REQ_BODY_tag_nonce_116 */
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_etype_117[];
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_etype_118[];
extern const struct asn1_template asn1_KDC_REQ_BODY_etype_9[];
/* generate_template_type: KDC_REQ_BODY_etype_9 */
/* generate_template_type: KDC_REQ_BODY_tag_etype_118 */
const struct asn1_template asn1_KDC_REQ_BODY_tag_etype_118[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ_BODY), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_EncryptedData_tag_etype_40 }
};
/* generate_template_type: KDC_REQ_BODY_tag_etype_117 */
const struct asn1_template asn1_KDC_REQ_BODY_tag_etype_117[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ_BODY), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_REQ_BODY_tag_etype_118 }
};
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_addresses_119[];
/* generate_template_type: KDC_REQ_BODY_tag_addresses_119 */
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_enc_authorization_data_120[];
/* generate_template_type: KDC_REQ_BODY_tag_enc_authorization_data_120 */
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_additional_tickets_121[];
/* template_members: KDC_REQ_BODY exp exp */
extern const struct asn1_template asn1_KDC_REQ_BODY_tag_additional_tickets_122[];
extern const struct asn1_template asn1_KDC_REQ_BODY_additional_tickets_10[];
/* generate_template_type: KDC_REQ_BODY_additional_tickets_10 */
const struct asn1_template asn1_KDC_REQ_BODY_additional_tickets_10[] = {
/* 0 */ { 0, sizeof(Ticket), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Ticket }
};
/* generate_template_type: KDC_REQ_BODY_tag_additional_tickets_122 */
const struct asn1_template asn1_KDC_REQ_BODY_tag_additional_tickets_122[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ_BODY), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_KDC_REQ_BODY_additional_tickets_10 }
};
/* generate_template_type: KDC_REQ_BODY_tag_additional_tickets_121 */
const struct asn1_template asn1_KDC_REQ_BODY_tag_additional_tickets_121[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ_BODY), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_REQ_BODY_tag_additional_tickets_122 }
};
/* generate_template_type: KDC_REQ_BODY_tag__108 */
const struct asn1_template asn1_KDC_REQ_BODY_tag__108[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ_BODY), ((void *)12) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDC_REQ_BODY, kdc_options), asn1_KDC_REQ_BODY_tag_kdc_options_109 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, cname), asn1_Principal_tag_name_17 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KDC_REQ_BODY, realm), asn1_Principal_tag_realm_18 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, sname), asn1_Principal_tag_name_17 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, from), asn1_LastReq_val_tag_lr_value_38 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, till), asn1_LastReq_val_tag_lr_value_38 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, rtime), asn1_LastReq_val_tag_lr_value_38 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7), offsetof(struct KDC_REQ_BODY, nonce), asn1_HostAddress_tag_addr_type_21 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8), offsetof(struct KDC_REQ_BODY, etype), asn1_KDC_REQ_BODY_tag_etype_117 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, addresses), asn1_EncTicketPart_tag_caddr_69 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,10)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, enc_authorization_data), asn1_Ticket_tag_enc_part_57 },
/* 12 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,11)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, additional_tickets), asn1_KDC_REQ_BODY_tag_additional_tickets_121 }
};
/* generate_template_type: KDC_REQ_BODY */
const struct asn1_template asn1_KDC_REQ_BODY[] = {
/* 0 */ { 0, sizeof(KDC_REQ_BODY), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_REQ_BODY_tag__108 }
};

int
decode_KDC_REQ_BODY(const unsigned char *p, size_t len, KDC_REQ_BODY *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDC_REQ_BODY, 0|0, p, len, data, size);
}


int
encode_KDC_REQ_BODY(unsigned char *p, size_t len, const KDC_REQ_BODY *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDC_REQ_BODY, p, len, data, size);
    return ret;
}


size_t
length_KDC_REQ_BODY(const KDC_REQ_BODY *data)
{
    return _asn1_length(asn1_KDC_REQ_BODY, data);
}


void
free_KDC_REQ_BODY(KDC_REQ_BODY *data)
{
    _asn1_free_top(asn1_KDC_REQ_BODY, data);
}


int
copy_KDC_REQ_BODY(const KDC_REQ_BODY *from, KDC_REQ_BODY *to)
{
    return _asn1_copy_top(asn1_KDC_REQ_BODY, from, to);
}

extern const struct asn1_template asn1_KDC_REQ[];
/* template_members: KDC_REQ exp exp */
extern const struct asn1_template asn1_KDC_REQ_tag__123[];
/* tsequence: members isstruct: 1 */
/* template_members: KDC_REQ exp exp */
extern const struct asn1_template asn1_KDC_REQ_tag_pvno_124[];
/* generate_template_type: KDC_REQ_tag_pvno_124 */
/* template_members: KDC_REQ exp exp */
extern const struct asn1_template asn1_KDC_REQ_tag_msg_type_125[];
/* generate_template_type: KDC_REQ_tag_msg_type_125 */
const struct asn1_template asn1_KDC_REQ_tag_msg_type_125[] = {
/* 0 */ { 0, sizeof(MESSAGE_TYPE), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_MESSAGE_TYPE }
};
/* template_members: KDC_REQ exp exp */
extern const struct asn1_template asn1_KDC_REQ_tag_padata_126[];
/* generate_template_type: KDC_REQ_tag_padata_126 */
const struct asn1_template asn1_KDC_REQ_tag_padata_126[] = {
/* 0 */ { 0, sizeof(METHOD_DATA), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_METHOD_DATA }
};
/* template_members: KDC_REQ exp exp */
extern const struct asn1_template asn1_KDC_REQ_tag_req_body_127[];
/* generate_template_type: KDC_REQ_tag_req_body_127 */
const struct asn1_template asn1_KDC_REQ_tag_req_body_127[] = {
/* 0 */ { 0, sizeof(KDC_REQ_BODY), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDC_REQ_BODY }
};
/* generate_template_type: KDC_REQ_tag__123 */
const struct asn1_template asn1_KDC_REQ_tag__123[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KDC_REQ, pvno), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KDC_REQ, msg_type), asn1_KDC_REQ_tag_msg_type_125 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ, padata), asn1_KDC_REQ_tag_padata_126 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct KDC_REQ, req_body), asn1_KDC_REQ_tag_req_body_127 }
};
/* generate_template_type: KDC_REQ */
const struct asn1_template asn1_KDC_REQ[] = {
/* 0 */ { 0, sizeof(KDC_REQ), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_REQ_tag__123 }
};

int
decode_KDC_REQ(const unsigned char *p, size_t len, KDC_REQ *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDC_REQ, 0|0, p, len, data, size);
}


int
encode_KDC_REQ(unsigned char *p, size_t len, const KDC_REQ *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDC_REQ, p, len, data, size);
    return ret;
}


size_t
length_KDC_REQ(const KDC_REQ *data)
{
    return _asn1_length(asn1_KDC_REQ, data);
}


void
free_KDC_REQ(KDC_REQ *data)
{
    _asn1_free_top(asn1_KDC_REQ, data);
}


int
copy_KDC_REQ(const KDC_REQ *from, KDC_REQ *to)
{
    return _asn1_copy_top(asn1_KDC_REQ, from, to);
}

extern const struct asn1_template asn1_AS_REQ[];
/* template_members: AS_REQ exp exp */
extern const struct asn1_template asn1_AS_REQ_tag__128[];
/* generate_template_type: AS_REQ_tag__128 */
const struct asn1_template asn1_AS_REQ_tag__128[] = {
/* 0 */ { 0, sizeof(KDC_REQ), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDC_REQ }
};
/* generate_template_type: AS_REQ */
const struct asn1_template asn1_AS_REQ[] = {
/* 0 */ { 0, sizeof(AS_REQ), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,10), 0, asn1_AS_REQ_tag__128 }
};

int
decode_AS_REQ(const unsigned char *p, size_t len, AS_REQ *data, size_t *size)
{
    return _asn1_decode_top(asn1_AS_REQ, 0|0, p, len, data, size);
}


int
encode_AS_REQ(unsigned char *p, size_t len, const AS_REQ *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AS_REQ, p, len, data, size);
    return ret;
}


size_t
length_AS_REQ(const AS_REQ *data)
{
    return _asn1_length(asn1_AS_REQ, data);
}


void
free_AS_REQ(AS_REQ *data)
{
    _asn1_free_top(asn1_AS_REQ, data);
}


int
copy_AS_REQ(const AS_REQ *from, AS_REQ *to)
{
    return _asn1_copy_top(asn1_AS_REQ, from, to);
}

extern const struct asn1_template asn1_TGS_REQ[];
/* template_members: TGS_REQ exp exp */
extern const struct asn1_template asn1_TGS_REQ_tag__129[];
/* generate_template_type: TGS_REQ_tag__129 */
/* generate_template_type: TGS_REQ */
const struct asn1_template asn1_TGS_REQ[] = {
/* 0 */ { 0, sizeof(TGS_REQ), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,12), 0, asn1_AS_REQ_tag__128 }
};

int
decode_TGS_REQ(const unsigned char *p, size_t len, TGS_REQ *data, size_t *size)
{
    return _asn1_decode_top(asn1_TGS_REQ, 0|0, p, len, data, size);
}


int
encode_TGS_REQ(unsigned char *p, size_t len, const TGS_REQ *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TGS_REQ, p, len, data, size);
    return ret;
}


size_t
length_TGS_REQ(const TGS_REQ *data)
{
    return _asn1_length(asn1_TGS_REQ, data);
}


void
free_TGS_REQ(TGS_REQ *data)
{
    _asn1_free_top(asn1_TGS_REQ, data);
}


int
copy_TGS_REQ(const TGS_REQ *from, TGS_REQ *to)
{
    return _asn1_copy_top(asn1_TGS_REQ, from, to);
}

extern const struct asn1_template asn1_PA_ENC_TS_ENC[];
/* template_members: PA_ENC_TS_ENC exp exp */
extern const struct asn1_template asn1_PA_ENC_TS_ENC_tag__130[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_ENC_TS_ENC exp exp */
extern const struct asn1_template asn1_PA_ENC_TS_ENC_tag_patimestamp_131[];
/* generate_template_type: PA_ENC_TS_ENC_tag_patimestamp_131 */
/* template_members: PA_ENC_TS_ENC exp exp */
extern const struct asn1_template asn1_PA_ENC_TS_ENC_tag_pausec_132[];
/* generate_template_type: PA_ENC_TS_ENC_tag_pausec_132 */
/* generate_template_type: PA_ENC_TS_ENC_tag__130 */
const struct asn1_template asn1_PA_ENC_TS_ENC_tag__130[] = {
/* 0 */ { 0, sizeof(struct PA_ENC_TS_ENC), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_ENC_TS_ENC, patimestamp), asn1_LastReq_val_tag_lr_value_38 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_ENC_TS_ENC, pausec), asn1_HostAddress_tag_addr_type_21 }
};
/* generate_template_type: PA_ENC_TS_ENC */
const struct asn1_template asn1_PA_ENC_TS_ENC[] = {
/* 0 */ { 0, sizeof(PA_ENC_TS_ENC), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_ENC_TS_ENC_tag__130 }
};

int
decode_PA_ENC_TS_ENC(const unsigned char *p, size_t len, PA_ENC_TS_ENC *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_ENC_TS_ENC, 0|0, p, len, data, size);
}


int
encode_PA_ENC_TS_ENC(unsigned char *p, size_t len, const PA_ENC_TS_ENC *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_ENC_TS_ENC, p, len, data, size);
    return ret;
}


size_t
length_PA_ENC_TS_ENC(const PA_ENC_TS_ENC *data)
{
    return _asn1_length(asn1_PA_ENC_TS_ENC, data);
}


void
free_PA_ENC_TS_ENC(PA_ENC_TS_ENC *data)
{
    _asn1_free_top(asn1_PA_ENC_TS_ENC, data);
}


int
copy_PA_ENC_TS_ENC(const PA_ENC_TS_ENC *from, PA_ENC_TS_ENC *to)
{
    return _asn1_copy_top(asn1_PA_ENC_TS_ENC, from, to);
}

extern const struct asn1_template asn1_PA_PAC_REQUEST[];
/* template_members: PA_PAC_REQUEST exp exp */
extern const struct asn1_template asn1_PA_PAC_REQUEST_tag__133[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_PAC_REQUEST exp exp */
extern const struct asn1_template asn1_PA_PAC_REQUEST_tag_include_pac_134[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_include_pac_135[];
/* generate_template_type: int_tag_include_pac_135 */
const struct asn1_template asn1_int_tag_include_pac_135[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_BOOLEAN), 0, NULL }
};
/* generate_template_type: PA_PAC_REQUEST_tag_include_pac_134 */
const struct asn1_template asn1_PA_PAC_REQUEST_tag_include_pac_134[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean), 0, asn1_int_tag_include_pac_135 }
};
/* generate_template_type: PA_PAC_REQUEST_tag__133 */
const struct asn1_template asn1_PA_PAC_REQUEST_tag__133[] = {
/* 0 */ { 0, sizeof(struct PA_PAC_REQUEST), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_PAC_REQUEST, include_pac), asn1_PA_PAC_REQUEST_tag_include_pac_134 }
};
/* generate_template_type: PA_PAC_REQUEST */
const struct asn1_template asn1_PA_PAC_REQUEST[] = {
/* 0 */ { 0, sizeof(PA_PAC_REQUEST), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_PAC_REQUEST_tag__133 }
};

int
decode_PA_PAC_REQUEST(const unsigned char *p, size_t len, PA_PAC_REQUEST *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_PAC_REQUEST, 0|0, p, len, data, size);
}


int
encode_PA_PAC_REQUEST(unsigned char *p, size_t len, const PA_PAC_REQUEST *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_PAC_REQUEST, p, len, data, size);
    return ret;
}


size_t
length_PA_PAC_REQUEST(const PA_PAC_REQUEST *data)
{
    return _asn1_length(asn1_PA_PAC_REQUEST, data);
}


void
free_PA_PAC_REQUEST(PA_PAC_REQUEST *data)
{
    _asn1_free_top(asn1_PA_PAC_REQUEST, data);
}


int
copy_PA_PAC_REQUEST(const PA_PAC_REQUEST *from, PA_PAC_REQUEST *to)
{
    return _asn1_copy_top(asn1_PA_PAC_REQUEST, from, to);
}

extern const struct asn1_template asn1_KRB5_PFS_GROUP[];
/* template_members: KRB5_PFS_GROUP exp exp */
extern const struct asn1_template asn1_KRB5_PFS_GROUP_tag__136[];
/* generate_template_type: KRB5_PFS_GROUP_tag__136 */
/* generate_template_type: KRB5_PFS_GROUP */
const struct asn1_template asn1_KRB5_PFS_GROUP[] = {
/* 0 */ { 0, sizeof(KRB5_PFS_GROUP), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int
decode_KRB5_PFS_GROUP(const unsigned char *p, size_t len, KRB5_PFS_GROUP *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_PFS_GROUP, 0|0, p, len, data, size);
}


int
encode_KRB5_PFS_GROUP(unsigned char *p, size_t len, const KRB5_PFS_GROUP *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_PFS_GROUP, p, len, data, size);
    return ret;
}


size_t
length_KRB5_PFS_GROUP(const KRB5_PFS_GROUP *data)
{
    return _asn1_length(asn1_KRB5_PFS_GROUP, data);
}


void
free_KRB5_PFS_GROUP(KRB5_PFS_GROUP *data)
{
    _asn1_free_top(asn1_KRB5_PFS_GROUP, data);
}


int
copy_KRB5_PFS_GROUP(const KRB5_PFS_GROUP *from, KRB5_PFS_GROUP *to)
{
    return _asn1_copy_top(asn1_KRB5_PFS_GROUP, from, to);
}

extern const struct asn1_template asn1_KRB5_PFS_SELECTION[];
/* template_members: KRB5_PFS_SELECTION exp exp */
extern const struct asn1_template asn1_KRB5_PFS_SELECTION_tag__137[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB5_PFS_SELECTION exp exp */
extern const struct asn1_template asn1_KRB5_PFS_SELECTION_tag_group_138[];
/* generate_template_type: KRB5_PFS_SELECTION_tag_group_138 */
const struct asn1_template asn1_KRB5_PFS_SELECTION_tag_group_138[] = {
/* 0 */ { 0, sizeof(KRB5_PFS_GROUP), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KRB5_PFS_GROUP }
};
/* template_members: KRB5_PFS_SELECTION exp exp */
extern const struct asn1_template asn1_KRB5_PFS_SELECTION_tag_public_key_139[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_public_key_140[];
/* generate_template_type: heim_octet_string_tag_public_key_140 */
/* generate_template_type: KRB5_PFS_SELECTION_tag_public_key_139 */
/* generate_template_type: KRB5_PFS_SELECTION_tag__137 */
const struct asn1_template asn1_KRB5_PFS_SELECTION_tag__137[] = {
/* 0 */ { 0, sizeof(struct KRB5_PFS_SELECTION), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB5_PFS_SELECTION, group), asn1_KRB5_PFS_SELECTION_tag_group_138 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB5_PFS_SELECTION, public_key), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: KRB5_PFS_SELECTION */
const struct asn1_template asn1_KRB5_PFS_SELECTION[] = {
/* 0 */ { 0, sizeof(KRB5_PFS_SELECTION), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5_PFS_SELECTION_tag__137 }
};

int
decode_KRB5_PFS_SELECTION(const unsigned char *p, size_t len, KRB5_PFS_SELECTION *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_PFS_SELECTION, 0|0, p, len, data, size);
}


int
encode_KRB5_PFS_SELECTION(unsigned char *p, size_t len, const KRB5_PFS_SELECTION *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_PFS_SELECTION, p, len, data, size);
    return ret;
}


size_t
length_KRB5_PFS_SELECTION(const KRB5_PFS_SELECTION *data)
{
    return _asn1_length(asn1_KRB5_PFS_SELECTION, data);
}


void
free_KRB5_PFS_SELECTION(KRB5_PFS_SELECTION *data)
{
    _asn1_free_top(asn1_KRB5_PFS_SELECTION, data);
}


int
copy_KRB5_PFS_SELECTION(const KRB5_PFS_SELECTION *from, KRB5_PFS_SELECTION *to)
{
    return _asn1_copy_top(asn1_KRB5_PFS_SELECTION, from, to);
}

extern const struct asn1_template asn1_KRB5_PFS_SELECTIONS[];
/* template_members: KRB5_PFS_SELECTIONS exp exp */
extern const struct asn1_template asn1_KRB5_PFS_SELECTIONS_tag__141[];
extern const struct asn1_template asn1_KRB5_PFS_SELECTION_seofTstruct_11[];
/* generate_template_type: KRB5_PFS_SELECTION_seofTstruct_11 */
const struct asn1_template asn1_KRB5_PFS_SELECTION_seofTstruct_11[] = {
/* 0 */ { 0, sizeof(KRB5_PFS_SELECTION), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KRB5_PFS_SELECTION }
};
/* generate_template_type: KRB5_PFS_SELECTIONS_tag__141 */
const struct asn1_template asn1_KRB5_PFS_SELECTIONS_tag__141[] = {
/* 0 */ { 0, sizeof(KRB5_PFS_SELECTION), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_KRB5_PFS_SELECTION_seofTstruct_11 }
};
/* generate_template_type: KRB5_PFS_SELECTIONS */
const struct asn1_template asn1_KRB5_PFS_SELECTIONS[] = {
/* 0 */ { 0, sizeof(KRB5_PFS_SELECTIONS), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5_PFS_SELECTIONS_tag__141 }
};

int
decode_KRB5_PFS_SELECTIONS(const unsigned char *p, size_t len, KRB5_PFS_SELECTIONS *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_PFS_SELECTIONS, 0|0, p, len, data, size);
}


int
encode_KRB5_PFS_SELECTIONS(unsigned char *p, size_t len, const KRB5_PFS_SELECTIONS *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_PFS_SELECTIONS, p, len, data, size);
    return ret;
}


size_t
length_KRB5_PFS_SELECTIONS(const KRB5_PFS_SELECTIONS *data)
{
    return _asn1_length(asn1_KRB5_PFS_SELECTIONS, data);
}


void
free_KRB5_PFS_SELECTIONS(KRB5_PFS_SELECTIONS *data)
{
    _asn1_free_top(asn1_KRB5_PFS_SELECTIONS, data);
}


int
copy_KRB5_PFS_SELECTIONS(const KRB5_PFS_SELECTIONS *from, KRB5_PFS_SELECTIONS *to)
{
    return _asn1_copy_top(asn1_KRB5_PFS_SELECTIONS, from, to);
}

int ASN1CALL
add_KRB5_PFS_SELECTIONS(KRB5_PFS_SELECTIONS *data, const KRB5_PFS_SELECTION *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_KRB5_PFS_SELECTION(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_KRB5_PFS_SELECTIONS(KRB5_PFS_SELECTIONS *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_KRB5_PFS_SELECTION(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

extern const struct asn1_template asn1_KRB5_PFS_PROPOSE[];
/* template_members: KRB5_PFS_PROPOSE exp exp */
extern const struct asn1_template asn1_KRB5_PFS_PROPOSE_tag__142[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB5_PFS_PROPOSE exp exp */
extern const struct asn1_template asn1_KRB5_PFS_PROPOSE_tag_checksum_143[];
/* generate_template_type: KRB5_PFS_PROPOSE_tag_checksum_143 */
/* template_members: KRB5_PFS_PROPOSE exp exp */
extern const struct asn1_template asn1_KRB5_PFS_PROPOSE_tag_selections_144[];
/* generate_template_type: KRB5_PFS_PROPOSE_tag_selections_144 */
const struct asn1_template asn1_KRB5_PFS_PROPOSE_tag_selections_144[] = {
/* 0 */ { 0, sizeof(KRB5_PFS_SELECTIONS), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KRB5_PFS_SELECTIONS }
};
/* generate_template_type: KRB5_PFS_PROPOSE_tag__142 */
const struct asn1_template asn1_KRB5_PFS_PROPOSE_tag__142[] = {
/* 0 */ { 0, sizeof(struct KRB5_PFS_PROPOSE), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct KRB5_PFS_PROPOSE, checksum), asn1_Authenticator_tag_cksum_80 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB5_PFS_PROPOSE, selections), asn1_KRB5_PFS_PROPOSE_tag_selections_144 }
};
/* generate_template_type: KRB5_PFS_PROPOSE */
const struct asn1_template asn1_KRB5_PFS_PROPOSE[] = {
/* 0 */ { 0, sizeof(KRB5_PFS_PROPOSE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5_PFS_PROPOSE_tag__142 }
};

int
decode_KRB5_PFS_PROPOSE(const unsigned char *p, size_t len, KRB5_PFS_PROPOSE *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_PFS_PROPOSE, 0|0, p, len, data, size);
}


int
encode_KRB5_PFS_PROPOSE(unsigned char *p, size_t len, const KRB5_PFS_PROPOSE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_PFS_PROPOSE, p, len, data, size);
    return ret;
}


size_t
length_KRB5_PFS_PROPOSE(const KRB5_PFS_PROPOSE *data)
{
    return _asn1_length(asn1_KRB5_PFS_PROPOSE, data);
}


void
free_KRB5_PFS_PROPOSE(KRB5_PFS_PROPOSE *data)
{
    _asn1_free_top(asn1_KRB5_PFS_PROPOSE, data);
}


int
copy_KRB5_PFS_PROPOSE(const KRB5_PFS_PROPOSE *from, KRB5_PFS_PROPOSE *to)
{
    return _asn1_copy_top(asn1_KRB5_PFS_PROPOSE, from, to);
}

extern const struct asn1_template asn1_KRB5_PFS_ACCEPT[];
/* template_members: KRB5_PFS_ACCEPT exp exp */
extern const struct asn1_template asn1_KRB5_PFS_ACCEPT_tag__145[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB5_PFS_ACCEPT exp exp */
extern const struct asn1_template asn1_KRB5_PFS_ACCEPT_tag_checksum_146[];
/* generate_template_type: KRB5_PFS_ACCEPT_tag_checksum_146 */
/* template_members: KRB5_PFS_ACCEPT exp exp */
extern const struct asn1_template asn1_KRB5_PFS_ACCEPT_tag_selection_147[];
/* generate_template_type: KRB5_PFS_ACCEPT_tag_selection_147 */
/* generate_template_type: KRB5_PFS_ACCEPT_tag__145 */
const struct asn1_template asn1_KRB5_PFS_ACCEPT_tag__145[] = {
/* 0 */ { 0, sizeof(struct KRB5_PFS_ACCEPT), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct KRB5_PFS_ACCEPT, checksum), asn1_Authenticator_tag_cksum_80 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB5_PFS_ACCEPT, selection), asn1_KRB5_PFS_SELECTION_seofTstruct_11 }
};
/* generate_template_type: KRB5_PFS_ACCEPT */
const struct asn1_template asn1_KRB5_PFS_ACCEPT[] = {
/* 0 */ { 0, sizeof(KRB5_PFS_ACCEPT), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5_PFS_ACCEPT_tag__145 }
};

int
decode_KRB5_PFS_ACCEPT(const unsigned char *p, size_t len, KRB5_PFS_ACCEPT *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_PFS_ACCEPT, 0|0, p, len, data, size);
}


int
encode_KRB5_PFS_ACCEPT(unsigned char *p, size_t len, const KRB5_PFS_ACCEPT *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_PFS_ACCEPT, p, len, data, size);
    return ret;
}


size_t
length_KRB5_PFS_ACCEPT(const KRB5_PFS_ACCEPT *data)
{
    return _asn1_length(asn1_KRB5_PFS_ACCEPT, data);
}


void
free_KRB5_PFS_ACCEPT(KRB5_PFS_ACCEPT *data)
{
    _asn1_free_top(asn1_KRB5_PFS_ACCEPT, data);
}


int
copy_KRB5_PFS_ACCEPT(const KRB5_PFS_ACCEPT *from, KRB5_PFS_ACCEPT *to)
{
    return _asn1_copy_top(asn1_KRB5_PFS_ACCEPT, from, to);
}

extern const struct asn1_template asn1_KRB5_PFS_ERROR[];
/* template_members: KRB5_PFS_ERROR exp exp */
extern const struct asn1_template asn1_KRB5_PFS_ERROR_tag__148[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB5_PFS_ERROR exp exp */
extern const struct asn1_template asn1_KRB5_PFS_ERROR_tag_groups_149[];
/* template_members: KRB5_PFS_ERROR exp exp */
extern const struct asn1_template asn1_KRB5_PFS_ERROR_tag_groups_150[];
extern const struct asn1_template asn1_KRB5_PFS_ERROR_groups_12[];
/* generate_template_type: KRB5_PFS_ERROR_groups_12 */
/* generate_template_type: KRB5_PFS_ERROR_tag_groups_150 */
const struct asn1_template asn1_KRB5_PFS_ERROR_tag_groups_150[] = {
/* 0 */ { 0, sizeof(struct KRB5_PFS_ERROR), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_KRB5_PFS_SELECTION_tag_group_138 }
};
/* generate_template_type: KRB5_PFS_ERROR_tag_groups_149 */
const struct asn1_template asn1_KRB5_PFS_ERROR_tag_groups_149[] = {
/* 0 */ { 0, sizeof(struct KRB5_PFS_ERROR), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5_PFS_ERROR_tag_groups_150 }
};
/* generate_template_type: KRB5_PFS_ERROR_tag__148 */
const struct asn1_template asn1_KRB5_PFS_ERROR_tag__148[] = {
/* 0 */ { 0, sizeof(struct KRB5_PFS_ERROR), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB5_PFS_ERROR, groups), asn1_KRB5_PFS_ERROR_tag_groups_149 }
};
/* generate_template_type: KRB5_PFS_ERROR */
const struct asn1_template asn1_KRB5_PFS_ERROR[] = {
/* 0 */ { 0, sizeof(KRB5_PFS_ERROR), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5_PFS_ERROR_tag__148 }
};

int
decode_KRB5_PFS_ERROR(const unsigned char *p, size_t len, KRB5_PFS_ERROR *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_PFS_ERROR, 0|0, p, len, data, size);
}


int
encode_KRB5_PFS_ERROR(unsigned char *p, size_t len, const KRB5_PFS_ERROR *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_PFS_ERROR, p, len, data, size);
    return ret;
}


size_t
length_KRB5_PFS_ERROR(const KRB5_PFS_ERROR *data)
{
    return _asn1_length(asn1_KRB5_PFS_ERROR, data);
}


void
free_KRB5_PFS_ERROR(KRB5_PFS_ERROR *data)
{
    _asn1_free_top(asn1_KRB5_PFS_ERROR, data);
}


int
copy_KRB5_PFS_ERROR(const KRB5_PFS_ERROR *from, KRB5_PFS_ERROR *to)
{
    return _asn1_copy_top(asn1_KRB5_PFS_ERROR, from, to);
}

extern const struct asn1_template asn1_PROV_SRV_LOCATION[];
/* template_members: PROV_SRV_LOCATION exp exp */
extern const struct asn1_template asn1_PROV_SRV_LOCATION_tag__151[];
/* generate_template_type: PROV_SRV_LOCATION_tag__151 */
/* generate_template_type: PROV_SRV_LOCATION */
const struct asn1_template asn1_PROV_SRV_LOCATION[] = {
/* 0 */ { 0, sizeof(PROV_SRV_LOCATION), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralString), 0, asn1_KerberosString_tag__9 }
};

int
decode_PROV_SRV_LOCATION(const unsigned char *p, size_t len, PROV_SRV_LOCATION *data, size_t *size)
{
    return _asn1_decode_top(asn1_PROV_SRV_LOCATION, 0|0, p, len, data, size);
}


int
encode_PROV_SRV_LOCATION(unsigned char *p, size_t len, const PROV_SRV_LOCATION *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PROV_SRV_LOCATION, p, len, data, size);
    return ret;
}


size_t
length_PROV_SRV_LOCATION(const PROV_SRV_LOCATION *data)
{
    return _asn1_length(asn1_PROV_SRV_LOCATION, data);
}


void
free_PROV_SRV_LOCATION(PROV_SRV_LOCATION *data)
{
    _asn1_free_top(asn1_PROV_SRV_LOCATION, data);
}


int
copy_PROV_SRV_LOCATION(const PROV_SRV_LOCATION *from, PROV_SRV_LOCATION *to)
{
    return _asn1_copy_top(asn1_PROV_SRV_LOCATION, from, to);
}

extern const struct asn1_template asn1_KDC_REP[];
/* template_members: KDC_REP exp exp */
extern const struct asn1_template asn1_KDC_REP_tag__152[];
/* tsequence: members isstruct: 1 */
/* template_members: KDC_REP exp exp */
extern const struct asn1_template asn1_KDC_REP_tag_pvno_153[];
/* generate_template_type: KDC_REP_tag_pvno_153 */
/* template_members: KDC_REP exp exp */
extern const struct asn1_template asn1_KDC_REP_tag_msg_type_154[];
/* generate_template_type: KDC_REP_tag_msg_type_154 */
/* template_members: KDC_REP exp exp */
extern const struct asn1_template asn1_KDC_REP_tag_padata_155[];
/* generate_template_type: KDC_REP_tag_padata_155 */
/* template_members: KDC_REP exp exp */
extern const struct asn1_template asn1_KDC_REP_tag_crealm_156[];
/* generate_template_type: KDC_REP_tag_crealm_156 */
/* template_members: KDC_REP exp exp */
extern const struct asn1_template asn1_KDC_REP_tag_cname_157[];
/* generate_template_type: KDC_REP_tag_cname_157 */
/* template_members: KDC_REP exp exp */
extern const struct asn1_template asn1_KDC_REP_tag_ticket_158[];
/* generate_template_type: KDC_REP_tag_ticket_158 */
/* template_members: KDC_REP exp exp */
extern const struct asn1_template asn1_KDC_REP_tag_enc_part_159[];
/* generate_template_type: KDC_REP_tag_enc_part_159 */
/* generate_template_type: KDC_REP_tag__152 */
const struct asn1_template asn1_KDC_REP_tag__152[] = {
/* 0 */ { 0, sizeof(struct KDC_REP), ((void *)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDC_REP, pvno), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KDC_REP, msg_type), asn1_KDC_REQ_tag_msg_type_125 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REP, padata), asn1_KDC_REQ_tag_padata_126 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KDC_REP, crealm), asn1_Principal_tag_realm_18 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct KDC_REP, cname), asn1_Principal_tag_name_17 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct KDC_REP, ticket), asn1_KDC_REQ_BODY_additional_tickets_10 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct KDC_REP, enc_part), asn1_Ticket_tag_enc_part_57 }
};
/* generate_template_type: KDC_REP */
const struct asn1_template asn1_KDC_REP[] = {
/* 0 */ { 0, sizeof(KDC_REP), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_REP_tag__152 }
};

int
decode_KDC_REP(const unsigned char *p, size_t len, KDC_REP *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDC_REP, 0|0, p, len, data, size);
}


int
encode_KDC_REP(unsigned char *p, size_t len, const KDC_REP *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDC_REP, p, len, data, size);
    return ret;
}


size_t
length_KDC_REP(const KDC_REP *data)
{
    return _asn1_length(asn1_KDC_REP, data);
}


void
free_KDC_REP(KDC_REP *data)
{
    _asn1_free_top(asn1_KDC_REP, data);
}


int
copy_KDC_REP(const KDC_REP *from, KDC_REP *to)
{
    return _asn1_copy_top(asn1_KDC_REP, from, to);
}

extern const struct asn1_template asn1_AS_REP[];
/* template_members: AS_REP exp exp */
extern const struct asn1_template asn1_AS_REP_tag__160[];
/* generate_template_type: AS_REP_tag__160 */
const struct asn1_template asn1_AS_REP_tag__160[] = {
/* 0 */ { 0, sizeof(KDC_REP), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDC_REP }
};
/* generate_template_type: AS_REP */
const struct asn1_template asn1_AS_REP[] = {
/* 0 */ { 0, sizeof(AS_REP), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,11), 0, asn1_AS_REP_tag__160 }
};

int
decode_AS_REP(const unsigned char *p, size_t len, AS_REP *data, size_t *size)
{
    return _asn1_decode_top(asn1_AS_REP, 0|0, p, len, data, size);
}


int
encode_AS_REP(unsigned char *p, size_t len, const AS_REP *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AS_REP, p, len, data, size);
    return ret;
}


size_t
length_AS_REP(const AS_REP *data)
{
    return _asn1_length(asn1_AS_REP, data);
}


void
free_AS_REP(AS_REP *data)
{
    _asn1_free_top(asn1_AS_REP, data);
}


int
copy_AS_REP(const AS_REP *from, AS_REP *to)
{
    return _asn1_copy_top(asn1_AS_REP, from, to);
}

extern const struct asn1_template asn1_TGS_REP[];
/* template_members: TGS_REP exp exp */
extern const struct asn1_template asn1_TGS_REP_tag__161[];
/* generate_template_type: TGS_REP_tag__161 */
/* generate_template_type: TGS_REP */
const struct asn1_template asn1_TGS_REP[] = {
/* 0 */ { 0, sizeof(TGS_REP), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,13), 0, asn1_AS_REP_tag__160 }
};

int
decode_TGS_REP(const unsigned char *p, size_t len, TGS_REP *data, size_t *size)
{
    return _asn1_decode_top(asn1_TGS_REP, 0|0, p, len, data, size);
}


int
encode_TGS_REP(unsigned char *p, size_t len, const TGS_REP *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TGS_REP, p, len, data, size);
    return ret;
}


size_t
length_TGS_REP(const TGS_REP *data)
{
    return _asn1_length(asn1_TGS_REP, data);
}


void
free_TGS_REP(TGS_REP *data)
{
    _asn1_free_top(asn1_TGS_REP, data);
}


int
copy_TGS_REP(const TGS_REP *from, TGS_REP *to)
{
    return _asn1_copy_top(asn1_TGS_REP, from, to);
}

extern const struct asn1_template asn1_EncKDCRepPart[];
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag__162[];
/* tsequence: members isstruct: 1 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_key_163[];
/* generate_template_type: EncKDCRepPart_tag_key_163 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_last_req_164[];
/* generate_template_type: EncKDCRepPart_tag_last_req_164 */
const struct asn1_template asn1_EncKDCRepPart_tag_last_req_164[] = {
/* 0 */ { 0, sizeof(LastReq), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_LastReq }
};
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_nonce_165[];
/* generate_template_type: EncKDCRepPart_tag_nonce_165 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_key_expiration_166[];
/* generate_template_type: EncKDCRepPart_tag_key_expiration_166 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_flags_167[];
/* generate_template_type: EncKDCRepPart_tag_flags_167 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_authtime_168[];
/* generate_template_type: EncKDCRepPart_tag_authtime_168 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_starttime_169[];
/* generate_template_type: EncKDCRepPart_tag_starttime_169 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_endtime_170[];
/* generate_template_type: EncKDCRepPart_tag_endtime_170 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_renew_till_171[];
/* generate_template_type: EncKDCRepPart_tag_renew_till_171 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_srealm_172[];
/* generate_template_type: EncKDCRepPart_tag_srealm_172 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_sname_173[];
/* generate_template_type: EncKDCRepPart_tag_sname_173 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_caddr_174[];
/* generate_template_type: EncKDCRepPart_tag_caddr_174 */
/* template_members: EncKDCRepPart exp exp */
extern const struct asn1_template asn1_EncKDCRepPart_tag_encrypted_pa_data_175[];
/* generate_template_type: EncKDCRepPart_tag_encrypted_pa_data_175 */
/* generate_template_type: EncKDCRepPart_tag__162 */
const struct asn1_template asn1_EncKDCRepPart_tag__162[] = {
/* 0 */ { 0, sizeof(struct EncKDCRepPart), ((void *)13) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncKDCRepPart, key), asn1_EncTicketPart_tag_key_61 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct EncKDCRepPart, last_req), asn1_EncKDCRepPart_tag_last_req_164 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct EncKDCRepPart, nonce), asn1_HostAddress_tag_addr_type_21 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct EncKDCRepPart, key_expiration), asn1_LastReq_val_tag_lr_value_38 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct EncKDCRepPart, flags), asn1_EncTicketPart_tag_flags_60 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct EncKDCRepPart, authtime), asn1_LastReq_val_tag_lr_value_38 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct EncKDCRepPart, starttime), asn1_LastReq_val_tag_lr_value_38 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7), offsetof(struct EncKDCRepPart, endtime), asn1_LastReq_val_tag_lr_value_38 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8)|A1_FLAG_OPTIONAL, offsetof(struct EncKDCRepPart, renew_till), asn1_LastReq_val_tag_lr_value_38 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9), offsetof(struct EncKDCRepPart, srealm), asn1_Principal_tag_realm_18 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,10), offsetof(struct EncKDCRepPart, sname), asn1_Principal_tag_name_17 },
/* 12 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,11)|A1_FLAG_OPTIONAL, offsetof(struct EncKDCRepPart, caddr), asn1_EncTicketPart_tag_caddr_69 },
/* 13 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,12)|A1_FLAG_OPTIONAL, offsetof(struct EncKDCRepPart, encrypted_pa_data), asn1_KDC_REQ_tag_padata_126 }
};
/* generate_template_type: EncKDCRepPart */
const struct asn1_template asn1_EncKDCRepPart[] = {
/* 0 */ { 0, sizeof(EncKDCRepPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncKDCRepPart_tag__162 }
};

int
decode_EncKDCRepPart(const unsigned char *p, size_t len, EncKDCRepPart *data, size_t *size)
{
    return _asn1_decode_top(asn1_EncKDCRepPart, 0|0, p, len, data, size);
}


int
encode_EncKDCRepPart(unsigned char *p, size_t len, const EncKDCRepPart *data, size_t *size)
{
    int ret = _asn1_encode(asn1_EncKDCRepPart, p, len, data, size);
    return ret;
}


size_t
length_EncKDCRepPart(const EncKDCRepPart *data)
{
    return _asn1_length(asn1_EncKDCRepPart, data);
}


void
free_EncKDCRepPart(EncKDCRepPart *data)
{
    _asn1_free_top(asn1_EncKDCRepPart, data);
}


int
copy_EncKDCRepPart(const EncKDCRepPart *from, EncKDCRepPart *to)
{
    return _asn1_copy_top(asn1_EncKDCRepPart, from, to);
}

extern const struct asn1_template asn1_EncASRepPart[];
/* template_members: EncASRepPart exp exp */
extern const struct asn1_template asn1_EncASRepPart_tag__176[];
/* generate_template_type: EncASRepPart_tag__176 */
const struct asn1_template asn1_EncASRepPart_tag__176[] = {
/* 0 */ { 0, sizeof(EncKDCRepPart), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EncKDCRepPart }
};
/* generate_template_type: EncASRepPart */
const struct asn1_template asn1_EncASRepPart[] = {
/* 0 */ { 0, sizeof(EncASRepPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,25), 0, asn1_EncASRepPart_tag__176 }
};

int
decode_EncASRepPart(const unsigned char *p, size_t len, EncASRepPart *data, size_t *size)
{
    return _asn1_decode_top(asn1_EncASRepPart, 0|0, p, len, data, size);
}


int
encode_EncASRepPart(unsigned char *p, size_t len, const EncASRepPart *data, size_t *size)
{
    int ret = _asn1_encode(asn1_EncASRepPart, p, len, data, size);
    return ret;
}


size_t
length_EncASRepPart(const EncASRepPart *data)
{
    return _asn1_length(asn1_EncASRepPart, data);
}


void
free_EncASRepPart(EncASRepPart *data)
{
    _asn1_free_top(asn1_EncASRepPart, data);
}


int
copy_EncASRepPart(const EncASRepPart *from, EncASRepPart *to)
{
    return _asn1_copy_top(asn1_EncASRepPart, from, to);
}

extern const struct asn1_template asn1_EncTGSRepPart[];
/* template_members: EncTGSRepPart exp exp */
extern const struct asn1_template asn1_EncTGSRepPart_tag__177[];
/* generate_template_type: EncTGSRepPart_tag__177 */
/* generate_template_type: EncTGSRepPart */
const struct asn1_template asn1_EncTGSRepPart[] = {
/* 0 */ { 0, sizeof(EncTGSRepPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,26), 0, asn1_EncASRepPart_tag__176 }
};

int
decode_EncTGSRepPart(const unsigned char *p, size_t len, EncTGSRepPart *data, size_t *size)
{
    return _asn1_decode_top(asn1_EncTGSRepPart, 0|0, p, len, data, size);
}


int
encode_EncTGSRepPart(unsigned char *p, size_t len, const EncTGSRepPart *data, size_t *size)
{
    int ret = _asn1_encode(asn1_EncTGSRepPart, p, len, data, size);
    return ret;
}


size_t
length_EncTGSRepPart(const EncTGSRepPart *data)
{
    return _asn1_length(asn1_EncTGSRepPart, data);
}


void
free_EncTGSRepPart(EncTGSRepPart *data)
{
    _asn1_free_top(asn1_EncTGSRepPart, data);
}


int
copy_EncTGSRepPart(const EncTGSRepPart *from, EncTGSRepPart *to)
{
    return _asn1_copy_top(asn1_EncTGSRepPart, from, to);
}

extern const struct asn1_template asn1_AP_REQ[];
/* template_members: AP_REQ exp exp */
extern const struct asn1_template asn1_AP_REQ_tag__178[];
/* template_members: AP_REQ exp exp */
extern const struct asn1_template asn1_AP_REQ_tag__179[];
/* tsequence: members isstruct: 1 */
/* template_members: AP_REQ exp exp */
extern const struct asn1_template asn1_AP_REQ_tag_pvno_180[];
/* generate_template_type: AP_REQ_tag_pvno_180 */
/* template_members: AP_REQ exp exp */
extern const struct asn1_template asn1_AP_REQ_tag_msg_type_181[];
/* generate_template_type: AP_REQ_tag_msg_type_181 */
/* template_members: AP_REQ exp exp */
extern const struct asn1_template asn1_AP_REQ_tag_ap_options_182[];
/* generate_template_type: AP_REQ_tag_ap_options_182 */
const struct asn1_template asn1_AP_REQ_tag_ap_options_182[] = {
/* 0 */ { 0, sizeof(APOptions), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_APOptions }
};
/* template_members: AP_REQ exp exp */
extern const struct asn1_template asn1_AP_REQ_tag_ticket_183[];
/* generate_template_type: AP_REQ_tag_ticket_183 */
/* template_members: AP_REQ exp exp */
extern const struct asn1_template asn1_AP_REQ_tag_authenticator_184[];
/* generate_template_type: AP_REQ_tag_authenticator_184 */
/* generate_template_type: AP_REQ_tag__179 */
const struct asn1_template asn1_AP_REQ_tag__179[] = {
/* 0 */ { 0, sizeof(struct AP_REQ), ((void *)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AP_REQ, pvno), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct AP_REQ, msg_type), asn1_KDC_REQ_tag_msg_type_125 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct AP_REQ, ap_options), asn1_AP_REQ_tag_ap_options_182 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct AP_REQ, ticket), asn1_KDC_REQ_BODY_additional_tickets_10 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct AP_REQ, authenticator), asn1_Ticket_tag_enc_part_57 }
};
/* generate_template_type: AP_REQ_tag__178 */
const struct asn1_template asn1_AP_REQ_tag__178[] = {
/* 0 */ { 0, sizeof(struct AP_REQ), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AP_REQ_tag__179 }
};
/* generate_template_type: AP_REQ */
const struct asn1_template asn1_AP_REQ[] = {
/* 0 */ { 0, sizeof(AP_REQ), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,14), 0, asn1_AP_REQ_tag__178 }
};

int
decode_AP_REQ(const unsigned char *p, size_t len, AP_REQ *data, size_t *size)
{
    return _asn1_decode_top(asn1_AP_REQ, 0|0, p, len, data, size);
}


int
encode_AP_REQ(unsigned char *p, size_t len, const AP_REQ *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AP_REQ, p, len, data, size);
    return ret;
}


size_t
length_AP_REQ(const AP_REQ *data)
{
    return _asn1_length(asn1_AP_REQ, data);
}


void
free_AP_REQ(AP_REQ *data)
{
    _asn1_free_top(asn1_AP_REQ, data);
}


int
copy_AP_REQ(const AP_REQ *from, AP_REQ *to)
{
    return _asn1_copy_top(asn1_AP_REQ, from, to);
}

extern const struct asn1_template asn1_AP_REP[];
/* template_members: AP_REP exp exp */
extern const struct asn1_template asn1_AP_REP_tag__185[];
/* template_members: AP_REP exp exp */
extern const struct asn1_template asn1_AP_REP_tag__186[];
/* tsequence: members isstruct: 1 */
/* template_members: AP_REP exp exp */
extern const struct asn1_template asn1_AP_REP_tag_pvno_187[];
/* generate_template_type: AP_REP_tag_pvno_187 */
/* template_members: AP_REP exp exp */
extern const struct asn1_template asn1_AP_REP_tag_msg_type_188[];
/* generate_template_type: AP_REP_tag_msg_type_188 */
/* template_members: AP_REP exp exp */
extern const struct asn1_template asn1_AP_REP_tag_enc_part_189[];
/* generate_template_type: AP_REP_tag_enc_part_189 */
/* template_members: AP_REP exp exp */
extern const struct asn1_template asn1_AP_REP_tag_pfs_190[];
/* generate_template_type: AP_REP_tag_pfs_190 */
const struct asn1_template asn1_AP_REP_tag_pfs_190[] = {
/* 0 */ { 0, sizeof(KRB5_PFS_ACCEPT), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KRB5_PFS_ACCEPT }
};
/* generate_template_type: AP_REP_tag__186 */
const struct asn1_template asn1_AP_REP_tag__186[] = {
/* 0 */ { 0, sizeof(struct AP_REP), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AP_REP, pvno), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct AP_REP, msg_type), asn1_KDC_REQ_tag_msg_type_125 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct AP_REP, enc_part), asn1_Ticket_tag_enc_part_57 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct AP_REP, pfs), asn1_AP_REP_tag_pfs_190 }
};
/* generate_template_type: AP_REP_tag__185 */
const struct asn1_template asn1_AP_REP_tag__185[] = {
/* 0 */ { 0, sizeof(struct AP_REP), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AP_REP_tag__186 }
};
/* generate_template_type: AP_REP */
const struct asn1_template asn1_AP_REP[] = {
/* 0 */ { 0, sizeof(AP_REP), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,15), 0, asn1_AP_REP_tag__185 }
};

int
decode_AP_REP(const unsigned char *p, size_t len, AP_REP *data, size_t *size)
{
    return _asn1_decode_top(asn1_AP_REP, 0|0, p, len, data, size);
}


int
encode_AP_REP(unsigned char *p, size_t len, const AP_REP *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AP_REP, p, len, data, size);
    return ret;
}


size_t
length_AP_REP(const AP_REP *data)
{
    return _asn1_length(asn1_AP_REP, data);
}


void
free_AP_REP(AP_REP *data)
{
    _asn1_free_top(asn1_AP_REP, data);
}


int
copy_AP_REP(const AP_REP *from, AP_REP *to)
{
    return _asn1_copy_top(asn1_AP_REP, from, to);
}

extern const struct asn1_template asn1_EncAPRepPart[];
/* template_members: EncAPRepPart exp exp */
extern const struct asn1_template asn1_EncAPRepPart_tag__191[];
/* template_members: EncAPRepPart exp exp */
extern const struct asn1_template asn1_EncAPRepPart_tag__192[];
/* tsequence: members isstruct: 1 */
/* template_members: EncAPRepPart exp exp */
extern const struct asn1_template asn1_EncAPRepPart_tag_ctime_193[];
/* generate_template_type: EncAPRepPart_tag_ctime_193 */
/* template_members: EncAPRepPart exp exp */
extern const struct asn1_template asn1_EncAPRepPart_tag_cusec_194[];
/* generate_template_type: EncAPRepPart_tag_cusec_194 */
/* template_members: EncAPRepPart exp exp */
extern const struct asn1_template asn1_EncAPRepPart_tag_subkey_195[];
/* generate_template_type: EncAPRepPart_tag_subkey_195 */
/* template_members: EncAPRepPart exp exp */
extern const struct asn1_template asn1_EncAPRepPart_tag_seq_number_196[];
/* generate_template_type: EncAPRepPart_tag_seq_number_196 */
/* generate_template_type: EncAPRepPart_tag__192 */
const struct asn1_template asn1_EncAPRepPart_tag__192[] = {
/* 0 */ { 0, sizeof(struct EncAPRepPart), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncAPRepPart, ctime), asn1_LastReq_val_tag_lr_value_38 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct EncAPRepPart, cusec), asn1_HostAddress_tag_addr_type_21 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct EncAPRepPart, subkey), asn1_EncTicketPart_tag_key_61 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct EncAPRepPart, seq_number), asn1_Authenticator_tag_seq_number_84 }
};
/* generate_template_type: EncAPRepPart_tag__191 */
const struct asn1_template asn1_EncAPRepPart_tag__191[] = {
/* 0 */ { 0, sizeof(struct EncAPRepPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncAPRepPart_tag__192 }
};
/* generate_template_type: EncAPRepPart */
const struct asn1_template asn1_EncAPRepPart[] = {
/* 0 */ { 0, sizeof(EncAPRepPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,27), 0, asn1_EncAPRepPart_tag__191 }
};

int
decode_EncAPRepPart(const unsigned char *p, size_t len, EncAPRepPart *data, size_t *size)
{
    return _asn1_decode_top(asn1_EncAPRepPart, 0|0, p, len, data, size);
}


int
encode_EncAPRepPart(unsigned char *p, size_t len, const EncAPRepPart *data, size_t *size)
{
    int ret = _asn1_encode(asn1_EncAPRepPart, p, len, data, size);
    return ret;
}


size_t
length_EncAPRepPart(const EncAPRepPart *data)
{
    return _asn1_length(asn1_EncAPRepPart, data);
}


void
free_EncAPRepPart(EncAPRepPart *data)
{
    _asn1_free_top(asn1_EncAPRepPart, data);
}


int
copy_EncAPRepPart(const EncAPRepPart *from, EncAPRepPart *to)
{
    return _asn1_copy_top(asn1_EncAPRepPart, from, to);
}

extern const struct asn1_template asn1_KRB_SAFE_BODY[];
/* template_members: KRB_SAFE_BODY exp exp */
extern const struct asn1_template asn1_KRB_SAFE_BODY_tag__197[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB_SAFE_BODY exp exp */
extern const struct asn1_template asn1_KRB_SAFE_BODY_tag_user_data_198[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_user_data_199[];
/* generate_template_type: heim_octet_string_tag_user_data_199 */
/* generate_template_type: KRB_SAFE_BODY_tag_user_data_198 */
/* template_members: KRB_SAFE_BODY exp exp */
extern const struct asn1_template asn1_KRB_SAFE_BODY_tag_timestamp_200[];
/* generate_template_type: KRB_SAFE_BODY_tag_timestamp_200 */
/* template_members: KRB_SAFE_BODY exp exp */
extern const struct asn1_template asn1_KRB_SAFE_BODY_tag_usec_201[];
/* generate_template_type: KRB_SAFE_BODY_tag_usec_201 */
/* template_members: KRB_SAFE_BODY exp exp */
extern const struct asn1_template asn1_KRB_SAFE_BODY_tag_seq_number_202[];
/* generate_template_type: KRB_SAFE_BODY_tag_seq_number_202 */
/* template_members: KRB_SAFE_BODY exp exp */
extern const struct asn1_template asn1_KRB_SAFE_BODY_tag_s_address_203[];
/* generate_template_type: KRB_SAFE_BODY_tag_s_address_203 */
/* template_members: KRB_SAFE_BODY exp exp */
extern const struct asn1_template asn1_KRB_SAFE_BODY_tag_r_address_204[];
/* generate_template_type: KRB_SAFE_BODY_tag_r_address_204 */
/* generate_template_type: KRB_SAFE_BODY_tag__197 */
const struct asn1_template asn1_KRB_SAFE_BODY_tag__197[] = {
/* 0 */ { 0, sizeof(struct KRB_SAFE_BODY), ((void *)6) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB_SAFE_BODY, user_data), asn1_HostAddress_tag_address_22 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KRB_SAFE_BODY, timestamp), asn1_LastReq_val_tag_lr_value_38 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KRB_SAFE_BODY, usec), asn1_HostAddress_tag_addr_type_21 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KRB_SAFE_BODY, seq_number), asn1_Authenticator_tag_seq_number_84 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct KRB_SAFE_BODY, s_address), asn1_HostAddress_seofTstruct_2 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct KRB_SAFE_BODY, r_address), asn1_HostAddress_seofTstruct_2 }
};
/* generate_template_type: KRB_SAFE_BODY */
const struct asn1_template asn1_KRB_SAFE_BODY[] = {
/* 0 */ { 0, sizeof(KRB_SAFE_BODY), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_SAFE_BODY_tag__197 }
};

int
decode_KRB_SAFE_BODY(const unsigned char *p, size_t len, KRB_SAFE_BODY *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB_SAFE_BODY, 0|0, p, len, data, size);
}


int
encode_KRB_SAFE_BODY(unsigned char *p, size_t len, const KRB_SAFE_BODY *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB_SAFE_BODY, p, len, data, size);
    return ret;
}


size_t
length_KRB_SAFE_BODY(const KRB_SAFE_BODY *data)
{
    return _asn1_length(asn1_KRB_SAFE_BODY, data);
}


void
free_KRB_SAFE_BODY(KRB_SAFE_BODY *data)
{
    _asn1_free_top(asn1_KRB_SAFE_BODY, data);
}


int
copy_KRB_SAFE_BODY(const KRB_SAFE_BODY *from, KRB_SAFE_BODY *to)
{
    return _asn1_copy_top(asn1_KRB_SAFE_BODY, from, to);
}

extern const struct asn1_template asn1_KRB_SAFE[];
/* template_members: KRB_SAFE exp exp */
extern const struct asn1_template asn1_KRB_SAFE_tag__205[];
/* template_members: KRB_SAFE exp exp */
extern const struct asn1_template asn1_KRB_SAFE_tag__206[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB_SAFE exp exp */
extern const struct asn1_template asn1_KRB_SAFE_tag_pvno_207[];
/* generate_template_type: KRB_SAFE_tag_pvno_207 */
/* template_members: KRB_SAFE exp exp */
extern const struct asn1_template asn1_KRB_SAFE_tag_msg_type_208[];
/* generate_template_type: KRB_SAFE_tag_msg_type_208 */
/* template_members: KRB_SAFE exp exp */
extern const struct asn1_template asn1_KRB_SAFE_tag_safe_body_209[];
/* generate_template_type: KRB_SAFE_tag_safe_body_209 */
const struct asn1_template asn1_KRB_SAFE_tag_safe_body_209[] = {
/* 0 */ { 0, sizeof(KRB_SAFE_BODY), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KRB_SAFE_BODY }
};
/* template_members: KRB_SAFE exp exp */
extern const struct asn1_template asn1_KRB_SAFE_tag_cksum_210[];
/* generate_template_type: KRB_SAFE_tag_cksum_210 */
/* generate_template_type: KRB_SAFE_tag__206 */
const struct asn1_template asn1_KRB_SAFE_tag__206[] = {
/* 0 */ { 0, sizeof(struct KRB_SAFE), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB_SAFE, pvno), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB_SAFE, msg_type), asn1_KDC_REQ_tag_msg_type_125 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KRB_SAFE, safe_body), asn1_KRB_SAFE_tag_safe_body_209 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KRB_SAFE, cksum), asn1_Authenticator_tag_cksum_80 }
};
/* generate_template_type: KRB_SAFE_tag__205 */
const struct asn1_template asn1_KRB_SAFE_tag__205[] = {
/* 0 */ { 0, sizeof(struct KRB_SAFE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_SAFE_tag__206 }
};
/* generate_template_type: KRB_SAFE */
const struct asn1_template asn1_KRB_SAFE[] = {
/* 0 */ { 0, sizeof(KRB_SAFE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,20), 0, asn1_KRB_SAFE_tag__205 }
};

int
decode_KRB_SAFE(const unsigned char *p, size_t len, KRB_SAFE *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB_SAFE, 0|0, p, len, data, size);
}


int
encode_KRB_SAFE(unsigned char *p, size_t len, const KRB_SAFE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB_SAFE, p, len, data, size);
    return ret;
}


size_t
length_KRB_SAFE(const KRB_SAFE *data)
{
    return _asn1_length(asn1_KRB_SAFE, data);
}


void
free_KRB_SAFE(KRB_SAFE *data)
{
    _asn1_free_top(asn1_KRB_SAFE, data);
}


int
copy_KRB_SAFE(const KRB_SAFE *from, KRB_SAFE *to)
{
    return _asn1_copy_top(asn1_KRB_SAFE, from, to);
}

extern const struct asn1_template asn1_KRB_PRIV[];
/* template_members: KRB_PRIV exp exp */
extern const struct asn1_template asn1_KRB_PRIV_tag__211[];
/* template_members: KRB_PRIV exp exp */
extern const struct asn1_template asn1_KRB_PRIV_tag__212[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB_PRIV exp exp */
extern const struct asn1_template asn1_KRB_PRIV_tag_pvno_213[];
/* generate_template_type: KRB_PRIV_tag_pvno_213 */
/* template_members: KRB_PRIV exp exp */
extern const struct asn1_template asn1_KRB_PRIV_tag_msg_type_214[];
/* generate_template_type: KRB_PRIV_tag_msg_type_214 */
/* template_members: KRB_PRIV exp exp */
extern const struct asn1_template asn1_KRB_PRIV_tag_enc_part_215[];
/* generate_template_type: KRB_PRIV_tag_enc_part_215 */
/* generate_template_type: KRB_PRIV_tag__212 */
const struct asn1_template asn1_KRB_PRIV_tag__212[] = {
/* 0 */ { 0, sizeof(struct KRB_PRIV), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB_PRIV, pvno), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB_PRIV, msg_type), asn1_KDC_REQ_tag_msg_type_125 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KRB_PRIV, enc_part), asn1_Ticket_tag_enc_part_57 }
};
/* generate_template_type: KRB_PRIV_tag__211 */
const struct asn1_template asn1_KRB_PRIV_tag__211[] = {
/* 0 */ { 0, sizeof(struct KRB_PRIV), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_PRIV_tag__212 }
};
/* generate_template_type: KRB_PRIV */
const struct asn1_template asn1_KRB_PRIV[] = {
/* 0 */ { 0, sizeof(KRB_PRIV), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,21), 0, asn1_KRB_PRIV_tag__211 }
};

int
decode_KRB_PRIV(const unsigned char *p, size_t len, KRB_PRIV *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB_PRIV, 0|0, p, len, data, size);
}


int
encode_KRB_PRIV(unsigned char *p, size_t len, const KRB_PRIV *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB_PRIV, p, len, data, size);
    return ret;
}


size_t
length_KRB_PRIV(const KRB_PRIV *data)
{
    return _asn1_length(asn1_KRB_PRIV, data);
}


void
free_KRB_PRIV(KRB_PRIV *data)
{
    _asn1_free_top(asn1_KRB_PRIV, data);
}


int
copy_KRB_PRIV(const KRB_PRIV *from, KRB_PRIV *to)
{
    return _asn1_copy_top(asn1_KRB_PRIV, from, to);
}

extern const struct asn1_template asn1_EncKrbPrivPart[];
/* template_members: EncKrbPrivPart exp exp */
extern const struct asn1_template asn1_EncKrbPrivPart_tag__216[];
/* template_members: EncKrbPrivPart exp exp */
extern const struct asn1_template asn1_EncKrbPrivPart_tag__217[];
/* tsequence: members isstruct: 1 */
/* template_members: EncKrbPrivPart exp exp */
extern const struct asn1_template asn1_EncKrbPrivPart_tag_user_data_218[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_user_data_219[];
/* generate_template_type: heim_octet_string_tag_user_data_219 */
/* generate_template_type: EncKrbPrivPart_tag_user_data_218 */
/* template_members: EncKrbPrivPart exp exp */
extern const struct asn1_template asn1_EncKrbPrivPart_tag_timestamp_220[];
/* generate_template_type: EncKrbPrivPart_tag_timestamp_220 */
/* template_members: EncKrbPrivPart exp exp */
extern const struct asn1_template asn1_EncKrbPrivPart_tag_usec_221[];
/* generate_template_type: EncKrbPrivPart_tag_usec_221 */
/* template_members: EncKrbPrivPart exp exp */
extern const struct asn1_template asn1_EncKrbPrivPart_tag_seq_number_222[];
/* generate_template_type: EncKrbPrivPart_tag_seq_number_222 */
/* template_members: EncKrbPrivPart exp exp */
extern const struct asn1_template asn1_EncKrbPrivPart_tag_s_address_223[];
/* generate_template_type: EncKrbPrivPart_tag_s_address_223 */
/* template_members: EncKrbPrivPart exp exp */
extern const struct asn1_template asn1_EncKrbPrivPart_tag_r_address_224[];
/* generate_template_type: EncKrbPrivPart_tag_r_address_224 */
/* generate_template_type: EncKrbPrivPart_tag__217 */
const struct asn1_template asn1_EncKrbPrivPart_tag__217[] = {
/* 0 */ { 0, sizeof(struct EncKrbPrivPart), ((void *)6) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncKrbPrivPart, user_data), asn1_HostAddress_tag_address_22 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbPrivPart, timestamp), asn1_LastReq_val_tag_lr_value_38 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbPrivPart, usec), asn1_HostAddress_tag_addr_type_21 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbPrivPart, seq_number), asn1_Authenticator_tag_seq_number_84 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbPrivPart, s_address), asn1_HostAddress_seofTstruct_2 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbPrivPart, r_address), asn1_HostAddress_seofTstruct_2 }
};
/* generate_template_type: EncKrbPrivPart_tag__216 */
const struct asn1_template asn1_EncKrbPrivPart_tag__216[] = {
/* 0 */ { 0, sizeof(struct EncKrbPrivPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncKrbPrivPart_tag__217 }
};
/* generate_template_type: EncKrbPrivPart */
const struct asn1_template asn1_EncKrbPrivPart[] = {
/* 0 */ { 0, sizeof(EncKrbPrivPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,28), 0, asn1_EncKrbPrivPart_tag__216 }
};

int
decode_EncKrbPrivPart(const unsigned char *p, size_t len, EncKrbPrivPart *data, size_t *size)
{
    return _asn1_decode_top(asn1_EncKrbPrivPart, 0|0, p, len, data, size);
}


int
encode_EncKrbPrivPart(unsigned char *p, size_t len, const EncKrbPrivPart *data, size_t *size)
{
    int ret = _asn1_encode(asn1_EncKrbPrivPart, p, len, data, size);
    return ret;
}


size_t
length_EncKrbPrivPart(const EncKrbPrivPart *data)
{
    return _asn1_length(asn1_EncKrbPrivPart, data);
}


void
free_EncKrbPrivPart(EncKrbPrivPart *data)
{
    _asn1_free_top(asn1_EncKrbPrivPart, data);
}


int
copy_EncKrbPrivPart(const EncKrbPrivPart *from, EncKrbPrivPart *to)
{
    return _asn1_copy_top(asn1_EncKrbPrivPart, from, to);
}

extern const struct asn1_template asn1_KRB_CRED[];
/* template_members: KRB_CRED exp exp */
extern const struct asn1_template asn1_KRB_CRED_tag__225[];
/* template_members: KRB_CRED exp exp */
extern const struct asn1_template asn1_KRB_CRED_tag__226[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB_CRED exp exp */
extern const struct asn1_template asn1_KRB_CRED_tag_pvno_227[];
/* generate_template_type: KRB_CRED_tag_pvno_227 */
/* template_members: KRB_CRED exp exp */
extern const struct asn1_template asn1_KRB_CRED_tag_msg_type_228[];
/* generate_template_type: KRB_CRED_tag_msg_type_228 */
/* template_members: KRB_CRED exp exp */
extern const struct asn1_template asn1_KRB_CRED_tag_tickets_229[];
/* template_members: KRB_CRED exp exp */
extern const struct asn1_template asn1_KRB_CRED_tag_tickets_230[];
extern const struct asn1_template asn1_KRB_CRED_tickets_13[];
/* generate_template_type: KRB_CRED_tickets_13 */
/* generate_template_type: KRB_CRED_tag_tickets_230 */
const struct asn1_template asn1_KRB_CRED_tag_tickets_230[] = {
/* 0 */ { 0, sizeof(struct KRB_CRED), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_KDC_REQ_BODY_additional_tickets_10 }
};
/* generate_template_type: KRB_CRED_tag_tickets_229 */
const struct asn1_template asn1_KRB_CRED_tag_tickets_229[] = {
/* 0 */ { 0, sizeof(struct KRB_CRED), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_CRED_tag_tickets_230 }
};
/* template_members: KRB_CRED exp exp */
extern const struct asn1_template asn1_KRB_CRED_tag_enc_part_231[];
/* generate_template_type: KRB_CRED_tag_enc_part_231 */
/* generate_template_type: KRB_CRED_tag__226 */
const struct asn1_template asn1_KRB_CRED_tag__226[] = {
/* 0 */ { 0, sizeof(struct KRB_CRED), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB_CRED, pvno), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB_CRED, msg_type), asn1_KDC_REQ_tag_msg_type_125 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KRB_CRED, tickets), asn1_KRB_CRED_tag_tickets_229 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KRB_CRED, enc_part), asn1_Ticket_tag_enc_part_57 }
};
/* generate_template_type: KRB_CRED_tag__225 */
const struct asn1_template asn1_KRB_CRED_tag__225[] = {
/* 0 */ { 0, sizeof(struct KRB_CRED), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_CRED_tag__226 }
};
/* generate_template_type: KRB_CRED */
const struct asn1_template asn1_KRB_CRED[] = {
/* 0 */ { 0, sizeof(KRB_CRED), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,22), 0, asn1_KRB_CRED_tag__225 }
};

int
decode_KRB_CRED(const unsigned char *p, size_t len, KRB_CRED *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB_CRED, 0|0, p, len, data, size);
}


int
encode_KRB_CRED(unsigned char *p, size_t len, const KRB_CRED *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB_CRED, p, len, data, size);
    return ret;
}


size_t
length_KRB_CRED(const KRB_CRED *data)
{
    return _asn1_length(asn1_KRB_CRED, data);
}


void
free_KRB_CRED(KRB_CRED *data)
{
    _asn1_free_top(asn1_KRB_CRED, data);
}


int
copy_KRB_CRED(const KRB_CRED *from, KRB_CRED *to)
{
    return _asn1_copy_top(asn1_KRB_CRED, from, to);
}

extern const struct asn1_template asn1_KrbCredInfo[];
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag__232[];
/* tsequence: members isstruct: 1 */
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag_key_233[];
/* generate_template_type: KrbCredInfo_tag_key_233 */
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag_prealm_234[];
/* generate_template_type: KrbCredInfo_tag_prealm_234 */
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag_pname_235[];
/* generate_template_type: KrbCredInfo_tag_pname_235 */
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag_flags_236[];
/* generate_template_type: KrbCredInfo_tag_flags_236 */
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag_authtime_237[];
/* generate_template_type: KrbCredInfo_tag_authtime_237 */
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag_starttime_238[];
/* generate_template_type: KrbCredInfo_tag_starttime_238 */
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag_endtime_239[];
/* generate_template_type: KrbCredInfo_tag_endtime_239 */
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag_renew_till_240[];
/* generate_template_type: KrbCredInfo_tag_renew_till_240 */
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag_srealm_241[];
/* generate_template_type: KrbCredInfo_tag_srealm_241 */
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag_sname_242[];
/* generate_template_type: KrbCredInfo_tag_sname_242 */
/* template_members: KrbCredInfo exp exp */
extern const struct asn1_template asn1_KrbCredInfo_tag_caddr_243[];
/* generate_template_type: KrbCredInfo_tag_caddr_243 */
/* generate_template_type: KrbCredInfo_tag__232 */
const struct asn1_template asn1_KrbCredInfo_tag__232[] = {
/* 0 */ { 0, sizeof(struct KrbCredInfo), ((void *)11) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbCredInfo, key), asn1_EncTicketPart_tag_key_61 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, prealm), asn1_Principal_tag_realm_18 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, pname), asn1_Principal_tag_name_17 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, flags), asn1_EncTicketPart_tag_flags_60 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, authtime), asn1_LastReq_val_tag_lr_value_38 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, starttime), asn1_LastReq_val_tag_lr_value_38 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, endtime), asn1_LastReq_val_tag_lr_value_38 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, renew_till), asn1_LastReq_val_tag_lr_value_38 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, srealm), asn1_Principal_tag_realm_18 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, sname), asn1_Principal_tag_name_17 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,10)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, caddr), asn1_EncTicketPart_tag_caddr_69 }
};
/* generate_template_type: KrbCredInfo */
const struct asn1_template asn1_KrbCredInfo[] = {
/* 0 */ { 0, sizeof(KrbCredInfo), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbCredInfo_tag__232 }
};

int
decode_KrbCredInfo(const unsigned char *p, size_t len, KrbCredInfo *data, size_t *size)
{
    return _asn1_decode_top(asn1_KrbCredInfo, 0|0, p, len, data, size);
}


int
encode_KrbCredInfo(unsigned char *p, size_t len, const KrbCredInfo *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KrbCredInfo, p, len, data, size);
    return ret;
}


size_t
length_KrbCredInfo(const KrbCredInfo *data)
{
    return _asn1_length(asn1_KrbCredInfo, data);
}


void
free_KrbCredInfo(KrbCredInfo *data)
{
    _asn1_free_top(asn1_KrbCredInfo, data);
}


int
copy_KrbCredInfo(const KrbCredInfo *from, KrbCredInfo *to)
{
    return _asn1_copy_top(asn1_KrbCredInfo, from, to);
}

extern const struct asn1_template asn1_EncKrbCredPart[];
/* template_members: EncKrbCredPart exp exp */
extern const struct asn1_template asn1_EncKrbCredPart_tag__244[];
/* template_members: EncKrbCredPart exp exp */
extern const struct asn1_template asn1_EncKrbCredPart_tag__245[];
/* tsequence: members isstruct: 1 */
/* template_members: EncKrbCredPart exp exp */
extern const struct asn1_template asn1_EncKrbCredPart_tag_ticket_info_246[];
/* template_members: EncKrbCredPart exp exp */
extern const struct asn1_template asn1_EncKrbCredPart_tag_ticket_info_247[];
extern const struct asn1_template asn1_EncKrbCredPart_ticket_info_14[];
/* generate_template_type: EncKrbCredPart_ticket_info_14 */
const struct asn1_template asn1_EncKrbCredPart_ticket_info_14[] = {
/* 0 */ { 0, sizeof(KrbCredInfo), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KrbCredInfo }
};
/* generate_template_type: EncKrbCredPart_tag_ticket_info_247 */
const struct asn1_template asn1_EncKrbCredPart_tag_ticket_info_247[] = {
/* 0 */ { 0, sizeof(struct EncKrbCredPart), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_EncKrbCredPart_ticket_info_14 }
};
/* generate_template_type: EncKrbCredPart_tag_ticket_info_246 */
const struct asn1_template asn1_EncKrbCredPart_tag_ticket_info_246[] = {
/* 0 */ { 0, sizeof(struct EncKrbCredPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncKrbCredPart_tag_ticket_info_247 }
};
/* template_members: EncKrbCredPart exp exp */
extern const struct asn1_template asn1_EncKrbCredPart_tag_nonce_248[];
/* generate_template_type: EncKrbCredPart_tag_nonce_248 */
/* template_members: EncKrbCredPart exp exp */
extern const struct asn1_template asn1_EncKrbCredPart_tag_timestamp_249[];
/* generate_template_type: EncKrbCredPart_tag_timestamp_249 */
/* template_members: EncKrbCredPart exp exp */
extern const struct asn1_template asn1_EncKrbCredPart_tag_usec_250[];
/* generate_template_type: EncKrbCredPart_tag_usec_250 */
/* template_members: EncKrbCredPart exp exp */
extern const struct asn1_template asn1_EncKrbCredPart_tag_s_address_251[];
/* generate_template_type: EncKrbCredPart_tag_s_address_251 */
/* template_members: EncKrbCredPart exp exp */
extern const struct asn1_template asn1_EncKrbCredPart_tag_r_address_252[];
/* generate_template_type: EncKrbCredPart_tag_r_address_252 */
/* generate_template_type: EncKrbCredPart_tag__245 */
const struct asn1_template asn1_EncKrbCredPart_tag__245[] = {
/* 0 */ { 0, sizeof(struct EncKrbCredPart), ((void *)6) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncKrbCredPart, ticket_info), asn1_EncKrbCredPart_tag_ticket_info_246 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbCredPart, nonce), asn1_HostAddress_tag_addr_type_21 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbCredPart, timestamp), asn1_LastReq_val_tag_lr_value_38 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbCredPart, usec), asn1_HostAddress_tag_addr_type_21 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbCredPart, s_address), asn1_HostAddress_seofTstruct_2 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbCredPart, r_address), asn1_HostAddress_seofTstruct_2 }
};
/* generate_template_type: EncKrbCredPart_tag__244 */
const struct asn1_template asn1_EncKrbCredPart_tag__244[] = {
/* 0 */ { 0, sizeof(struct EncKrbCredPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncKrbCredPart_tag__245 }
};
/* generate_template_type: EncKrbCredPart */
const struct asn1_template asn1_EncKrbCredPart[] = {
/* 0 */ { 0, sizeof(EncKrbCredPart), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,29), 0, asn1_EncKrbCredPart_tag__244 }
};

int
decode_EncKrbCredPart(const unsigned char *p, size_t len, EncKrbCredPart *data, size_t *size)
{
    return _asn1_decode_top(asn1_EncKrbCredPart, 0|0, p, len, data, size);
}


int
encode_EncKrbCredPart(unsigned char *p, size_t len, const EncKrbCredPart *data, size_t *size)
{
    int ret = _asn1_encode(asn1_EncKrbCredPart, p, len, data, size);
    return ret;
}


size_t
length_EncKrbCredPart(const EncKrbCredPart *data)
{
    return _asn1_length(asn1_EncKrbCredPart, data);
}


void
free_EncKrbCredPart(EncKrbCredPart *data)
{
    _asn1_free_top(asn1_EncKrbCredPart, data);
}


int
copy_EncKrbCredPart(const EncKrbCredPart *from, EncKrbCredPart *to)
{
    return _asn1_copy_top(asn1_EncKrbCredPart, from, to);
}

extern const struct asn1_template asn1_KRB_ERROR[];
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag__253[];
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag__254[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_pvno_255[];
/* generate_template_type: KRB_ERROR_tag_pvno_255 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_msg_type_256[];
/* generate_template_type: KRB_ERROR_tag_msg_type_256 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_ctime_257[];
/* generate_template_type: KRB_ERROR_tag_ctime_257 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_cusec_258[];
/* generate_template_type: KRB_ERROR_tag_cusec_258 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_stime_259[];
/* generate_template_type: KRB_ERROR_tag_stime_259 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_susec_260[];
/* generate_template_type: KRB_ERROR_tag_susec_260 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_error_code_261[];
/* generate_template_type: KRB_ERROR_tag_error_code_261 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_crealm_262[];
/* generate_template_type: KRB_ERROR_tag_crealm_262 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_cname_263[];
/* generate_template_type: KRB_ERROR_tag_cname_263 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_realm_264[];
/* generate_template_type: KRB_ERROR_tag_realm_264 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_sname_265[];
/* generate_template_type: KRB_ERROR_tag_sname_265 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_e_text_266[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_e_text_267[];
/* generate_template_type: heim_general_string_tag_e_text_267 */
/* generate_template_type: KRB_ERROR_tag_e_text_266 */
/* template_members: KRB_ERROR exp exp */
extern const struct asn1_template asn1_KRB_ERROR_tag_e_data_268[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_e_data_269[];
/* generate_template_type: heim_octet_string_tag_e_data_269 */
/* generate_template_type: KRB_ERROR_tag_e_data_268 */
/* generate_template_type: KRB_ERROR_tag__254 */
const struct asn1_template asn1_KRB_ERROR_tag__254[] = {
/* 0 */ { 0, sizeof(struct KRB_ERROR), ((void *)13) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB_ERROR, pvno), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB_ERROR, msg_type), asn1_KDC_REQ_tag_msg_type_125 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, ctime), asn1_LastReq_val_tag_lr_value_38 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, cusec), asn1_HostAddress_tag_addr_type_21 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct KRB_ERROR, stime), asn1_LastReq_val_tag_lr_value_38 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct KRB_ERROR, susec), asn1_HostAddress_tag_addr_type_21 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct KRB_ERROR, error_code), asn1_HostAddress_tag_addr_type_21 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, crealm), asn1_Principal_tag_realm_18 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, cname), asn1_Principal_tag_name_17 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9), offsetof(struct KRB_ERROR, realm), asn1_Principal_tag_realm_18 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,10), offsetof(struct KRB_ERROR, sname), asn1_Principal_tag_name_17 },
/* 12 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,11)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, e_text), asn1_PrincipalName_name_string_0 },
/* 13 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,12)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, e_data), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: KRB_ERROR_tag__253 */
const struct asn1_template asn1_KRB_ERROR_tag__253[] = {
/* 0 */ { 0, sizeof(struct KRB_ERROR), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_ERROR_tag__254 }
};
/* generate_template_type: KRB_ERROR */
const struct asn1_template asn1_KRB_ERROR[] = {
/* 0 */ { 0, sizeof(KRB_ERROR), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,30), 0, asn1_KRB_ERROR_tag__253 }
};

int
decode_KRB_ERROR(const unsigned char *p, size_t len, KRB_ERROR *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB_ERROR, 0|0, p, len, data, size);
}


int
encode_KRB_ERROR(unsigned char *p, size_t len, const KRB_ERROR *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB_ERROR, p, len, data, size);
    return ret;
}


size_t
length_KRB_ERROR(const KRB_ERROR *data)
{
    return _asn1_length(asn1_KRB_ERROR, data);
}


void
free_KRB_ERROR(KRB_ERROR *data)
{
    _asn1_free_top(asn1_KRB_ERROR, data);
}


int
copy_KRB_ERROR(const KRB_ERROR *from, KRB_ERROR *to)
{
    return _asn1_copy_top(asn1_KRB_ERROR, from, to);
}

extern const struct asn1_template asn1_ChangePasswdDataMS[];
/* template_members: ChangePasswdDataMS exp exp */
extern const struct asn1_template asn1_ChangePasswdDataMS_tag__270[];
/* tsequence: members isstruct: 1 */
/* template_members: ChangePasswdDataMS exp exp */
extern const struct asn1_template asn1_ChangePasswdDataMS_tag_newpasswd_271[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_newpasswd_272[];
/* generate_template_type: heim_octet_string_tag_newpasswd_272 */
/* generate_template_type: ChangePasswdDataMS_tag_newpasswd_271 */
/* template_members: ChangePasswdDataMS exp exp */
extern const struct asn1_template asn1_ChangePasswdDataMS_tag_targname_273[];
/* generate_template_type: ChangePasswdDataMS_tag_targname_273 */
/* template_members: ChangePasswdDataMS exp exp */
extern const struct asn1_template asn1_ChangePasswdDataMS_tag_targrealm_274[];
/* generate_template_type: ChangePasswdDataMS_tag_targrealm_274 */
/* generate_template_type: ChangePasswdDataMS_tag__270 */
const struct asn1_template asn1_ChangePasswdDataMS_tag__270[] = {
/* 0 */ { 0, sizeof(struct ChangePasswdDataMS), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct ChangePasswdDataMS, newpasswd), asn1_HostAddress_tag_address_22 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct ChangePasswdDataMS, targname), asn1_Principal_tag_name_17 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct ChangePasswdDataMS, targrealm), asn1_Principal_tag_realm_18 }
};
/* generate_template_type: ChangePasswdDataMS */
const struct asn1_template asn1_ChangePasswdDataMS[] = {
/* 0 */ { 0, sizeof(ChangePasswdDataMS), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ChangePasswdDataMS_tag__270 }
};

int
decode_ChangePasswdDataMS(const unsigned char *p, size_t len, ChangePasswdDataMS *data, size_t *size)
{
    return _asn1_decode_top(asn1_ChangePasswdDataMS, 0|0, p, len, data, size);
}


int
encode_ChangePasswdDataMS(unsigned char *p, size_t len, const ChangePasswdDataMS *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ChangePasswdDataMS, p, len, data, size);
    return ret;
}


size_t
length_ChangePasswdDataMS(const ChangePasswdDataMS *data)
{
    return _asn1_length(asn1_ChangePasswdDataMS, data);
}


void
free_ChangePasswdDataMS(ChangePasswdDataMS *data)
{
    _asn1_free_top(asn1_ChangePasswdDataMS, data);
}


int
copy_ChangePasswdDataMS(const ChangePasswdDataMS *from, ChangePasswdDataMS *to)
{
    return _asn1_copy_top(asn1_ChangePasswdDataMS, from, to);
}

extern const struct asn1_template asn1_EtypeList[];
/* template_members: EtypeList exp exp */
extern const struct asn1_template asn1_EtypeList_tag__275[];
extern const struct asn1_template asn1_ENCTYPE_seofTstruct_15[];
/* generate_template_type: ENCTYPE_seofTstruct_15 */
/* generate_template_type: EtypeList_tag__275 */
const struct asn1_template asn1_EtypeList_tag__275[] = {
/* 0 */ { 0, sizeof(ENCTYPE), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_EncryptedData_tag_etype_40 }
};
/* generate_template_type: EtypeList */
const struct asn1_template asn1_EtypeList[] = {
/* 0 */ { 0, sizeof(EtypeList), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EtypeList_tag__275 }
};

int
decode_EtypeList(const unsigned char *p, size_t len, EtypeList *data, size_t *size)
{
    return _asn1_decode_top(asn1_EtypeList, 0|0, p, len, data, size);
}


int
encode_EtypeList(unsigned char *p, size_t len, const EtypeList *data, size_t *size)
{
    int ret = _asn1_encode(asn1_EtypeList, p, len, data, size);
    return ret;
}


size_t
length_EtypeList(const EtypeList *data)
{
    return _asn1_length(asn1_EtypeList, data);
}


void
free_EtypeList(EtypeList *data)
{
    _asn1_free_top(asn1_EtypeList, data);
}


int
copy_EtypeList(const EtypeList *from, EtypeList *to)
{
    return _asn1_copy_top(asn1_EtypeList, from, to);
}

extern const struct asn1_template asn1_AD_IF_RELEVANT[];
/* generate_template_type: AD_IF_RELEVANT */
const struct asn1_template asn1_AD_IF_RELEVANT[] = {
/* 0 */ { 0, sizeof(AD_IF_RELEVANT), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AuthorizationData }
};

int
decode_AD_IF_RELEVANT(const unsigned char *p, size_t len, AD_IF_RELEVANT *data, size_t *size)
{
    return _asn1_decode_top(asn1_AD_IF_RELEVANT, 0|0, p, len, data, size);
}


int
encode_AD_IF_RELEVANT(unsigned char *p, size_t len, const AD_IF_RELEVANT *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AD_IF_RELEVANT, p, len, data, size);
    return ret;
}


size_t
length_AD_IF_RELEVANT(const AD_IF_RELEVANT *data)
{
    return _asn1_length(asn1_AD_IF_RELEVANT, data);
}


void
free_AD_IF_RELEVANT(AD_IF_RELEVANT *data)
{
    _asn1_free_top(asn1_AD_IF_RELEVANT, data);
}


int
copy_AD_IF_RELEVANT(const AD_IF_RELEVANT *from, AD_IF_RELEVANT *to)
{
    return _asn1_copy_top(asn1_AD_IF_RELEVANT, from, to);
}

extern const struct asn1_template asn1_AD_KDCIssued[];
/* template_members: AD_KDCIssued exp exp */
extern const struct asn1_template asn1_AD_KDCIssued_tag__276[];
/* tsequence: members isstruct: 1 */
/* template_members: AD_KDCIssued exp exp */
extern const struct asn1_template asn1_AD_KDCIssued_tag_ad_checksum_277[];
/* generate_template_type: AD_KDCIssued_tag_ad_checksum_277 */
/* template_members: AD_KDCIssued exp exp */
extern const struct asn1_template asn1_AD_KDCIssued_tag_i_realm_278[];
/* generate_template_type: AD_KDCIssued_tag_i_realm_278 */
/* template_members: AD_KDCIssued exp exp */
extern const struct asn1_template asn1_AD_KDCIssued_tag_i_sname_279[];
/* generate_template_type: AD_KDCIssued_tag_i_sname_279 */
/* template_members: AD_KDCIssued exp exp */
extern const struct asn1_template asn1_AD_KDCIssued_tag_elements_280[];
/* generate_template_type: AD_KDCIssued_tag_elements_280 */
/* generate_template_type: AD_KDCIssued_tag__276 */
const struct asn1_template asn1_AD_KDCIssued_tag__276[] = {
/* 0 */ { 0, sizeof(struct AD_KDCIssued), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AD_KDCIssued, ad_checksum), asn1_Authenticator_tag_cksum_80 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct AD_KDCIssued, i_realm), asn1_Principal_tag_realm_18 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct AD_KDCIssued, i_sname), asn1_Principal_tag_name_17 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct AD_KDCIssued, elements), asn1_EncTicketPart_tag_authorization_data_70 }
};
/* generate_template_type: AD_KDCIssued */
const struct asn1_template asn1_AD_KDCIssued[] = {
/* 0 */ { 0, sizeof(AD_KDCIssued), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AD_KDCIssued_tag__276 }
};

int
decode_AD_KDCIssued(const unsigned char *p, size_t len, AD_KDCIssued *data, size_t *size)
{
    return _asn1_decode_top(asn1_AD_KDCIssued, 0|0, p, len, data, size);
}


int
encode_AD_KDCIssued(unsigned char *p, size_t len, const AD_KDCIssued *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AD_KDCIssued, p, len, data, size);
    return ret;
}


size_t
length_AD_KDCIssued(const AD_KDCIssued *data)
{
    return _asn1_length(asn1_AD_KDCIssued, data);
}


void
free_AD_KDCIssued(AD_KDCIssued *data)
{
    _asn1_free_top(asn1_AD_KDCIssued, data);
}


int
copy_AD_KDCIssued(const AD_KDCIssued *from, AD_KDCIssued *to)
{
    return _asn1_copy_top(asn1_AD_KDCIssued, from, to);
}

extern const struct asn1_template asn1_AD_AND_OR[];
/* template_members: AD_AND_OR exp exp */
extern const struct asn1_template asn1_AD_AND_OR_tag__281[];
/* tsequence: members isstruct: 1 */
/* template_members: AD_AND_OR exp exp */
extern const struct asn1_template asn1_AD_AND_OR_tag_condition_count_282[];
/* template_members: heim_integer exp exp */
extern const struct asn1_template asn1_heim_integer_tag_condition_count_283[];
/* generate_template_type: heim_integer_tag_condition_count_283 */
const struct asn1_template asn1_heim_integer_tag_condition_count_283[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_INTEGER), 0, NULL }
};
/* generate_template_type: AD_AND_OR_tag_condition_count_282 */
const struct asn1_template asn1_AD_AND_OR_tag_condition_count_282[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_heim_integer_tag_condition_count_283 }
};
/* template_members: AD_AND_OR exp exp */
extern const struct asn1_template asn1_AD_AND_OR_tag_elements_284[];
/* generate_template_type: AD_AND_OR_tag_elements_284 */
/* generate_template_type: AD_AND_OR_tag__281 */
const struct asn1_template asn1_AD_AND_OR_tag__281[] = {
/* 0 */ { 0, sizeof(struct AD_AND_OR), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AD_AND_OR, condition_count), asn1_AD_AND_OR_tag_condition_count_282 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct AD_AND_OR, elements), asn1_EncTicketPart_tag_authorization_data_70 }
};
/* generate_template_type: AD_AND_OR */
const struct asn1_template asn1_AD_AND_OR[] = {
/* 0 */ { 0, sizeof(AD_AND_OR), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AD_AND_OR_tag__281 }
};

int
decode_AD_AND_OR(const unsigned char *p, size_t len, AD_AND_OR *data, size_t *size)
{
    return _asn1_decode_top(asn1_AD_AND_OR, 0|0, p, len, data, size);
}


int
encode_AD_AND_OR(unsigned char *p, size_t len, const AD_AND_OR *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AD_AND_OR, p, len, data, size);
    return ret;
}


size_t
length_AD_AND_OR(const AD_AND_OR *data)
{
    return _asn1_length(asn1_AD_AND_OR, data);
}


void
free_AD_AND_OR(AD_AND_OR *data)
{
    _asn1_free_top(asn1_AD_AND_OR, data);
}


int
copy_AD_AND_OR(const AD_AND_OR *from, AD_AND_OR *to)
{
    return _asn1_copy_top(asn1_AD_AND_OR, from, to);
}

extern const struct asn1_template asn1_AD_MANDATORY_FOR_KDC[];
/* generate_template_type: AD_MANDATORY_FOR_KDC */
const struct asn1_template asn1_AD_MANDATORY_FOR_KDC[] = {
/* 0 */ { 0, sizeof(AD_MANDATORY_FOR_KDC), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AuthorizationData }
};

int
decode_AD_MANDATORY_FOR_KDC(const unsigned char *p, size_t len, AD_MANDATORY_FOR_KDC *data, size_t *size)
{
    return _asn1_decode_top(asn1_AD_MANDATORY_FOR_KDC, 0|0, p, len, data, size);
}


int
encode_AD_MANDATORY_FOR_KDC(unsigned char *p, size_t len, const AD_MANDATORY_FOR_KDC *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AD_MANDATORY_FOR_KDC, p, len, data, size);
    return ret;
}


size_t
length_AD_MANDATORY_FOR_KDC(const AD_MANDATORY_FOR_KDC *data)
{
    return _asn1_length(asn1_AD_MANDATORY_FOR_KDC, data);
}


void
free_AD_MANDATORY_FOR_KDC(AD_MANDATORY_FOR_KDC *data)
{
    _asn1_free_top(asn1_AD_MANDATORY_FOR_KDC, data);
}


int
copy_AD_MANDATORY_FOR_KDC(const AD_MANDATORY_FOR_KDC *from, AD_MANDATORY_FOR_KDC *to)
{
    return _asn1_copy_top(asn1_AD_MANDATORY_FOR_KDC, from, to);
}

extern const struct asn1_template asn1_PA_SAM_TYPE[];
/* template_members: PA_SAM_TYPE exp exp */
extern const struct asn1_template asn1_PA_SAM_TYPE_tag__285[];
/* generate_template_type: PA_SAM_TYPE_tag__285 */
/* generate_template_type: PA_SAM_TYPE */
const struct asn1_template asn1_PA_SAM_TYPE[] = {
/* 0 */ { 0, sizeof(PA_SAM_TYPE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int
decode_PA_SAM_TYPE(const unsigned char *p, size_t len, PA_SAM_TYPE *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_SAM_TYPE, 0|0, p, len, data, size);
}


int
encode_PA_SAM_TYPE(unsigned char *p, size_t len, const PA_SAM_TYPE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_SAM_TYPE, p, len, data, size);
    return ret;
}


size_t
length_PA_SAM_TYPE(const PA_SAM_TYPE *data)
{
    return _asn1_length(asn1_PA_SAM_TYPE, data);
}


void
free_PA_SAM_TYPE(PA_SAM_TYPE *data)
{
    _asn1_free_top(asn1_PA_SAM_TYPE, data);
}


int
copy_PA_SAM_TYPE(const PA_SAM_TYPE *from, PA_SAM_TYPE *to)
{
    return _asn1_copy_top(asn1_PA_SAM_TYPE, from, to);
}

extern const struct asn1_template asn1_PA_SAM_REDIRECT[];
/* generate_template_type: PA_SAM_REDIRECT */
const struct asn1_template asn1_PA_SAM_REDIRECT[] = {
/* 0 */ { 0, sizeof(PA_SAM_REDIRECT), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_HostAddresses }
};

int
decode_PA_SAM_REDIRECT(const unsigned char *p, size_t len, PA_SAM_REDIRECT *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_SAM_REDIRECT, 0|0, p, len, data, size);
}


int
encode_PA_SAM_REDIRECT(unsigned char *p, size_t len, const PA_SAM_REDIRECT *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_SAM_REDIRECT, p, len, data, size);
    return ret;
}


size_t
length_PA_SAM_REDIRECT(const PA_SAM_REDIRECT *data)
{
    return _asn1_length(asn1_PA_SAM_REDIRECT, data);
}


void
free_PA_SAM_REDIRECT(PA_SAM_REDIRECT *data)
{
    _asn1_free_top(asn1_PA_SAM_REDIRECT, data);
}


int
copy_PA_SAM_REDIRECT(const PA_SAM_REDIRECT *from, PA_SAM_REDIRECT *to)
{
    return _asn1_copy_top(asn1_PA_SAM_REDIRECT, from, to);
}

extern const struct asn1_template asn1_SAMFlags[];
/* template_members: SAMFlags exp exp */
extern const struct asn1_template asn1_SAMFlags_tag__286[];
static const struct asn1_template asn1_SAMFlags_bmember__3[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(SAMFlags), ((void *)3) },
/* 1 */ { 0, 0, 0 } /* use_sad_as_key */,
/* 2 */ { 0, 1, 0 } /* send_encrypted_sad */,
/* 3 */ { 0, 2, 0 } /* must_pk_encrypt_sad */
};
/* generate_template_type: SAMFlags_tag__286 */
const struct asn1_template asn1_SAMFlags_tag__286[] = {
/* 0 */ { 0, sizeof(SAMFlags), ((void *)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_SAMFlags_bmember__3 }
};
/* generate_template_type: SAMFlags */
const struct asn1_template asn1_SAMFlags[] = {
/* 0 */ { 0, sizeof(SAMFlags), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_SAMFlags_tag__286 }
};

int
decode_SAMFlags(const unsigned char *p, size_t len, SAMFlags *data, size_t *size)
{
    return _asn1_decode_top(asn1_SAMFlags, 0|0, p, len, data, size);
}


int
encode_SAMFlags(unsigned char *p, size_t len, const SAMFlags *data, size_t *size)
{
    int ret = _asn1_encode(asn1_SAMFlags, p, len, data, size);
    return ret;
}


size_t
length_SAMFlags(const SAMFlags *data)
{
    return _asn1_length(asn1_SAMFlags, data);
}


void
free_SAMFlags(SAMFlags *data)
{
    _asn1_free_top(asn1_SAMFlags, data);
}


int
copy_SAMFlags(const SAMFlags *from, SAMFlags *to)
{
    return _asn1_copy_top(asn1_SAMFlags, from, to);
}

unsigned SAMFlags2int(SAMFlags f)
{
unsigned r = 0;
if(f.use_sad_as_key) r |= (1U << 0);
if(f.send_encrypted_sad) r |= (1U << 1);
if(f.must_pk_encrypt_sad) r |= (1U << 2);
return r;
}

SAMFlags int2SAMFlags(unsigned n)
{
	SAMFlags flags;

	memset(&flags, 0, sizeof(flags));

	flags.use_sad_as_key = (n >> 0) & 1;
	flags.send_encrypted_sad = (n >> 1) & 1;
	flags.must_pk_encrypt_sad = (n >> 2) & 1;
	return flags;
}

static struct units SAMFlags_units[] = {
	{"must-pk-encrypt-sad",	1U << 2},
	{"send-encrypted-sad",	1U << 1},
	{"use-sad-as-key",	1U << 0},
	{NULL,	0}
};

const struct units * asn1_SAMFlags_table_units = SAMFlags_units;
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY[];
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag__287[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_type_288[];
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_type_288 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_flags_289[];
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_flags_289 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_flags_289[] = {
/* 0 */ { 0, sizeof(SAMFlags), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_SAMFlags }
};
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_type_name_290[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_sam_type_name_291[];
/* generate_template_type: heim_general_string_tag_sam_type_name_291 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_type_name_290 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_track_id_292[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_sam_track_id_293[];
/* generate_template_type: heim_general_string_tag_sam_track_id_293 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_track_id_292 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_challenge_label_294[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_sam_challenge_label_295[];
/* generate_template_type: heim_general_string_tag_sam_challenge_label_295 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_challenge_label_294 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_challenge_296[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_sam_challenge_297[];
/* generate_template_type: heim_general_string_tag_sam_challenge_297 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_challenge_296 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_response_prompt_298[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_sam_response_prompt_299[];
/* generate_template_type: heim_general_string_tag_sam_response_prompt_299 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_response_prompt_298 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_pk_for_sad_300[];
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_pk_for_sad_300 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_nonce_301[];
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_nonce_301 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_etype_302[];
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_etype_302 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag__287 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag__287[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_SAM_CHALLENGE_2_BODY), ((void *)10) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_type), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_flags), asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_flags_289 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_type_name), asn1_PrincipalName_name_string_0 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_track_id), asn1_PrincipalName_name_string_0 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_challenge_label), asn1_PrincipalName_name_string_0 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_challenge), asn1_PrincipalName_name_string_0 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_response_prompt), asn1_PrincipalName_name_string_0 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_pk_for_sad), asn1_EncTicketPart_tag_key_61 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8), offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_nonce), asn1_HostAddress_tag_addr_type_21 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9), offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_etype), asn1_HostAddress_tag_addr_type_21 }
};
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY[] = {
/* 0 */ { 0, sizeof(PA_SAM_CHALLENGE_2_BODY), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_SAM_CHALLENGE_2_BODY_tag__287 }
};

int
decode_PA_SAM_CHALLENGE_2_BODY(const unsigned char *p, size_t len, PA_SAM_CHALLENGE_2_BODY *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_SAM_CHALLENGE_2_BODY, 0|0, p, len, data, size);
}


int
encode_PA_SAM_CHALLENGE_2_BODY(unsigned char *p, size_t len, const PA_SAM_CHALLENGE_2_BODY *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_SAM_CHALLENGE_2_BODY, p, len, data, size);
    return ret;
}


size_t
length_PA_SAM_CHALLENGE_2_BODY(const PA_SAM_CHALLENGE_2_BODY *data)
{
    return _asn1_length(asn1_PA_SAM_CHALLENGE_2_BODY, data);
}


void
free_PA_SAM_CHALLENGE_2_BODY(PA_SAM_CHALLENGE_2_BODY *data)
{
    _asn1_free_top(asn1_PA_SAM_CHALLENGE_2_BODY, data);
}


int
copy_PA_SAM_CHALLENGE_2_BODY(const PA_SAM_CHALLENGE_2_BODY *from, PA_SAM_CHALLENGE_2_BODY *to)
{
    return _asn1_copy_top(asn1_PA_SAM_CHALLENGE_2_BODY, from, to);
}

extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2[];
/* template_members: PA_SAM_CHALLENGE_2 exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag__303[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_SAM_CHALLENGE_2 exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag_sam_body_304[];
/* generate_template_type: PA_SAM_CHALLENGE_2_tag_sam_body_304 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag_sam_body_304[] = {
/* 0 */ { 0, sizeof(PA_SAM_CHALLENGE_2_BODY), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PA_SAM_CHALLENGE_2_BODY }
};
/* template_members: PA_SAM_CHALLENGE_2 exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag_sam_cksum_305[];
/* template_members: PA_SAM_CHALLENGE_2 exp exp */
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag_sam_cksum_306[];
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_sam_cksum_16[];
/* generate_template_type: PA_SAM_CHALLENGE_2_sam_cksum_16 */
/* generate_template_type: PA_SAM_CHALLENGE_2_tag_sam_cksum_306 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag_sam_cksum_306[] = {
/* 0 */ { 0, sizeof(struct PA_SAM_CHALLENGE_2), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_Authenticator_tag_cksum_80 }
};
/* generate_template_type: PA_SAM_CHALLENGE_2_tag_sam_cksum_305 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag_sam_cksum_305[] = {
/* 0 */ { 0, sizeof(struct PA_SAM_CHALLENGE_2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_SAM_CHALLENGE_2_tag_sam_cksum_306 }
};
/* generate_template_type: PA_SAM_CHALLENGE_2_tag__303 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag__303[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_SAM_CHALLENGE_2), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_SAM_CHALLENGE_2, sam_body), asn1_PA_SAM_CHALLENGE_2_tag_sam_body_304 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_SAM_CHALLENGE_2, sam_cksum), asn1_PA_SAM_CHALLENGE_2_tag_sam_cksum_305 }
};
/* generate_template_type: PA_SAM_CHALLENGE_2 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2[] = {
/* 0 */ { 0, sizeof(PA_SAM_CHALLENGE_2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_SAM_CHALLENGE_2_tag__303 }
};

int
decode_PA_SAM_CHALLENGE_2(const unsigned char *p, size_t len, PA_SAM_CHALLENGE_2 *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_SAM_CHALLENGE_2, 0|0, p, len, data, size);
}


int
encode_PA_SAM_CHALLENGE_2(unsigned char *p, size_t len, const PA_SAM_CHALLENGE_2 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_SAM_CHALLENGE_2, p, len, data, size);
    return ret;
}


size_t
length_PA_SAM_CHALLENGE_2(const PA_SAM_CHALLENGE_2 *data)
{
    return _asn1_length(asn1_PA_SAM_CHALLENGE_2, data);
}


void
free_PA_SAM_CHALLENGE_2(PA_SAM_CHALLENGE_2 *data)
{
    _asn1_free_top(asn1_PA_SAM_CHALLENGE_2, data);
}


int
copy_PA_SAM_CHALLENGE_2(const PA_SAM_CHALLENGE_2 *from, PA_SAM_CHALLENGE_2 *to)
{
    return _asn1_copy_top(asn1_PA_SAM_CHALLENGE_2, from, to);
}

extern const struct asn1_template asn1_PA_SAM_RESPONSE_2[];
/* template_members: PA_SAM_RESPONSE_2 exp exp */
extern const struct asn1_template asn1_PA_SAM_RESPONSE_2_tag__307[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_SAM_RESPONSE_2 exp exp */
extern const struct asn1_template asn1_PA_SAM_RESPONSE_2_tag_sam_type_308[];
/* generate_template_type: PA_SAM_RESPONSE_2_tag_sam_type_308 */
/* template_members: PA_SAM_RESPONSE_2 exp exp */
extern const struct asn1_template asn1_PA_SAM_RESPONSE_2_tag_sam_flags_309[];
/* generate_template_type: PA_SAM_RESPONSE_2_tag_sam_flags_309 */
/* template_members: PA_SAM_RESPONSE_2 exp exp */
extern const struct asn1_template asn1_PA_SAM_RESPONSE_2_tag_sam_track_id_310[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_sam_track_id_311[];
/* generate_template_type: heim_general_string_tag_sam_track_id_311 */
/* generate_template_type: PA_SAM_RESPONSE_2_tag_sam_track_id_310 */
/* template_members: PA_SAM_RESPONSE_2 exp exp */
extern const struct asn1_template asn1_PA_SAM_RESPONSE_2_tag_sam_enc_nonce_or_sad_312[];
/* generate_template_type: PA_SAM_RESPONSE_2_tag_sam_enc_nonce_or_sad_312 */
/* template_members: PA_SAM_RESPONSE_2 exp exp */
extern const struct asn1_template asn1_PA_SAM_RESPONSE_2_tag_sam_nonce_313[];
/* generate_template_type: PA_SAM_RESPONSE_2_tag_sam_nonce_313 */
/* generate_template_type: PA_SAM_RESPONSE_2_tag__307 */
const struct asn1_template asn1_PA_SAM_RESPONSE_2_tag__307[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_SAM_RESPONSE_2), ((void *)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_SAM_RESPONSE_2, sam_type), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_SAM_RESPONSE_2, sam_flags), asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_flags_289 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_RESPONSE_2, sam_track_id), asn1_PrincipalName_name_string_0 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct PA_SAM_RESPONSE_2, sam_enc_nonce_or_sad), asn1_Ticket_tag_enc_part_57 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct PA_SAM_RESPONSE_2, sam_nonce), asn1_HostAddress_tag_addr_type_21 }
};
/* generate_template_type: PA_SAM_RESPONSE_2 */
const struct asn1_template asn1_PA_SAM_RESPONSE_2[] = {
/* 0 */ { 0, sizeof(PA_SAM_RESPONSE_2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_SAM_RESPONSE_2_tag__307 }
};

int
decode_PA_SAM_RESPONSE_2(const unsigned char *p, size_t len, PA_SAM_RESPONSE_2 *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_SAM_RESPONSE_2, 0|0, p, len, data, size);
}


int
encode_PA_SAM_RESPONSE_2(unsigned char *p, size_t len, const PA_SAM_RESPONSE_2 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_SAM_RESPONSE_2, p, len, data, size);
    return ret;
}


size_t
length_PA_SAM_RESPONSE_2(const PA_SAM_RESPONSE_2 *data)
{
    return _asn1_length(asn1_PA_SAM_RESPONSE_2, data);
}


void
free_PA_SAM_RESPONSE_2(PA_SAM_RESPONSE_2 *data)
{
    _asn1_free_top(asn1_PA_SAM_RESPONSE_2, data);
}


int
copy_PA_SAM_RESPONSE_2(const PA_SAM_RESPONSE_2 *from, PA_SAM_RESPONSE_2 *to)
{
    return _asn1_copy_top(asn1_PA_SAM_RESPONSE_2, from, to);
}

extern const struct asn1_template asn1_PA_ENC_SAM_RESPONSE_ENC[];
/* template_members: PA_ENC_SAM_RESPONSE_ENC exp exp */
extern const struct asn1_template asn1_PA_ENC_SAM_RESPONSE_ENC_tag__314[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_ENC_SAM_RESPONSE_ENC exp exp */
extern const struct asn1_template asn1_PA_ENC_SAM_RESPONSE_ENC_tag_sam_nonce_315[];
/* generate_template_type: PA_ENC_SAM_RESPONSE_ENC_tag_sam_nonce_315 */
/* template_members: PA_ENC_SAM_RESPONSE_ENC exp exp */
extern const struct asn1_template asn1_PA_ENC_SAM_RESPONSE_ENC_tag_sam_sad_316[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_sam_sad_317[];
/* generate_template_type: heim_general_string_tag_sam_sad_317 */
/* generate_template_type: PA_ENC_SAM_RESPONSE_ENC_tag_sam_sad_316 */
/* generate_template_type: PA_ENC_SAM_RESPONSE_ENC_tag__314 */
const struct asn1_template asn1_PA_ENC_SAM_RESPONSE_ENC_tag__314[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_ENC_SAM_RESPONSE_ENC), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_ENC_SAM_RESPONSE_ENC, sam_nonce), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_ENC_SAM_RESPONSE_ENC, sam_sad), asn1_PrincipalName_name_string_0 }
};
/* generate_template_type: PA_ENC_SAM_RESPONSE_ENC */
const struct asn1_template asn1_PA_ENC_SAM_RESPONSE_ENC[] = {
/* 0 */ { 0, sizeof(PA_ENC_SAM_RESPONSE_ENC), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_ENC_SAM_RESPONSE_ENC_tag__314 }
};

int
decode_PA_ENC_SAM_RESPONSE_ENC(const unsigned char *p, size_t len, PA_ENC_SAM_RESPONSE_ENC *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_ENC_SAM_RESPONSE_ENC, 0|0, p, len, data, size);
}


int
encode_PA_ENC_SAM_RESPONSE_ENC(unsigned char *p, size_t len, const PA_ENC_SAM_RESPONSE_ENC *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_ENC_SAM_RESPONSE_ENC, p, len, data, size);
    return ret;
}


size_t
length_PA_ENC_SAM_RESPONSE_ENC(const PA_ENC_SAM_RESPONSE_ENC *data)
{
    return _asn1_length(asn1_PA_ENC_SAM_RESPONSE_ENC, data);
}


void
free_PA_ENC_SAM_RESPONSE_ENC(PA_ENC_SAM_RESPONSE_ENC *data)
{
    _asn1_free_top(asn1_PA_ENC_SAM_RESPONSE_ENC, data);
}


int
copy_PA_ENC_SAM_RESPONSE_ENC(const PA_ENC_SAM_RESPONSE_ENC *from, PA_ENC_SAM_RESPONSE_ENC *to)
{
    return _asn1_copy_top(asn1_PA_ENC_SAM_RESPONSE_ENC, from, to);
}

extern const struct asn1_template asn1_PA_S4U2Self[];
/* template_members: PA_S4U2Self exp exp */
extern const struct asn1_template asn1_PA_S4U2Self_tag__318[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_S4U2Self exp exp */
extern const struct asn1_template asn1_PA_S4U2Self_tag_name_319[];
/* generate_template_type: PA_S4U2Self_tag_name_319 */
/* template_members: PA_S4U2Self exp exp */
extern const struct asn1_template asn1_PA_S4U2Self_tag_realm_320[];
/* generate_template_type: PA_S4U2Self_tag_realm_320 */
/* template_members: PA_S4U2Self exp exp */
extern const struct asn1_template asn1_PA_S4U2Self_tag_cksum_321[];
/* generate_template_type: PA_S4U2Self_tag_cksum_321 */
/* template_members: PA_S4U2Self exp exp */
extern const struct asn1_template asn1_PA_S4U2Self_tag_auth_322[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_auth_323[];
/* generate_template_type: heim_general_string_tag_auth_323 */
/* generate_template_type: PA_S4U2Self_tag_auth_322 */
/* generate_template_type: PA_S4U2Self_tag__318 */
const struct asn1_template asn1_PA_S4U2Self_tag__318[] = {
/* 0 */ { 0, sizeof(struct PA_S4U2Self), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_S4U2Self, name), asn1_Principal_tag_name_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_S4U2Self, realm), asn1_Principal_tag_realm_18 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct PA_S4U2Self, cksum), asn1_Authenticator_tag_cksum_80 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct PA_S4U2Self, auth), asn1_PrincipalName_name_string_0 }
};
/* generate_template_type: PA_S4U2Self */
const struct asn1_template asn1_PA_S4U2Self[] = {
/* 0 */ { 0, sizeof(PA_S4U2Self), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_S4U2Self_tag__318 }
};

int
decode_PA_S4U2Self(const unsigned char *p, size_t len, PA_S4U2Self *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_S4U2Self, 0|0, p, len, data, size);
}


int
encode_PA_S4U2Self(unsigned char *p, size_t len, const PA_S4U2Self *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_S4U2Self, p, len, data, size);
    return ret;
}


size_t
length_PA_S4U2Self(const PA_S4U2Self *data)
{
    return _asn1_length(asn1_PA_S4U2Self, data);
}


void
free_PA_S4U2Self(PA_S4U2Self *data)
{
    _asn1_free_top(asn1_PA_S4U2Self, data);
}


int
copy_PA_S4U2Self(const PA_S4U2Self *from, PA_S4U2Self *to)
{
    return _asn1_copy_top(asn1_PA_S4U2Self, from, to);
}

extern const struct asn1_template asn1_KRB5SignedPathData[];
/* template_members: KRB5SignedPathData exp exp */
extern const struct asn1_template asn1_KRB5SignedPathData_tag__324[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB5SignedPathData exp exp */
extern const struct asn1_template asn1_KRB5SignedPathData_tag_client_325[];
/* generate_template_type: KRB5SignedPathData_tag_client_325 */
/* template_members: KRB5SignedPathData exp exp */
extern const struct asn1_template asn1_KRB5SignedPathData_tag_authtime_326[];
/* generate_template_type: KRB5SignedPathData_tag_authtime_326 */
/* template_members: KRB5SignedPathData exp exp */
extern const struct asn1_template asn1_KRB5SignedPathData_tag_delegated_327[];
/* generate_template_type: KRB5SignedPathData_tag_delegated_327 */
const struct asn1_template asn1_KRB5SignedPathData_tag_delegated_327[] = {
/* 0 */ { 0, sizeof(Principals), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Principals }
};
/* template_members: KRB5SignedPathData exp exp */
extern const struct asn1_template asn1_KRB5SignedPathData_tag_method_data_328[];
/* generate_template_type: KRB5SignedPathData_tag_method_data_328 */
/* generate_template_type: KRB5SignedPathData_tag__324 */
const struct asn1_template asn1_KRB5SignedPathData_tag__324[] = {
/* 0 */ { 0, sizeof(struct KRB5SignedPathData), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct KRB5SignedPathData, client), asn1_Principal_seofTstruct_1 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB5SignedPathData, authtime), asn1_LastReq_val_tag_lr_value_38 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KRB5SignedPathData, delegated), asn1_KRB5SignedPathData_tag_delegated_327 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KRB5SignedPathData, method_data), asn1_KDC_REQ_tag_padata_126 }
};
/* generate_template_type: KRB5SignedPathData */
const struct asn1_template asn1_KRB5SignedPathData[] = {
/* 0 */ { 0, sizeof(KRB5SignedPathData), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5SignedPathData_tag__324 }
};

int
decode_KRB5SignedPathData(const unsigned char *p, size_t len, KRB5SignedPathData *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5SignedPathData, 0|0, p, len, data, size);
}


int
encode_KRB5SignedPathData(unsigned char *p, size_t len, const KRB5SignedPathData *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5SignedPathData, p, len, data, size);
    return ret;
}


size_t
length_KRB5SignedPathData(const KRB5SignedPathData *data)
{
    return _asn1_length(asn1_KRB5SignedPathData, data);
}


void
free_KRB5SignedPathData(KRB5SignedPathData *data)
{
    _asn1_free_top(asn1_KRB5SignedPathData, data);
}


int
copy_KRB5SignedPathData(const KRB5SignedPathData *from, KRB5SignedPathData *to)
{
    return _asn1_copy_top(asn1_KRB5SignedPathData, from, to);
}

extern const struct asn1_template asn1_KRB5SignedPath[];
/* template_members: KRB5SignedPath exp exp */
extern const struct asn1_template asn1_KRB5SignedPath_tag__329[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB5SignedPath exp exp */
extern const struct asn1_template asn1_KRB5SignedPath_tag_etype_330[];
/* generate_template_type: KRB5SignedPath_tag_etype_330 */
/* template_members: KRB5SignedPath exp exp */
extern const struct asn1_template asn1_KRB5SignedPath_tag_cksum_331[];
/* generate_template_type: KRB5SignedPath_tag_cksum_331 */
/* template_members: KRB5SignedPath exp exp */
extern const struct asn1_template asn1_KRB5SignedPath_tag_delegated_332[];
/* generate_template_type: KRB5SignedPath_tag_delegated_332 */
/* template_members: KRB5SignedPath exp exp */
extern const struct asn1_template asn1_KRB5SignedPath_tag_method_data_333[];
/* generate_template_type: KRB5SignedPath_tag_method_data_333 */
/* generate_template_type: KRB5SignedPath_tag__329 */
const struct asn1_template asn1_KRB5SignedPath_tag__329[] = {
/* 0 */ { 0, sizeof(struct KRB5SignedPath), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB5SignedPath, etype), asn1_EncryptedData_tag_etype_40 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB5SignedPath, cksum), asn1_Authenticator_tag_cksum_80 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KRB5SignedPath, delegated), asn1_KRB5SignedPathData_tag_delegated_327 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KRB5SignedPath, method_data), asn1_KDC_REQ_tag_padata_126 }
};
/* generate_template_type: KRB5SignedPath */
const struct asn1_template asn1_KRB5SignedPath[] = {
/* 0 */ { 0, sizeof(KRB5SignedPath), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5SignedPath_tag__329 }
};

int
decode_KRB5SignedPath(const unsigned char *p, size_t len, KRB5SignedPath *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5SignedPath, 0|0, p, len, data, size);
}


int
encode_KRB5SignedPath(unsigned char *p, size_t len, const KRB5SignedPath *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5SignedPath, p, len, data, size);
    return ret;
}


size_t
length_KRB5SignedPath(const KRB5SignedPath *data)
{
    return _asn1_length(asn1_KRB5SignedPath, data);
}


void
free_KRB5SignedPath(KRB5SignedPath *data)
{
    _asn1_free_top(asn1_KRB5SignedPath, data);
}


int
copy_KRB5SignedPath(const KRB5SignedPath *from, KRB5SignedPath *to)
{
    return _asn1_copy_top(asn1_KRB5SignedPath, from, to);
}

extern const struct asn1_template asn1_PA_ClientCanonicalizedNames[];
/* template_members: PA_ClientCanonicalizedNames exp exp */
extern const struct asn1_template asn1_PA_ClientCanonicalizedNames_tag__334[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_ClientCanonicalizedNames exp exp */
extern const struct asn1_template asn1_PA_ClientCanonicalizedNames_tag_requested_name_335[];
/* generate_template_type: PA_ClientCanonicalizedNames_tag_requested_name_335 */
/* template_members: PA_ClientCanonicalizedNames exp exp */
extern const struct asn1_template asn1_PA_ClientCanonicalizedNames_tag_mapped_name_336[];
/* generate_template_type: PA_ClientCanonicalizedNames_tag_mapped_name_336 */
/* generate_template_type: PA_ClientCanonicalizedNames_tag__334 */
const struct asn1_template asn1_PA_ClientCanonicalizedNames_tag__334[] = {
/* 0 */ { 0, sizeof(struct PA_ClientCanonicalizedNames), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_ClientCanonicalizedNames, requested_name), asn1_Principal_tag_name_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_ClientCanonicalizedNames, mapped_name), asn1_Principal_tag_name_17 }
};
/* generate_template_type: PA_ClientCanonicalizedNames */
const struct asn1_template asn1_PA_ClientCanonicalizedNames[] = {
/* 0 */ { 0, sizeof(PA_ClientCanonicalizedNames), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_ClientCanonicalizedNames_tag__334 }
};

int
decode_PA_ClientCanonicalizedNames(const unsigned char *p, size_t len, PA_ClientCanonicalizedNames *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_ClientCanonicalizedNames, 0|0, p, len, data, size);
}


int
encode_PA_ClientCanonicalizedNames(unsigned char *p, size_t len, const PA_ClientCanonicalizedNames *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_ClientCanonicalizedNames, p, len, data, size);
    return ret;
}


size_t
length_PA_ClientCanonicalizedNames(const PA_ClientCanonicalizedNames *data)
{
    return _asn1_length(asn1_PA_ClientCanonicalizedNames, data);
}


void
free_PA_ClientCanonicalizedNames(PA_ClientCanonicalizedNames *data)
{
    _asn1_free_top(asn1_PA_ClientCanonicalizedNames, data);
}


int
copy_PA_ClientCanonicalizedNames(const PA_ClientCanonicalizedNames *from, PA_ClientCanonicalizedNames *to)
{
    return _asn1_copy_top(asn1_PA_ClientCanonicalizedNames, from, to);
}

extern const struct asn1_template asn1_PA_ClientCanonicalized[];
/* template_members: PA_ClientCanonicalized exp exp */
extern const struct asn1_template asn1_PA_ClientCanonicalized_tag__337[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_ClientCanonicalized exp exp */
extern const struct asn1_template asn1_PA_ClientCanonicalized_tag_names_338[];
/* generate_template_type: PA_ClientCanonicalized_tag_names_338 */
const struct asn1_template asn1_PA_ClientCanonicalized_tag_names_338[] = {
/* 0 */ { 0, sizeof(PA_ClientCanonicalizedNames), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PA_ClientCanonicalizedNames }
};
/* template_members: PA_ClientCanonicalized exp exp */
extern const struct asn1_template asn1_PA_ClientCanonicalized_tag_canon_checksum_339[];
/* generate_template_type: PA_ClientCanonicalized_tag_canon_checksum_339 */
/* generate_template_type: PA_ClientCanonicalized_tag__337 */
const struct asn1_template asn1_PA_ClientCanonicalized_tag__337[] = {
/* 0 */ { 0, sizeof(struct PA_ClientCanonicalized), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_ClientCanonicalized, names), asn1_PA_ClientCanonicalized_tag_names_338 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_ClientCanonicalized, canon_checksum), asn1_Authenticator_tag_cksum_80 }
};
/* generate_template_type: PA_ClientCanonicalized */
const struct asn1_template asn1_PA_ClientCanonicalized[] = {
/* 0 */ { 0, sizeof(PA_ClientCanonicalized), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_ClientCanonicalized_tag__337 }
};

int
decode_PA_ClientCanonicalized(const unsigned char *p, size_t len, PA_ClientCanonicalized *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_ClientCanonicalized, 0|0, p, len, data, size);
}


int
encode_PA_ClientCanonicalized(unsigned char *p, size_t len, const PA_ClientCanonicalized *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_ClientCanonicalized, p, len, data, size);
    return ret;
}


size_t
length_PA_ClientCanonicalized(const PA_ClientCanonicalized *data)
{
    return _asn1_length(asn1_PA_ClientCanonicalized, data);
}


void
free_PA_ClientCanonicalized(PA_ClientCanonicalized *data)
{
    _asn1_free_top(asn1_PA_ClientCanonicalized, data);
}


int
copy_PA_ClientCanonicalized(const PA_ClientCanonicalized *from, PA_ClientCanonicalized *to)
{
    return _asn1_copy_top(asn1_PA_ClientCanonicalized, from, to);
}

extern const struct asn1_template asn1_AD_LoginAlias[];
/* template_members: AD_LoginAlias exp exp */
extern const struct asn1_template asn1_AD_LoginAlias_tag__340[];
/* tsequence: members isstruct: 1 */
/* template_members: AD_LoginAlias exp exp */
extern const struct asn1_template asn1_AD_LoginAlias_tag_login_alias_341[];
/* generate_template_type: AD_LoginAlias_tag_login_alias_341 */
/* template_members: AD_LoginAlias exp exp */
extern const struct asn1_template asn1_AD_LoginAlias_tag_checksum_342[];
/* generate_template_type: AD_LoginAlias_tag_checksum_342 */
/* generate_template_type: AD_LoginAlias_tag__340 */
const struct asn1_template asn1_AD_LoginAlias_tag__340[] = {
/* 0 */ { 0, sizeof(struct AD_LoginAlias), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AD_LoginAlias, login_alias), asn1_Principal_tag_name_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct AD_LoginAlias, checksum), asn1_Authenticator_tag_cksum_80 }
};
/* generate_template_type: AD_LoginAlias */
const struct asn1_template asn1_AD_LoginAlias[] = {
/* 0 */ { 0, sizeof(AD_LoginAlias), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AD_LoginAlias_tag__340 }
};

int
decode_AD_LoginAlias(const unsigned char *p, size_t len, AD_LoginAlias *data, size_t *size)
{
    return _asn1_decode_top(asn1_AD_LoginAlias, 0|0, p, len, data, size);
}


int
encode_AD_LoginAlias(unsigned char *p, size_t len, const AD_LoginAlias *data, size_t *size)
{
    int ret = _asn1_encode(asn1_AD_LoginAlias, p, len, data, size);
    return ret;
}


size_t
length_AD_LoginAlias(const AD_LoginAlias *data)
{
    return _asn1_length(asn1_AD_LoginAlias, data);
}


void
free_AD_LoginAlias(AD_LoginAlias *data)
{
    _asn1_free_top(asn1_AD_LoginAlias, data);
}


int
copy_AD_LoginAlias(const AD_LoginAlias *from, AD_LoginAlias *to)
{
    return _asn1_copy_top(asn1_AD_LoginAlias, from, to);
}

extern const struct asn1_template asn1_PA_SvrReferralData[];
/* template_members: PA_SvrReferralData exp exp */
extern const struct asn1_template asn1_PA_SvrReferralData_tag__343[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_SvrReferralData exp exp */
extern const struct asn1_template asn1_PA_SvrReferralData_tag_referred_name_344[];
/* generate_template_type: PA_SvrReferralData_tag_referred_name_344 */
/* template_members: PA_SvrReferralData exp exp */
extern const struct asn1_template asn1_PA_SvrReferralData_tag_referred_realm_345[];
/* generate_template_type: PA_SvrReferralData_tag_referred_realm_345 */
/* generate_template_type: PA_SvrReferralData_tag__343 */
const struct asn1_template asn1_PA_SvrReferralData_tag__343[] = {
/* 0 */ { 0, sizeof(struct PA_SvrReferralData), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_SvrReferralData, referred_name), asn1_Principal_tag_name_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_SvrReferralData, referred_realm), asn1_Principal_tag_realm_18 }
};
/* generate_template_type: PA_SvrReferralData */
const struct asn1_template asn1_PA_SvrReferralData[] = {
/* 0 */ { 0, sizeof(PA_SvrReferralData), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_SvrReferralData_tag__343 }
};

int
decode_PA_SvrReferralData(const unsigned char *p, size_t len, PA_SvrReferralData *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_SvrReferralData, 0|0, p, len, data, size);
}


int
encode_PA_SvrReferralData(unsigned char *p, size_t len, const PA_SvrReferralData *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_SvrReferralData, p, len, data, size);
    return ret;
}


size_t
length_PA_SvrReferralData(const PA_SvrReferralData *data)
{
    return _asn1_length(asn1_PA_SvrReferralData, data);
}


void
free_PA_SvrReferralData(PA_SvrReferralData *data)
{
    _asn1_free_top(asn1_PA_SvrReferralData, data);
}


int
copy_PA_SvrReferralData(const PA_SvrReferralData *from, PA_SvrReferralData *to)
{
    return _asn1_copy_top(asn1_PA_SvrReferralData, from, to);
}

extern const struct asn1_template asn1_PA_SERVER_REFERRAL_DATA[];
/* generate_template_type: PA_SERVER_REFERRAL_DATA */
const struct asn1_template asn1_PA_SERVER_REFERRAL_DATA[] = {
/* 0 */ { 0, sizeof(PA_SERVER_REFERRAL_DATA), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EncryptedData }
};

int
decode_PA_SERVER_REFERRAL_DATA(const unsigned char *p, size_t len, PA_SERVER_REFERRAL_DATA *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_SERVER_REFERRAL_DATA, 0|0, p, len, data, size);
}


int
encode_PA_SERVER_REFERRAL_DATA(unsigned char *p, size_t len, const PA_SERVER_REFERRAL_DATA *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_SERVER_REFERRAL_DATA, p, len, data, size);
    return ret;
}


size_t
length_PA_SERVER_REFERRAL_DATA(const PA_SERVER_REFERRAL_DATA *data)
{
    return _asn1_length(asn1_PA_SERVER_REFERRAL_DATA, data);
}


void
free_PA_SERVER_REFERRAL_DATA(PA_SERVER_REFERRAL_DATA *data)
{
    _asn1_free_top(asn1_PA_SERVER_REFERRAL_DATA, data);
}


int
copy_PA_SERVER_REFERRAL_DATA(const PA_SERVER_REFERRAL_DATA *from, PA_SERVER_REFERRAL_DATA *to)
{
    return _asn1_copy_top(asn1_PA_SERVER_REFERRAL_DATA, from, to);
}

extern const struct asn1_template asn1_PA_ServerReferralData[];
/* template_members: PA_ServerReferralData exp exp */
extern const struct asn1_template asn1_PA_ServerReferralData_tag__346[];
/* tsequence: members isstruct: 1 */
/* template_members: PA_ServerReferralData exp exp */
extern const struct asn1_template asn1_PA_ServerReferralData_tag_referred_realm_347[];
/* generate_template_type: PA_ServerReferralData_tag_referred_realm_347 */
/* template_members: PA_ServerReferralData exp exp */
extern const struct asn1_template asn1_PA_ServerReferralData_tag_true_principal_name_348[];
/* generate_template_type: PA_ServerReferralData_tag_true_principal_name_348 */
/* template_members: PA_ServerReferralData exp exp */
extern const struct asn1_template asn1_PA_ServerReferralData_tag_requested_principal_name_349[];
/* generate_template_type: PA_ServerReferralData_tag_requested_principal_name_349 */
/* template_members: PA_ServerReferralData exp exp */
extern const struct asn1_template asn1_PA_ServerReferralData_tag_referral_valid_until_350[];
/* generate_template_type: PA_ServerReferralData_tag_referral_valid_until_350 */
/* generate_template_type: PA_ServerReferralData_tag__346 */
const struct asn1_template asn1_PA_ServerReferralData_tag__346[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_ServerReferralData), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct PA_ServerReferralData, referred_realm), asn1_Principal_tag_realm_18 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_ServerReferralData, true_principal_name), asn1_Principal_tag_name_17 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PA_ServerReferralData, requested_principal_name), asn1_Principal_tag_name_17 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct PA_ServerReferralData, referral_valid_until), asn1_LastReq_val_tag_lr_value_38 }
};
/* generate_template_type: PA_ServerReferralData */
const struct asn1_template asn1_PA_ServerReferralData[] = {
/* 0 */ { 0, sizeof(PA_ServerReferralData), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_ServerReferralData_tag__346 }
};

int
decode_PA_ServerReferralData(const unsigned char *p, size_t len, PA_ServerReferralData *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_ServerReferralData, 0|0, p, len, data, size);
}


int
encode_PA_ServerReferralData(unsigned char *p, size_t len, const PA_ServerReferralData *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_ServerReferralData, p, len, data, size);
    return ret;
}


size_t
length_PA_ServerReferralData(const PA_ServerReferralData *data)
{
    return _asn1_length(asn1_PA_ServerReferralData, data);
}


void
free_PA_ServerReferralData(PA_ServerReferralData *data)
{
    _asn1_free_top(asn1_PA_ServerReferralData, data);
}


int
copy_PA_ServerReferralData(const PA_ServerReferralData *from, PA_ServerReferralData *to)
{
    return _asn1_copy_top(asn1_PA_ServerReferralData, from, to);
}

extern const struct asn1_template asn1_FastOptions[];
/* template_members: FastOptions exp exp */
extern const struct asn1_template asn1_FastOptions_tag__351[];
static const struct asn1_template asn1_FastOptions_bmember__4[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(FastOptions), ((void *)3) },
/* 1 */ { 0, 0, 0 } /* reserved */,
/* 2 */ { 0, 1, 0 } /* hide_client_names */,
/* 3 */ { 0, 16, 0 } /* kdc_follow_referrals */
};
/* generate_template_type: FastOptions_tag__351 */
const struct asn1_template asn1_FastOptions_tag__351[] = {
/* 0 */ { 0, sizeof(FastOptions), ((void *)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_FastOptions_bmember__4 }
};
/* generate_template_type: FastOptions */
const struct asn1_template asn1_FastOptions[] = {
/* 0 */ { 0, sizeof(FastOptions), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_FastOptions_tag__351 }
};

int
decode_FastOptions(const unsigned char *p, size_t len, FastOptions *data, size_t *size)
{
    return _asn1_decode_top(asn1_FastOptions, 0|0, p, len, data, size);
}


int
encode_FastOptions(unsigned char *p, size_t len, const FastOptions *data, size_t *size)
{
    int ret = _asn1_encode(asn1_FastOptions, p, len, data, size);
    return ret;
}


size_t
length_FastOptions(const FastOptions *data)
{
    return _asn1_length(asn1_FastOptions, data);
}


void
free_FastOptions(FastOptions *data)
{
    _asn1_free_top(asn1_FastOptions, data);
}


int
copy_FastOptions(const FastOptions *from, FastOptions *to)
{
    return _asn1_copy_top(asn1_FastOptions, from, to);
}

unsigned FastOptions2int(FastOptions f)
{
unsigned r = 0;
if(f.reserved) r |= (1U << 0);
if(f.hide_client_names) r |= (1U << 1);
if(f.kdc_follow_referrals) r |= (1U << 16);
return r;
}

FastOptions int2FastOptions(unsigned n)
{
	FastOptions flags;

	memset(&flags, 0, sizeof(flags));

	flags.reserved = (n >> 0) & 1;
	flags.hide_client_names = (n >> 1) & 1;
	flags.kdc_follow_referrals = (n >> 16) & 1;
	return flags;
}

static struct units FastOptions_units[] = {
	{"kdc-follow-referrals",	1U << 16},
	{"hide-client-names",	1U << 1},
	{"reserved",	1U << 0},
	{NULL,	0}
};

const struct units * asn1_FastOptions_table_units = FastOptions_units;
extern const struct asn1_template asn1_KrbFastReq[];
/* template_members: KrbFastReq exp exp */
extern const struct asn1_template asn1_KrbFastReq_tag__352[];
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastReq exp exp */
extern const struct asn1_template asn1_KrbFastReq_tag_fast_options_353[];
/* generate_template_type: KrbFastReq_tag_fast_options_353 */
const struct asn1_template asn1_KrbFastReq_tag_fast_options_353[] = {
/* 0 */ { 0, sizeof(FastOptions), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_FastOptions }
};
/* template_members: KrbFastReq exp exp */
extern const struct asn1_template asn1_KrbFastReq_tag_padata_354[];
/* generate_template_type: KrbFastReq_tag_padata_354 */
/* template_members: KrbFastReq exp exp */
extern const struct asn1_template asn1_KrbFastReq_tag_req_body_355[];
/* generate_template_type: KrbFastReq_tag_req_body_355 */
/* generate_template_type: KrbFastReq_tag__352 */
const struct asn1_template asn1_KrbFastReq_tag__352[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KrbFastReq), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbFastReq, fast_options), asn1_KrbFastReq_tag_fast_options_353 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KrbFastReq, padata), asn1_KDC_REQ_tag_padata_126 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KrbFastReq, req_body), asn1_KDC_REQ_tag_req_body_127 }
};
/* generate_template_type: KrbFastReq */
const struct asn1_template asn1_KrbFastReq[] = {
/* 0 */ { 0, sizeof(KrbFastReq), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastReq_tag__352 }
};

int
decode_KrbFastReq(const unsigned char *p, size_t len, KrbFastReq *data, size_t *size)
{
    return _asn1_decode_top(asn1_KrbFastReq, 0|0, p, len, data, size);
}


int
encode_KrbFastReq(unsigned char *p, size_t len, const KrbFastReq *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KrbFastReq, p, len, data, size);
    return ret;
}


size_t
length_KrbFastReq(const KrbFastReq *data)
{
    return _asn1_length(asn1_KrbFastReq, data);
}


void
free_KrbFastReq(KrbFastReq *data)
{
    _asn1_free_top(asn1_KrbFastReq, data);
}


int
copy_KrbFastReq(const KrbFastReq *from, KrbFastReq *to)
{
    return _asn1_copy_top(asn1_KrbFastReq, from, to);
}

extern const struct asn1_template asn1_KrbFastArmor[];
/* template_members: KrbFastArmor exp exp */
extern const struct asn1_template asn1_KrbFastArmor_tag__356[];
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastArmor exp exp */
extern const struct asn1_template asn1_KrbFastArmor_tag_armor_type_357[];
/* generate_template_type: KrbFastArmor_tag_armor_type_357 */
/* template_members: KrbFastArmor exp exp */
extern const struct asn1_template asn1_KrbFastArmor_tag_armor_value_358[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_armor_value_359[];
/* generate_template_type: heim_octet_string_tag_armor_value_359 */
/* generate_template_type: KrbFastArmor_tag_armor_value_358 */
/* generate_template_type: KrbFastArmor_tag__356 */
const struct asn1_template asn1_KrbFastArmor_tag__356[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KrbFastArmor), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbFastArmor, armor_type), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KrbFastArmor, armor_value), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: KrbFastArmor */
const struct asn1_template asn1_KrbFastArmor[] = {
/* 0 */ { 0, sizeof(KrbFastArmor), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastArmor_tag__356 }
};

int
decode_KrbFastArmor(const unsigned char *p, size_t len, KrbFastArmor *data, size_t *size)
{
    return _asn1_decode_top(asn1_KrbFastArmor, 0|0, p, len, data, size);
}


int
encode_KrbFastArmor(unsigned char *p, size_t len, const KrbFastArmor *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KrbFastArmor, p, len, data, size);
    return ret;
}


size_t
length_KrbFastArmor(const KrbFastArmor *data)
{
    return _asn1_length(asn1_KrbFastArmor, data);
}


void
free_KrbFastArmor(KrbFastArmor *data)
{
    _asn1_free_top(asn1_KrbFastArmor, data);
}


int
copy_KrbFastArmor(const KrbFastArmor *from, KrbFastArmor *to)
{
    return _asn1_copy_top(asn1_KrbFastArmor, from, to);
}

extern const struct asn1_template asn1_KrbFastArmoredReq[];
/* template_members: KrbFastArmoredReq exp exp */
extern const struct asn1_template asn1_KrbFastArmoredReq_tag__360[];
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastArmoredReq exp exp */
extern const struct asn1_template asn1_KrbFastArmoredReq_tag_armor_361[];
/* generate_template_type: KrbFastArmoredReq_tag_armor_361 */
const struct asn1_template asn1_KrbFastArmoredReq_tag_armor_361[] = {
/* 0 */ { 0, sizeof(KrbFastArmor), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KrbFastArmor }
};
/* template_members: KrbFastArmoredReq exp exp */
extern const struct asn1_template asn1_KrbFastArmoredReq_tag_req_checksum_362[];
/* generate_template_type: KrbFastArmoredReq_tag_req_checksum_362 */
/* template_members: KrbFastArmoredReq exp exp */
extern const struct asn1_template asn1_KrbFastArmoredReq_tag_enc_fast_req_363[];
/* generate_template_type: KrbFastArmoredReq_tag_enc_fast_req_363 */
/* generate_template_type: KrbFastArmoredReq_tag__360 */
const struct asn1_template asn1_KrbFastArmoredReq_tag__360[] = {
/* 0 */ { 0, sizeof(struct KrbFastArmoredReq), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct KrbFastArmoredReq, armor), asn1_KrbFastArmoredReq_tag_armor_361 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KrbFastArmoredReq, req_checksum), asn1_Authenticator_tag_cksum_80 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KrbFastArmoredReq, enc_fast_req), asn1_Ticket_tag_enc_part_57 }
};
/* generate_template_type: KrbFastArmoredReq */
const struct asn1_template asn1_KrbFastArmoredReq[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredReq), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastArmoredReq_tag__360 }
};

int
decode_KrbFastArmoredReq(const unsigned char *p, size_t len, KrbFastArmoredReq *data, size_t *size)
{
    return _asn1_decode_top(asn1_KrbFastArmoredReq, 0|0, p, len, data, size);
}


int
encode_KrbFastArmoredReq(unsigned char *p, size_t len, const KrbFastArmoredReq *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KrbFastArmoredReq, p, len, data, size);
    return ret;
}


size_t
length_KrbFastArmoredReq(const KrbFastArmoredReq *data)
{
    return _asn1_length(asn1_KrbFastArmoredReq, data);
}


void
free_KrbFastArmoredReq(KrbFastArmoredReq *data)
{
    _asn1_free_top(asn1_KrbFastArmoredReq, data);
}


int
copy_KrbFastArmoredReq(const KrbFastArmoredReq *from, KrbFastArmoredReq *to)
{
    return _asn1_copy_top(asn1_KrbFastArmoredReq, from, to);
}

extern const struct asn1_template asn1_PA_FX_FAST_REQUEST[];
extern const struct asn1_template asn1_PA_FX_FAST_REQUEST_choice_armored_data[];
/* template_members: KrbFastArmoredReq exp exp */
extern const struct asn1_template asn1_KrbFastArmoredReq_tag__364[];
/* generate_template_type: KrbFastArmoredReq_tag__364 */
const struct asn1_template asn1_KrbFastArmoredReq_tag__364[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredReq), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KrbFastArmoredReq }
};
/* generate_template_type: PA_FX_FAST_REQUEST_choice_armored_data */
const struct asn1_template asn1_PA_FX_FAST_REQUEST_choice_armored_data[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredReq), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_KrbFastArmoredReq_tag__364 }
};
static const struct asn1_template asn1_choice_PA_FX_FAST_REQUEST_0[] = {
/* 0 */ { offsetof(PA_FX_FAST_REQUEST, u.asn1_ellipsis), offsetof(PA_FX_FAST_REQUEST, element), ((void *)1) },
/* 1 */ { choice_PA_FX_FAST_REQUEST_armored_data, offsetof(PA_FX_FAST_REQUEST, u.armored_data), asn1_PA_FX_FAST_REQUEST_choice_armored_data }
};
/* generate_template_type: PA_FX_FAST_REQUEST */
const struct asn1_template asn1_PA_FX_FAST_REQUEST[] = {
/* 0 */ { 0, sizeof(PA_FX_FAST_REQUEST), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_PA_FX_FAST_REQUEST_0 }
};

int
decode_PA_FX_FAST_REQUEST(const unsigned char *p, size_t len, PA_FX_FAST_REQUEST *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_FX_FAST_REQUEST, 0|0, p, len, data, size);
}


int
encode_PA_FX_FAST_REQUEST(unsigned char *p, size_t len, const PA_FX_FAST_REQUEST *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_FX_FAST_REQUEST, p, len, data, size);
    return ret;
}


size_t
length_PA_FX_FAST_REQUEST(const PA_FX_FAST_REQUEST *data)
{
    return _asn1_length(asn1_PA_FX_FAST_REQUEST, data);
}


void
free_PA_FX_FAST_REQUEST(PA_FX_FAST_REQUEST *data)
{
    _asn1_free_top(asn1_PA_FX_FAST_REQUEST, data);
}


int
copy_PA_FX_FAST_REQUEST(const PA_FX_FAST_REQUEST *from, PA_FX_FAST_REQUEST *to)
{
    return _asn1_copy_top(asn1_PA_FX_FAST_REQUEST, from, to);
}

extern const struct asn1_template asn1_KrbFastFinished[];
/* template_members: KrbFastFinished exp exp */
extern const struct asn1_template asn1_KrbFastFinished_tag__365[];
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastFinished exp exp */
extern const struct asn1_template asn1_KrbFastFinished_tag_timestamp_366[];
/* generate_template_type: KrbFastFinished_tag_timestamp_366 */
/* template_members: KrbFastFinished exp exp */
extern const struct asn1_template asn1_KrbFastFinished_tag_usec_367[];
/* generate_template_type: KrbFastFinished_tag_usec_367 */
/* template_members: KrbFastFinished exp exp */
extern const struct asn1_template asn1_KrbFastFinished_tag_crealm_368[];
/* generate_template_type: KrbFastFinished_tag_crealm_368 */
/* template_members: KrbFastFinished exp exp */
extern const struct asn1_template asn1_KrbFastFinished_tag_cname_369[];
/* generate_template_type: KrbFastFinished_tag_cname_369 */
/* template_members: KrbFastFinished exp exp */
extern const struct asn1_template asn1_KrbFastFinished_tag_ticket_checksum_370[];
/* generate_template_type: KrbFastFinished_tag_ticket_checksum_370 */
/* generate_template_type: KrbFastFinished_tag__365 */
const struct asn1_template asn1_KrbFastFinished_tag__365[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KrbFastFinished), ((void *)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbFastFinished, timestamp), asn1_LastReq_val_tag_lr_value_38 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KrbFastFinished, usec), asn1_HostAddress_tag_addr_type_21 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KrbFastFinished, crealm), asn1_Principal_tag_realm_18 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KrbFastFinished, cname), asn1_Principal_tag_name_17 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct KrbFastFinished, ticket_checksum), asn1_Authenticator_tag_cksum_80 }
};
/* generate_template_type: KrbFastFinished */
const struct asn1_template asn1_KrbFastFinished[] = {
/* 0 */ { 0, sizeof(KrbFastFinished), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastFinished_tag__365 }
};

int
decode_KrbFastFinished(const unsigned char *p, size_t len, KrbFastFinished *data, size_t *size)
{
    return _asn1_decode_top(asn1_KrbFastFinished, 0|0, p, len, data, size);
}


int
encode_KrbFastFinished(unsigned char *p, size_t len, const KrbFastFinished *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KrbFastFinished, p, len, data, size);
    return ret;
}


size_t
length_KrbFastFinished(const KrbFastFinished *data)
{
    return _asn1_length(asn1_KrbFastFinished, data);
}


void
free_KrbFastFinished(KrbFastFinished *data)
{
    _asn1_free_top(asn1_KrbFastFinished, data);
}


int
copy_KrbFastFinished(const KrbFastFinished *from, KrbFastFinished *to)
{
    return _asn1_copy_top(asn1_KrbFastFinished, from, to);
}

extern const struct asn1_template asn1_KrbFastResponse[];
/* template_members: KrbFastResponse exp exp */
extern const struct asn1_template asn1_KrbFastResponse_tag__371[];
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastResponse exp exp */
extern const struct asn1_template asn1_KrbFastResponse_tag_padata_372[];
/* generate_template_type: KrbFastResponse_tag_padata_372 */
/* template_members: KrbFastResponse exp exp */
extern const struct asn1_template asn1_KrbFastResponse_tag_strengthen_key_373[];
/* generate_template_type: KrbFastResponse_tag_strengthen_key_373 */
/* template_members: KrbFastResponse exp exp */
extern const struct asn1_template asn1_KrbFastResponse_tag_finished_374[];
/* generate_template_type: KrbFastResponse_tag_finished_374 */
const struct asn1_template asn1_KrbFastResponse_tag_finished_374[] = {
/* 0 */ { 0, sizeof(KrbFastFinished), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KrbFastFinished }
};
/* template_members: KrbFastResponse exp exp */
extern const struct asn1_template asn1_KrbFastResponse_tag_nonce_375[];
/* generate_template_type: KrbFastResponse_tag_nonce_375 */
/* generate_template_type: KrbFastResponse_tag__371 */
const struct asn1_template asn1_KrbFastResponse_tag__371[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KrbFastResponse), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbFastResponse, padata), asn1_KDC_REQ_tag_padata_126 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KrbFastResponse, strengthen_key), asn1_EncTicketPart_tag_key_61 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KrbFastResponse, finished), asn1_KrbFastResponse_tag_finished_374 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KrbFastResponse, nonce), asn1_Authenticator_tag_seq_number_84 }
};
/* generate_template_type: KrbFastResponse */
const struct asn1_template asn1_KrbFastResponse[] = {
/* 0 */ { 0, sizeof(KrbFastResponse), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastResponse_tag__371 }
};

int
decode_KrbFastResponse(const unsigned char *p, size_t len, KrbFastResponse *data, size_t *size)
{
    return _asn1_decode_top(asn1_KrbFastResponse, 0|0, p, len, data, size);
}


int
encode_KrbFastResponse(unsigned char *p, size_t len, const KrbFastResponse *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KrbFastResponse, p, len, data, size);
    return ret;
}


size_t
length_KrbFastResponse(const KrbFastResponse *data)
{
    return _asn1_length(asn1_KrbFastResponse, data);
}


void
free_KrbFastResponse(KrbFastResponse *data)
{
    _asn1_free_top(asn1_KrbFastResponse, data);
}


int
copy_KrbFastResponse(const KrbFastResponse *from, KrbFastResponse *to)
{
    return _asn1_copy_top(asn1_KrbFastResponse, from, to);
}

extern const struct asn1_template asn1_KrbFastArmoredRep[];
/* template_members: KrbFastArmoredRep exp exp */
extern const struct asn1_template asn1_KrbFastArmoredRep_tag__376[];
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastArmoredRep exp exp */
extern const struct asn1_template asn1_KrbFastArmoredRep_tag_enc_fast_rep_377[];
/* generate_template_type: KrbFastArmoredRep_tag_enc_fast_rep_377 */
/* generate_template_type: KrbFastArmoredRep_tag__376 */
const struct asn1_template asn1_KrbFastArmoredRep_tag__376[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KrbFastArmoredRep), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbFastArmoredRep, enc_fast_rep), asn1_Ticket_tag_enc_part_57 }
};
/* generate_template_type: KrbFastArmoredRep */
const struct asn1_template asn1_KrbFastArmoredRep[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredRep), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastArmoredRep_tag__376 }
};

int
decode_KrbFastArmoredRep(const unsigned char *p, size_t len, KrbFastArmoredRep *data, size_t *size)
{
    return _asn1_decode_top(asn1_KrbFastArmoredRep, 0|0, p, len, data, size);
}


int
encode_KrbFastArmoredRep(unsigned char *p, size_t len, const KrbFastArmoredRep *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KrbFastArmoredRep, p, len, data, size);
    return ret;
}


size_t
length_KrbFastArmoredRep(const KrbFastArmoredRep *data)
{
    return _asn1_length(asn1_KrbFastArmoredRep, data);
}


void
free_KrbFastArmoredRep(KrbFastArmoredRep *data)
{
    _asn1_free_top(asn1_KrbFastArmoredRep, data);
}


int
copy_KrbFastArmoredRep(const KrbFastArmoredRep *from, KrbFastArmoredRep *to)
{
    return _asn1_copy_top(asn1_KrbFastArmoredRep, from, to);
}

extern const struct asn1_template asn1_PA_FX_FAST_REPLY[];
extern const struct asn1_template asn1_PA_FX_FAST_REPLY_choice_armored_data[];
/* template_members: KrbFastArmoredRep exp exp */
extern const struct asn1_template asn1_KrbFastArmoredRep_tag__378[];
/* generate_template_type: KrbFastArmoredRep_tag__378 */
const struct asn1_template asn1_KrbFastArmoredRep_tag__378[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredRep), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KrbFastArmoredRep }
};
/* generate_template_type: PA_FX_FAST_REPLY_choice_armored_data */
const struct asn1_template asn1_PA_FX_FAST_REPLY_choice_armored_data[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredRep), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_KrbFastArmoredRep_tag__378 }
};
static const struct asn1_template asn1_choice_PA_FX_FAST_REPLY_1[] = {
/* 0 */ { offsetof(PA_FX_FAST_REPLY, u.asn1_ellipsis), offsetof(PA_FX_FAST_REPLY, element), ((void *)1) },
/* 1 */ { choice_PA_FX_FAST_REPLY_armored_data, offsetof(PA_FX_FAST_REPLY, u.armored_data), asn1_PA_FX_FAST_REPLY_choice_armored_data }
};
/* generate_template_type: PA_FX_FAST_REPLY */
const struct asn1_template asn1_PA_FX_FAST_REPLY[] = {
/* 0 */ { 0, sizeof(PA_FX_FAST_REPLY), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_PA_FX_FAST_REPLY_1 }
};

int
decode_PA_FX_FAST_REPLY(const unsigned char *p, size_t len, PA_FX_FAST_REPLY *data, size_t *size)
{
    return _asn1_decode_top(asn1_PA_FX_FAST_REPLY, 0|0, p, len, data, size);
}


int
encode_PA_FX_FAST_REPLY(unsigned char *p, size_t len, const PA_FX_FAST_REPLY *data, size_t *size)
{
    int ret = _asn1_encode(asn1_PA_FX_FAST_REPLY, p, len, data, size);
    return ret;
}


size_t
length_PA_FX_FAST_REPLY(const PA_FX_FAST_REPLY *data)
{
    return _asn1_length(asn1_PA_FX_FAST_REPLY, data);
}


void
free_PA_FX_FAST_REPLY(PA_FX_FAST_REPLY *data)
{
    _asn1_free_top(asn1_PA_FX_FAST_REPLY, data);
}


int
copy_PA_FX_FAST_REPLY(const PA_FX_FAST_REPLY *from, PA_FX_FAST_REPLY *to)
{
    return _asn1_copy_top(asn1_PA_FX_FAST_REPLY, from, to);
}

extern const struct asn1_template asn1_KDCFastFlags[];
/* template_members: KDCFastFlags exp exp */
extern const struct asn1_template asn1_KDCFastFlags_tag__379[];
static const struct asn1_template asn1_KDCFastFlags_bmember__5[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(KDCFastFlags), ((void *)5) },
/* 1 */ { 0, 0, 0 } /* use_reply_key */,
/* 2 */ { 0, 1, 0 } /* reply_key_used */,
/* 3 */ { 0, 2, 0 } /* reply_key_replaced */,
/* 4 */ { 0, 3, 0 } /* kdc_verfied */,
/* 5 */ { 0, 4, 0 } /* requested_hidden_names */
};
/* generate_template_type: KDCFastFlags_tag__379 */
const struct asn1_template asn1_KDCFastFlags_tag__379[] = {
/* 0 */ { 0, sizeof(KDCFastFlags), ((void *)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_KDCFastFlags_bmember__5 }
};
/* generate_template_type: KDCFastFlags */
const struct asn1_template asn1_KDCFastFlags[] = {
/* 0 */ { 0, sizeof(KDCFastFlags), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_KDCFastFlags_tag__379 }
};

int
decode_KDCFastFlags(const unsigned char *p, size_t len, KDCFastFlags *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDCFastFlags, 0|0, p, len, data, size);
}


int
encode_KDCFastFlags(unsigned char *p, size_t len, const KDCFastFlags *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDCFastFlags, p, len, data, size);
    return ret;
}


size_t
length_KDCFastFlags(const KDCFastFlags *data)
{
    return _asn1_length(asn1_KDCFastFlags, data);
}


void
free_KDCFastFlags(KDCFastFlags *data)
{
    _asn1_free_top(asn1_KDCFastFlags, data);
}


int
copy_KDCFastFlags(const KDCFastFlags *from, KDCFastFlags *to)
{
    return _asn1_copy_top(asn1_KDCFastFlags, from, to);
}

unsigned KDCFastFlags2int(KDCFastFlags f)
{
unsigned r = 0;
if(f.use_reply_key) r |= (1U << 0);
if(f.reply_key_used) r |= (1U << 1);
if(f.reply_key_replaced) r |= (1U << 2);
if(f.kdc_verfied) r |= (1U << 3);
if(f.requested_hidden_names) r |= (1U << 4);
return r;
}

KDCFastFlags int2KDCFastFlags(unsigned n)
{
	KDCFastFlags flags;

	memset(&flags, 0, sizeof(flags));

	flags.use_reply_key = (n >> 0) & 1;
	flags.reply_key_used = (n >> 1) & 1;
	flags.reply_key_replaced = (n >> 2) & 1;
	flags.kdc_verfied = (n >> 3) & 1;
	flags.requested_hidden_names = (n >> 4) & 1;
	return flags;
}

static struct units KDCFastFlags_units[] = {
	{"requested-hidden-names",	1U << 4},
	{"kdc-verfied",	1U << 3},
	{"reply-key-replaced",	1U << 2},
	{"reply-key-used",	1U << 1},
	{"use-reply-key",	1U << 0},
	{NULL,	0}
};

const struct units * asn1_KDCFastFlags_table_units = KDCFastFlags_units;
extern const struct asn1_template asn1_KDCSRPState[];
/* template_members: KDCSRPState exp exp */
extern const struct asn1_template asn1_KDCSRPState_tag__380[];
/* tsequence: members isstruct: 1 */
/* template_members: KDCSRPState exp exp */
extern const struct asn1_template asn1_KDCSRPState_tag_pa_announce_381[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_pa_announce_382[];
/* generate_template_type: heim_octet_string_tag_pa_announce_382 */
/* generate_template_type: KDCSRPState_tag_pa_announce_381 */
/* template_members: KDCSRPState exp exp */
extern const struct asn1_template asn1_KDCSRPState_tag_group_383[];
/* generate_template_type: KDCSRPState_tag_group_383 */
const struct asn1_template asn1_KDCSRPState_tag_group_383[] = {
/* 0 */ { 0, sizeof(KRB5_SRP_GROUP), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KRB5_SRP_GROUP }
};
/* template_members: KDCSRPState exp exp */
extern const struct asn1_template asn1_KDCSRPState_tag_m_384[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_m_385[];
/* generate_template_type: heim_octet_string_tag_m_385 */
/* generate_template_type: KDCSRPState_tag_m_384 */
/* template_members: KDCSRPState exp exp */
extern const struct asn1_template asn1_KDCSRPState_tag_hamk_386[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_hamk_387[];
/* generate_template_type: heim_octet_string_tag_hamk_387 */
/* generate_template_type: KDCSRPState_tag_hamk_386 */
/* template_members: KDCSRPState exp exp */
extern const struct asn1_template asn1_KDCSRPState_tag_k_388[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_k_389[];
/* generate_template_type: heim_octet_string_tag_k_389 */
/* generate_template_type: KDCSRPState_tag_k_388 */
/* generate_template_type: KDCSRPState_tag__380 */
const struct asn1_template asn1_KDCSRPState_tag__380[] = {
/* 0 */ { 0, sizeof(struct KDCSRPState), ((void *)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDCSRPState, pa_announce), asn1_HostAddress_tag_address_22 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KDCSRPState, group), asn1_KDCSRPState_tag_group_383 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KDCSRPState, m), asn1_HostAddress_tag_address_22 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KDCSRPState, hamk), asn1_HostAddress_tag_address_22 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct KDCSRPState, k), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: KDCSRPState */
const struct asn1_template asn1_KDCSRPState[] = {
/* 0 */ { 0, sizeof(KDCSRPState), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCSRPState_tag__380 }
};

int
decode_KDCSRPState(const unsigned char *p, size_t len, KDCSRPState *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDCSRPState, 0|0, p, len, data, size);
}


int
encode_KDCSRPState(unsigned char *p, size_t len, const KDCSRPState *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDCSRPState, p, len, data, size);
    return ret;
}


size_t
length_KDCSRPState(const KDCSRPState *data)
{
    return _asn1_length(asn1_KDCSRPState, data);
}


void
free_KDCSRPState(KDCSRPState *data)
{
    _asn1_free_top(asn1_KDCSRPState, data);
}


int
copy_KDCSRPState(const KDCSRPState *from, KDCSRPState *to)
{
    return _asn1_copy_top(asn1_KDCSRPState, from, to);
}

extern const struct asn1_template asn1_KDCFastPAState[];
/* template_members: KDCFastPAState exp exp */
extern const struct asn1_template asn1_KDCFastPAState_tag__390[];
/* tsequence: members isstruct: 1 */
/* template_members: KDCFastPAState exp exp */
extern const struct asn1_template asn1_KDCFastPAState_tag_srp_391[];
/* generate_template_type: KDCFastPAState_tag_srp_391 */
const struct asn1_template asn1_KDCFastPAState_tag_srp_391[] = {
/* 0 */ { 0, sizeof(KDCSRPState), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDCSRPState }
};
/* generate_template_type: KDCFastPAState_tag__390 */
const struct asn1_template asn1_KDCFastPAState_tag__390[] = {
/* 0 */ { 0, sizeof(struct KDCFastPAState), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct KDCFastPAState, srp), asn1_KDCFastPAState_tag_srp_391 }
};
/* generate_template_type: KDCFastPAState */
const struct asn1_template asn1_KDCFastPAState[] = {
/* 0 */ { 0, sizeof(KDCFastPAState), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCFastPAState_tag__390 }
};

int
decode_KDCFastPAState(const unsigned char *p, size_t len, KDCFastPAState *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDCFastPAState, 0|0, p, len, data, size);
}


int
encode_KDCFastPAState(unsigned char *p, size_t len, const KDCFastPAState *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDCFastPAState, p, len, data, size);
    return ret;
}


size_t
length_KDCFastPAState(const KDCFastPAState *data)
{
    return _asn1_length(asn1_KDCFastPAState, data);
}


void
free_KDCFastPAState(KDCFastPAState *data)
{
    _asn1_free_top(asn1_KDCFastPAState, data);
}


int
copy_KDCFastPAState(const KDCFastPAState *from, KDCFastPAState *to)
{
    return _asn1_copy_top(asn1_KDCFastPAState, from, to);
}

extern const struct asn1_template asn1_KDCFastState[];
/* template_members: KDCFastState exp exp */
extern const struct asn1_template asn1_KDCFastState_tag__392[];
/* tsequence: members isstruct: 1 */
/* template_members: KDCFastState exp exp */
extern const struct asn1_template asn1_KDCFastState_tag_flags_393[];
/* generate_template_type: KDCFastState_tag_flags_393 */
const struct asn1_template asn1_KDCFastState_tag_flags_393[] = {
/* 0 */ { 0, sizeof(KDCFastFlags), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDCFastFlags }
};
/* template_members: KDCFastState exp exp */
extern const struct asn1_template asn1_KDCFastState_tag_expiration_394[];
/* template_members: time_t exp exp */
extern const struct asn1_template asn1_time_t_tag_expiration_395[];
/* generate_template_type: time_t_tag_expiration_395 */
/* generate_template_type: KDCFastState_tag_expiration_394 */
const struct asn1_template asn1_KDCFastState_tag_expiration_394[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), 0, asn1_KerberosTime_tag__25 }
};
/* template_members: KDCFastState exp exp */
extern const struct asn1_template asn1_KDCFastState_tag_expected_pa_types_396[];
/* template_members: KDCFastState exp exp */
extern const struct asn1_template asn1_KDCFastState_tag_expected_pa_types_397[];
extern const struct asn1_template asn1_KDCFastState_expected_pa_types_17[];
/* generate_template_type: KDCFastState_expected_pa_types_17 */
/* generate_template_type: KDCFastState_tag_expected_pa_types_397 */
const struct asn1_template asn1_KDCFastState_tag_expected_pa_types_397[] = {
/* 0 */ { 0, sizeof(struct KDCFastState), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PA_DATA_tag_padata_type_87 }
};
/* generate_template_type: KDCFastState_tag_expected_pa_types_396 */
const struct asn1_template asn1_KDCFastState_tag_expected_pa_types_396[] = {
/* 0 */ { 0, sizeof(struct KDCFastState), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCFastState_tag_expected_pa_types_397 }
};
/* template_members: KDCFastState exp exp */
extern const struct asn1_template asn1_KDCFastState_tag_pa_state_398[];
/* generate_template_type: KDCFastState_tag_pa_state_398 */
const struct asn1_template asn1_KDCFastState_tag_pa_state_398[] = {
/* 0 */ { 0, sizeof(KDCFastPAState), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDCFastPAState }
};
/* generate_template_type: KDCFastState_tag__392 */
const struct asn1_template asn1_KDCFastState_tag__392[] = {
/* 0 */ { 0, sizeof(struct KDCFastState), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDCFastState, flags), asn1_KDCFastState_tag_flags_393 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KDCFastState, expiration), asn1_KDCFastState_tag_expiration_394 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KDCFastState, expected_pa_types), asn1_KDCFastState_tag_expected_pa_types_396 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KDCFastState, pa_state), asn1_KDCFastState_tag_pa_state_398 }
};
/* generate_template_type: KDCFastState */
const struct asn1_template asn1_KDCFastState[] = {
/* 0 */ { 0, sizeof(KDCFastState), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCFastState_tag__392 }
};

int
decode_KDCFastState(const unsigned char *p, size_t len, KDCFastState *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDCFastState, 0|0, p, len, data, size);
}


int
encode_KDCFastState(unsigned char *p, size_t len, const KDCFastState *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDCFastState, p, len, data, size);
    return ret;
}


size_t
length_KDCFastState(const KDCFastState *data)
{
    return _asn1_length(asn1_KDCFastState, data);
}


void
free_KDCFastState(KDCFastState *data)
{
    _asn1_free_top(asn1_KDCFastState, data);
}


int
copy_KDCFastState(const KDCFastState *from, KDCFastState *to)
{
    return _asn1_copy_top(asn1_KDCFastState, from, to);
}

extern const struct asn1_template asn1_KDCFastCookie[];
/* template_members: KDCFastCookie exp exp */
extern const struct asn1_template asn1_KDCFastCookie_tag__399[];
/* tsequence: members isstruct: 1 */
/* template_members: KDCFastCookie exp exp */
extern const struct asn1_template asn1_KDCFastCookie_tag_version_400[];
/* generate_template_type: KDCFastCookie_tag_version_400 */
/* template_members: KDCFastCookie exp exp */
extern const struct asn1_template asn1_KDCFastCookie_tag_realm_401[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_realm_402[];
/* generate_template_type: heim_utf8_string_tag_realm_402 */
const struct asn1_template asn1_heim_utf8_string_tag_realm_402[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UTF8_STRING), 0, NULL }
};
/* generate_template_type: KDCFastCookie_tag_realm_401 */
const struct asn1_template asn1_KDCFastCookie_tag_realm_401[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_heim_utf8_string_tag_realm_402 }
};
/* template_members: KDCFastCookie exp exp */
extern const struct asn1_template asn1_KDCFastCookie_tag_cookie_403[];
/* generate_template_type: KDCFastCookie_tag_cookie_403 */
/* generate_template_type: KDCFastCookie_tag__399 */
const struct asn1_template asn1_KDCFastCookie_tag__399[] = {
/* 0 */ { 0, sizeof(struct KDCFastCookie), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDCFastCookie, version), asn1_Authenticator_tag_seq_number_84 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KDCFastCookie, realm), asn1_KDCFastCookie_tag_realm_401 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KDCFastCookie, cookie), asn1_Ticket_tag_enc_part_57 }
};
/* generate_template_type: KDCFastCookie */
const struct asn1_template asn1_KDCFastCookie[] = {
/* 0 */ { 0, sizeof(KDCFastCookie), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCFastCookie_tag__399 }
};

int
decode_KDCFastCookie(const unsigned char *p, size_t len, KDCFastCookie *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDCFastCookie, 0|0, p, len, data, size);
}


int
encode_KDCFastCookie(unsigned char *p, size_t len, const KDCFastCookie *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDCFastCookie, p, len, data, size);
    return ret;
}


size_t
length_KDCFastCookie(const KDCFastCookie *data)
{
    return _asn1_length(asn1_KDCFastCookie, data);
}


void
free_KDCFastCookie(KDCFastCookie *data)
{
    _asn1_free_top(asn1_KDCFastCookie, data);
}


int
copy_KDCFastCookie(const KDCFastCookie *from, KDCFastCookie *to)
{
    return _asn1_copy_top(asn1_KDCFastCookie, from, to);
}

extern const struct asn1_template asn1_KDC_PROXY_MESSAGE[];
/* template_members: KDC_PROXY_MESSAGE exp exp */
extern const struct asn1_template asn1_KDC_PROXY_MESSAGE_tag__404[];
/* tsequence: members isstruct: 1 */
/* template_members: KDC_PROXY_MESSAGE exp exp */
extern const struct asn1_template asn1_KDC_PROXY_MESSAGE_tag_kerb_message_405[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_kerb_message_406[];
/* generate_template_type: heim_octet_string_tag_kerb_message_406 */
/* generate_template_type: KDC_PROXY_MESSAGE_tag_kerb_message_405 */
/* template_members: KDC_PROXY_MESSAGE exp exp */
extern const struct asn1_template asn1_KDC_PROXY_MESSAGE_tag_target_domain_407[];
/* generate_template_type: KDC_PROXY_MESSAGE_tag_target_domain_407 */
/* template_members: KDC_PROXY_MESSAGE exp exp */
extern const struct asn1_template asn1_KDC_PROXY_MESSAGE_tag_dclocator_hint_408[];
/* template_members: heim_integer exp exp */
extern const struct asn1_template asn1_heim_integer_tag_dclocator_hint_409[];
/* generate_template_type: heim_integer_tag_dclocator_hint_409 */
/* generate_template_type: KDC_PROXY_MESSAGE_tag_dclocator_hint_408 */
/* generate_template_type: KDC_PROXY_MESSAGE_tag__404 */
const struct asn1_template asn1_KDC_PROXY_MESSAGE_tag__404[] = {
/* 0 */ { 0, sizeof(struct KDC_PROXY_MESSAGE), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDC_PROXY_MESSAGE, kerb_message), asn1_HostAddress_tag_address_22 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KDC_PROXY_MESSAGE, target_domain), asn1_Principal_tag_realm_18 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KDC_PROXY_MESSAGE, dclocator_hint), asn1_AD_AND_OR_tag_condition_count_282 }
};
/* generate_template_type: KDC_PROXY_MESSAGE */
const struct asn1_template asn1_KDC_PROXY_MESSAGE[] = {
/* 0 */ { 0, sizeof(KDC_PROXY_MESSAGE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_PROXY_MESSAGE_tag__404 }
};

int
decode_KDC_PROXY_MESSAGE(const unsigned char *p, size_t len, KDC_PROXY_MESSAGE *data, size_t *size)
{
    return _asn1_decode_top(asn1_KDC_PROXY_MESSAGE, 0|0, p, len, data, size);
}


int
encode_KDC_PROXY_MESSAGE(unsigned char *p, size_t len, const KDC_PROXY_MESSAGE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KDC_PROXY_MESSAGE, p, len, data, size);
    return ret;
}


size_t
length_KDC_PROXY_MESSAGE(const KDC_PROXY_MESSAGE *data)
{
    return _asn1_length(asn1_KDC_PROXY_MESSAGE, data);
}


void
free_KDC_PROXY_MESSAGE(KDC_PROXY_MESSAGE *data)
{
    _asn1_free_top(asn1_KDC_PROXY_MESSAGE, data);
}


int
copy_KDC_PROXY_MESSAGE(const KDC_PROXY_MESSAGE *from, KDC_PROXY_MESSAGE *to)
{
    return _asn1_copy_top(asn1_KDC_PROXY_MESSAGE, from, to);
}

extern const struct asn1_template asn1_KERB_TIMES[];
/* template_members: KERB_TIMES exp exp */
extern const struct asn1_template asn1_KERB_TIMES_tag__410[];
/* tsequence: members isstruct: 1 */
/* template_members: KERB_TIMES exp exp */
extern const struct asn1_template asn1_KERB_TIMES_tag_authtime_411[];
/* generate_template_type: KERB_TIMES_tag_authtime_411 */
/* template_members: KERB_TIMES exp exp */
extern const struct asn1_template asn1_KERB_TIMES_tag_starttime_412[];
/* generate_template_type: KERB_TIMES_tag_starttime_412 */
/* template_members: KERB_TIMES exp exp */
extern const struct asn1_template asn1_KERB_TIMES_tag_endtime_413[];
/* generate_template_type: KERB_TIMES_tag_endtime_413 */
/* template_members: KERB_TIMES exp exp */
extern const struct asn1_template asn1_KERB_TIMES_tag_renew_till_414[];
/* generate_template_type: KERB_TIMES_tag_renew_till_414 */
/* generate_template_type: KERB_TIMES_tag__410 */
const struct asn1_template asn1_KERB_TIMES_tag__410[] = {
/* 0 */ { 0, sizeof(struct KERB_TIMES), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_TIMES, authtime), asn1_LastReq_val_tag_lr_value_38 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_TIMES, starttime), asn1_LastReq_val_tag_lr_value_38 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KERB_TIMES, endtime), asn1_LastReq_val_tag_lr_value_38 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KERB_TIMES, renew_till), asn1_LastReq_val_tag_lr_value_38 }
};
/* generate_template_type: KERB_TIMES */
const struct asn1_template asn1_KERB_TIMES[] = {
/* 0 */ { 0, sizeof(KERB_TIMES), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_TIMES_tag__410 }
};

int
decode_KERB_TIMES(const unsigned char *p, size_t len, KERB_TIMES *data, size_t *size)
{
    return _asn1_decode_top(asn1_KERB_TIMES, 0|0, p, len, data, size);
}


int
encode_KERB_TIMES(unsigned char *p, size_t len, const KERB_TIMES *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KERB_TIMES, p, len, data, size);
    return ret;
}


size_t
length_KERB_TIMES(const KERB_TIMES *data)
{
    return _asn1_length(asn1_KERB_TIMES, data);
}


void
free_KERB_TIMES(KERB_TIMES *data)
{
    _asn1_free_top(asn1_KERB_TIMES, data);
}


int
copy_KERB_TIMES(const KERB_TIMES *from, KERB_TIMES *to)
{
    return _asn1_copy_top(asn1_KERB_TIMES, from, to);
}

extern const struct asn1_template asn1_KERB_CRED[];
/* template_members: KERB_CRED exp exp */
extern const struct asn1_template asn1_KERB_CRED_tag__415[];
/* tsequence: members isstruct: 1 */
/* template_members: KERB_CRED exp exp */
extern const struct asn1_template asn1_KERB_CRED_tag_client_416[];
/* generate_template_type: KERB_CRED_tag_client_416 */
/* template_members: KERB_CRED exp exp */
extern const struct asn1_template asn1_KERB_CRED_tag_server_417[];
/* generate_template_type: KERB_CRED_tag_server_417 */
/* template_members: KERB_CRED exp exp */
extern const struct asn1_template asn1_KERB_CRED_tag_keyblock_418[];
/* generate_template_type: KERB_CRED_tag_keyblock_418 */
/* template_members: KERB_CRED exp exp */
extern const struct asn1_template asn1_KERB_CRED_tag_times_419[];
/* generate_template_type: KERB_CRED_tag_times_419 */
const struct asn1_template asn1_KERB_CRED_tag_times_419[] = {
/* 0 */ { 0, sizeof(KERB_TIMES), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KERB_TIMES }
};
/* template_members: KERB_CRED exp exp */
extern const struct asn1_template asn1_KERB_CRED_tag_ticket_420[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_ticket_421[];
/* generate_template_type: heim_octet_string_tag_ticket_421 */
/* generate_template_type: KERB_CRED_tag_ticket_420 */
/* template_members: KERB_CRED exp exp */
extern const struct asn1_template asn1_KERB_CRED_tag_authdata_422[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_authdata_423[];
/* generate_template_type: heim_octet_string_tag_authdata_423 */
/* generate_template_type: KERB_CRED_tag_authdata_422 */
/* template_members: KERB_CRED exp exp */
extern const struct asn1_template asn1_KERB_CRED_tag_addresses_424[];
/* generate_template_type: KERB_CRED_tag_addresses_424 */
/* template_members: KERB_CRED exp exp */
extern const struct asn1_template asn1_KERB_CRED_tag_flags_425[];
/* generate_template_type: KERB_CRED_tag_flags_425 */
/* generate_template_type: KERB_CRED_tag__415 */
const struct asn1_template asn1_KERB_CRED_tag__415[] = {
/* 0 */ { 0, sizeof(struct KERB_CRED), ((void *)8) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_CRED, client), asn1_Principal_seofTstruct_1 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_CRED, server), asn1_Principal_seofTstruct_1 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KERB_CRED, keyblock), asn1_EncTicketPart_tag_key_61 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KERB_CRED, times), asn1_KERB_CRED_tag_times_419 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct KERB_CRED, ticket), asn1_HostAddress_tag_address_22 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct KERB_CRED, authdata), asn1_HostAddress_tag_address_22 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct KERB_CRED, addresses), asn1_EncTicketPart_tag_caddr_69 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7), offsetof(struct KERB_CRED, flags), asn1_EncTicketPart_tag_flags_60 }
};
/* generate_template_type: KERB_CRED */
const struct asn1_template asn1_KERB_CRED[] = {
/* 0 */ { 0, sizeof(KERB_CRED), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_CRED_tag__415 }
};

int
decode_KERB_CRED(const unsigned char *p, size_t len, KERB_CRED *data, size_t *size)
{
    return _asn1_decode_top(asn1_KERB_CRED, 0|0, p, len, data, size);
}


int
encode_KERB_CRED(unsigned char *p, size_t len, const KERB_CRED *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KERB_CRED, p, len, data, size);
    return ret;
}


size_t
length_KERB_CRED(const KERB_CRED *data)
{
    return _asn1_length(asn1_KERB_CRED, data);
}


void
free_KERB_CRED(KERB_CRED *data)
{
    _asn1_free_top(asn1_KERB_CRED, data);
}


int
copy_KERB_CRED(const KERB_CRED *from, KERB_CRED *to)
{
    return _asn1_copy_top(asn1_KERB_CRED, from, to);
}

extern const struct asn1_template asn1_KERB_TGS_REQ_IN[];
/* template_members: KERB_TGS_REQ_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_IN_tag__426[];
/* tsequence: members isstruct: 1 */
/* template_members: KERB_TGS_REQ_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_IN_tag_cache_427[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_cache_428[];
/* generate_template_type: heim_octet_string_tag_cache_428 */
/* generate_template_type: KERB_TGS_REQ_IN_tag_cache_427 */
/* template_members: KERB_TGS_REQ_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_IN_tag_addrs_429[];
/* generate_template_type: KERB_TGS_REQ_IN_tag_addrs_429 */
/* template_members: KERB_TGS_REQ_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_IN_tag_flags_430[];
/* generate_template_type: KERB_TGS_REQ_IN_tag_flags_430 */
/* template_members: KERB_TGS_REQ_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_IN_tag_imp_431[];
/* generate_template_type: KERB_TGS_REQ_IN_tag_imp_431 */
/* template_members: KERB_TGS_REQ_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_IN_tag_ticket_432[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_ticket_433[];
/* generate_template_type: heim_octet_string_tag_ticket_433 */
/* generate_template_type: KERB_TGS_REQ_IN_tag_ticket_432 */
/* template_members: KERB_TGS_REQ_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_IN_tag_in_cred_434[];
/* generate_template_type: KERB_TGS_REQ_IN_tag_in_cred_434 */
const struct asn1_template asn1_KERB_TGS_REQ_IN_tag_in_cred_434[] = {
/* 0 */ { 0, sizeof(KERB_CRED), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KERB_CRED }
};
/* template_members: KERB_TGS_REQ_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_IN_tag_krbtgt_435[];
/* generate_template_type: KERB_TGS_REQ_IN_tag_krbtgt_435 */
/* template_members: KERB_TGS_REQ_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_IN_tag_padata_436[];
/* generate_template_type: KERB_TGS_REQ_IN_tag_padata_436 */
/* generate_template_type: KERB_TGS_REQ_IN_tag__426 */
const struct asn1_template asn1_KERB_TGS_REQ_IN_tag__426[] = {
/* 0 */ { 0, sizeof(struct KERB_TGS_REQ_IN), ((void *)8) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_TGS_REQ_IN, cache), asn1_HostAddress_tag_address_22 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_TGS_REQ_IN, addrs), asn1_EncTicketPart_tag_caddr_69 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KERB_TGS_REQ_IN, flags), asn1_Authenticator_tag_seq_number_84 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KERB_TGS_REQ_IN, imp), asn1_Principal_seofTstruct_1 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct KERB_TGS_REQ_IN, ticket), asn1_HostAddress_tag_address_22 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct KERB_TGS_REQ_IN, in_cred), asn1_KERB_TGS_REQ_IN_tag_in_cred_434 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct KERB_TGS_REQ_IN, krbtgt), asn1_KERB_TGS_REQ_IN_tag_in_cred_434 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7), offsetof(struct KERB_TGS_REQ_IN, padata), asn1_KDC_REQ_tag_padata_126 }
};
/* generate_template_type: KERB_TGS_REQ_IN */
const struct asn1_template asn1_KERB_TGS_REQ_IN[] = {
/* 0 */ { 0, sizeof(KERB_TGS_REQ_IN), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_TGS_REQ_IN_tag__426 }
};

int
decode_KERB_TGS_REQ_IN(const unsigned char *p, size_t len, KERB_TGS_REQ_IN *data, size_t *size)
{
    return _asn1_decode_top(asn1_KERB_TGS_REQ_IN, 0|0, p, len, data, size);
}


int
encode_KERB_TGS_REQ_IN(unsigned char *p, size_t len, const KERB_TGS_REQ_IN *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KERB_TGS_REQ_IN, p, len, data, size);
    return ret;
}


size_t
length_KERB_TGS_REQ_IN(const KERB_TGS_REQ_IN *data)
{
    return _asn1_length(asn1_KERB_TGS_REQ_IN, data);
}


void
free_KERB_TGS_REQ_IN(KERB_TGS_REQ_IN *data)
{
    _asn1_free_top(asn1_KERB_TGS_REQ_IN, data);
}


int
copy_KERB_TGS_REQ_IN(const KERB_TGS_REQ_IN *from, KERB_TGS_REQ_IN *to)
{
    return _asn1_copy_top(asn1_KERB_TGS_REQ_IN, from, to);
}

extern const struct asn1_template asn1_KERB_TGS_REQ_OUT[];
/* template_members: KERB_TGS_REQ_OUT exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_OUT_tag__437[];
/* tsequence: members isstruct: 1 */
/* template_members: KERB_TGS_REQ_OUT exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_OUT_tag_subkey_438[];
/* generate_template_type: KERB_TGS_REQ_OUT_tag_subkey_438 */
/* template_members: KERB_TGS_REQ_OUT exp exp */
extern const struct asn1_template asn1_KERB_TGS_REQ_OUT_tag_t_439[];
/* generate_template_type: KERB_TGS_REQ_OUT_tag_t_439 */
const struct asn1_template asn1_KERB_TGS_REQ_OUT_tag_t_439[] = {
/* 0 */ { 0, sizeof(TGS_REQ), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TGS_REQ }
};
/* generate_template_type: KERB_TGS_REQ_OUT_tag__437 */
const struct asn1_template asn1_KERB_TGS_REQ_OUT_tag__437[] = {
/* 0 */ { 0, sizeof(struct KERB_TGS_REQ_OUT), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct KERB_TGS_REQ_OUT, subkey), asn1_EncTicketPart_tag_key_61 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_TGS_REQ_OUT, t), asn1_KERB_TGS_REQ_OUT_tag_t_439 }
};
/* generate_template_type: KERB_TGS_REQ_OUT */
const struct asn1_template asn1_KERB_TGS_REQ_OUT[] = {
/* 0 */ { 0, sizeof(KERB_TGS_REQ_OUT), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_TGS_REQ_OUT_tag__437 }
};

int
decode_KERB_TGS_REQ_OUT(const unsigned char *p, size_t len, KERB_TGS_REQ_OUT *data, size_t *size)
{
    return _asn1_decode_top(asn1_KERB_TGS_REQ_OUT, 0|0, p, len, data, size);
}


int
encode_KERB_TGS_REQ_OUT(unsigned char *p, size_t len, const KERB_TGS_REQ_OUT *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KERB_TGS_REQ_OUT, p, len, data, size);
    return ret;
}


size_t
length_KERB_TGS_REQ_OUT(const KERB_TGS_REQ_OUT *data)
{
    return _asn1_length(asn1_KERB_TGS_REQ_OUT, data);
}


void
free_KERB_TGS_REQ_OUT(KERB_TGS_REQ_OUT *data)
{
    _asn1_free_top(asn1_KERB_TGS_REQ_OUT, data);
}


int
copy_KERB_TGS_REQ_OUT(const KERB_TGS_REQ_OUT *from, KERB_TGS_REQ_OUT *to)
{
    return _asn1_copy_top(asn1_KERB_TGS_REQ_OUT, from, to);
}

extern const struct asn1_template asn1_KERB_TGS_REP_IN[];
/* template_members: KERB_TGS_REP_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REP_IN_tag__440[];
/* tsequence: members isstruct: 1 */
/* template_members: KERB_TGS_REP_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REP_IN_tag_cache_441[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_cache_442[];
/* generate_template_type: heim_octet_string_tag_cache_442 */
/* generate_template_type: KERB_TGS_REP_IN_tag_cache_441 */
/* template_members: KERB_TGS_REP_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REP_IN_tag_subkey_443[];
/* generate_template_type: KERB_TGS_REP_IN_tag_subkey_443 */
/* template_members: KERB_TGS_REP_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REP_IN_tag_in_cred_444[];
/* generate_template_type: KERB_TGS_REP_IN_tag_in_cred_444 */
/* template_members: KERB_TGS_REP_IN exp exp */
extern const struct asn1_template asn1_KERB_TGS_REP_IN_tag_t_445[];
/* generate_template_type: KERB_TGS_REP_IN_tag_t_445 */
const struct asn1_template asn1_KERB_TGS_REP_IN_tag_t_445[] = {
/* 0 */ { 0, sizeof(TGS_REP), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TGS_REP }
};
/* generate_template_type: KERB_TGS_REP_IN_tag__440 */
const struct asn1_template asn1_KERB_TGS_REP_IN_tag__440[] = {
/* 0 */ { 0, sizeof(struct KERB_TGS_REP_IN), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_TGS_REP_IN, cache), asn1_HostAddress_tag_address_22 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KERB_TGS_REP_IN, subkey), asn1_EncTicketPart_tag_key_61 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KERB_TGS_REP_IN, in_cred), asn1_KERB_TGS_REQ_IN_tag_in_cred_434 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KERB_TGS_REP_IN, t), asn1_KERB_TGS_REP_IN_tag_t_445 }
};
/* generate_template_type: KERB_TGS_REP_IN */
const struct asn1_template asn1_KERB_TGS_REP_IN[] = {
/* 0 */ { 0, sizeof(KERB_TGS_REP_IN), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_TGS_REP_IN_tag__440 }
};

int
decode_KERB_TGS_REP_IN(const unsigned char *p, size_t len, KERB_TGS_REP_IN *data, size_t *size)
{
    return _asn1_decode_top(asn1_KERB_TGS_REP_IN, 0|0, p, len, data, size);
}


int
encode_KERB_TGS_REP_IN(unsigned char *p, size_t len, const KERB_TGS_REP_IN *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KERB_TGS_REP_IN, p, len, data, size);
    return ret;
}


size_t
length_KERB_TGS_REP_IN(const KERB_TGS_REP_IN *data)
{
    return _asn1_length(asn1_KERB_TGS_REP_IN, data);
}


void
free_KERB_TGS_REP_IN(KERB_TGS_REP_IN *data)
{
    _asn1_free_top(asn1_KERB_TGS_REP_IN, data);
}


int
copy_KERB_TGS_REP_IN(const KERB_TGS_REP_IN *from, KERB_TGS_REP_IN *to)
{
    return _asn1_copy_top(asn1_KERB_TGS_REP_IN, from, to);
}

extern const struct asn1_template asn1_KERB_TGS_REP_OUT[];
/* template_members: KERB_TGS_REP_OUT exp exp */
extern const struct asn1_template asn1_KERB_TGS_REP_OUT_tag__446[];
/* tsequence: members isstruct: 1 */
/* template_members: KERB_TGS_REP_OUT exp exp */
extern const struct asn1_template asn1_KERB_TGS_REP_OUT_tag_cache_447[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_cache_448[];
/* generate_template_type: heim_octet_string_tag_cache_448 */
/* generate_template_type: KERB_TGS_REP_OUT_tag_cache_447 */
/* template_members: KERB_TGS_REP_OUT exp exp */
extern const struct asn1_template asn1_KERB_TGS_REP_OUT_tag_cred_449[];
/* generate_template_type: KERB_TGS_REP_OUT_tag_cred_449 */
/* template_members: KERB_TGS_REP_OUT exp exp */
extern const struct asn1_template asn1_KERB_TGS_REP_OUT_tag_subkey_450[];
/* generate_template_type: KERB_TGS_REP_OUT_tag_subkey_450 */
/* generate_template_type: KERB_TGS_REP_OUT_tag__446 */
const struct asn1_template asn1_KERB_TGS_REP_OUT_tag__446[] = {
/* 0 */ { 0, sizeof(struct KERB_TGS_REP_OUT), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_TGS_REP_OUT, cache), asn1_HostAddress_tag_address_22 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_TGS_REP_OUT, cred), asn1_KERB_TGS_REQ_IN_tag_in_cred_434 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KERB_TGS_REP_OUT, subkey), asn1_EncTicketPart_tag_key_61 }
};
/* generate_template_type: KERB_TGS_REP_OUT */
const struct asn1_template asn1_KERB_TGS_REP_OUT[] = {
/* 0 */ { 0, sizeof(KERB_TGS_REP_OUT), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_TGS_REP_OUT_tag__446 }
};

int
decode_KERB_TGS_REP_OUT(const unsigned char *p, size_t len, KERB_TGS_REP_OUT *data, size_t *size)
{
    return _asn1_decode_top(asn1_KERB_TGS_REP_OUT, 0|0, p, len, data, size);
}


int
encode_KERB_TGS_REP_OUT(unsigned char *p, size_t len, const KERB_TGS_REP_OUT *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KERB_TGS_REP_OUT, p, len, data, size);
    return ret;
}


size_t
length_KERB_TGS_REP_OUT(const KERB_TGS_REP_OUT *data)
{
    return _asn1_length(asn1_KERB_TGS_REP_OUT, data);
}


void
free_KERB_TGS_REP_OUT(KERB_TGS_REP_OUT *data)
{
    _asn1_free_top(asn1_KERB_TGS_REP_OUT, data);
}


int
copy_KERB_TGS_REP_OUT(const KERB_TGS_REP_OUT *from, KERB_TGS_REP_OUT *to)
{
    return _asn1_copy_top(asn1_KERB_TGS_REP_OUT, from, to);
}

extern const struct asn1_template asn1_KERB_ARMOR_SERVICE_REPLY[];
/* template_members: KERB_ARMOR_SERVICE_REPLY exp exp */
extern const struct asn1_template asn1_KERB_ARMOR_SERVICE_REPLY_tag__451[];
/* tsequence: members isstruct: 1 */
/* template_members: KERB_ARMOR_SERVICE_REPLY exp exp */
extern const struct asn1_template asn1_KERB_ARMOR_SERVICE_REPLY_tag_armor_452[];
/* generate_template_type: KERB_ARMOR_SERVICE_REPLY_tag_armor_452 */
/* template_members: KERB_ARMOR_SERVICE_REPLY exp exp */
extern const struct asn1_template asn1_KERB_ARMOR_SERVICE_REPLY_tag_armor_key_453[];
/* generate_template_type: KERB_ARMOR_SERVICE_REPLY_tag_armor_key_453 */
/* generate_template_type: KERB_ARMOR_SERVICE_REPLY_tag__451 */
const struct asn1_template asn1_KERB_ARMOR_SERVICE_REPLY_tag__451[] = {
/* 0 */ { 0, sizeof(struct KERB_ARMOR_SERVICE_REPLY), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_ARMOR_SERVICE_REPLY, armor), asn1_KrbFastArmoredReq_tag_armor_361 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_ARMOR_SERVICE_REPLY, armor_key), asn1_EncTicketPart_tag_key_61 }
};
/* generate_template_type: KERB_ARMOR_SERVICE_REPLY */
const struct asn1_template asn1_KERB_ARMOR_SERVICE_REPLY[] = {
/* 0 */ { 0, sizeof(KERB_ARMOR_SERVICE_REPLY), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_ARMOR_SERVICE_REPLY_tag__451 }
};

int
decode_KERB_ARMOR_SERVICE_REPLY(const unsigned char *p, size_t len, KERB_ARMOR_SERVICE_REPLY *data, size_t *size)
{
    return _asn1_decode_top(asn1_KERB_ARMOR_SERVICE_REPLY, 0|0, p, len, data, size);
}


int
encode_KERB_ARMOR_SERVICE_REPLY(unsigned char *p, size_t len, const KERB_ARMOR_SERVICE_REPLY *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KERB_ARMOR_SERVICE_REPLY, p, len, data, size);
    return ret;
}


size_t
length_KERB_ARMOR_SERVICE_REPLY(const KERB_ARMOR_SERVICE_REPLY *data)
{
    return _asn1_length(asn1_KERB_ARMOR_SERVICE_REPLY, data);
}


void
free_KERB_ARMOR_SERVICE_REPLY(KERB_ARMOR_SERVICE_REPLY *data)
{
    _asn1_free_top(asn1_KERB_ARMOR_SERVICE_REPLY, data);
}


int
copy_KERB_ARMOR_SERVICE_REPLY(const KERB_ARMOR_SERVICE_REPLY *from, KERB_ARMOR_SERVICE_REPLY *to)
{
    return _asn1_copy_top(asn1_KERB_ARMOR_SERVICE_REPLY, from, to);
}

extern const struct asn1_template asn1_KERB_ERROR_NUMBER[];
/* template_members: KERB_ERROR_NUMBER exp exp */
extern const struct asn1_template asn1_KERB_ERROR_NUMBER_tag__454[];
/* generate_template_type: KERB_ERROR_NUMBER_tag__454 */
/* generate_template_type: KERB_ERROR_NUMBER */
const struct asn1_template asn1_KERB_ERROR_NUMBER[] = {
/* 0 */ { 0, sizeof(KERB_ERROR_NUMBER), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int
decode_KERB_ERROR_NUMBER(const unsigned char *p, size_t len, KERB_ERROR_NUMBER *data, size_t *size)
{
    return _asn1_decode_top(asn1_KERB_ERROR_NUMBER, 0|0, p, len, data, size);
}


int
encode_KERB_ERROR_NUMBER(unsigned char *p, size_t len, const KERB_ERROR_NUMBER *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KERB_ERROR_NUMBER, p, len, data, size);
    return ret;
}


size_t
length_KERB_ERROR_NUMBER(const KERB_ERROR_NUMBER *data)
{
    return _asn1_length(asn1_KERB_ERROR_NUMBER, data);
}


void
free_KERB_ERROR_NUMBER(KERB_ERROR_NUMBER *data)
{
    _asn1_free_top(asn1_KERB_ERROR_NUMBER, data);
}


int
copy_KERB_ERROR_NUMBER(const KERB_ERROR_NUMBER *from, KERB_ERROR_NUMBER *to)
{
    return _asn1_copy_top(asn1_KERB_ERROR_NUMBER, from, to);
}

extern const struct asn1_template asn1_KERB_ERROR_DATA[];
/* template_members: KERB_ERROR_DATA exp exp */
extern const struct asn1_template asn1_KERB_ERROR_DATA_tag__455[];
/* tsequence: members isstruct: 1 */
/* template_members: KERB_ERROR_DATA exp exp */
extern const struct asn1_template asn1_KERB_ERROR_DATA_tag_data_type_456[];
/* generate_template_type: KERB_ERROR_DATA_tag_data_type_456 */
/* template_members: KERB_ERROR_DATA exp exp */
extern const struct asn1_template asn1_KERB_ERROR_DATA_tag_data_value_457[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_data_value_458[];
/* generate_template_type: heim_octet_string_tag_data_value_458 */
/* generate_template_type: KERB_ERROR_DATA_tag_data_value_457 */
/* generate_template_type: KERB_ERROR_DATA_tag__455 */
const struct asn1_template asn1_KERB_ERROR_DATA_tag__455[] = {
/* 0 */ { 0, sizeof(struct KERB_ERROR_DATA), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_ERROR_DATA, data_type), asn1_HostAddress_tag_addr_type_21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KERB_ERROR_DATA, data_value), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: KERB_ERROR_DATA */
const struct asn1_template asn1_KERB_ERROR_DATA[] = {
/* 0 */ { 0, sizeof(KERB_ERROR_DATA), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_ERROR_DATA_tag__455 }
};

int
decode_KERB_ERROR_DATA(const unsigned char *p, size_t len, KERB_ERROR_DATA *data, size_t *size)
{
    return _asn1_decode_top(asn1_KERB_ERROR_DATA, 0|0, p, len, data, size);
}


int
encode_KERB_ERROR_DATA(unsigned char *p, size_t len, const KERB_ERROR_DATA *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KERB_ERROR_DATA, p, len, data, size);
    return ret;
}


size_t
length_KERB_ERROR_DATA(const KERB_ERROR_DATA *data)
{
    return _asn1_length(asn1_KERB_ERROR_DATA, data);
}


void
free_KERB_ERROR_DATA(KERB_ERROR_DATA *data)
{
    _asn1_free_top(asn1_KERB_ERROR_DATA, data);
}


int
copy_KERB_ERROR_DATA(const KERB_ERROR_DATA *from, KERB_ERROR_DATA *to)
{
    return _asn1_copy_top(asn1_KERB_ERROR_DATA, from, to);
}

extern const struct asn1_template asn1_KRB5_SRP_PA[];
/* template_members: KRB5_SRP_PA exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_tag__459[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB5_SRP_PA exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_tag_group_460[];
/* generate_template_type: KRB5_SRP_PA_tag_group_460 */
/* template_members: KRB5_SRP_PA exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_tag_salt_461[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_salt_462[];
/* generate_template_type: heim_octet_string_tag_salt_462 */
/* generate_template_type: KRB5_SRP_PA_tag_salt_461 */
/* template_members: KRB5_SRP_PA exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_tag_iterations_463[];
/* generate_template_type: KRB5_SRP_PA_tag_iterations_463 */
/* generate_template_type: KRB5_SRP_PA_tag__459 */
const struct asn1_template asn1_KRB5_SRP_PA_tag__459[] = {
/* 0 */ { 0, sizeof(struct KRB5_SRP_PA), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB5_SRP_PA, group), asn1_KDCSRPState_tag_group_383 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB5_SRP_PA, salt), asn1_HostAddress_tag_address_22 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KRB5_SRP_PA, iterations), asn1_Authenticator_tag_seq_number_84 }
};
/* generate_template_type: KRB5_SRP_PA */
const struct asn1_template asn1_KRB5_SRP_PA[] = {
/* 0 */ { 0, sizeof(KRB5_SRP_PA), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5_SRP_PA_tag__459 }
};

int
decode_KRB5_SRP_PA(const unsigned char *p, size_t len, KRB5_SRP_PA *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_SRP_PA, 0|0, p, len, data, size);
}


int
encode_KRB5_SRP_PA(unsigned char *p, size_t len, const KRB5_SRP_PA *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_SRP_PA, p, len, data, size);
    return ret;
}


size_t
length_KRB5_SRP_PA(const KRB5_SRP_PA *data)
{
    return _asn1_length(asn1_KRB5_SRP_PA, data);
}


void
free_KRB5_SRP_PA(KRB5_SRP_PA *data)
{
    _asn1_free_top(asn1_KRB5_SRP_PA, data);
}


int
copy_KRB5_SRP_PA(const KRB5_SRP_PA *from, KRB5_SRP_PA *to)
{
    return _asn1_copy_top(asn1_KRB5_SRP_PA, from, to);
}

extern const struct asn1_template asn1_KRB5_SRP_PA_ANNOUNCE[];
/* template_members: KRB5_SRP_PA_ANNOUNCE exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_ANNOUNCE_tag__464[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB5_SRP_PA_ANNOUNCE exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_ANNOUNCE_tag_groups_465[];
/* template_members: KRB5_SRP_PA_ANNOUNCE exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_ANNOUNCE_tag_groups_466[];
extern const struct asn1_template asn1_KRB5_SRP_PA_ANNOUNCE_groups_18[];
/* generate_template_type: KRB5_SRP_PA_ANNOUNCE_groups_18 */
const struct asn1_template asn1_KRB5_SRP_PA_ANNOUNCE_groups_18[] = {
/* 0 */ { 0, sizeof(KRB5_SRP_PA), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KRB5_SRP_PA }
};
/* generate_template_type: KRB5_SRP_PA_ANNOUNCE_tag_groups_466 */
const struct asn1_template asn1_KRB5_SRP_PA_ANNOUNCE_tag_groups_466[] = {
/* 0 */ { 0, sizeof(struct KRB5_SRP_PA_ANNOUNCE), ((void *)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_KRB5_SRP_PA_ANNOUNCE_groups_18 }
};
/* generate_template_type: KRB5_SRP_PA_ANNOUNCE_tag_groups_465 */
const struct asn1_template asn1_KRB5_SRP_PA_ANNOUNCE_tag_groups_465[] = {
/* 0 */ { 0, sizeof(struct KRB5_SRP_PA_ANNOUNCE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_KRB5_SRP_PA_ANNOUNCE_tag_groups_466 }
};
/* template_members: KRB5_SRP_PA_ANNOUNCE exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_ANNOUNCE_tag_as_req_467[];
/* generate_template_type: KRB5_SRP_PA_ANNOUNCE_tag_as_req_467 */
/* generate_template_type: KRB5_SRP_PA_ANNOUNCE_tag__464 */
const struct asn1_template asn1_KRB5_SRP_PA_ANNOUNCE_tag__464[] = {
/* 0 */ { 0, sizeof(struct KRB5_SRP_PA_ANNOUNCE), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB5_SRP_PA_ANNOUNCE, groups), asn1_KRB5_SRP_PA_ANNOUNCE_tag_groups_465 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB5_SRP_PA_ANNOUNCE, as_req), asn1_Authenticator_tag_cksum_80 }
};
/* generate_template_type: KRB5_SRP_PA_ANNOUNCE */
const struct asn1_template asn1_KRB5_SRP_PA_ANNOUNCE[] = {
/* 0 */ { 0, sizeof(KRB5_SRP_PA_ANNOUNCE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5_SRP_PA_ANNOUNCE_tag__464 }
};

int
decode_KRB5_SRP_PA_ANNOUNCE(const unsigned char *p, size_t len, KRB5_SRP_PA_ANNOUNCE *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_SRP_PA_ANNOUNCE, 0|0, p, len, data, size);
}


int
encode_KRB5_SRP_PA_ANNOUNCE(unsigned char *p, size_t len, const KRB5_SRP_PA_ANNOUNCE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_SRP_PA_ANNOUNCE, p, len, data, size);
    return ret;
}


size_t
length_KRB5_SRP_PA_ANNOUNCE(const KRB5_SRP_PA_ANNOUNCE *data)
{
    return _asn1_length(asn1_KRB5_SRP_PA_ANNOUNCE, data);
}


void
free_KRB5_SRP_PA_ANNOUNCE(KRB5_SRP_PA_ANNOUNCE *data)
{
    _asn1_free_top(asn1_KRB5_SRP_PA_ANNOUNCE, data);
}


int
copy_KRB5_SRP_PA_ANNOUNCE(const KRB5_SRP_PA_ANNOUNCE *from, KRB5_SRP_PA_ANNOUNCE *to)
{
    return _asn1_copy_top(asn1_KRB5_SRP_PA_ANNOUNCE, from, to);
}

extern const struct asn1_template asn1_KRB5_SRP_PA_INIT[];
/* template_members: KRB5_SRP_PA_INIT exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_INIT_tag__468[];
/* template_members: KRB5_SRP_PA_INIT exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_INIT_tag__469[];
/* tsequence: members isstruct: 1 */
/* template_members: KRB5_SRP_PA_INIT exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_INIT_tag_group_470[];
/* generate_template_type: KRB5_SRP_PA_INIT_tag_group_470 */
/* template_members: KRB5_SRP_PA_INIT exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_INIT_tag_a_471[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_a_472[];
/* generate_template_type: heim_octet_string_tag_a_472 */
/* generate_template_type: KRB5_SRP_PA_INIT_tag_a_471 */
/* generate_template_type: KRB5_SRP_PA_INIT_tag__469 */
const struct asn1_template asn1_KRB5_SRP_PA_INIT_tag__469[] = {
/* 0 */ { 0, sizeof(struct KRB5_SRP_PA_INIT), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB5_SRP_PA_INIT, group), asn1_Authenticator_tag_seq_number_84 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB5_SRP_PA_INIT, a), asn1_HostAddress_tag_address_22 }
};
/* generate_template_type: KRB5_SRP_PA_INIT_tag__468 */
const struct asn1_template asn1_KRB5_SRP_PA_INIT_tag__468[] = {
/* 0 */ { 0, sizeof(struct KRB5_SRP_PA_INIT), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5_SRP_PA_INIT_tag__469 }
};
/* generate_template_type: KRB5_SRP_PA_INIT */
const struct asn1_template asn1_KRB5_SRP_PA_INIT[] = {
/* 0 */ { 0, sizeof(KRB5_SRP_PA_INIT), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,0), 0, asn1_KRB5_SRP_PA_INIT_tag__468 }
};

int
decode_KRB5_SRP_PA_INIT(const unsigned char *p, size_t len, KRB5_SRP_PA_INIT *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_SRP_PA_INIT, 0|0, p, len, data, size);
}


int
encode_KRB5_SRP_PA_INIT(unsigned char *p, size_t len, const KRB5_SRP_PA_INIT *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_SRP_PA_INIT, p, len, data, size);
    return ret;
}


size_t
length_KRB5_SRP_PA_INIT(const KRB5_SRP_PA_INIT *data)
{
    return _asn1_length(asn1_KRB5_SRP_PA_INIT, data);
}


void
free_KRB5_SRP_PA_INIT(KRB5_SRP_PA_INIT *data)
{
    _asn1_free_top(asn1_KRB5_SRP_PA_INIT, data);
}


int
copy_KRB5_SRP_PA_INIT(const KRB5_SRP_PA_INIT *from, KRB5_SRP_PA_INIT *to)
{
    return _asn1_copy_top(asn1_KRB5_SRP_PA_INIT, from, to);
}

extern const struct asn1_template asn1_KRB5_SRP_PA_SERVER_CHALLENGE[];
/* template_members: KRB5_SRP_PA_SERVER_CHALLENGE exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_SERVER_CHALLENGE_tag__473[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag__474[];
/* generate_template_type: heim_octet_string_tag__474 */
/* generate_template_type: KRB5_SRP_PA_SERVER_CHALLENGE_tag__473 */
/* generate_template_type: KRB5_SRP_PA_SERVER_CHALLENGE */
const struct asn1_template asn1_KRB5_SRP_PA_SERVER_CHALLENGE[] = {
/* 0 */ { 0, sizeof(KRB5_SRP_PA_SERVER_CHALLENGE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,1), 0, asn1_HostAddress_tag_address_22 }
};

int
decode_KRB5_SRP_PA_SERVER_CHALLENGE(const unsigned char *p, size_t len, KRB5_SRP_PA_SERVER_CHALLENGE *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_SRP_PA_SERVER_CHALLENGE, 0|0, p, len, data, size);
}


int
encode_KRB5_SRP_PA_SERVER_CHALLENGE(unsigned char *p, size_t len, const KRB5_SRP_PA_SERVER_CHALLENGE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_SRP_PA_SERVER_CHALLENGE, p, len, data, size);
    return ret;
}


size_t
length_KRB5_SRP_PA_SERVER_CHALLENGE(const KRB5_SRP_PA_SERVER_CHALLENGE *data)
{
    return _asn1_length(asn1_KRB5_SRP_PA_SERVER_CHALLENGE, data);
}


void
free_KRB5_SRP_PA_SERVER_CHALLENGE(KRB5_SRP_PA_SERVER_CHALLENGE *data)
{
    _asn1_free_top(asn1_KRB5_SRP_PA_SERVER_CHALLENGE, data);
}


int
copy_KRB5_SRP_PA_SERVER_CHALLENGE(const KRB5_SRP_PA_SERVER_CHALLENGE *from, KRB5_SRP_PA_SERVER_CHALLENGE *to)
{
    return _asn1_copy_top(asn1_KRB5_SRP_PA_SERVER_CHALLENGE, from, to);
}

extern const struct asn1_template asn1_KRB5_SRP_PA_CLIENT_RESPONSE[];
/* template_members: KRB5_SRP_PA_CLIENT_RESPONSE exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_CLIENT_RESPONSE_tag__475[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag__476[];
/* generate_template_type: heim_octet_string_tag__476 */
/* generate_template_type: KRB5_SRP_PA_CLIENT_RESPONSE_tag__475 */
/* generate_template_type: KRB5_SRP_PA_CLIENT_RESPONSE */
const struct asn1_template asn1_KRB5_SRP_PA_CLIENT_RESPONSE[] = {
/* 0 */ { 0, sizeof(KRB5_SRP_PA_CLIENT_RESPONSE), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,2), 0, asn1_HostAddress_tag_address_22 }
};

int
decode_KRB5_SRP_PA_CLIENT_RESPONSE(const unsigned char *p, size_t len, KRB5_SRP_PA_CLIENT_RESPONSE *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_SRP_PA_CLIENT_RESPONSE, 0|0, p, len, data, size);
}


int
encode_KRB5_SRP_PA_CLIENT_RESPONSE(unsigned char *p, size_t len, const KRB5_SRP_PA_CLIENT_RESPONSE *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_SRP_PA_CLIENT_RESPONSE, p, len, data, size);
    return ret;
}


size_t
length_KRB5_SRP_PA_CLIENT_RESPONSE(const KRB5_SRP_PA_CLIENT_RESPONSE *data)
{
    return _asn1_length(asn1_KRB5_SRP_PA_CLIENT_RESPONSE, data);
}


void
free_KRB5_SRP_PA_CLIENT_RESPONSE(KRB5_SRP_PA_CLIENT_RESPONSE *data)
{
    _asn1_free_top(asn1_KRB5_SRP_PA_CLIENT_RESPONSE, data);
}


int
copy_KRB5_SRP_PA_CLIENT_RESPONSE(const KRB5_SRP_PA_CLIENT_RESPONSE *from, KRB5_SRP_PA_CLIENT_RESPONSE *to)
{
    return _asn1_copy_top(asn1_KRB5_SRP_PA_CLIENT_RESPONSE, from, to);
}

extern const struct asn1_template asn1_KRB5_SRP_PA_SERVER_VERIFIER[];
/* template_members: KRB5_SRP_PA_SERVER_VERIFIER exp exp */
extern const struct asn1_template asn1_KRB5_SRP_PA_SERVER_VERIFIER_tag__477[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag__478[];
/* generate_template_type: heim_octet_string_tag__478 */
/* generate_template_type: KRB5_SRP_PA_SERVER_VERIFIER_tag__477 */
/* generate_template_type: KRB5_SRP_PA_SERVER_VERIFIER */
const struct asn1_template asn1_KRB5_SRP_PA_SERVER_VERIFIER[] = {
/* 0 */ { 0, sizeof(KRB5_SRP_PA_SERVER_VERIFIER), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,3), 0, asn1_HostAddress_tag_address_22 }
};

int
decode_KRB5_SRP_PA_SERVER_VERIFIER(const unsigned char *p, size_t len, KRB5_SRP_PA_SERVER_VERIFIER *data, size_t *size)
{
    return _asn1_decode_top(asn1_KRB5_SRP_PA_SERVER_VERIFIER, 0|0, p, len, data, size);
}


int
encode_KRB5_SRP_PA_SERVER_VERIFIER(unsigned char *p, size_t len, const KRB5_SRP_PA_SERVER_VERIFIER *data, size_t *size)
{
    int ret = _asn1_encode(asn1_KRB5_SRP_PA_SERVER_VERIFIER, p, len, data, size);
    return ret;
}


size_t
length_KRB5_SRP_PA_SERVER_VERIFIER(const KRB5_SRP_PA_SERVER_VERIFIER *data)
{
    return _asn1_length(asn1_KRB5_SRP_PA_SERVER_VERIFIER, data);
}


void
free_KRB5_SRP_PA_SERVER_VERIFIER(KRB5_SRP_PA_SERVER_VERIFIER *data)
{
    _asn1_free_top(asn1_KRB5_SRP_PA_SERVER_VERIFIER, data);
}


int
copy_KRB5_SRP_PA_SERVER_VERIFIER(const KRB5_SRP_PA_SERVER_VERIFIER *from, KRB5_SRP_PA_SERVER_VERIFIER *to)
{
    return _asn1_copy_top(asn1_KRB5_SRP_PA_SERVER_VERIFIER, from, to);
}

