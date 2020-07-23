/* Generated from /Users/ariel/git/darling/src/external/Heimdal/lib/asn1/digest.asn1 */
/* Do not edit */

#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "digest_asn1.h"
#include "digest_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

extern const struct asn1_template asn1_NTLMInit[];
/* template_members: NTLMInit exp exp */
extern const struct asn1_template asn1_NTLMInit_tag__0[];
/* template_members: NTLMInit exp exp */
extern const struct asn1_template asn1_NTLMInit_tag__1[];
/* tsequence: members isstruct: 1 */
/* template_members: NTLMInit exp exp */
extern const struct asn1_template asn1_NTLMInit_tag_flags_2[];
/* template_members: unsigned exp exp */
extern const struct asn1_template asn1_unsigned_tag_flags_3[];
/* generate_template_type: unsigned_tag_flags_3 */
const struct asn1_template asn1_unsigned_tag_flags_3[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* generate_template_type: NTLMInit_tag_flags_2 */
const struct asn1_template asn1_NTLMInit_tag_flags_2[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_unsigned_tag_flags_3 }
};
/* template_members: NTLMInit exp exp */
extern const struct asn1_template asn1_NTLMInit_tag_hostname_4[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_hostname_5[];
/* generate_template_type: heim_utf8_string_tag_hostname_5 */
const struct asn1_template asn1_heim_utf8_string_tag_hostname_5[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UTF8_STRING), 0, NULL }
};
/* generate_template_type: NTLMInit_tag_hostname_4 */
const struct asn1_template asn1_NTLMInit_tag_hostname_4[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_heim_utf8_string_tag_hostname_5 }
};
/* template_members: NTLMInit exp exp */
extern const struct asn1_template asn1_NTLMInit_tag_domain_6[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_domain_7[];
/* generate_template_type: heim_utf8_string_tag_domain_7 */
/* generate_template_type: NTLMInit_tag_domain_6 */
/* generate_template_type: NTLMInit_tag__1 */
const struct asn1_template asn1_NTLMInit_tag__1[] = {
/* 0 */ { 0, sizeof(struct NTLMInit), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NTLMInit, flags), asn1_NTLMInit_tag_flags_2 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct NTLMInit, hostname), asn1_NTLMInit_tag_hostname_4 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct NTLMInit, domain), asn1_NTLMInit_tag_hostname_4 }
};
/* generate_template_type: NTLMInit_tag__0 */
const struct asn1_template asn1_NTLMInit_tag__0[] = {
/* 0 */ { 0, sizeof(struct NTLMInit), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NTLMInit_tag__1 }
};
/* generate_template_type: NTLMInit */
const struct asn1_template asn1_NTLMInit[] = {
/* 0 */ { 0, sizeof(NTLMInit), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,1), 0, asn1_NTLMInit_tag__0 }
};

int
decode_NTLMInit(const unsigned char *p, size_t len, NTLMInit *data, size_t *size)
{
    return _asn1_decode_top(asn1_NTLMInit, 0|0, p, len, data, size);
}


int
encode_NTLMInit(unsigned char *p, size_t len, const NTLMInit *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NTLMInit, p, len, data, size);
    return ret;
}


size_t
length_NTLMInit(const NTLMInit *data)
{
    return _asn1_length(asn1_NTLMInit, data);
}


void
free_NTLMInit(NTLMInit *data)
{
    _asn1_free_top(asn1_NTLMInit, data);
}


int
copy_NTLMInit(const NTLMInit *from, NTLMInit *to)
{
    return _asn1_copy_top(asn1_NTLMInit, from, to);
}

extern const struct asn1_template asn1_NTLMInitReply[];
/* template_members: NTLMInitReply exp exp */
extern const struct asn1_template asn1_NTLMInitReply_tag__8[];
/* tsequence: members isstruct: 1 */
/* template_members: NTLMInitReply exp exp */
extern const struct asn1_template asn1_NTLMInitReply_tag_ntlmNegFlags_9[];
/* template_members: unsigned exp exp */
extern const struct asn1_template asn1_unsigned_tag_ntlmNegFlags_10[];
/* generate_template_type: unsigned_tag_ntlmNegFlags_10 */
/* generate_template_type: NTLMInitReply_tag_ntlmNegFlags_9 */
/* template_members: NTLMInitReply exp exp */
extern const struct asn1_template asn1_NTLMInitReply_tag_opaque_11[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_opaque_12[];
/* generate_template_type: heim_octet_string_tag_opaque_12 */
const struct asn1_template asn1_heim_octet_string_tag_opaque_12[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: NTLMInitReply_tag_opaque_11 */
const struct asn1_template asn1_NTLMInitReply_tag_opaque_11[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_heim_octet_string_tag_opaque_12 }
};
/* template_members: NTLMInitReply exp exp */
extern const struct asn1_template asn1_NTLMInitReply_tag_challenge_13[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_challenge_14[];
/* generate_template_type: heim_octet_string_tag_challenge_14 */
/* generate_template_type: NTLMInitReply_tag_challenge_13 */
/* template_members: NTLMInitReply exp exp */
extern const struct asn1_template asn1_NTLMInitReply_tag_targetinfo_15[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_targetinfo_16[];
/* generate_template_type: heim_octet_string_tag_targetinfo_16 */
/* generate_template_type: NTLMInitReply_tag_targetinfo_15 */
/* generate_template_type: NTLMInitReply_tag__8 */
const struct asn1_template asn1_NTLMInitReply_tag__8[] = {
/* 0 */ { 0, sizeof(struct NTLMInitReply), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NTLMInitReply, ntlmNegFlags), asn1_NTLMInit_tag_flags_2 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct NTLMInitReply, opaque), asn1_NTLMInitReply_tag_opaque_11 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct NTLMInitReply, challenge), asn1_NTLMInitReply_tag_opaque_11 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct NTLMInitReply, targetinfo), asn1_NTLMInitReply_tag_opaque_11 }
};
/* generate_template_type: NTLMInitReply */
const struct asn1_template asn1_NTLMInitReply[] = {
/* 0 */ { 0, sizeof(NTLMInitReply), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NTLMInitReply_tag__8 }
};

int
decode_NTLMInitReply(const unsigned char *p, size_t len, NTLMInitReply *data, size_t *size)
{
    return _asn1_decode_top(asn1_NTLMInitReply, 0|0, p, len, data, size);
}


int
encode_NTLMInitReply(unsigned char *p, size_t len, const NTLMInitReply *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NTLMInitReply, p, len, data, size);
    return ret;
}


size_t
length_NTLMInitReply(const NTLMInitReply *data)
{
    return _asn1_length(asn1_NTLMInitReply, data);
}


void
free_NTLMInitReply(NTLMInitReply *data)
{
    _asn1_free_top(asn1_NTLMInitReply, data);
}


int
copy_NTLMInitReply(const NTLMInitReply *from, NTLMInitReply *to)
{
    return _asn1_copy_top(asn1_NTLMInitReply, from, to);
}

extern const struct asn1_template asn1_NTLMRequest2[];
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag__17[];
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag__18[];
/* tsequence: members isstruct: 1 */
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag_loginUserName_19[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_loginUserName_20[];
/* generate_template_type: heim_utf8_string_tag_loginUserName_20 */
/* generate_template_type: NTLMRequest2_tag_loginUserName_19 */
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag_loginDomainName_21[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_loginDomainName_22[];
/* generate_template_type: heim_utf8_string_tag_loginDomainName_22 */
/* generate_template_type: NTLMRequest2_tag_loginDomainName_21 */
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag_workstation_23[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_workstation_24[];
/* generate_template_type: heim_utf8_string_tag_workstation_24 */
/* generate_template_type: NTLMRequest2_tag_workstation_23 */
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag_ntlmFlags_25[];
/* template_members: unsigned exp exp */
extern const struct asn1_template asn1_unsigned_tag_ntlmFlags_26[];
/* generate_template_type: unsigned_tag_ntlmFlags_26 */
/* generate_template_type: NTLMRequest2_tag_ntlmFlags_25 */
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag_lmchallenge_27[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_lmchallenge_28[];
/* generate_template_type: heim_octet_string_tag_lmchallenge_28 */
/* generate_template_type: NTLMRequest2_tag_lmchallenge_27 */
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag_ntChallengeResponse_29[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_ntChallengeResponse_30[];
/* generate_template_type: heim_octet_string_tag_ntChallengeResponse_30 */
/* generate_template_type: NTLMRequest2_tag_ntChallengeResponse_29 */
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag_lmChallengeResponse_31[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_lmChallengeResponse_32[];
/* generate_template_type: heim_octet_string_tag_lmChallengeResponse_32 */
/* generate_template_type: NTLMRequest2_tag_lmChallengeResponse_31 */
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag_encryptedSessionKey_33[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_encryptedSessionKey_34[];
/* generate_template_type: heim_octet_string_tag_encryptedSessionKey_34 */
/* generate_template_type: NTLMRequest2_tag_encryptedSessionKey_33 */
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag_t2targetname_35[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_t2targetname_36[];
/* generate_template_type: heim_utf8_string_tag_t2targetname_36 */
/* generate_template_type: NTLMRequest2_tag_t2targetname_35 */
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag_acceptorUser_37[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_acceptorUser_38[];
/* generate_template_type: heim_utf8_string_tag_acceptorUser_38 */
/* generate_template_type: NTLMRequest2_tag_acceptorUser_37 */
/* template_members: NTLMRequest2 exp exp */
extern const struct asn1_template asn1_NTLMRequest2_tag_acceptorDomain_39[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_acceptorDomain_40[];
/* generate_template_type: heim_utf8_string_tag_acceptorDomain_40 */
/* generate_template_type: NTLMRequest2_tag_acceptorDomain_39 */
/* generate_template_type: NTLMRequest2_tag__18 */
const struct asn1_template asn1_NTLMRequest2_tag__18[] = {
/* 0 */ { 0, sizeof(struct NTLMRequest2), ((void *)11) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NTLMRequest2, loginUserName), asn1_NTLMInit_tag_hostname_4 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct NTLMRequest2, loginDomainName), asn1_NTLMInit_tag_hostname_4 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct NTLMRequest2, workstation), asn1_NTLMInit_tag_hostname_4 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct NTLMRequest2, ntlmFlags), asn1_NTLMInit_tag_flags_2 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct NTLMRequest2, lmchallenge), asn1_NTLMInitReply_tag_opaque_11 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct NTLMRequest2, ntChallengeResponse), asn1_NTLMInitReply_tag_opaque_11 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct NTLMRequest2, lmChallengeResponse), asn1_NTLMInitReply_tag_opaque_11 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7), offsetof(struct NTLMRequest2, encryptedSessionKey), asn1_NTLMInitReply_tag_opaque_11 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8), offsetof(struct NTLMRequest2, t2targetname), asn1_NTLMInit_tag_hostname_4 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9), offsetof(struct NTLMRequest2, acceptorUser), asn1_NTLMInit_tag_hostname_4 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,10), offsetof(struct NTLMRequest2, acceptorDomain), asn1_NTLMInit_tag_hostname_4 }
};
/* generate_template_type: NTLMRequest2_tag__17 */
const struct asn1_template asn1_NTLMRequest2_tag__17[] = {
/* 0 */ { 0, sizeof(struct NTLMRequest2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NTLMRequest2_tag__18 }
};
/* generate_template_type: NTLMRequest2 */
const struct asn1_template asn1_NTLMRequest2[] = {
/* 0 */ { 0, sizeof(NTLMRequest2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,2), 0, asn1_NTLMRequest2_tag__17 }
};

int
decode_NTLMRequest2(const unsigned char *p, size_t len, NTLMRequest2 *data, size_t *size)
{
    return _asn1_decode_top(asn1_NTLMRequest2, 0|0, p, len, data, size);
}


int
encode_NTLMRequest2(unsigned char *p, size_t len, const NTLMRequest2 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NTLMRequest2, p, len, data, size);
    return ret;
}


size_t
length_NTLMRequest2(const NTLMRequest2 *data)
{
    return _asn1_length(asn1_NTLMRequest2, data);
}


void
free_NTLMRequest2(NTLMRequest2 *data)
{
    _asn1_free_top(asn1_NTLMRequest2, data);
}


int
copy_NTLMRequest2(const NTLMRequest2 *from, NTLMRequest2 *to)
{
    return _asn1_copy_top(asn1_NTLMRequest2, from, to);
}

extern const struct asn1_template asn1_NTLMReply[];
/* template_members: NTLMReply exp exp */
extern const struct asn1_template asn1_NTLMReply_tag__41[];
/* tsequence: members isstruct: 1 */
/* template_members: NTLMReply exp exp */
extern const struct asn1_template asn1_NTLMReply_tag_success_42[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_success_43[];
/* generate_template_type: int_tag_success_43 */
const struct asn1_template asn1_int_tag_success_43[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_BOOLEAN), 0, NULL }
};
/* generate_template_type: NTLMReply_tag_success_42 */
const struct asn1_template asn1_NTLMReply_tag_success_42[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean), 0, asn1_int_tag_success_43 }
};
/* template_members: NTLMReply exp exp */
extern const struct asn1_template asn1_NTLMReply_tag_avflags_44[];
/* template_members: unsigned exp exp */
extern const struct asn1_template asn1_unsigned_tag_avflags_45[];
/* generate_template_type: unsigned_tag_avflags_45 */
/* generate_template_type: NTLMReply_tag_avflags_44 */
/* template_members: NTLMReply exp exp */
extern const struct asn1_template asn1_NTLMReply_tag_sessionkey_46[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_sessionkey_47[];
/* generate_template_type: heim_octet_string_tag_sessionkey_47 */
/* generate_template_type: NTLMReply_tag_sessionkey_46 */
/* template_members: NTLMReply exp exp */
extern const struct asn1_template asn1_NTLMReply_tag_user_48[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_user_49[];
/* generate_template_type: heim_utf8_string_tag_user_49 */
/* generate_template_type: NTLMReply_tag_user_48 */
/* template_members: NTLMReply exp exp */
extern const struct asn1_template asn1_NTLMReply_tag_domain_50[];
/* template_members: heim_utf8_string exp exp */
extern const struct asn1_template asn1_heim_utf8_string_tag_domain_51[];
/* generate_template_type: heim_utf8_string_tag_domain_51 */
/* generate_template_type: NTLMReply_tag_domain_50 */
/* template_members: NTLMReply exp exp */
extern const struct asn1_template asn1_NTLMReply_tag_uuid_52[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_uuid_53[];
/* generate_template_type: heim_octet_string_tag_uuid_53 */
/* generate_template_type: NTLMReply_tag_uuid_52 */
/* template_members: NTLMReply exp exp */
extern const struct asn1_template asn1_NTLMReply_tag_targetinfo_54[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_targetinfo_55[];
/* generate_template_type: heim_octet_string_tag_targetinfo_55 */
/* generate_template_type: NTLMReply_tag_targetinfo_54 */
/* template_members: NTLMReply exp exp */
extern const struct asn1_template asn1_NTLMReply_tag_pac_56[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_pac_57[];
/* generate_template_type: heim_octet_string_tag_pac_57 */
/* generate_template_type: NTLMReply_tag_pac_56 */
/* template_members: NTLMReply exp exp */
extern const struct asn1_template asn1_NTLMReply_tag_ntlmFlags_58[];
/* template_members: unsigned exp exp */
extern const struct asn1_template asn1_unsigned_tag_ntlmFlags_59[];
/* generate_template_type: unsigned_tag_ntlmFlags_59 */
/* generate_template_type: NTLMReply_tag_ntlmFlags_58 */
/* generate_template_type: NTLMReply_tag__41 */
const struct asn1_template asn1_NTLMReply_tag__41[] = {
/* 0 */ { 0, sizeof(struct NTLMReply), ((void *)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NTLMReply, success), asn1_NTLMReply_tag_success_42 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct NTLMReply, avflags), asn1_NTLMInit_tag_flags_2 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct NTLMReply, sessionkey), asn1_NTLMInitReply_tag_opaque_11 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct NTLMReply, user), asn1_NTLMInit_tag_hostname_4 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct NTLMReply, domain), asn1_NTLMInit_tag_hostname_4 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct NTLMReply, uuid), asn1_NTLMInitReply_tag_opaque_11 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct NTLMReply, targetinfo), asn1_NTLMInitReply_tag_opaque_11 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct NTLMReply, pac), asn1_NTLMInitReply_tag_opaque_11 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8), offsetof(struct NTLMReply, ntlmFlags), asn1_NTLMInit_tag_flags_2 }
};
/* generate_template_type: NTLMReply */
const struct asn1_template asn1_NTLMReply[] = {
/* 0 */ { 0, sizeof(NTLMReply), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NTLMReply_tag__41 }
};

int
decode_NTLMReply(const unsigned char *p, size_t len, NTLMReply *data, size_t *size)
{
    return _asn1_decode_top(asn1_NTLMReply, 0|0, p, len, data, size);
}


int
encode_NTLMReply(unsigned char *p, size_t len, const NTLMReply *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NTLMReply, p, len, data, size);
    return ret;
}


size_t
length_NTLMReply(const NTLMReply *data)
{
    return _asn1_length(asn1_NTLMReply, data);
}


void
free_NTLMReply(NTLMReply *data)
{
    _asn1_free_top(asn1_NTLMReply, data);
}


int
copy_NTLMReply(const NTLMReply *from, NTLMReply *to)
{
    return _asn1_copy_top(asn1_NTLMReply, from, to);
}

