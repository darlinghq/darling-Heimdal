/* Generated from /Users/ariel/git/darling/src/external/Heimdal/lib/asn1/pku2u.asn1 */
/* Do not edit */

#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "pku2u_asn1.h"
#include "pku2u_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_Checksum = {
	(asn1_type_encode)encode_Checksum,
	(asn1_type_decode)decode_Checksum,
	(asn1_type_length)length_Checksum,
	(asn1_type_copy)copy_Checksum,
	(asn1_type_release)free_Checksum,
	sizeof(Checksum)
};
static const struct asn1_type_func asn1_extern_GeneralName = {
	(asn1_type_encode)encode_GeneralName,
	(asn1_type_decode)decode_GeneralName,
	(asn1_type_length)length_GeneralName,
	(asn1_type_copy)copy_GeneralName,
	(asn1_type_release)free_GeneralName,
	sizeof(GeneralName)
};
extern const struct asn1_template asn1_GSS_KRB5_FINISHED[];
/* template_members: GSS_KRB5_FINISHED exp exp */
extern const struct asn1_template asn1_GSS_KRB5_FINISHED_tag__0[];
/* tsequence: members isstruct: 1 */
/* template_members: GSS_KRB5_FINISHED exp exp */
extern const struct asn1_template asn1_GSS_KRB5_FINISHED_tag_gss_mic_1[];
/* generate_template_type: GSS_KRB5_FINISHED_tag_gss_mic_1 */
const struct asn1_template asn1_GSS_KRB5_FINISHED_tag_gss_mic_1[] = {
/* 0 */ { 0, sizeof(Checksum), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Checksum}
};
/* generate_template_type: GSS_KRB5_FINISHED_tag__0 */
const struct asn1_template asn1_GSS_KRB5_FINISHED_tag__0[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct GSS_KRB5_FINISHED), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct GSS_KRB5_FINISHED, gss_mic), asn1_GSS_KRB5_FINISHED_tag_gss_mic_1 }
};
/* generate_template_type: GSS_KRB5_FINISHED */
const struct asn1_template asn1_GSS_KRB5_FINISHED[] = {
/* 0 */ { 0, sizeof(GSS_KRB5_FINISHED), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_GSS_KRB5_FINISHED_tag__0 }
};

int
decode_GSS_KRB5_FINISHED(const unsigned char *p, size_t len, GSS_KRB5_FINISHED *data, size_t *size)
{
    return _asn1_decode_top(asn1_GSS_KRB5_FINISHED, 0|0, p, len, data, size);
}


int
encode_GSS_KRB5_FINISHED(unsigned char *p, size_t len, const GSS_KRB5_FINISHED *data, size_t *size)
{
    int ret = _asn1_encode(asn1_GSS_KRB5_FINISHED, p, len, data, size);
    return ret;
}


size_t
length_GSS_KRB5_FINISHED(const GSS_KRB5_FINISHED *data)
{
    return _asn1_length(asn1_GSS_KRB5_FINISHED, data);
}


void
free_GSS_KRB5_FINISHED(GSS_KRB5_FINISHED *data)
{
    _asn1_free_top(asn1_GSS_KRB5_FINISHED, data);
}


int
copy_GSS_KRB5_FINISHED(const GSS_KRB5_FINISHED *from, GSS_KRB5_FINISHED *to)
{
    return _asn1_copy_top(asn1_GSS_KRB5_FINISHED, from, to);
}

extern const struct asn1_template asn1_InitiatorName[];
extern const struct asn1_template asn1_InitiatorName_choice_sanIndex[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag__2[];
/* generate_template_type: int_tag__2 */
const struct asn1_template asn1_int_tag__2[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_INTEGER), 0, NULL }
};
/* generate_template_type: InitiatorName_choice_sanIndex */
const struct asn1_template asn1_InitiatorName_choice_sanIndex[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_int_tag__2 }
};
extern const struct asn1_template asn1_InitiatorName_choice_nameNotInCert[];
/* template_members: GeneralName exp exp */
extern const struct asn1_template asn1_GeneralName_tag__3[];
/* generate_template_type: GeneralName_tag__3 */
const struct asn1_template asn1_GeneralName_tag__3[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_GeneralName}
};
/* generate_template_type: InitiatorName_choice_nameNotInCert */
const struct asn1_template asn1_InitiatorName_choice_nameNotInCert[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_GeneralName_tag__3 }
};
static const struct asn1_template asn1_choice_InitiatorName_0[] = {
/* 0 */ { offsetof(InitiatorName, u.asn1_ellipsis), offsetof(InitiatorName, element), ((void *)2) },
/* 1 */ { choice_InitiatorName_sanIndex, offsetof(InitiatorName, u.sanIndex), asn1_InitiatorName_choice_sanIndex },
/* 2 */ { choice_InitiatorName_nameNotInCert, offsetof(InitiatorName, u.nameNotInCert), asn1_InitiatorName_choice_nameNotInCert }
};
/* generate_template_type: InitiatorName */
const struct asn1_template asn1_InitiatorName[] = {
/* 0 */ { 0, sizeof(InitiatorName), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_InitiatorName_0 }
};

int
decode_InitiatorName(const unsigned char *p, size_t len, InitiatorName *data, size_t *size)
{
    return _asn1_decode_top(asn1_InitiatorName, 0|0, p, len, data, size);
}


int
encode_InitiatorName(unsigned char *p, size_t len, const InitiatorName *data, size_t *size)
{
    int ret = _asn1_encode(asn1_InitiatorName, p, len, data, size);
    return ret;
}


size_t
length_InitiatorName(const InitiatorName *data)
{
    return _asn1_length(asn1_InitiatorName, data);
}


void
free_InitiatorName(InitiatorName *data)
{
    _asn1_free_top(asn1_InitiatorName, data);
}


int
copy_InitiatorName(const InitiatorName *from, InitiatorName *to)
{
    return _asn1_copy_top(asn1_InitiatorName, from, to);
}

extern const struct asn1_template asn1_TargetName[];
extern const struct asn1_template asn1_TargetName_choice_exportedTargName[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag__4[];
/* generate_template_type: heim_octet_string_tag__4 */
const struct asn1_template asn1_heim_octet_string_tag__4[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: TargetName_choice_exportedTargName */
const struct asn1_template asn1_TargetName_choice_exportedTargName[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_heim_octet_string_tag__4 }
};
extern const struct asn1_template asn1_TargetName_choice_generalName[];
/* template_members: GeneralName exp exp */
extern const struct asn1_template asn1_GeneralName_tag__5[];
/* generate_template_type: GeneralName_tag__5 */
/* generate_template_type: TargetName_choice_generalName */
static const struct asn1_template asn1_choice_TargetName_1[] = {
/* 0 */ { offsetof(TargetName, u.asn1_ellipsis), offsetof(TargetName, element), ((void *)2) },
/* 1 */ { choice_TargetName_exportedTargName, offsetof(TargetName, u.exportedTargName), asn1_TargetName_choice_exportedTargName },
/* 2 */ { choice_TargetName_generalName, offsetof(TargetName, u.generalName), asn1_InitiatorName_choice_nameNotInCert }
};
/* generate_template_type: TargetName */
const struct asn1_template asn1_TargetName[] = {
/* 0 */ { 0, sizeof(TargetName), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_TargetName_1 }
};

int
decode_TargetName(const unsigned char *p, size_t len, TargetName *data, size_t *size)
{
    return _asn1_decode_top(asn1_TargetName, 0|0, p, len, data, size);
}


int
encode_TargetName(unsigned char *p, size_t len, const TargetName *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TargetName, p, len, data, size);
    return ret;
}


size_t
length_TargetName(const TargetName *data)
{
    return _asn1_length(asn1_TargetName, data);
}


void
free_TargetName(TargetName *data)
{
    _asn1_free_top(asn1_TargetName, data);
}


int
copy_TargetName(const TargetName *from, TargetName *to)
{
    return _asn1_copy_top(asn1_TargetName, from, to);
}

extern const struct asn1_template asn1_InitiatorNameAssertion[];
/* template_members: InitiatorNameAssertion exp exp */
extern const struct asn1_template asn1_InitiatorNameAssertion_tag__6[];
/* tsequence: members isstruct: 1 */
/* template_members: InitiatorNameAssertion exp exp */
extern const struct asn1_template asn1_InitiatorNameAssertion_tag_initiatorName_7[];
/* generate_template_type: InitiatorNameAssertion_tag_initiatorName_7 */
const struct asn1_template asn1_InitiatorNameAssertion_tag_initiatorName_7[] = {
/* 0 */ { 0, sizeof(InitiatorName), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_InitiatorName }
};
/* template_members: InitiatorNameAssertion exp exp */
extern const struct asn1_template asn1_InitiatorNameAssertion_tag_targetName_8[];
/* generate_template_type: InitiatorNameAssertion_tag_targetName_8 */
const struct asn1_template asn1_InitiatorNameAssertion_tag_targetName_8[] = {
/* 0 */ { 0, sizeof(TargetName), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TargetName }
};
/* generate_template_type: InitiatorNameAssertion_tag__6 */
const struct asn1_template asn1_InitiatorNameAssertion_tag__6[] = {
/* 0 */ { 0, sizeof(struct InitiatorNameAssertion), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct InitiatorNameAssertion, initiatorName), asn1_InitiatorNameAssertion_tag_initiatorName_7 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct InitiatorNameAssertion, targetName), asn1_InitiatorNameAssertion_tag_targetName_8 }
};
/* generate_template_type: InitiatorNameAssertion */
const struct asn1_template asn1_InitiatorNameAssertion[] = {
/* 0 */ { 0, sizeof(InitiatorNameAssertion), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_InitiatorNameAssertion_tag__6 }
};

int
decode_InitiatorNameAssertion(const unsigned char *p, size_t len, InitiatorNameAssertion *data, size_t *size)
{
    return _asn1_decode_top(asn1_InitiatorNameAssertion, 0|0, p, len, data, size);
}


int
encode_InitiatorNameAssertion(unsigned char *p, size_t len, const InitiatorNameAssertion *data, size_t *size)
{
    int ret = _asn1_encode(asn1_InitiatorNameAssertion, p, len, data, size);
    return ret;
}


size_t
length_InitiatorNameAssertion(const InitiatorNameAssertion *data)
{
    return _asn1_length(asn1_InitiatorNameAssertion, data);
}


void
free_InitiatorNameAssertion(InitiatorNameAssertion *data)
{
    _asn1_free_top(asn1_InitiatorNameAssertion, data);
}


int
copy_InitiatorNameAssertion(const InitiatorNameAssertion *from, InitiatorNameAssertion *to)
{
    return _asn1_copy_top(asn1_InitiatorNameAssertion, from, to);
}

