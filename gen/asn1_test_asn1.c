/* Generated from /Users/ariel/git/darling/src/external/Heimdal/lib/asn1/test.asn1 */
/* Do not edit */

#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "test_asn1.h"
#include "test_asn1-priv.h"
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
extern const struct asn1_template asn1_TESTuint32[];
/* template_members: TESTuint32 exp exp */
extern const struct asn1_template asn1_TESTuint32_tag__0[];
/* generate_template_type: TESTuint32_tag__0 */
const struct asn1_template asn1_TESTuint32_tag__0[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* generate_template_type: TESTuint32 */
const struct asn1_template asn1_TESTuint32[] = {
/* 0 */ { 0, sizeof(TESTuint32), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_TESTuint32_tag__0 }
};

int
decode_TESTuint32(const unsigned char *p, size_t len, TESTuint32 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTuint32, 0|0, p, len, data, size);
}


int
encode_TESTuint32(unsigned char *p, size_t len, const TESTuint32 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTuint32, p, len, data, size);
    return ret;
}


size_t
length_TESTuint32(const TESTuint32 *data)
{
    return _asn1_length(asn1_TESTuint32, data);
}


void
free_TESTuint32(TESTuint32 *data)
{
    _asn1_free_top(asn1_TESTuint32, data);
}


int
copy_TESTuint32(const TESTuint32 *from, TESTuint32 *to)
{
    return _asn1_copy_top(asn1_TESTuint32, from, to);
}

extern const struct asn1_template asn1_TESTLargeTag[];
/* template_members: TESTLargeTag exp exp */
extern const struct asn1_template asn1_TESTLargeTag_tag__1[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTLargeTag exp exp */
extern const struct asn1_template asn1_TESTLargeTag_tag_foo_2[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_foo_3[];
/* generate_template_type: int_tag_foo_3 */
const struct asn1_template asn1_int_tag_foo_3[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_INTEGER), 0, NULL }
};
/* generate_template_type: TESTLargeTag_tag_foo_2 */
const struct asn1_template asn1_TESTLargeTag_tag_foo_2[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_int_tag_foo_3 }
};
/* template_members: TESTLargeTag exp exp */
extern const struct asn1_template asn1_TESTLargeTag_tag_bar_4[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_bar_5[];
/* generate_template_type: int_tag_bar_5 */
/* generate_template_type: TESTLargeTag_tag_bar_4 */
/* generate_template_type: TESTLargeTag_tag__1 */
const struct asn1_template asn1_TESTLargeTag_tag__1[] = {
/* 0 */ { 0, sizeof(struct TESTLargeTag), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,127), offsetof(struct TESTLargeTag, foo), asn1_TESTLargeTag_tag_foo_2 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,128), offsetof(struct TESTLargeTag, bar), asn1_TESTLargeTag_tag_foo_2 }
};
/* generate_template_type: TESTLargeTag */
const struct asn1_template asn1_TESTLargeTag[] = {
/* 0 */ { 0, sizeof(TESTLargeTag), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTLargeTag_tag__1 }
};

int
decode_TESTLargeTag(const unsigned char *p, size_t len, TESTLargeTag *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTLargeTag, 0|0, p, len, data, size);
}


int
encode_TESTLargeTag(unsigned char *p, size_t len, const TESTLargeTag *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTLargeTag, p, len, data, size);
    return ret;
}


size_t
length_TESTLargeTag(const TESTLargeTag *data)
{
    return _asn1_length(asn1_TESTLargeTag, data);
}


void
free_TESTLargeTag(TESTLargeTag *data)
{
    _asn1_free_top(asn1_TESTLargeTag, data);
}


int
copy_TESTLargeTag(const TESTLargeTag *from, TESTLargeTag *to)
{
    return _asn1_copy_top(asn1_TESTLargeTag, from, to);
}

extern const struct asn1_template asn1_TESTSeq[];
/* template_members: TESTSeq exp exp */
extern const struct asn1_template asn1_TESTSeq_tag__6[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTSeq exp exp */
extern const struct asn1_template asn1_TESTSeq_tag_tag0_7[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_tag0_8[];
/* generate_template_type: int_tag_tag0_8 */
/* generate_template_type: TESTSeq_tag_tag0_7 */
/* template_members: TESTSeq exp exp */
extern const struct asn1_template asn1_TESTSeq_tag_tag1_9[];
/* generate_template_type: TESTSeq_tag_tag1_9 */
const struct asn1_template asn1_TESTSeq_tag_tag1_9[] = {
/* 0 */ { 0, sizeof(TESTLargeTag), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TESTLargeTag }
};
/* template_members: TESTSeq exp exp */
extern const struct asn1_template asn1_TESTSeq_tag_tagless_10[];
/* generate_template_type: TESTSeq_tag_tagless_10 */
/* template_members: TESTSeq exp exp */
extern const struct asn1_template asn1_TESTSeq_tag_tag3_11[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_tag3_12[];
/* generate_template_type: int_tag_tag3_12 */
/* generate_template_type: TESTSeq_tag_tag3_11 */
/* generate_template_type: TESTSeq_tag__6 */
const struct asn1_template asn1_TESTSeq_tag__6[] = {
/* 0 */ { 0, sizeof(struct TESTSeq), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TESTSeq, tag0), asn1_TESTLargeTag_tag_foo_2 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct TESTSeq, tag1), asn1_TESTSeq_tag_tag1_9 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct TESTSeq, tagless), asn1_int_tag_foo_3 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct TESTSeq, tag3), asn1_TESTLargeTag_tag_foo_2 }
};
/* generate_template_type: TESTSeq */
const struct asn1_template asn1_TESTSeq[] = {
/* 0 */ { 0, sizeof(TESTSeq), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeq_tag__6 }
};

int
decode_TESTSeq(const unsigned char *p, size_t len, TESTSeq *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTSeq, 0|0, p, len, data, size);
}


int
encode_TESTSeq(unsigned char *p, size_t len, const TESTSeq *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTSeq, p, len, data, size);
    return ret;
}


size_t
length_TESTSeq(const TESTSeq *data)
{
    return _asn1_length(asn1_TESTSeq, data);
}


void
free_TESTSeq(TESTSeq *data)
{
    _asn1_free_top(asn1_TESTSeq, data);
}


int
copy_TESTSeq(const TESTSeq *from, TESTSeq *to)
{
    return _asn1_copy_top(asn1_TESTSeq, from, to);
}

extern const struct asn1_template asn1_TESTChoice1[];
extern const struct asn1_template asn1_TESTChoice1_choice_i1[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag__13[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag__14[];
/* generate_template_type: int_tag__14 */
/* generate_template_type: int_tag__13 */
/* generate_template_type: TESTChoice1_choice_i1 */
const struct asn1_template asn1_TESTChoice1_choice_i1[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_TESTLargeTag_tag_foo_2 }
};
extern const struct asn1_template asn1_TESTChoice1_choice_i2[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag__15[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag__16[];
/* generate_template_type: int_tag__16 */
/* generate_template_type: int_tag__15 */
/* generate_template_type: TESTChoice1_choice_i2 */
const struct asn1_template asn1_TESTChoice1_choice_i2[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), 0, asn1_TESTLargeTag_tag_foo_2 }
};
static const struct asn1_template asn1_choice_TESTChoice1_0[] = {
/* 0 */ { offsetof(TESTChoice1, u.asn1_ellipsis), offsetof(TESTChoice1, element), ((void *)2) },
/* 1 */ { choice_TESTChoice1_i1, offsetof(TESTChoice1, u.i1), asn1_TESTChoice1_choice_i1 },
/* 2 */ { choice_TESTChoice1_i2, offsetof(TESTChoice1, u.i2), asn1_TESTChoice1_choice_i2 }
};
/* generate_template_type: TESTChoice1 */
const struct asn1_template asn1_TESTChoice1[] = {
/* 0 */ { 0, sizeof(TESTChoice1), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_TESTChoice1_0 }
};

int
decode_TESTChoice1(const unsigned char *p, size_t len, TESTChoice1 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTChoice1, 0|0, p, len, data, size);
}


int
encode_TESTChoice1(unsigned char *p, size_t len, const TESTChoice1 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTChoice1, p, len, data, size);
    return ret;
}


size_t
length_TESTChoice1(const TESTChoice1 *data)
{
    return _asn1_length(asn1_TESTChoice1, data);
}


void
free_TESTChoice1(TESTChoice1 *data)
{
    _asn1_free_top(asn1_TESTChoice1, data);
}


int
copy_TESTChoice1(const TESTChoice1 *from, TESTChoice1 *to)
{
    return _asn1_copy_top(asn1_TESTChoice1, from, to);
}

extern const struct asn1_template asn1_TESTChoice2[];
extern const struct asn1_template asn1_TESTChoice2_choice_i1[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag__17[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag__18[];
/* generate_template_type: int_tag__18 */
/* generate_template_type: int_tag__17 */
/* generate_template_type: TESTChoice2_choice_i1 */
static const struct asn1_template asn1_choice_TESTChoice2_1[] = {
/* 0 */ { offsetof(TESTChoice2, u.asn1_ellipsis), offsetof(TESTChoice2, element), ((void *)1) },
/* 1 */ { choice_TESTChoice2_i1, offsetof(TESTChoice2, u.i1), asn1_TESTChoice1_choice_i1 }
};
/* generate_template_type: TESTChoice2 */
const struct asn1_template asn1_TESTChoice2[] = {
/* 0 */ { 0, sizeof(TESTChoice2), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_TESTChoice2_1 }
};

int
decode_TESTChoice2(const unsigned char *p, size_t len, TESTChoice2 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTChoice2, 0|0, p, len, data, size);
}


int
encode_TESTChoice2(unsigned char *p, size_t len, const TESTChoice2 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTChoice2, p, len, data, size);
    return ret;
}


size_t
length_TESTChoice2(const TESTChoice2 *data)
{
    return _asn1_length(asn1_TESTChoice2, data);
}


void
free_TESTChoice2(TESTChoice2 *data)
{
    _asn1_free_top(asn1_TESTChoice2, data);
}


int
copy_TESTChoice2(const TESTChoice2 *from, TESTChoice2 *to)
{
    return _asn1_copy_top(asn1_TESTChoice2, from, to);
}

extern const struct asn1_template asn1_TESTInteger[];
/* template_members: TESTInteger exp exp */
extern const struct asn1_template asn1_TESTInteger_tag__19[];
/* generate_template_type: TESTInteger_tag__19 */
/* generate_template_type: TESTInteger */
const struct asn1_template asn1_TESTInteger[] = {
/* 0 */ { 0, sizeof(TESTInteger), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_int_tag_foo_3 }
};

int
decode_TESTInteger(const unsigned char *p, size_t len, TESTInteger *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTInteger, 0|0, p, len, data, size);
}


int
encode_TESTInteger(unsigned char *p, size_t len, const TESTInteger *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTInteger, p, len, data, size);
    return ret;
}


size_t
length_TESTInteger(const TESTInteger *data)
{
    return _asn1_length(asn1_TESTInteger, data);
}


void
free_TESTInteger(TESTInteger *data)
{
    _asn1_free_top(asn1_TESTInteger, data);
}


int
copy_TESTInteger(const TESTInteger *from, TESTInteger *to)
{
    return _asn1_copy_top(asn1_TESTInteger, from, to);
}

extern const struct asn1_template asn1_TESTInteger2[];
/* template_members: TESTInteger2 imp imp */
/* template_members: imp skip type TESTInteger isstruct: 0 */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_TESTInteger2_tag__20[];
/* generate_template_type: TESTInteger2_tag__20 */
/* generate_template_type: TESTInteger2 */
const struct asn1_template asn1_TESTInteger2[] = {
/* 0 */ { 0, sizeof(TESTInteger2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,4)|A1_FLAG_IMPLICIT, 0, asn1_int_tag_foo_3 }
};

int
decode_TESTInteger2(const unsigned char *p, size_t len, TESTInteger2 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTInteger2, 0|0, p, len, data, size);
}


int
encode_TESTInteger2(unsigned char *p, size_t len, const TESTInteger2 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTInteger2, p, len, data, size);
    return ret;
}


size_t
length_TESTInteger2(const TESTInteger2 *data)
{
    return _asn1_length(asn1_TESTInteger2, data);
}


void
free_TESTInteger2(TESTInteger2 *data)
{
    _asn1_free_top(asn1_TESTInteger2, data);
}


int
copy_TESTInteger2(const TESTInteger2 *from, TESTInteger2 *to)
{
    return _asn1_copy_top(asn1_TESTInteger2, from, to);
}

extern const struct asn1_template asn1_TESTInteger3[];
/* template_members: TESTInteger3 imp imp */
/* template_members: imp skip type TESTInteger2 isstruct: 0 */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_TESTInteger3_tag__21[];
/* generate_template_type: TESTInteger3_tag__21 */
const struct asn1_template asn1_TESTInteger3_tag__21[] = {
/* 0 */ { 0, sizeof(TESTInteger), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TESTInteger }
};
/* generate_template_type: TESTInteger3 */
const struct asn1_template asn1_TESTInteger3[] = {
/* 0 */ { 0, sizeof(TESTInteger3), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_IMPLICIT, 0, asn1_TESTInteger3_tag__21 }
};

int
decode_TESTInteger3(const unsigned char *p, size_t len, TESTInteger3 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTInteger3, 0|0, p, len, data, size);
}


int
encode_TESTInteger3(unsigned char *p, size_t len, const TESTInteger3 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTInteger3, p, len, data, size);
    return ret;
}


size_t
length_TESTInteger3(const TESTInteger3 *data)
{
    return _asn1_length(asn1_TESTInteger3, data);
}


void
free_TESTInteger3(TESTInteger3 *data)
{
    _asn1_free_top(asn1_TESTInteger3, data);
}


int
copy_TESTInteger3(const TESTInteger3 *from, TESTInteger3 *to)
{
    return _asn1_copy_top(asn1_TESTInteger3, from, to);
}

extern const struct asn1_template asn1_TESTImplicit[];
/* template_members: TESTImplicit exp exp */
extern const struct asn1_template asn1_TESTImplicit_tag__22[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTImplicit exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_TESTImplicit_tag_ti1_23[];
/* generate_template_type: TESTImplicit_tag_ti1_23 */
/* template_members: TESTImplicit exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_TESTImplicit_tag_ti2_24[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTImplicit_ti2 exp exp */
extern const struct asn1_template asn1_TESTImplicit_ti2_tag_foo_25[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_foo_26[];
/* generate_template_type: int_tag_foo_26 */
/* generate_template_type: TESTImplicit_ti2_tag_foo_25 */
/* generate_template_type: TESTImplicit_tag_ti2_24 */
const struct asn1_template asn1_TESTImplicit_tag_ti2_24[] = {
/* 0 */ { 0, sizeof(struct TESTImplicit), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,127), offsetof(struct TESTImplicit_ti2, foo), asn1_TESTLargeTag_tag_foo_2 }
};
/* template_members: TESTImplicit exp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_TESTImplicit_tag_ti3_27[];
/* template_members: int imp imp */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_int_tag_ti3_28[];
/* generate_template_type: int_tag_ti3_28 */
/* generate_template_type: TESTImplicit_tag_ti3_27 */
const struct asn1_template asn1_TESTImplicit_tag_ti3_27[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,4)|A1_FLAG_IMPLICIT, 0, asn1_int_tag_foo_3 }
};
/* generate_template_type: TESTImplicit_tag__22 */
const struct asn1_template asn1_TESTImplicit_tag__22[] = {
/* 0 */ { 0, sizeof(struct TESTImplicit), ((void *)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, offsetof(struct TESTImplicit, ti1), asn1_int_tag_foo_3 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_IMPLICIT, offsetof(struct TESTImplicit, ti2), asn1_TESTImplicit_tag_ti2_24 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_IMPLICIT, offsetof(struct TESTImplicit, ti3), asn1_TESTImplicit_tag_ti3_27 }
};
/* generate_template_type: TESTImplicit */
const struct asn1_template asn1_TESTImplicit[] = {
/* 0 */ { 0, sizeof(TESTImplicit), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTImplicit_tag__22 }
};

int
decode_TESTImplicit(const unsigned char *p, size_t len, TESTImplicit *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTImplicit, 0|0, p, len, data, size);
}


int
encode_TESTImplicit(unsigned char *p, size_t len, const TESTImplicit *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTImplicit, p, len, data, size);
    return ret;
}


size_t
length_TESTImplicit(const TESTImplicit *data)
{
    return _asn1_length(asn1_TESTImplicit, data);
}


void
free_TESTImplicit(TESTImplicit *data)
{
    _asn1_free_top(asn1_TESTImplicit, data);
}


int
copy_TESTImplicit(const TESTImplicit *from, TESTImplicit *to)
{
    return _asn1_copy_top(asn1_TESTImplicit, from, to);
}

extern const struct asn1_template asn1_TESTImplicit2[];
/* template_members: TESTImplicit2 exp exp */
extern const struct asn1_template asn1_TESTImplicit2_tag__29[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTImplicit2 exp imp */
/* template_members: imp skip type TESTInteger isstruct: 0 */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_TESTImplicit2_tag_ti1_30[];
/* generate_template_type: TESTImplicit2_tag_ti1_30 */
/* template_members: TESTImplicit2 exp imp */
/* template_members: imp skip type TESTInteger3 isstruct: 0 */
/* template_members: imp skip tag */
extern const struct asn1_template asn1_TESTImplicit2_tag_ti3_31[];
/* generate_template_type: TESTImplicit2_tag_ti3_31 */
const struct asn1_template asn1_TESTImplicit2_tag_ti3_31[] = {
/* 0 */ { 0, sizeof(TESTInteger2), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TESTInteger2 }
};
/* generate_template_type: TESTImplicit2_tag__29 */
const struct asn1_template asn1_TESTImplicit2_tag__29[] = {
/* 0 */ { 0, sizeof(struct TESTImplicit2), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, offsetof(struct TESTImplicit2, ti1), asn1_int_tag_foo_3 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_IMPLICIT, offsetof(struct TESTImplicit2, ti3), asn1_TESTImplicit2_tag_ti3_31 }
};
/* generate_template_type: TESTImplicit2 */
const struct asn1_template asn1_TESTImplicit2[] = {
/* 0 */ { 0, sizeof(TESTImplicit2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTImplicit2_tag__29 }
};

int
decode_TESTImplicit2(const unsigned char *p, size_t len, TESTImplicit2 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTImplicit2, 0|0, p, len, data, size);
}


int
encode_TESTImplicit2(unsigned char *p, size_t len, const TESTImplicit2 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTImplicit2, p, len, data, size);
    return ret;
}


size_t
length_TESTImplicit2(const TESTImplicit2 *data)
{
    return _asn1_length(asn1_TESTImplicit2, data);
}


void
free_TESTImplicit2(TESTImplicit2 *data)
{
    _asn1_free_top(asn1_TESTImplicit2, data);
}


int
copy_TESTImplicit2(const TESTImplicit2 *from, TESTImplicit2 *to)
{
    return _asn1_copy_top(asn1_TESTImplicit2, from, to);
}

extern const struct asn1_template asn1_TESTAllocInner[];
/* template_members: TESTAllocInner exp exp */
extern const struct asn1_template asn1_TESTAllocInner_tag__32[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTAllocInner exp exp */
extern const struct asn1_template asn1_TESTAllocInner_tag_ai_33[];
/* generate_template_type: TESTAllocInner_tag_ai_33 */
/* generate_template_type: TESTAllocInner_tag__32 */
const struct asn1_template asn1_TESTAllocInner_tag__32[] = {
/* 0 */ { 0, sizeof(struct TESTAllocInner), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TESTAllocInner, ai), asn1_TESTInteger3_tag__21 }
};
/* generate_template_type: TESTAllocInner */
const struct asn1_template asn1_TESTAllocInner[] = {
/* 0 */ { 0, sizeof(TESTAllocInner), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTAllocInner_tag__32 }
};

int
decode_TESTAllocInner(const unsigned char *p, size_t len, TESTAllocInner *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTAllocInner, 0|0, p, len, data, size);
}


int
encode_TESTAllocInner(unsigned char *p, size_t len, const TESTAllocInner *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTAllocInner, p, len, data, size);
    return ret;
}


size_t
length_TESTAllocInner(const TESTAllocInner *data)
{
    return _asn1_length(asn1_TESTAllocInner, data);
}


void
free_TESTAllocInner(TESTAllocInner *data)
{
    _asn1_free_top(asn1_TESTAllocInner, data);
}


int
copy_TESTAllocInner(const TESTAllocInner *from, TESTAllocInner *to)
{
    return _asn1_copy_top(asn1_TESTAllocInner, from, to);
}

extern const struct asn1_template asn1_TESTAlloc[];
/* template_members: TESTAlloc exp exp */
extern const struct asn1_template asn1_TESTAlloc_tag__34[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTAlloc exp exp */
extern const struct asn1_template asn1_TESTAlloc_tag_three_35[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_three_36[];
/* generate_template_type: int_tag_three_36 */
/* generate_template_type: TESTAlloc_tag_three_35 */
/* generate_template_type: TESTAlloc_tag__34 */
const struct asn1_template asn1_TESTAlloc_tag__34[] = {
/* 0 */ { 0, sizeof(struct TESTAlloc), ((void *)3) },
/* 1 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct TESTAlloc, tagless), asn1_TESTAllocInner },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct TESTAlloc, three), asn1_TESTLargeTag_tag_foo_2 },
/* 3 */ { A1_OP_TYPE_EXTERN |A1_FLAG_OPTIONAL, offsetof(struct TESTAlloc, tagless2), &asn1_extern_heim_any}
};
/* generate_template_type: TESTAlloc */
const struct asn1_template asn1_TESTAlloc[] = {
/* 0 */ { 0, sizeof(TESTAlloc), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTAlloc_tag__34 }
};

int
decode_TESTAlloc(const unsigned char *p, size_t len, TESTAlloc *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTAlloc, 0|0, p, len, data, size);
}


int
encode_TESTAlloc(unsigned char *p, size_t len, const TESTAlloc *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTAlloc, p, len, data, size);
    return ret;
}


size_t
length_TESTAlloc(const TESTAlloc *data)
{
    return _asn1_length(asn1_TESTAlloc, data);
}


void
free_TESTAlloc(TESTAlloc *data)
{
    _asn1_free_top(asn1_TESTAlloc, data);
}


int
copy_TESTAlloc(const TESTAlloc *from, TESTAlloc *to)
{
    return _asn1_copy_top(asn1_TESTAlloc, from, to);
}

extern const struct asn1_template asn1_TESTOptional[];
/* template_members: TESTOptional exp exp */
extern const struct asn1_template asn1_TESTOptional_tag__37[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTOptional exp exp */
extern const struct asn1_template asn1_TESTOptional_tag_zero_38[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_zero_39[];
/* generate_template_type: int_tag_zero_39 */
/* generate_template_type: TESTOptional_tag_zero_38 */
/* template_members: TESTOptional exp exp */
extern const struct asn1_template asn1_TESTOptional_tag_one_40[];
/* template_members: int exp exp */
extern const struct asn1_template asn1_int_tag_one_41[];
/* generate_template_type: int_tag_one_41 */
/* generate_template_type: TESTOptional_tag_one_40 */
/* generate_template_type: TESTOptional_tag__37 */
const struct asn1_template asn1_TESTOptional_tag__37[] = {
/* 0 */ { 0, sizeof(struct TESTOptional), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct TESTOptional, zero), asn1_TESTLargeTag_tag_foo_2 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct TESTOptional, one), asn1_TESTLargeTag_tag_foo_2 }
};
/* generate_template_type: TESTOptional */
const struct asn1_template asn1_TESTOptional[] = {
/* 0 */ { 0, sizeof(TESTOptional), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTOptional_tag__37 }
};

int
decode_TESTOptional(const unsigned char *p, size_t len, TESTOptional *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTOptional, 0|0, p, len, data, size);
}


int
encode_TESTOptional(unsigned char *p, size_t len, const TESTOptional *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTOptional, p, len, data, size);
    return ret;
}


size_t
length_TESTOptional(const TESTOptional *data)
{
    return _asn1_length(asn1_TESTOptional, data);
}


void
free_TESTOptional(TESTOptional *data)
{
    _asn1_free_top(asn1_TESTOptional, data);
}


int
copy_TESTOptional(const TESTOptional *from, TESTOptional *to)
{
    return _asn1_copy_top(asn1_TESTOptional, from, to);
}

extern const struct asn1_template asn1_TESTCONTAINING[];
/* template_members: TESTCONTAINING exp exp */
extern const struct asn1_template asn1_TESTCONTAINING_tag__42[];
/* generate_template_type: TESTCONTAINING_tag__42 */
const struct asn1_template asn1_TESTCONTAINING_tag__42[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: TESTCONTAINING */
const struct asn1_template asn1_TESTCONTAINING[] = {
/* 0 */ { 0, sizeof(TESTCONTAINING), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_TESTCONTAINING_tag__42 }
};

int
decode_TESTCONTAINING(const unsigned char *p, size_t len, TESTCONTAINING *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTCONTAINING, 0|0, p, len, data, size);
}


int
encode_TESTCONTAINING(unsigned char *p, size_t len, const TESTCONTAINING *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTCONTAINING, p, len, data, size);
    return ret;
}


size_t
length_TESTCONTAINING(const TESTCONTAINING *data)
{
    return _asn1_length(asn1_TESTCONTAINING, data);
}


void
free_TESTCONTAINING(TESTCONTAINING *data)
{
    _asn1_free_top(asn1_TESTCONTAINING, data);
}


int
copy_TESTCONTAINING(const TESTCONTAINING *from, TESTCONTAINING *to)
{
    return _asn1_copy_top(asn1_TESTCONTAINING, from, to);
}

extern const struct asn1_template asn1_TESTENCODEDBY[];
/* template_members: TESTENCODEDBY exp exp */
extern const struct asn1_template asn1_TESTENCODEDBY_tag__43[];
/* generate_template_type: TESTENCODEDBY_tag__43 */
/* generate_template_type: TESTENCODEDBY */
const struct asn1_template asn1_TESTENCODEDBY[] = {
/* 0 */ { 0, sizeof(TESTENCODEDBY), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_TESTCONTAINING_tag__42 }
};

int
decode_TESTENCODEDBY(const unsigned char *p, size_t len, TESTENCODEDBY *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTENCODEDBY, 0|0, p, len, data, size);
}


int
encode_TESTENCODEDBY(unsigned char *p, size_t len, const TESTENCODEDBY *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTENCODEDBY, p, len, data, size);
    return ret;
}


size_t
length_TESTENCODEDBY(const TESTENCODEDBY *data)
{
    return _asn1_length(asn1_TESTENCODEDBY, data);
}


void
free_TESTENCODEDBY(TESTENCODEDBY *data)
{
    _asn1_free_top(asn1_TESTENCODEDBY, data);
}


int
copy_TESTENCODEDBY(const TESTENCODEDBY *from, TESTENCODEDBY *to)
{
    return _asn1_copy_top(asn1_TESTENCODEDBY, from, to);
}

static unsigned oid_TESTDer_variable_num[4] =  {2, 1, 2, 1 };
const heim_oid asn1_oid_TESTDer = { 4, oid_TESTDer_variable_num };

extern const struct asn1_template asn1_TESTCONTAININGENCODEDBY[];
/* template_members: TESTCONTAININGENCODEDBY exp exp */
extern const struct asn1_template asn1_TESTCONTAININGENCODEDBY_tag__44[];
/* generate_template_type: TESTCONTAININGENCODEDBY_tag__44 */
/* generate_template_type: TESTCONTAININGENCODEDBY */
const struct asn1_template asn1_TESTCONTAININGENCODEDBY[] = {
/* 0 */ { 0, sizeof(TESTCONTAININGENCODEDBY), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_TESTCONTAINING_tag__42 }
};

int
decode_TESTCONTAININGENCODEDBY(const unsigned char *p, size_t len, TESTCONTAININGENCODEDBY *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTCONTAININGENCODEDBY, 0|0, p, len, data, size);
}


int
encode_TESTCONTAININGENCODEDBY(unsigned char *p, size_t len, const TESTCONTAININGENCODEDBY *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTCONTAININGENCODEDBY, p, len, data, size);
    return ret;
}


size_t
length_TESTCONTAININGENCODEDBY(const TESTCONTAININGENCODEDBY *data)
{
    return _asn1_length(asn1_TESTCONTAININGENCODEDBY, data);
}


void
free_TESTCONTAININGENCODEDBY(TESTCONTAININGENCODEDBY *data)
{
    _asn1_free_top(asn1_TESTCONTAININGENCODEDBY, data);
}


int
copy_TESTCONTAININGENCODEDBY(const TESTCONTAININGENCODEDBY *from, TESTCONTAININGENCODEDBY *to)
{
    return _asn1_copy_top(asn1_TESTCONTAININGENCODEDBY, from, to);
}

extern const struct asn1_template asn1_TESTCONTAININGENCODEDBY2[];
/* template_members: TESTCONTAININGENCODEDBY2 exp exp */
extern const struct asn1_template asn1_TESTCONTAININGENCODEDBY2_tag__45[];
/* generate_template_type: TESTCONTAININGENCODEDBY2_tag__45 */
/* generate_template_type: TESTCONTAININGENCODEDBY2 */
const struct asn1_template asn1_TESTCONTAININGENCODEDBY2[] = {
/* 0 */ { 0, sizeof(TESTCONTAININGENCODEDBY2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_TESTCONTAINING_tag__42 }
};

int
decode_TESTCONTAININGENCODEDBY2(const unsigned char *p, size_t len, TESTCONTAININGENCODEDBY2 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTCONTAININGENCODEDBY2, 0|0, p, len, data, size);
}


int
encode_TESTCONTAININGENCODEDBY2(unsigned char *p, size_t len, const TESTCONTAININGENCODEDBY2 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTCONTAININGENCODEDBY2, p, len, data, size);
    return ret;
}


size_t
length_TESTCONTAININGENCODEDBY2(const TESTCONTAININGENCODEDBY2 *data)
{
    return _asn1_length(asn1_TESTCONTAININGENCODEDBY2, data);
}


void
free_TESTCONTAININGENCODEDBY2(TESTCONTAININGENCODEDBY2 *data)
{
    _asn1_free_top(asn1_TESTCONTAININGENCODEDBY2, data);
}


int
copy_TESTCONTAININGENCODEDBY2(const TESTCONTAININGENCODEDBY2 *from, TESTCONTAININGENCODEDBY2 *to)
{
    return _asn1_copy_top(asn1_TESTCONTAININGENCODEDBY2, from, to);
}

extern const struct asn1_template asn1_TESTUSERCONSTRAINED[];
/* template_members: TESTUSERCONSTRAINED exp exp */
extern const struct asn1_template asn1_TESTUSERCONSTRAINED_tag__46[];
/* generate_template_type: TESTUSERCONSTRAINED_tag__46 */
/* generate_template_type: TESTUSERCONSTRAINED */
const struct asn1_template asn1_TESTUSERCONSTRAINED[] = {
/* 0 */ { 0, sizeof(TESTUSERCONSTRAINED), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_TESTCONTAINING_tag__42 }
};

int
decode_TESTUSERCONSTRAINED(const unsigned char *p, size_t len, TESTUSERCONSTRAINED *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTUSERCONSTRAINED, 0|0, p, len, data, size);
}


int
encode_TESTUSERCONSTRAINED(unsigned char *p, size_t len, const TESTUSERCONSTRAINED *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTUSERCONSTRAINED, p, len, data, size);
    return ret;
}


size_t
length_TESTUSERCONSTRAINED(const TESTUSERCONSTRAINED *data)
{
    return _asn1_length(asn1_TESTUSERCONSTRAINED, data);
}


void
free_TESTUSERCONSTRAINED(TESTUSERCONSTRAINED *data)
{
    _asn1_free_top(asn1_TESTUSERCONSTRAINED, data);
}


int
copy_TESTUSERCONSTRAINED(const TESTUSERCONSTRAINED *from, TESTUSERCONSTRAINED *to)
{
    return _asn1_copy_top(asn1_TESTUSERCONSTRAINED, from, to);
}

extern const struct asn1_template asn1_TESTSeqOf[];
/* template_members: TESTSeqOf exp exp */
extern const struct asn1_template asn1_TESTSeqOf_tag__47[];
extern const struct asn1_template asn1_TESTInteger_seofTstruct_0[];
/* generate_template_type: TESTInteger_seofTstruct_0 */
/* generate_template_type: TESTSeqOf_tag__47 */
const struct asn1_template asn1_TESTSeqOf_tag__47[] = {
/* 0 */ { 0, sizeof(TESTInteger), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_TESTInteger3_tag__21 }
};
/* generate_template_type: TESTSeqOf */
const struct asn1_template asn1_TESTSeqOf[] = {
/* 0 */ { 0, sizeof(TESTSeqOf), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOf_tag__47 }
};

int
decode_TESTSeqOf(const unsigned char *p, size_t len, TESTSeqOf *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTSeqOf, 0|0, p, len, data, size);
}


int
encode_TESTSeqOf(unsigned char *p, size_t len, const TESTSeqOf *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTSeqOf, p, len, data, size);
    return ret;
}


size_t
length_TESTSeqOf(const TESTSeqOf *data)
{
    return _asn1_length(asn1_TESTSeqOf, data);
}


void
free_TESTSeqOf(TESTSeqOf *data)
{
    _asn1_free_top(asn1_TESTSeqOf, data);
}


int
copy_TESTSeqOf(const TESTSeqOf *from, TESTSeqOf *to)
{
    return _asn1_copy_top(asn1_TESTSeqOf, from, to);
}

int ASN1CALL
add_TESTSeqOf(TESTSeqOf *data, const TESTInteger *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_TESTInteger(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_TESTSeqOf(TESTSeqOf *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_TESTInteger(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

extern const struct asn1_template asn1_TESTSeqSizeOf1[];
/* template_members: TESTSeqSizeOf1 exp exp */
extern const struct asn1_template asn1_TESTSeqSizeOf1_tag__48[];
extern const struct asn1_template asn1_TESTInteger_seofTstruct_1[];
/* generate_template_type: TESTInteger_seofTstruct_1 */
/* generate_template_type: TESTSeqSizeOf1_tag__48 */
/* generate_template_type: TESTSeqSizeOf1 */
const struct asn1_template asn1_TESTSeqSizeOf1[] = {
/* 0 */ { 0, sizeof(TESTSeqSizeOf1), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOf_tag__47 }
};

int
decode_TESTSeqSizeOf1(const unsigned char *p, size_t len, TESTSeqSizeOf1 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTSeqSizeOf1, 0|0, p, len, data, size);
}


int
encode_TESTSeqSizeOf1(unsigned char *p, size_t len, const TESTSeqSizeOf1 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTSeqSizeOf1, p, len, data, size);
    return ret;
}


size_t
length_TESTSeqSizeOf1(const TESTSeqSizeOf1 *data)
{
    return _asn1_length(asn1_TESTSeqSizeOf1, data);
}


void
free_TESTSeqSizeOf1(TESTSeqSizeOf1 *data)
{
    _asn1_free_top(asn1_TESTSeqSizeOf1, data);
}


int
copy_TESTSeqSizeOf1(const TESTSeqSizeOf1 *from, TESTSeqSizeOf1 *to)
{
    return _asn1_copy_top(asn1_TESTSeqSizeOf1, from, to);
}

extern const struct asn1_template asn1_TESTSeqSizeOf2[];
/* template_members: TESTSeqSizeOf2 exp exp */
extern const struct asn1_template asn1_TESTSeqSizeOf2_tag__49[];
extern const struct asn1_template asn1_TESTInteger_seofTstruct_2[];
/* generate_template_type: TESTInteger_seofTstruct_2 */
/* generate_template_type: TESTSeqSizeOf2_tag__49 */
/* generate_template_type: TESTSeqSizeOf2 */
const struct asn1_template asn1_TESTSeqSizeOf2[] = {
/* 0 */ { 0, sizeof(TESTSeqSizeOf2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOf_tag__47 }
};

int
decode_TESTSeqSizeOf2(const unsigned char *p, size_t len, TESTSeqSizeOf2 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTSeqSizeOf2, 0|0, p, len, data, size);
}


int
encode_TESTSeqSizeOf2(unsigned char *p, size_t len, const TESTSeqSizeOf2 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTSeqSizeOf2, p, len, data, size);
    return ret;
}


size_t
length_TESTSeqSizeOf2(const TESTSeqSizeOf2 *data)
{
    return _asn1_length(asn1_TESTSeqSizeOf2, data);
}


void
free_TESTSeqSizeOf2(TESTSeqSizeOf2 *data)
{
    _asn1_free_top(asn1_TESTSeqSizeOf2, data);
}


int
copy_TESTSeqSizeOf2(const TESTSeqSizeOf2 *from, TESTSeqSizeOf2 *to)
{
    return _asn1_copy_top(asn1_TESTSeqSizeOf2, from, to);
}

extern const struct asn1_template asn1_TESTSeqSizeOf3[];
/* template_members: TESTSeqSizeOf3 exp exp */
extern const struct asn1_template asn1_TESTSeqSizeOf3_tag__50[];
extern const struct asn1_template asn1_TESTInteger_seofTstruct_3[];
/* generate_template_type: TESTInteger_seofTstruct_3 */
/* generate_template_type: TESTSeqSizeOf3_tag__50 */
/* generate_template_type: TESTSeqSizeOf3 */
const struct asn1_template asn1_TESTSeqSizeOf3[] = {
/* 0 */ { 0, sizeof(TESTSeqSizeOf3), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOf_tag__47 }
};

int
decode_TESTSeqSizeOf3(const unsigned char *p, size_t len, TESTSeqSizeOf3 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTSeqSizeOf3, 0|0, p, len, data, size);
}


int
encode_TESTSeqSizeOf3(unsigned char *p, size_t len, const TESTSeqSizeOf3 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTSeqSizeOf3, p, len, data, size);
    return ret;
}


size_t
length_TESTSeqSizeOf3(const TESTSeqSizeOf3 *data)
{
    return _asn1_length(asn1_TESTSeqSizeOf3, data);
}


void
free_TESTSeqSizeOf3(TESTSeqSizeOf3 *data)
{
    _asn1_free_top(asn1_TESTSeqSizeOf3, data);
}


int
copy_TESTSeqSizeOf3(const TESTSeqSizeOf3 *from, TESTSeqSizeOf3 *to)
{
    return _asn1_copy_top(asn1_TESTSeqSizeOf3, from, to);
}

extern const struct asn1_template asn1_TESTSeqSizeOf4[];
/* template_members: TESTSeqSizeOf4 exp exp */
extern const struct asn1_template asn1_TESTSeqSizeOf4_tag__51[];
extern const struct asn1_template asn1_TESTInteger_seofTstruct_4[];
/* generate_template_type: TESTInteger_seofTstruct_4 */
/* generate_template_type: TESTSeqSizeOf4_tag__51 */
/* generate_template_type: TESTSeqSizeOf4 */
const struct asn1_template asn1_TESTSeqSizeOf4[] = {
/* 0 */ { 0, sizeof(TESTSeqSizeOf4), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOf_tag__47 }
};

int
decode_TESTSeqSizeOf4(const unsigned char *p, size_t len, TESTSeqSizeOf4 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTSeqSizeOf4, 0|0, p, len, data, size);
}


int
encode_TESTSeqSizeOf4(unsigned char *p, size_t len, const TESTSeqSizeOf4 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTSeqSizeOf4, p, len, data, size);
    return ret;
}


size_t
length_TESTSeqSizeOf4(const TESTSeqSizeOf4 *data)
{
    return _asn1_length(asn1_TESTSeqSizeOf4, data);
}


void
free_TESTSeqSizeOf4(TESTSeqSizeOf4 *data)
{
    _asn1_free_top(asn1_TESTSeqSizeOf4, data);
}


int
copy_TESTSeqSizeOf4(const TESTSeqSizeOf4 *from, TESTSeqSizeOf4 *to)
{
    return _asn1_copy_top(asn1_TESTSeqSizeOf4, from, to);
}

extern const struct asn1_template asn1_TESTOSSize1[];
/* template_members: TESTOSSize1 exp exp */
extern const struct asn1_template asn1_TESTOSSize1_tag__52[];
/* generate_template_type: TESTOSSize1_tag__52 */
/* generate_template_type: TESTOSSize1 */
const struct asn1_template asn1_TESTOSSize1[] = {
/* 0 */ { 0, sizeof(TESTOSSize1), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_TESTCONTAINING_tag__42 }
};

int
decode_TESTOSSize1(const unsigned char *p, size_t len, TESTOSSize1 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTOSSize1, 0|0, p, len, data, size);
}


int
encode_TESTOSSize1(unsigned char *p, size_t len, const TESTOSSize1 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTOSSize1, p, len, data, size);
    return ret;
}


size_t
length_TESTOSSize1(const TESTOSSize1 *data)
{
    return _asn1_length(asn1_TESTOSSize1, data);
}


void
free_TESTOSSize1(TESTOSSize1 *data)
{
    _asn1_free_top(asn1_TESTOSSize1, data);
}


int
copy_TESTOSSize1(const TESTOSSize1 *from, TESTOSSize1 *to)
{
    return _asn1_copy_top(asn1_TESTOSSize1, from, to);
}

extern const struct asn1_template asn1_TESTSeqOfSeq[];
/* template_members: TESTSeqOfSeq exp exp */
extern const struct asn1_template asn1_TESTSeqOfSeq_tag__53[];
extern const struct asn1_template asn1_TESTSeqOfSeq_seofTstruct_5[];
/* template_members: TESTSeqOfSeq_val exp exp */
extern const struct asn1_template asn1_TESTSeqOfSeq_val_tag__54[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTSeqOfSeq_val exp exp */
extern const struct asn1_template asn1_TESTSeqOfSeq_val_tag_zero_55[];
/* generate_template_type: TESTSeqOfSeq_val_tag_zero_55 */
/* generate_template_type: TESTSeqOfSeq_val_tag__54 */
const struct asn1_template asn1_TESTSeqOfSeq_val_tag__54[] = {
/* 0 */ { 0, sizeof(struct TESTSeqOfSeq_val), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TESTSeqOfSeq_val, zero), asn1_TESTInteger3_tag__21 }
};
/* generate_template_type: TESTSeqOfSeq_seofTstruct_5 */
const struct asn1_template asn1_TESTSeqOfSeq_seofTstruct_5[] = {
/* 0 */ { 0, sizeof(struct TESTSeqOfSeq_val), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOfSeq_val_tag__54 }
};
/* generate_template_type: TESTSeqOfSeq_tag__53 */
const struct asn1_template asn1_TESTSeqOfSeq_tag__53[] = {
/* 0 */ { 0, sizeof(TESTSeqOfSeq), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_TESTSeqOfSeq_seofTstruct_5 }
};
/* generate_template_type: TESTSeqOfSeq */
const struct asn1_template asn1_TESTSeqOfSeq[] = {
/* 0 */ { 0, sizeof(TESTSeqOfSeq), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOfSeq_tag__53 }
};

int
decode_TESTSeqOfSeq(const unsigned char *p, size_t len, TESTSeqOfSeq *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTSeqOfSeq, 0|0, p, len, data, size);
}


int
encode_TESTSeqOfSeq(unsigned char *p, size_t len, const TESTSeqOfSeq *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTSeqOfSeq, p, len, data, size);
    return ret;
}


size_t
length_TESTSeqOfSeq(const TESTSeqOfSeq *data)
{
    return _asn1_length(asn1_TESTSeqOfSeq, data);
}


void
free_TESTSeqOfSeq(TESTSeqOfSeq *data)
{
    _asn1_free_top(asn1_TESTSeqOfSeq, data);
}


int
copy_TESTSeqOfSeq(const TESTSeqOfSeq *from, TESTSeqOfSeq *to)
{
    return _asn1_copy_top(asn1_TESTSeqOfSeq, from, to);
}

extern const struct asn1_template asn1_TESTSeqOfSeq2[];
/* template_members: TESTSeqOfSeq2 exp exp */
extern const struct asn1_template asn1_TESTSeqOfSeq2_tag__56[];
extern const struct asn1_template asn1_TESTSeqOfSeq2_seofTstruct_6[];
/* template_members: TESTSeqOfSeq2_val exp exp */
extern const struct asn1_template asn1_TESTSeqOfSeq2_val_tag__57[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTSeqOfSeq2_val exp exp */
extern const struct asn1_template asn1_TESTSeqOfSeq2_val_tag_string_58[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_string_59[];
/* generate_template_type: heim_general_string_tag_string_59 */
const struct asn1_template asn1_heim_general_string_tag_string_59[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_GENERAL_STRING), 0, NULL }
};
/* generate_template_type: TESTSeqOfSeq2_val_tag_string_58 */
const struct asn1_template asn1_TESTSeqOfSeq2_val_tag_string_58[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralString), 0, asn1_heim_general_string_tag_string_59 }
};
/* generate_template_type: TESTSeqOfSeq2_val_tag__57 */
const struct asn1_template asn1_TESTSeqOfSeq2_val_tag__57[] = {
/* 0 */ { 0, sizeof(struct TESTSeqOfSeq2_val), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TESTSeqOfSeq2_val, string), asn1_TESTSeqOfSeq2_val_tag_string_58 }
};
/* generate_template_type: TESTSeqOfSeq2_seofTstruct_6 */
const struct asn1_template asn1_TESTSeqOfSeq2_seofTstruct_6[] = {
/* 0 */ { 0, sizeof(struct TESTSeqOfSeq2_val), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOfSeq2_val_tag__57 }
};
/* generate_template_type: TESTSeqOfSeq2_tag__56 */
const struct asn1_template asn1_TESTSeqOfSeq2_tag__56[] = {
/* 0 */ { 0, sizeof(TESTSeqOfSeq2), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_TESTSeqOfSeq2_seofTstruct_6 }
};
/* generate_template_type: TESTSeqOfSeq2 */
const struct asn1_template asn1_TESTSeqOfSeq2[] = {
/* 0 */ { 0, sizeof(TESTSeqOfSeq2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOfSeq2_tag__56 }
};

int
decode_TESTSeqOfSeq2(const unsigned char *p, size_t len, TESTSeqOfSeq2 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTSeqOfSeq2, 0|0, p, len, data, size);
}


int
encode_TESTSeqOfSeq2(unsigned char *p, size_t len, const TESTSeqOfSeq2 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTSeqOfSeq2, p, len, data, size);
    return ret;
}


size_t
length_TESTSeqOfSeq2(const TESTSeqOfSeq2 *data)
{
    return _asn1_length(asn1_TESTSeqOfSeq2, data);
}


void
free_TESTSeqOfSeq2(TESTSeqOfSeq2 *data)
{
    _asn1_free_top(asn1_TESTSeqOfSeq2, data);
}


int
copy_TESTSeqOfSeq2(const TESTSeqOfSeq2 *from, TESTSeqOfSeq2 *to)
{
    return _asn1_copy_top(asn1_TESTSeqOfSeq2, from, to);
}

extern const struct asn1_template asn1_TESTSeqOfSeq3[];
/* template_members: TESTSeqOfSeq3 exp exp */
extern const struct asn1_template asn1_TESTSeqOfSeq3_tag__60[];
extern const struct asn1_template asn1_TESTSeqOfSeq3_seofTstruct_7[];
/* template_members: TESTSeqOfSeq3_val exp exp */
extern const struct asn1_template asn1_TESTSeqOfSeq3_val_tag__61[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTSeqOfSeq3_val exp exp */
extern const struct asn1_template asn1_TESTSeqOfSeq3_val_tag_zero_62[];
/* generate_template_type: TESTSeqOfSeq3_val_tag_zero_62 */
/* template_members: TESTSeqOfSeq3_val exp exp */
extern const struct asn1_template asn1_TESTSeqOfSeq3_val_tag_string_63[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_string_64[];
/* generate_template_type: heim_general_string_tag_string_64 */
/* generate_template_type: TESTSeqOfSeq3_val_tag_string_63 */
/* generate_template_type: TESTSeqOfSeq3_val_tag__61 */
const struct asn1_template asn1_TESTSeqOfSeq3_val_tag__61[] = {
/* 0 */ { 0, sizeof(struct TESTSeqOfSeq3_val), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TESTSeqOfSeq3_val, zero), asn1_TESTInteger3_tag__21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TESTSeqOfSeq3_val, string), asn1_TESTSeqOfSeq2_val_tag_string_58 }
};
/* generate_template_type: TESTSeqOfSeq3_seofTstruct_7 */
const struct asn1_template asn1_TESTSeqOfSeq3_seofTstruct_7[] = {
/* 0 */ { 0, sizeof(struct TESTSeqOfSeq3_val), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOfSeq3_val_tag__61 }
};
/* generate_template_type: TESTSeqOfSeq3_tag__60 */
const struct asn1_template asn1_TESTSeqOfSeq3_tag__60[] = {
/* 0 */ { 0, sizeof(TESTSeqOfSeq3), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_TESTSeqOfSeq3_seofTstruct_7 }
};
/* generate_template_type: TESTSeqOfSeq3 */
const struct asn1_template asn1_TESTSeqOfSeq3[] = {
/* 0 */ { 0, sizeof(TESTSeqOfSeq3), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOfSeq3_tag__60 }
};

int
decode_TESTSeqOfSeq3(const unsigned char *p, size_t len, TESTSeqOfSeq3 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTSeqOfSeq3, 0|0, p, len, data, size);
}


int
encode_TESTSeqOfSeq3(unsigned char *p, size_t len, const TESTSeqOfSeq3 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTSeqOfSeq3, p, len, data, size);
    return ret;
}


size_t
length_TESTSeqOfSeq3(const TESTSeqOfSeq3 *data)
{
    return _asn1_length(asn1_TESTSeqOfSeq3, data);
}


void
free_TESTSeqOfSeq3(TESTSeqOfSeq3 *data)
{
    _asn1_free_top(asn1_TESTSeqOfSeq3, data);
}


int
copy_TESTSeqOfSeq3(const TESTSeqOfSeq3 *from, TESTSeqOfSeq3 *to)
{
    return _asn1_copy_top(asn1_TESTSeqOfSeq3, from, to);
}

extern const struct asn1_template asn1_TESTSeqOf2[];
/* template_members: TESTSeqOf2 exp exp */
extern const struct asn1_template asn1_TESTSeqOf2_tag__65[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTSeqOf2 exp exp */
extern const struct asn1_template asn1_TESTSeqOf2_tag_strings_66[];
extern const struct asn1_template asn1_TESTSeqOf2_strings_8[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag__67[];
/* generate_template_type: heim_general_string_tag__67 */
/* generate_template_type: TESTSeqOf2_strings_8 */
/* generate_template_type: TESTSeqOf2_tag_strings_66 */
const struct asn1_template asn1_TESTSeqOf2_tag_strings_66[] = {
/* 0 */ { 0, sizeof(struct TESTSeqOf2), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_TESTSeqOfSeq2_val_tag_string_58 }
};
/* generate_template_type: TESTSeqOf2_tag__65 */
const struct asn1_template asn1_TESTSeqOf2_tag__65[] = {
/* 0 */ { 0, sizeof(struct TESTSeqOf2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), offsetof(struct TESTSeqOf2, strings), asn1_TESTSeqOf2_tag_strings_66 }
};
/* generate_template_type: TESTSeqOf2 */
const struct asn1_template asn1_TESTSeqOf2[] = {
/* 0 */ { 0, sizeof(TESTSeqOf2), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOf2_tag__65 }
};

int
decode_TESTSeqOf2(const unsigned char *p, size_t len, TESTSeqOf2 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTSeqOf2, 0|0, p, len, data, size);
}


int
encode_TESTSeqOf2(unsigned char *p, size_t len, const TESTSeqOf2 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTSeqOf2, p, len, data, size);
    return ret;
}


size_t
length_TESTSeqOf2(const TESTSeqOf2 *data)
{
    return _asn1_length(asn1_TESTSeqOf2, data);
}


void
free_TESTSeqOf2(TESTSeqOf2 *data)
{
    _asn1_free_top(asn1_TESTSeqOf2, data);
}


int
copy_TESTSeqOf2(const TESTSeqOf2 *from, TESTSeqOf2 *to)
{
    return _asn1_copy_top(asn1_TESTSeqOf2, from, to);
}

extern const struct asn1_template asn1_TESTSeqOf3[];
/* template_members: TESTSeqOf3 exp exp */
extern const struct asn1_template asn1_TESTSeqOf3_tag__68[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTSeqOf3 exp exp */
extern const struct asn1_template asn1_TESTSeqOf3_tag_strings_69[];
extern const struct asn1_template asn1_TESTSeqOf3_strings_9[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag__70[];
/* generate_template_type: heim_general_string_tag__70 */
/* generate_template_type: TESTSeqOf3_strings_9 */
/* generate_template_type: TESTSeqOf3_tag_strings_69 */
const struct asn1_template asn1_TESTSeqOf3_tag_strings_69[] = {
/* 0 */ { 0, sizeof(struct TESTSeqOf3), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_TESTSeqOfSeq2_val_tag_string_58 }
};
/* generate_template_type: TESTSeqOf3_tag__68 */
const struct asn1_template asn1_TESTSeqOf3_tag__68[] = {
/* 0 */ { 0, sizeof(struct TESTSeqOf3), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_OPTIONAL, offsetof(struct TESTSeqOf3, strings), asn1_TESTSeqOf3_tag_strings_69 }
};
/* generate_template_type: TESTSeqOf3 */
const struct asn1_template asn1_TESTSeqOf3[] = {
/* 0 */ { 0, sizeof(TESTSeqOf3), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTSeqOf3_tag__68 }
};

int
decode_TESTSeqOf3(const unsigned char *p, size_t len, TESTSeqOf3 *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTSeqOf3, 0|0, p, len, data, size);
}


int
encode_TESTSeqOf3(unsigned char *p, size_t len, const TESTSeqOf3 *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTSeqOf3, p, len, data, size);
    return ret;
}


size_t
length_TESTSeqOf3(const TESTSeqOf3 *data)
{
    return _asn1_length(asn1_TESTSeqOf3, data);
}


void
free_TESTSeqOf3(TESTSeqOf3 *data)
{
    _asn1_free_top(asn1_TESTSeqOf3, data);
}


int
copy_TESTSeqOf3(const TESTSeqOf3 *from, TESTSeqOf3 *to)
{
    return _asn1_copy_top(asn1_TESTSeqOf3, from, to);
}

extern const struct asn1_template asn1_TESTPreserve[];
/* template_members: TESTPreserve exp exp */
extern const struct asn1_template asn1_TESTPreserve_tag__71[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTPreserve exp exp */
extern const struct asn1_template asn1_TESTPreserve_tag_zero_72[];
/* generate_template_type: TESTPreserve_tag_zero_72 */
/* template_members: TESTPreserve exp exp */
extern const struct asn1_template asn1_TESTPreserve_tag_one_73[];
/* generate_template_type: TESTPreserve_tag_one_73 */
/* generate_template_type: TESTPreserve_tag__71 */
const struct asn1_template asn1_TESTPreserve_tag__71[] = {
/* 0 */ { 0, sizeof(struct TESTPreserve), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TESTPreserve, zero), asn1_TESTInteger3_tag__21 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct TESTPreserve, one), asn1_TESTInteger3_tag__21 }
};
/* generate_template_type: TESTPreserve */
const struct asn1_template asn1_TESTPreserve[] = {
/* 0 */ { 0, sizeof(TESTPreserve), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTPreserve_tag__71 }
};

int
decode_TESTPreserve(const unsigned char *p, size_t len, TESTPreserve *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTPreserve, 0|0, p, len, data, size);
}


int
encode_TESTPreserve(unsigned char *p, size_t len, const TESTPreserve *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTPreserve, p, len, data, size);
    return ret;
}


size_t
length_TESTPreserve(const TESTPreserve *data)
{
    return _asn1_length(asn1_TESTPreserve, data);
}


void
free_TESTPreserve(TESTPreserve *data)
{
    _asn1_free_top(asn1_TESTPreserve, data);
}


int
copy_TESTPreserve(const TESTPreserve *from, TESTPreserve *to)
{
    return _asn1_copy_top(asn1_TESTPreserve, from, to);
}

extern const struct asn1_template asn1_TESTBitString[];
/* template_members: TESTBitString exp exp */
extern const struct asn1_template asn1_TESTBitString_tag__74[];
static const struct asn1_template asn1_TESTBitString_bmember__0[] = {
/* 0 */ { 0, sizeof(TESTBitString), ((void *)3) },
/* 1 */ { 0, 0, 0 } /* zero */,
/* 2 */ { 0, 8, 0 } /* eight */,
/* 3 */ { 0, 31, 0 } /* thirtyone */
};
/* generate_template_type: TESTBitString_tag__74 */
const struct asn1_template asn1_TESTBitString_tag__74[] = {
/* 0 */ { 0, sizeof(TESTBitString), ((void *)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_TESTBitString_bmember__0 }
};
/* generate_template_type: TESTBitString */
const struct asn1_template asn1_TESTBitString[] = {
/* 0 */ { 0, sizeof(TESTBitString), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_TESTBitString_tag__74 }
};

int
decode_TESTBitString(const unsigned char *p, size_t len, TESTBitString *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTBitString, 0|0, p, len, data, size);
}


int
encode_TESTBitString(unsigned char *p, size_t len, const TESTBitString *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTBitString, p, len, data, size);
    return ret;
}


size_t
length_TESTBitString(const TESTBitString *data)
{
    return _asn1_length(asn1_TESTBitString, data);
}


void
free_TESTBitString(TESTBitString *data)
{
    _asn1_free_top(asn1_TESTBitString, data);
}


int
copy_TESTBitString(const TESTBitString *from, TESTBitString *to)
{
    return _asn1_copy_top(asn1_TESTBitString, from, to);
}

unsigned TESTBitString2int(TESTBitString f)
{
unsigned r = 0;
if(f.zero) r |= (1U << 0);
if(f.eight) r |= (1U << 8);
if(f.thirtyone) r |= (1U << 31);
return r;
}

TESTBitString int2TESTBitString(unsigned n)
{
	TESTBitString flags;

	memset(&flags, 0, sizeof(flags));

	flags.zero = (n >> 0) & 1;
	flags.eight = (n >> 8) & 1;
	flags.thirtyone = (n >> 31) & 1;
	return flags;
}

static struct units TESTBitString_units[] = {
	{"thirtyone",	1U << 31},
	{"eight",	1U << 8},
	{"zero",	1U << 0},
	{NULL,	0}
};

const struct units * asn1_TESTBitString_table_units = TESTBitString_units;
extern const struct asn1_template asn1_TESTMechType[];
/* template_members: TESTMechType exp exp */
extern const struct asn1_template asn1_TESTMechType_tag__75[];
/* generate_template_type: TESTMechType_tag__75 */
const struct asn1_template asn1_TESTMechType_tag__75[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* generate_template_type: TESTMechType */
const struct asn1_template asn1_TESTMechType[] = {
/* 0 */ { 0, sizeof(TESTMechType), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_TESTMechType_tag__75 }
};

int
decode_TESTMechType(const unsigned char *p, size_t len, TESTMechType *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTMechType, 0|0, p, len, data, size);
}


int
encode_TESTMechType(unsigned char *p, size_t len, const TESTMechType *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTMechType, p, len, data, size);
    return ret;
}


size_t
length_TESTMechType(const TESTMechType *data)
{
    return _asn1_length(asn1_TESTMechType, data);
}


void
free_TESTMechType(TESTMechType *data)
{
    _asn1_free_top(asn1_TESTMechType, data);
}


int
copy_TESTMechType(const TESTMechType *from, TESTMechType *to)
{
    return _asn1_copy_top(asn1_TESTMechType, from, to);
}

extern const struct asn1_template asn1_TESTMechTypeList[];
/* template_members: TESTMechTypeList exp exp */
extern const struct asn1_template asn1_TESTMechTypeList_tag__76[];
extern const struct asn1_template asn1_TESTMechType_seofTstruct_10[];
/* generate_template_type: TESTMechType_seofTstruct_10 */
const struct asn1_template asn1_TESTMechType_seofTstruct_10[] = {
/* 0 */ { 0, sizeof(TESTMechType), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TESTMechType }
};
/* generate_template_type: TESTMechTypeList_tag__76 */
const struct asn1_template asn1_TESTMechTypeList_tag__76[] = {
/* 0 */ { 0, sizeof(TESTMechType), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_TESTMechType_seofTstruct_10 }
};
/* generate_template_type: TESTMechTypeList */
const struct asn1_template asn1_TESTMechTypeList[] = {
/* 0 */ { 0, sizeof(TESTMechTypeList), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTMechTypeList_tag__76 }
};

int
decode_TESTMechTypeList(const unsigned char *p, size_t len, TESTMechTypeList *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTMechTypeList, 0|0, p, len, data, size);
}


int
encode_TESTMechTypeList(unsigned char *p, size_t len, const TESTMechTypeList *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTMechTypeList, p, len, data, size);
    return ret;
}


size_t
length_TESTMechTypeList(const TESTMechTypeList *data)
{
    return _asn1_length(asn1_TESTMechTypeList, data);
}


void
free_TESTMechTypeList(TESTMechTypeList *data)
{
    _asn1_free_top(asn1_TESTMechTypeList, data);
}


int
copy_TESTMechTypeList(const TESTMechTypeList *from, TESTMechTypeList *to)
{
    return _asn1_copy_top(asn1_TESTMechTypeList, from, to);
}

extern const struct asn1_template asn1_TESTContextFlags[];
/* template_members: TESTContextFlags exp exp */
extern const struct asn1_template asn1_TESTContextFlags_tag__77[];
static const struct asn1_template asn1_TESTContextFlags_bmember__1[] = {
/* 0 */ { 0, sizeof(TESTContextFlags), ((void *)7) },
/* 1 */ { 0, 0, 0 } /* delegFlag */,
/* 2 */ { 0, 1, 0 } /* mutualFlag */,
/* 3 */ { 0, 2, 0 } /* replayFlag */,
/* 4 */ { 0, 3, 0 } /* sequenceFlag */,
/* 5 */ { 0, 4, 0 } /* anonFlag */,
/* 6 */ { 0, 5, 0 } /* confFlag */,
/* 7 */ { 0, 6, 0 } /* integFlag */
};
/* generate_template_type: TESTContextFlags_tag__77 */
const struct asn1_template asn1_TESTContextFlags_tag__77[] = {
/* 0 */ { 0, sizeof(TESTContextFlags), ((void *)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_TESTContextFlags_bmember__1 }
};
/* generate_template_type: TESTContextFlags */
const struct asn1_template asn1_TESTContextFlags[] = {
/* 0 */ { 0, sizeof(TESTContextFlags), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_TESTContextFlags_tag__77 }
};

int
decode_TESTContextFlags(const unsigned char *p, size_t len, TESTContextFlags *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTContextFlags, 0|0, p, len, data, size);
}


int
encode_TESTContextFlags(unsigned char *p, size_t len, const TESTContextFlags *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTContextFlags, p, len, data, size);
    return ret;
}


size_t
length_TESTContextFlags(const TESTContextFlags *data)
{
    return _asn1_length(asn1_TESTContextFlags, data);
}


void
free_TESTContextFlags(TESTContextFlags *data)
{
    _asn1_free_top(asn1_TESTContextFlags, data);
}


int
copy_TESTContextFlags(const TESTContextFlags *from, TESTContextFlags *to)
{
    return _asn1_copy_top(asn1_TESTContextFlags, from, to);
}

unsigned TESTContextFlags2int(TESTContextFlags f)
{
unsigned r = 0;
if(f.delegFlag) r |= (1U << 0);
if(f.mutualFlag) r |= (1U << 1);
if(f.replayFlag) r |= (1U << 2);
if(f.sequenceFlag) r |= (1U << 3);
if(f.anonFlag) r |= (1U << 4);
if(f.confFlag) r |= (1U << 5);
if(f.integFlag) r |= (1U << 6);
return r;
}

TESTContextFlags int2TESTContextFlags(unsigned n)
{
	TESTContextFlags flags;

	memset(&flags, 0, sizeof(flags));

	flags.delegFlag = (n >> 0) & 1;
	flags.mutualFlag = (n >> 1) & 1;
	flags.replayFlag = (n >> 2) & 1;
	flags.sequenceFlag = (n >> 3) & 1;
	flags.anonFlag = (n >> 4) & 1;
	flags.confFlag = (n >> 5) & 1;
	flags.integFlag = (n >> 6) & 1;
	return flags;
}

static struct units TESTContextFlags_units[] = {
	{"integFlag",	1U << 6},
	{"confFlag",	1U << 5},
	{"anonFlag",	1U << 4},
	{"sequenceFlag",	1U << 3},
	{"replayFlag",	1U << 2},
	{"mutualFlag",	1U << 1},
	{"delegFlag",	1U << 0},
	{NULL,	0}
};

const struct units * asn1_TESTContextFlags_table_units = TESTContextFlags_units;
extern const struct asn1_template asn1_TESTNegHints[];
/* template_members: TESTNegHints exp exp */
extern const struct asn1_template asn1_TESTNegHints_tag__78[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTNegHints exp exp */
extern const struct asn1_template asn1_TESTNegHints_tag_hintName_79[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_hintName_80[];
/* generate_template_type: heim_general_string_tag_hintName_80 */
/* generate_template_type: TESTNegHints_tag_hintName_79 */
/* template_members: TESTNegHints exp exp */
extern const struct asn1_template asn1_TESTNegHints_tag_hintAddress_81[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_hintAddress_82[];
/* generate_template_type: heim_octet_string_tag_hintAddress_82 */
/* generate_template_type: TESTNegHints_tag_hintAddress_81 */
const struct asn1_template asn1_TESTNegHints_tag_hintAddress_81[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_TESTCONTAINING_tag__42 }
};
/* generate_template_type: TESTNegHints_tag__78 */
const struct asn1_template asn1_TESTNegHints_tag__78[] = {
/* 0 */ { 0, sizeof(struct TESTNegHints), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct TESTNegHints, hintName), asn1_TESTSeqOfSeq2_val_tag_string_58 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct TESTNegHints, hintAddress), asn1_TESTNegHints_tag_hintAddress_81 }
};
/* generate_template_type: TESTNegHints */
const struct asn1_template asn1_TESTNegHints[] = {
/* 0 */ { 0, sizeof(TESTNegHints), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTNegHints_tag__78 }
};

int
decode_TESTNegHints(const unsigned char *p, size_t len, TESTNegHints *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTNegHints, 0|0, p, len, data, size);
}


int
encode_TESTNegHints(unsigned char *p, size_t len, const TESTNegHints *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTNegHints, p, len, data, size);
    return ret;
}


size_t
length_TESTNegHints(const TESTNegHints *data)
{
    return _asn1_length(asn1_TESTNegHints, data);
}


void
free_TESTNegHints(TESTNegHints *data)
{
    _asn1_free_top(asn1_TESTNegHints, data);
}


int
copy_TESTNegHints(const TESTNegHints *from, TESTNegHints *to)
{
    return _asn1_copy_top(asn1_TESTNegHints, from, to);
}

extern const struct asn1_template asn1_TESTNegTokenInit[];
/* template_members: TESTNegTokenInit exp exp */
extern const struct asn1_template asn1_TESTNegTokenInit_tag__83[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTNegTokenInit exp exp */
extern const struct asn1_template asn1_TESTNegTokenInit_tag_mechTypes_84[];
/* generate_template_type: TESTNegTokenInit_tag_mechTypes_84 */
const struct asn1_template asn1_TESTNegTokenInit_tag_mechTypes_84[] = {
/* 0 */ { 0, sizeof(TESTMechTypeList), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TESTMechTypeList }
};
/* template_members: TESTNegTokenInit exp exp */
extern const struct asn1_template asn1_TESTNegTokenInit_tag_reqFlags_85[];
/* generate_template_type: TESTNegTokenInit_tag_reqFlags_85 */
const struct asn1_template asn1_TESTNegTokenInit_tag_reqFlags_85[] = {
/* 0 */ { 0, sizeof(TESTContextFlags), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TESTContextFlags }
};
/* template_members: TESTNegTokenInit exp exp */
extern const struct asn1_template asn1_TESTNegTokenInit_tag_mechToken_86[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_mechToken_87[];
/* generate_template_type: heim_octet_string_tag_mechToken_87 */
/* generate_template_type: TESTNegTokenInit_tag_mechToken_86 */
/* template_members: TESTNegTokenInit exp exp */
extern const struct asn1_template asn1_TESTNegTokenInit_tag_mechListMIC_88[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_mechListMIC_89[];
/* generate_template_type: heim_octet_string_tag_mechListMIC_89 */
/* generate_template_type: TESTNegTokenInit_tag_mechListMIC_88 */
/* generate_template_type: TESTNegTokenInit_tag__83 */
const struct asn1_template asn1_TESTNegTokenInit_tag__83[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct TESTNegTokenInit), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TESTNegTokenInit, mechTypes), asn1_TESTNegTokenInit_tag_mechTypes_84 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct TESTNegTokenInit, reqFlags), asn1_TESTNegTokenInit_tag_reqFlags_85 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct TESTNegTokenInit, mechToken), asn1_TESTNegHints_tag_hintAddress_81 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct TESTNegTokenInit, mechListMIC), asn1_TESTNegHints_tag_hintAddress_81 }
};
/* generate_template_type: TESTNegTokenInit */
const struct asn1_template asn1_TESTNegTokenInit[] = {
/* 0 */ { 0, sizeof(TESTNegTokenInit), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTNegTokenInit_tag__83 }
};

int
decode_TESTNegTokenInit(const unsigned char *p, size_t len, TESTNegTokenInit *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTNegTokenInit, 0|0, p, len, data, size);
}


int
encode_TESTNegTokenInit(unsigned char *p, size_t len, const TESTNegTokenInit *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTNegTokenInit, p, len, data, size);
    return ret;
}


size_t
length_TESTNegTokenInit(const TESTNegTokenInit *data)
{
    return _asn1_length(asn1_TESTNegTokenInit, data);
}


void
free_TESTNegTokenInit(TESTNegTokenInit *data)
{
    _asn1_free_top(asn1_TESTNegTokenInit, data);
}


int
copy_TESTNegTokenInit(const TESTNegTokenInit *from, TESTNegTokenInit *to)
{
    return _asn1_copy_top(asn1_TESTNegTokenInit, from, to);
}

extern const struct asn1_template asn1_TESTNegResultEnum[];
/* template_members: TESTNegResultEnum exp exp */
extern const struct asn1_template asn1_TESTNegResultEnum_tag__90[];
/* generate_template_type: TESTNegResultEnum_tag__90 */
const struct asn1_template asn1_TESTNegResultEnum_tag__90[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, NULL }
};
/* generate_template_type: TESTNegResultEnum */
const struct asn1_template asn1_TESTNegResultEnum[] = {
/* 0 */ { 0, sizeof(TESTNegResultEnum), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_TESTNegResultEnum_tag__90 }
};

int
decode_TESTNegResultEnum(const unsigned char *p, size_t len, TESTNegResultEnum *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTNegResultEnum, 0|0, p, len, data, size);
}


int
encode_TESTNegResultEnum(unsigned char *p, size_t len, const TESTNegResultEnum *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTNegResultEnum, p, len, data, size);
    return ret;
}


size_t
length_TESTNegResultEnum(const TESTNegResultEnum *data)
{
    return _asn1_length(asn1_TESTNegResultEnum, data);
}


void
free_TESTNegResultEnum(TESTNegResultEnum *data)
{
    _asn1_free_top(asn1_TESTNegResultEnum, data);
}


int
copy_TESTNegResultEnum(const TESTNegResultEnum *from, TESTNegResultEnum *to)
{
    return _asn1_copy_top(asn1_TESTNegResultEnum, from, to);
}

extern const struct asn1_template asn1_TESTNegTokenResp[];
/* template_members: TESTNegTokenResp exp exp */
extern const struct asn1_template asn1_TESTNegTokenResp_tag__91[];
/* tsequence: members isstruct: 1 */
/* template_members: TESTNegTokenResp exp exp */
extern const struct asn1_template asn1_TESTNegTokenResp_tag_negResult_92[];
/* generate_template_type: TESTNegTokenResp_tag_negResult_92 */
const struct asn1_template asn1_TESTNegTokenResp_tag_negResult_92[] = {
/* 0 */ { 0, sizeof(TESTNegResultEnum), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TESTNegResultEnum }
};
/* template_members: TESTNegTokenResp exp exp */
extern const struct asn1_template asn1_TESTNegTokenResp_tag_supportedMech_93[];
/* generate_template_type: TESTNegTokenResp_tag_supportedMech_93 */
/* template_members: TESTNegTokenResp exp exp */
extern const struct asn1_template asn1_TESTNegTokenResp_tag_responseToken_94[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_responseToken_95[];
/* generate_template_type: heim_octet_string_tag_responseToken_95 */
/* generate_template_type: TESTNegTokenResp_tag_responseToken_94 */
/* template_members: TESTNegTokenResp exp exp */
extern const struct asn1_template asn1_TESTNegTokenResp_tag_mechListMIC_96[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_mechListMIC_97[];
/* generate_template_type: heim_octet_string_tag_mechListMIC_97 */
/* generate_template_type: TESTNegTokenResp_tag_mechListMIC_96 */
/* generate_template_type: TESTNegTokenResp_tag__91 */
const struct asn1_template asn1_TESTNegTokenResp_tag__91[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct TESTNegTokenResp), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct TESTNegTokenResp, negResult), asn1_TESTNegTokenResp_tag_negResult_92 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct TESTNegTokenResp, supportedMech), asn1_TESTMechType_seofTstruct_10 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct TESTNegTokenResp, responseToken), asn1_TESTNegHints_tag_hintAddress_81 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct TESTNegTokenResp, mechListMIC), asn1_TESTNegHints_tag_hintAddress_81 }
};
/* generate_template_type: TESTNegTokenResp */
const struct asn1_template asn1_TESTNegTokenResp[] = {
/* 0 */ { 0, sizeof(TESTNegTokenResp), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TESTNegTokenResp_tag__91 }
};

int
decode_TESTNegTokenResp(const unsigned char *p, size_t len, TESTNegTokenResp *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTNegTokenResp, 0|0, p, len, data, size);
}


int
encode_TESTNegTokenResp(unsigned char *p, size_t len, const TESTNegTokenResp *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTNegTokenResp, p, len, data, size);
    return ret;
}


size_t
length_TESTNegTokenResp(const TESTNegTokenResp *data)
{
    return _asn1_length(asn1_TESTNegTokenResp, data);
}


void
free_TESTNegTokenResp(TESTNegTokenResp *data)
{
    _asn1_free_top(asn1_TESTNegTokenResp, data);
}


int
copy_TESTNegTokenResp(const TESTNegTokenResp *from, TESTNegTokenResp *to)
{
    return _asn1_copy_top(asn1_TESTNegTokenResp, from, to);
}

extern const struct asn1_template asn1_TESTNegotiationToken[];
extern const struct asn1_template asn1_TESTNegotiationToken_choice_negTokenInit[];
/* template_members: TESTNegTokenInit exp exp */
extern const struct asn1_template asn1_TESTNegTokenInit_tag__98[];
/* generate_template_type: TESTNegTokenInit_tag__98 */
const struct asn1_template asn1_TESTNegTokenInit_tag__98[] = {
/* 0 */ { 0, sizeof(TESTNegTokenInit), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TESTNegTokenInit }
};
/* generate_template_type: TESTNegotiationToken_choice_negTokenInit */
const struct asn1_template asn1_TESTNegotiationToken_choice_negTokenInit[] = {
/* 0 */ { 0, sizeof(TESTNegTokenInit), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_TESTNegTokenInit_tag__98 }
};
extern const struct asn1_template asn1_TESTNegotiationToken_choice_negTokenResp[];
/* template_members: TESTNegTokenResp exp exp */
extern const struct asn1_template asn1_TESTNegTokenResp_tag__99[];
/* generate_template_type: TESTNegTokenResp_tag__99 */
const struct asn1_template asn1_TESTNegTokenResp_tag__99[] = {
/* 0 */ { 0, sizeof(TESTNegTokenResp), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TESTNegTokenResp }
};
/* generate_template_type: TESTNegotiationToken_choice_negTokenResp */
const struct asn1_template asn1_TESTNegotiationToken_choice_negTokenResp[] = {
/* 0 */ { 0, sizeof(TESTNegTokenResp), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_TESTNegTokenResp_tag__99 }
};
static const struct asn1_template asn1_choice_TESTNegotiationToken_2[] = {
/* 0 */ { 0, offsetof(TESTNegotiationToken, element), ((void *)2) },
/* 1 */ { choice_TESTNegotiationToken_negTokenInit, offsetof(TESTNegotiationToken, u.negTokenInit), asn1_TESTNegotiationToken_choice_negTokenInit },
/* 2 */ { choice_TESTNegotiationToken_negTokenResp, offsetof(TESTNegotiationToken, u.negTokenResp), asn1_TESTNegotiationToken_choice_negTokenResp }
};
/* generate_template_type: TESTNegotiationToken */
const struct asn1_template asn1_TESTNegotiationToken[] = {
/* 0 */ { 0, sizeof(TESTNegotiationToken), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_TESTNegotiationToken_2 }
};

int
decode_TESTNegotiationToken(const unsigned char *p, size_t len, TESTNegotiationToken *data, size_t *size)
{
    return _asn1_decode_top(asn1_TESTNegotiationToken, 0|0, p, len, data, size);
}


int
encode_TESTNegotiationToken(unsigned char *p, size_t len, const TESTNegotiationToken *data, size_t *size)
{
    int ret = _asn1_encode(asn1_TESTNegotiationToken, p, len, data, size);
    return ret;
}


size_t
length_TESTNegotiationToken(const TESTNegotiationToken *data)
{
    return _asn1_length(asn1_TESTNegotiationToken, data);
}


void
free_TESTNegotiationToken(TESTNegotiationToken *data)
{
    _asn1_free_top(asn1_TESTNegotiationToken, data);
}


int
copy_TESTNegotiationToken(const TESTNegotiationToken *from, TESTNegotiationToken *to)
{
    return _asn1_copy_top(asn1_TESTNegotiationToken, from, to);
}

