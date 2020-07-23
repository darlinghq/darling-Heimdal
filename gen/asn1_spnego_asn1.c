/* Generated from /Users/ariel/git/darling/src/external/Heimdal/lib/gssapi/spnego/spnego.asn1 */
/* Do not edit */

#define  ASN1_LIB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "spnego_asn1.h"
#include "spnego_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

extern const struct asn1_template asn1_MechType[];
/* template_members: MechType exp exp */
extern const struct asn1_template asn1_MechType_tag__0[];
/* generate_template_type: MechType_tag__0 */
const struct asn1_template asn1_MechType_tag__0[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* generate_template_type: MechType */
const struct asn1_template asn1_MechType[] = {
/* 0 */ { 0, sizeof(MechType), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_MechType_tag__0 }
};

int
decode_MechType(const unsigned char *p, size_t len, MechType *data, size_t *size)
{
    return _asn1_decode_top(asn1_MechType, 0|0, p, len, data, size);
}


int
encode_MechType(unsigned char *p, size_t len, const MechType *data, size_t *size)
{
    int ret = _asn1_encode(asn1_MechType, p, len, data, size);
    return ret;
}


size_t
length_MechType(const MechType *data)
{
    return _asn1_length(asn1_MechType, data);
}


void
free_MechType(MechType *data)
{
    _asn1_free_top(asn1_MechType, data);
}


int
copy_MechType(const MechType *from, MechType *to)
{
    return _asn1_copy_top(asn1_MechType, from, to);
}

extern const struct asn1_template asn1_MechTypeList[];
/* template_members: MechTypeList exp exp */
extern const struct asn1_template asn1_MechTypeList_tag__1[];
extern const struct asn1_template asn1_MechType_seofTstruct_0[];
/* generate_template_type: MechType_seofTstruct_0 */
const struct asn1_template asn1_MechType_seofTstruct_0[] = {
/* 0 */ { 0, sizeof(MechType), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_MechType }
};
/* generate_template_type: MechTypeList_tag__1 */
const struct asn1_template asn1_MechTypeList_tag__1[] = {
/* 0 */ { 0, sizeof(MechType), ((void *)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_MechType_seofTstruct_0 }
};
/* generate_template_type: MechTypeList */
const struct asn1_template asn1_MechTypeList[] = {
/* 0 */ { 0, sizeof(MechTypeList), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_MechTypeList_tag__1 }
};

int
decode_MechTypeList(const unsigned char *p, size_t len, MechTypeList *data, size_t *size)
{
    return _asn1_decode_top(asn1_MechTypeList, 0|0, p, len, data, size);
}


int
encode_MechTypeList(unsigned char *p, size_t len, const MechTypeList *data, size_t *size)
{
    int ret = _asn1_encode(asn1_MechTypeList, p, len, data, size);
    return ret;
}


size_t
length_MechTypeList(const MechTypeList *data)
{
    return _asn1_length(asn1_MechTypeList, data);
}


void
free_MechTypeList(MechTypeList *data)
{
    _asn1_free_top(asn1_MechTypeList, data);
}


int
copy_MechTypeList(const MechTypeList *from, MechTypeList *to)
{
    return _asn1_copy_top(asn1_MechTypeList, from, to);
}

int ASN1CALL
add_MechTypeList(MechTypeList *data, const MechType *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_MechType(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_MechTypeList(MechTypeList *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_MechType(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

extern const struct asn1_template asn1_ContextFlags[];
/* template_members: ContextFlags exp exp */
extern const struct asn1_template asn1_ContextFlags_tag__2[];
static const struct asn1_template asn1_ContextFlags_bmember__0[] = {
/* 0 */ { 0, sizeof(ContextFlags), ((void *)7) },
/* 1 */ { 0, 0, 0 } /* delegFlag */,
/* 2 */ { 0, 1, 0 } /* mutualFlag */,
/* 3 */ { 0, 2, 0 } /* replayFlag */,
/* 4 */ { 0, 3, 0 } /* sequenceFlag */,
/* 5 */ { 0, 4, 0 } /* anonFlag */,
/* 6 */ { 0, 5, 0 } /* confFlag */,
/* 7 */ { 0, 6, 0 } /* integFlag */
};
/* generate_template_type: ContextFlags_tag__2 */
const struct asn1_template asn1_ContextFlags_tag__2[] = {
/* 0 */ { 0, sizeof(ContextFlags), ((void *)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_ContextFlags_bmember__0 }
};
/* generate_template_type: ContextFlags */
const struct asn1_template asn1_ContextFlags[] = {
/* 0 */ { 0, sizeof(ContextFlags), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_ContextFlags_tag__2 }
};

int
decode_ContextFlags(const unsigned char *p, size_t len, ContextFlags *data, size_t *size)
{
    return _asn1_decode_top(asn1_ContextFlags, 0|0, p, len, data, size);
}


int
encode_ContextFlags(unsigned char *p, size_t len, const ContextFlags *data, size_t *size)
{
    int ret = _asn1_encode(asn1_ContextFlags, p, len, data, size);
    return ret;
}


size_t
length_ContextFlags(const ContextFlags *data)
{
    return _asn1_length(asn1_ContextFlags, data);
}


void
free_ContextFlags(ContextFlags *data)
{
    _asn1_free_top(asn1_ContextFlags, data);
}


int
copy_ContextFlags(const ContextFlags *from, ContextFlags *to)
{
    return _asn1_copy_top(asn1_ContextFlags, from, to);
}

unsigned ContextFlags2int(ContextFlags f)
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

ContextFlags int2ContextFlags(unsigned n)
{
	ContextFlags flags;

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

static struct units ContextFlags_units[] = {
	{"integFlag",	1U << 6},
	{"confFlag",	1U << 5},
	{"anonFlag",	1U << 4},
	{"sequenceFlag",	1U << 3},
	{"replayFlag",	1U << 2},
	{"mutualFlag",	1U << 1},
	{"delegFlag",	1U << 0},
	{NULL,	0}
};

const struct units * asn1_ContextFlags_table_units = ContextFlags_units;
extern const struct asn1_template asn1_NegHints[];
/* template_members: NegHints exp exp */
extern const struct asn1_template asn1_NegHints_tag__3[];
/* tsequence: members isstruct: 1 */
/* template_members: NegHints exp exp */
extern const struct asn1_template asn1_NegHints_tag_hintName_4[];
/* template_members: heim_general_string exp exp */
extern const struct asn1_template asn1_heim_general_string_tag_hintName_5[];
/* generate_template_type: heim_general_string_tag_hintName_5 */
const struct asn1_template asn1_heim_general_string_tag_hintName_5[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_GENERAL_STRING), 0, NULL }
};
/* generate_template_type: NegHints_tag_hintName_4 */
const struct asn1_template asn1_NegHints_tag_hintName_4[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralString), 0, asn1_heim_general_string_tag_hintName_5 }
};
/* template_members: NegHints exp exp */
extern const struct asn1_template asn1_NegHints_tag_hintAddress_6[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_hintAddress_7[];
/* generate_template_type: heim_octet_string_tag_hintAddress_7 */
const struct asn1_template asn1_heim_octet_string_tag_hintAddress_7[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: NegHints_tag_hintAddress_6 */
const struct asn1_template asn1_NegHints_tag_hintAddress_6[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_heim_octet_string_tag_hintAddress_7 }
};
/* generate_template_type: NegHints_tag__3 */
const struct asn1_template asn1_NegHints_tag__3[] = {
/* 0 */ { 0, sizeof(struct NegHints), ((void *)2) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct NegHints, hintName), asn1_NegHints_tag_hintName_4 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct NegHints, hintAddress), asn1_NegHints_tag_hintAddress_6 }
};
/* generate_template_type: NegHints */
const struct asn1_template asn1_NegHints[] = {
/* 0 */ { 0, sizeof(NegHints), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NegHints_tag__3 }
};

int
decode_NegHints(const unsigned char *p, size_t len, NegHints *data, size_t *size)
{
    return _asn1_decode_top(asn1_NegHints, 0|0, p, len, data, size);
}


int
encode_NegHints(unsigned char *p, size_t len, const NegHints *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NegHints, p, len, data, size);
    return ret;
}


size_t
length_NegHints(const NegHints *data)
{
    return _asn1_length(asn1_NegHints, data);
}


void
free_NegHints(NegHints *data)
{
    _asn1_free_top(asn1_NegHints, data);
}


int
copy_NegHints(const NegHints *from, NegHints *to)
{
    return _asn1_copy_top(asn1_NegHints, from, to);
}

extern const struct asn1_template asn1_NegTokenInitWin[];
/* template_members: NegTokenInitWin exp exp */
extern const struct asn1_template asn1_NegTokenInitWin_tag__8[];
/* tsequence: members isstruct: 1 */
/* template_members: NegTokenInitWin exp exp */
extern const struct asn1_template asn1_NegTokenInitWin_tag_mechTypes_9[];
/* generate_template_type: NegTokenInitWin_tag_mechTypes_9 */
const struct asn1_template asn1_NegTokenInitWin_tag_mechTypes_9[] = {
/* 0 */ { 0, sizeof(MechTypeList), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_MechTypeList }
};
/* template_members: NegTokenInitWin exp exp */
extern const struct asn1_template asn1_NegTokenInitWin_tag_reqFlags_10[];
/* generate_template_type: NegTokenInitWin_tag_reqFlags_10 */
const struct asn1_template asn1_NegTokenInitWin_tag_reqFlags_10[] = {
/* 0 */ { 0, sizeof(ContextFlags), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ContextFlags }
};
/* template_members: NegTokenInitWin exp exp */
extern const struct asn1_template asn1_NegTokenInitWin_tag_mechToken_11[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_mechToken_12[];
/* generate_template_type: heim_octet_string_tag_mechToken_12 */
/* generate_template_type: NegTokenInitWin_tag_mechToken_11 */
/* template_members: NegTokenInitWin exp exp */
extern const struct asn1_template asn1_NegTokenInitWin_tag_negHints_13[];
/* generate_template_type: NegTokenInitWin_tag_negHints_13 */
const struct asn1_template asn1_NegTokenInitWin_tag_negHints_13[] = {
/* 0 */ { 0, sizeof(NegHints), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_NegHints }
};
/* generate_template_type: NegTokenInitWin_tag__8 */
const struct asn1_template asn1_NegTokenInitWin_tag__8[] = {
/* 0 */ { 0, sizeof(struct NegTokenInitWin), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NegTokenInitWin, mechTypes), asn1_NegTokenInitWin_tag_mechTypes_9 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct NegTokenInitWin, reqFlags), asn1_NegTokenInitWin_tag_reqFlags_10 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct NegTokenInitWin, mechToken), asn1_NegHints_tag_hintAddress_6 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct NegTokenInitWin, negHints), asn1_NegTokenInitWin_tag_negHints_13 }
};
/* generate_template_type: NegTokenInitWin */
const struct asn1_template asn1_NegTokenInitWin[] = {
/* 0 */ { 0, sizeof(NegTokenInitWin), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NegTokenInitWin_tag__8 }
};

int
decode_NegTokenInitWin(const unsigned char *p, size_t len, NegTokenInitWin *data, size_t *size)
{
    return _asn1_decode_top(asn1_NegTokenInitWin, 0|0, p, len, data, size);
}


int
encode_NegTokenInitWin(unsigned char *p, size_t len, const NegTokenInitWin *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NegTokenInitWin, p, len, data, size);
    return ret;
}


size_t
length_NegTokenInitWin(const NegTokenInitWin *data)
{
    return _asn1_length(asn1_NegTokenInitWin, data);
}


void
free_NegTokenInitWin(NegTokenInitWin *data)
{
    _asn1_free_top(asn1_NegTokenInitWin, data);
}


int
copy_NegTokenInitWin(const NegTokenInitWin *from, NegTokenInitWin *to)
{
    return _asn1_copy_top(asn1_NegTokenInitWin, from, to);
}

extern const struct asn1_template asn1_NegTokenInit[];
/* template_members: NegTokenInit exp exp */
extern const struct asn1_template asn1_NegTokenInit_tag__14[];
/* tsequence: members isstruct: 1 */
/* template_members: NegTokenInit exp exp */
extern const struct asn1_template asn1_NegTokenInit_tag_mechTypes_15[];
/* generate_template_type: NegTokenInit_tag_mechTypes_15 */
/* template_members: NegTokenInit exp exp */
extern const struct asn1_template asn1_NegTokenInit_tag_reqFlags_16[];
/* generate_template_type: NegTokenInit_tag_reqFlags_16 */
/* template_members: NegTokenInit exp exp */
extern const struct asn1_template asn1_NegTokenInit_tag_mechToken_17[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_mechToken_18[];
/* generate_template_type: heim_octet_string_tag_mechToken_18 */
/* generate_template_type: NegTokenInit_tag_mechToken_17 */
/* template_members: NegTokenInit exp exp */
extern const struct asn1_template asn1_NegTokenInit_tag_mechListMIC_19[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_mechListMIC_20[];
/* generate_template_type: heim_octet_string_tag_mechListMIC_20 */
/* generate_template_type: NegTokenInit_tag_mechListMIC_19 */
/* generate_template_type: NegTokenInit_tag__14 */
const struct asn1_template asn1_NegTokenInit_tag__14[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct NegTokenInit), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NegTokenInit, mechTypes), asn1_NegTokenInitWin_tag_mechTypes_9 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct NegTokenInit, reqFlags), asn1_NegTokenInitWin_tag_reqFlags_10 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct NegTokenInit, mechToken), asn1_NegHints_tag_hintAddress_6 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct NegTokenInit, mechListMIC), asn1_NegHints_tag_hintAddress_6 }
};
/* generate_template_type: NegTokenInit */
const struct asn1_template asn1_NegTokenInit[] = {
/* 0 */ { 0, sizeof(NegTokenInit), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NegTokenInit_tag__14 }
};

int
decode_NegTokenInit(const unsigned char *p, size_t len, NegTokenInit *data, size_t *size)
{
    return _asn1_decode_top(asn1_NegTokenInit, 0|0, p, len, data, size);
}


int
encode_NegTokenInit(unsigned char *p, size_t len, const NegTokenInit *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NegTokenInit, p, len, data, size);
    return ret;
}


size_t
length_NegTokenInit(const NegTokenInit *data)
{
    return _asn1_length(asn1_NegTokenInit, data);
}


void
free_NegTokenInit(NegTokenInit *data)
{
    _asn1_free_top(asn1_NegTokenInit, data);
}


int
copy_NegTokenInit(const NegTokenInit *from, NegTokenInit *to)
{
    return _asn1_copy_top(asn1_NegTokenInit, from, to);
}

extern const struct asn1_template asn1_NegResultEnum[];
/* template_members: NegResultEnum exp exp */
extern const struct asn1_template asn1_NegResultEnum_tag__21[];
/* generate_template_type: NegResultEnum_tag__21 */
const struct asn1_template asn1_NegResultEnum_tag__21[] = {
/* 0 */ { 0, sizeof(int), ((void *)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, NULL }
};
/* generate_template_type: NegResultEnum */
const struct asn1_template asn1_NegResultEnum[] = {
/* 0 */ { 0, sizeof(NegResultEnum), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_NegResultEnum_tag__21 }
};

int
decode_NegResultEnum(const unsigned char *p, size_t len, NegResultEnum *data, size_t *size)
{
    return _asn1_decode_top(asn1_NegResultEnum, 0|0, p, len, data, size);
}


int
encode_NegResultEnum(unsigned char *p, size_t len, const NegResultEnum *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NegResultEnum, p, len, data, size);
    return ret;
}


size_t
length_NegResultEnum(const NegResultEnum *data)
{
    return _asn1_length(asn1_NegResultEnum, data);
}


void
free_NegResultEnum(NegResultEnum *data)
{
    _asn1_free_top(asn1_NegResultEnum, data);
}


int
copy_NegResultEnum(const NegResultEnum *from, NegResultEnum *to)
{
    return _asn1_copy_top(asn1_NegResultEnum, from, to);
}

extern const struct asn1_template asn1_NegTokenResp[];
/* template_members: NegTokenResp exp exp */
extern const struct asn1_template asn1_NegTokenResp_tag__22[];
/* tsequence: members isstruct: 1 */
/* template_members: NegTokenResp exp exp */
extern const struct asn1_template asn1_NegTokenResp_tag_negResult_23[];
/* generate_template_type: NegTokenResp_tag_negResult_23 */
const struct asn1_template asn1_NegTokenResp_tag_negResult_23[] = {
/* 0 */ { 0, sizeof(NegResultEnum), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_NegResultEnum }
};
/* template_members: NegTokenResp exp exp */
extern const struct asn1_template asn1_NegTokenResp_tag_supportedMech_24[];
/* generate_template_type: NegTokenResp_tag_supportedMech_24 */
/* template_members: NegTokenResp exp exp */
extern const struct asn1_template asn1_NegTokenResp_tag_responseToken_25[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_responseToken_26[];
/* generate_template_type: heim_octet_string_tag_responseToken_26 */
/* generate_template_type: NegTokenResp_tag_responseToken_25 */
/* template_members: NegTokenResp exp exp */
extern const struct asn1_template asn1_NegTokenResp_tag_mechListMIC_27[];
/* template_members: heim_octet_string exp exp */
extern const struct asn1_template asn1_heim_octet_string_tag_mechListMIC_28[];
/* generate_template_type: heim_octet_string_tag_mechListMIC_28 */
/* generate_template_type: NegTokenResp_tag_mechListMIC_27 */
/* generate_template_type: NegTokenResp_tag__22 */
const struct asn1_template asn1_NegTokenResp_tag__22[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct NegTokenResp), ((void *)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct NegTokenResp, negResult), asn1_NegTokenResp_tag_negResult_23 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct NegTokenResp, supportedMech), asn1_MechType_seofTstruct_0 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct NegTokenResp, responseToken), asn1_NegHints_tag_hintAddress_6 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct NegTokenResp, mechListMIC), asn1_NegHints_tag_hintAddress_6 }
};
/* generate_template_type: NegTokenResp */
const struct asn1_template asn1_NegTokenResp[] = {
/* 0 */ { 0, sizeof(NegTokenResp), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NegTokenResp_tag__22 }
};

int
decode_NegTokenResp(const unsigned char *p, size_t len, NegTokenResp *data, size_t *size)
{
    return _asn1_decode_top(asn1_NegTokenResp, 0|0, p, len, data, size);
}


int
encode_NegTokenResp(unsigned char *p, size_t len, const NegTokenResp *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NegTokenResp, p, len, data, size);
    return ret;
}


size_t
length_NegTokenResp(const NegTokenResp *data)
{
    return _asn1_length(asn1_NegTokenResp, data);
}


void
free_NegTokenResp(NegTokenResp *data)
{
    _asn1_free_top(asn1_NegTokenResp, data);
}


int
copy_NegTokenResp(const NegTokenResp *from, NegTokenResp *to)
{
    return _asn1_copy_top(asn1_NegTokenResp, from, to);
}

extern const struct asn1_template asn1_NegotiationToken[];
extern const struct asn1_template asn1_NegotiationToken_choice_negTokenInit[];
/* template_members: NegTokenInit exp exp */
extern const struct asn1_template asn1_NegTokenInit_tag__29[];
/* generate_template_type: NegTokenInit_tag__29 */
const struct asn1_template asn1_NegTokenInit_tag__29[] = {
/* 0 */ { 0, sizeof(NegTokenInit), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_NegTokenInit }
};
/* generate_template_type: NegotiationToken_choice_negTokenInit */
const struct asn1_template asn1_NegotiationToken_choice_negTokenInit[] = {
/* 0 */ { 0, sizeof(NegTokenInit), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_NegTokenInit_tag__29 }
};
extern const struct asn1_template asn1_NegotiationToken_choice_negTokenResp[];
/* template_members: NegTokenResp exp exp */
extern const struct asn1_template asn1_NegTokenResp_tag__30[];
/* generate_template_type: NegTokenResp_tag__30 */
const struct asn1_template asn1_NegTokenResp_tag__30[] = {
/* 0 */ { 0, sizeof(NegTokenResp), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_NegTokenResp }
};
/* generate_template_type: NegotiationToken_choice_negTokenResp */
const struct asn1_template asn1_NegotiationToken_choice_negTokenResp[] = {
/* 0 */ { 0, sizeof(NegTokenResp), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_NegTokenResp_tag__30 }
};
static const struct asn1_template asn1_choice_NegotiationToken_0[] = {
/* 0 */ { 0, offsetof(NegotiationToken, element), ((void *)2) },
/* 1 */ { choice_NegotiationToken_negTokenInit, offsetof(NegotiationToken, u.negTokenInit), asn1_NegotiationToken_choice_negTokenInit },
/* 2 */ { choice_NegotiationToken_negTokenResp, offsetof(NegotiationToken, u.negTokenResp), asn1_NegotiationToken_choice_negTokenResp }
};
/* generate_template_type: NegotiationToken */
const struct asn1_template asn1_NegotiationToken[] = {
/* 0 */ { 0, sizeof(NegotiationToken), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_NegotiationToken_0 }
};

int
decode_NegotiationToken(const unsigned char *p, size_t len, NegotiationToken *data, size_t *size)
{
    return _asn1_decode_top(asn1_NegotiationToken, 0|0, p, len, data, size);
}


int
encode_NegotiationToken(unsigned char *p, size_t len, const NegotiationToken *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NegotiationToken, p, len, data, size);
    return ret;
}


size_t
length_NegotiationToken(const NegotiationToken *data)
{
    return _asn1_length(asn1_NegotiationToken, data);
}


void
free_NegotiationToken(NegotiationToken *data)
{
    _asn1_free_top(asn1_NegotiationToken, data);
}


int
copy_NegotiationToken(const NegotiationToken *from, NegotiationToken *to)
{
    return _asn1_copy_top(asn1_NegotiationToken, from, to);
}

extern const struct asn1_template asn1_NegotiationTokenWin[];
extern const struct asn1_template asn1_NegotiationTokenWin_choice_negTokenInit[];
/* template_members: NegTokenInitWin exp exp */
extern const struct asn1_template asn1_NegTokenInitWin_tag__31[];
/* generate_template_type: NegTokenInitWin_tag__31 */
const struct asn1_template asn1_NegTokenInitWin_tag__31[] = {
/* 0 */ { 0, sizeof(NegTokenInitWin), ((void *)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_NegTokenInitWin }
};
/* generate_template_type: NegotiationTokenWin_choice_negTokenInit */
const struct asn1_template asn1_NegotiationTokenWin_choice_negTokenInit[] = {
/* 0 */ { 0, sizeof(NegTokenInitWin), ((void *)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_NegTokenInitWin_tag__31 }
};
static const struct asn1_template asn1_choice_NegotiationTokenWin_1[] = {
/* 0 */ { 0, offsetof(NegotiationTokenWin, element), ((void *)1) },
/* 1 */ { choice_NegotiationTokenWin_negTokenInit, offsetof(NegotiationTokenWin, u.negTokenInit), asn1_NegotiationTokenWin_choice_negTokenInit }
};
/* generate_template_type: NegotiationTokenWin */
const struct asn1_template asn1_NegotiationTokenWin[] = {
/* 0 */ { 0, sizeof(NegotiationTokenWin), ((void *)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_NegotiationTokenWin_1 }
};

int
decode_NegotiationTokenWin(const unsigned char *p, size_t len, NegotiationTokenWin *data, size_t *size)
{
    return _asn1_decode_top(asn1_NegotiationTokenWin, 0|0, p, len, data, size);
}


int
encode_NegotiationTokenWin(unsigned char *p, size_t len, const NegotiationTokenWin *data, size_t *size)
{
    int ret = _asn1_encode(asn1_NegotiationTokenWin, p, len, data, size);
    return ret;
}


size_t
length_NegotiationTokenWin(const NegotiationTokenWin *data)
{
    return _asn1_length(asn1_NegotiationTokenWin, data);
}


void
free_NegotiationTokenWin(NegotiationTokenWin *data)
{
    _asn1_free_top(asn1_NegotiationTokenWin, data);
}


int
copy_NegotiationTokenWin(const NegotiationTokenWin *from, NegotiationTokenWin *to)
{
    return _asn1_copy_top(asn1_NegotiationTokenWin, from, to);
}

