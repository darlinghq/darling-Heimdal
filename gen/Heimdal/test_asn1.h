/* Generated from /Users/ariel/git/darling/src/external/Heimdal/lib/asn1/test.asn1 */
/* Do not edit */

#ifndef __test_asn1_h__
#define __test_asn1_h__

#include <stddef.h>
#include <time.h>

#ifndef __asn1_common_definitions__
#define __asn1_common_definitions__

#ifndef __HEIM_BASE_DATA__
#define __HEIM_BASE_DATA__ 1
struct heim_base_data {
    size_t length;
    void *data;
};
#endif

typedef struct heim_integer {
  size_t length;
  void *data;
  int negative;
} heim_integer;

typedef struct heim_base_data heim_octet_string;

typedef char *heim_general_string;

typedef char *heim_utf8_string;

typedef struct heim_base_data heim_printable_string;

typedef struct heim_base_data heim_ia5_string;

typedef struct heim_bmp_string {
  size_t length;
  uint16_t *data;
} heim_bmp_string;

typedef struct heim_universal_string {
  size_t length;
  uint32_t *data;
} heim_universal_string;

typedef char *heim_visible_string;

typedef struct heim_oid {
  size_t length;
  unsigned *components;
} heim_oid;

typedef struct heim_bit_string {
  size_t length;
  void *data;
} heim_bit_string;

typedef struct heim_base_data heim_any;
typedef struct heim_base_data heim_any_set;

#define ASN1_MALLOC_ENCODE(T, B, BL, S, L, R)                  \
  do {                                                         \
    (BL) = length_##T((S));                                    \
    (B) = malloc((BL));                                        \
    if((B) == NULL) {                                          \
      (R) = ENOMEM;                                            \
    } else {                                                   \
      (R) = encode_##T(((unsigned char*)(B)) + (BL) - 1, (BL), \
                       (S), (L));                              \
      if((R) != 0) {                                           \
        free((B));                                             \
        (B) = NULL;                                            \
      }                                                        \
    }                                                          \
  } while (0)

#define ASN1_ENCODE_CFMutableData(_TYPE, _CFDATA, S, R)        \
  do {                                                         \
    size_t __length##_TYPE;			                  \
    size_t __size##_TYPE = length_##_TYPE((S));                \
    (_CFDATA) = CFDataCreateMutable(NULL, (__size##_TYPE));    \
    if((_CFDATA) == NULL) {                                    \
      (R) = ENOMEM;                                            \
    } else {                                                   \
      CFDataSetLength((_CFDATA), (__size##_TYPE));             \
      (R) = encode_##_TYPE(((unsigned char*)(CFDataGetMutableBytePtr((_CFDATA)))) + (__size##_TYPE) - 1, (__size##_TYPE), \
                       (S), &(__length##_TYPE));               \
      if((R) != 0) {                                           \
        CFRelease((_CFDATA));                                  \
        (_CFDATA) = NULL;                                      \
      } else if((__size##_TYPE) != (__length##_TYPE)) {        \
        asn1_abort("internal asn1 error");                   \
      }                                                        \
    }                                                          \
  } while (0)

#ifdef _WIN32
#ifndef ASN1_LIB
#define ASN1EXP  __declspec(dllimport)
#else
#define ASN1EXP
#endif
#define ASN1CALL __stdcall
#else
#define ASN1EXP
#define ASN1CALL
#endif
struct units;

#endif

#include <Heimdal/heim_asn1.h>
/*
TESTuint32 ::= INTEGER (0..-1)
*/

typedef unsigned int TESTuint32;

ASN1EXP int    ASN1CALL decode_TESTuint32(const unsigned char *, size_t, TESTuint32 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTuint32(unsigned char *, size_t, const TESTuint32 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTuint32(const TESTuint32 *);
ASN1EXP int    ASN1CALL copy_TESTuint32  (const TESTuint32 *, TESTuint32 *);
ASN1EXP void   ASN1CALL free_TESTuint32  (TESTuint32 *);


/*
TESTLargeTag ::= SEQUENCE {
  foo             [127] INTEGER (-2147483648..2147483647),
  bar             [128] INTEGER (-2147483648..2147483647),
}
*/

typedef struct TESTLargeTag {
  int foo;
  int bar;
} TESTLargeTag;

ASN1EXP int    ASN1CALL decode_TESTLargeTag(const unsigned char *, size_t, TESTLargeTag *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTLargeTag(unsigned char *, size_t, const TESTLargeTag *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTLargeTag(const TESTLargeTag *);
ASN1EXP int    ASN1CALL copy_TESTLargeTag  (const TESTLargeTag *, TESTLargeTag *);
ASN1EXP void   ASN1CALL free_TESTLargeTag  (TESTLargeTag *);


/*
TESTSeq ::= SEQUENCE {
  tag0            [0] INTEGER (-2147483648..2147483647),
  tag1            [1] TESTLargeTag,
  tagless         INTEGER (-2147483648..2147483647),
  tag3            [2] INTEGER (-2147483648..2147483647),
}
*/

typedef struct TESTSeq {
  int tag0;
  TESTLargeTag tag1;
  int tagless;
  int tag3;
} TESTSeq;

ASN1EXP int    ASN1CALL decode_TESTSeq(const unsigned char *, size_t, TESTSeq *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTSeq(unsigned char *, size_t, const TESTSeq *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTSeq(const TESTSeq *);
ASN1EXP int    ASN1CALL copy_TESTSeq  (const TESTSeq *, TESTSeq *);
ASN1EXP void   ASN1CALL free_TESTSeq  (TESTSeq *);


/*
TESTChoice1 ::= CHOICE {
  i1              [1] INTEGER (-2147483648..2147483647),
  i2              [2] INTEGER (-2147483648..2147483647),
  ...,
}
*/

typedef struct TESTChoice1 {
  enum TESTChoice1_enum {
    choice_TESTChoice1_asn1_ellipsis = -1,
invalid_choice_TESTChoice1 = 0,
    choice_TESTChoice1_i1,
    choice_TESTChoice1_i2
    /* ... */
  } element;
  union {
    int i1;
    int i2;
    heim_octet_string asn1_ellipsis;
  } u;
} TESTChoice1;

ASN1EXP int    ASN1CALL decode_TESTChoice1(const unsigned char *, size_t, TESTChoice1 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTChoice1(unsigned char *, size_t, const TESTChoice1 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTChoice1(const TESTChoice1 *);
ASN1EXP int    ASN1CALL copy_TESTChoice1  (const TESTChoice1 *, TESTChoice1 *);
ASN1EXP void   ASN1CALL free_TESTChoice1  (TESTChoice1 *);


/*
TESTChoice2 ::= CHOICE {
  i1              [1] INTEGER (-2147483648..2147483647),
  ...,
}
*/

typedef struct TESTChoice2 {
  enum TESTChoice2_enum {
    choice_TESTChoice2_asn1_ellipsis = -1,
invalid_choice_TESTChoice2 = 0,
    choice_TESTChoice2_i1
    /* ... */
  } element;
  union {
    int i1;
    heim_octet_string asn1_ellipsis;
  } u;
} TESTChoice2;

ASN1EXP int    ASN1CALL decode_TESTChoice2(const unsigned char *, size_t, TESTChoice2 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTChoice2(unsigned char *, size_t, const TESTChoice2 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTChoice2(const TESTChoice2 *);
ASN1EXP int    ASN1CALL copy_TESTChoice2  (const TESTChoice2 *, TESTChoice2 *);
ASN1EXP void   ASN1CALL free_TESTChoice2  (TESTChoice2 *);


/*
TESTInteger ::= INTEGER (-2147483648..2147483647)
*/

typedef int TESTInteger;

ASN1EXP int    ASN1CALL decode_TESTInteger(const unsigned char *, size_t, TESTInteger *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTInteger(unsigned char *, size_t, const TESTInteger *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTInteger(const TESTInteger *);
ASN1EXP int    ASN1CALL copy_TESTInteger  (const TESTInteger *, TESTInteger *);
ASN1EXP void   ASN1CALL free_TESTInteger  (TESTInteger *);


/*
TESTInteger2 ::= [4] IMPLICIT TESTInteger
*/

typedef TESTInteger TESTInteger2;

ASN1EXP int    ASN1CALL decode_TESTInteger2(const unsigned char *, size_t, TESTInteger2 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTInteger2(unsigned char *, size_t, const TESTInteger2 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTInteger2(const TESTInteger2 *);
ASN1EXP int    ASN1CALL copy_TESTInteger2  (const TESTInteger2 *, TESTInteger2 *);
ASN1EXP void   ASN1CALL free_TESTInteger2  (TESTInteger2 *);


/*
TESTInteger3 ::= [5] IMPLICIT TESTInteger2
*/

typedef TESTInteger2 TESTInteger3;

ASN1EXP int    ASN1CALL decode_TESTInteger3(const unsigned char *, size_t, TESTInteger3 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTInteger3(unsigned char *, size_t, const TESTInteger3 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTInteger3(const TESTInteger3 *);
ASN1EXP int    ASN1CALL copy_TESTInteger3  (const TESTInteger3 *, TESTInteger3 *);
ASN1EXP void   ASN1CALL free_TESTInteger3  (TESTInteger3 *);


/*
TESTImplicit ::= SEQUENCE {
  ti1             [0] IMPLICIT INTEGER (-2147483648..2147483647),
  ti2             [1] IMPLICIT SEQUENCE {
    foo             [127] INTEGER (-2147483648..2147483647),
  },
  ti3             [2] IMPLICIT [5] IMPLICIT [4] IMPLICIT INTEGER (-2147483648..2147483647),
}
*/

typedef struct TESTImplicit {
  int ti1;
  struct TESTImplicit_ti2 {
    int foo;
  } ti2;
  int ti3;
} TESTImplicit;

ASN1EXP int    ASN1CALL decode_TESTImplicit(const unsigned char *, size_t, TESTImplicit *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTImplicit(unsigned char *, size_t, const TESTImplicit *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTImplicit(const TESTImplicit *);
ASN1EXP int    ASN1CALL copy_TESTImplicit  (const TESTImplicit *, TESTImplicit *);
ASN1EXP void   ASN1CALL free_TESTImplicit  (TESTImplicit *);


/*
TESTImplicit2 ::= SEQUENCE {
  ti1             [0] IMPLICIT TESTInteger,
  ti3             [2] IMPLICIT TESTInteger3,
}
*/

typedef struct TESTImplicit2 {
  TESTInteger ti1;
  TESTInteger3 ti3;
} TESTImplicit2;

ASN1EXP int    ASN1CALL decode_TESTImplicit2(const unsigned char *, size_t, TESTImplicit2 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTImplicit2(unsigned char *, size_t, const TESTImplicit2 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTImplicit2(const TESTImplicit2 *);
ASN1EXP int    ASN1CALL copy_TESTImplicit2  (const TESTImplicit2 *, TESTImplicit2 *);
ASN1EXP void   ASN1CALL free_TESTImplicit2  (TESTImplicit2 *);


/*
TESTAllocInner ::= SEQUENCE {
  ai              [0] TESTInteger,
}
*/

typedef struct TESTAllocInner {
  TESTInteger ai;
} TESTAllocInner;

ASN1EXP int    ASN1CALL decode_TESTAllocInner(const unsigned char *, size_t, TESTAllocInner *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTAllocInner(unsigned char *, size_t, const TESTAllocInner *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTAllocInner(const TESTAllocInner *);
ASN1EXP int    ASN1CALL copy_TESTAllocInner  (const TESTAllocInner *, TESTAllocInner *);
ASN1EXP void   ASN1CALL free_TESTAllocInner  (TESTAllocInner *);


/*
TESTAlloc ::= SEQUENCE {
  tagless         TESTAllocInner OPTIONAL,
  three           [1] INTEGER (-2147483648..2147483647),
  tagless2        heim_any OPTIONAL,
}
*/

typedef struct TESTAlloc {
  TESTAllocInner *tagless;
  int three;
  heim_any *tagless2;
} TESTAlloc;

ASN1EXP int    ASN1CALL decode_TESTAlloc(const unsigned char *, size_t, TESTAlloc *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTAlloc(unsigned char *, size_t, const TESTAlloc *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTAlloc(const TESTAlloc *);
ASN1EXP int    ASN1CALL copy_TESTAlloc  (const TESTAlloc *, TESTAlloc *);
ASN1EXP void   ASN1CALL free_TESTAlloc  (TESTAlloc *);


/*
TESTOptional ::= SEQUENCE {
  zero            [0] INTEGER (-2147483648..2147483647) OPTIONAL,
  one             [1] INTEGER (-2147483648..2147483647) OPTIONAL,
}
*/

typedef struct TESTOptional {
  int *zero;
  int *one;
} TESTOptional;

ASN1EXP int    ASN1CALL decode_TESTOptional(const unsigned char *, size_t, TESTOptional *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTOptional(unsigned char *, size_t, const TESTOptional *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTOptional(const TESTOptional *);
ASN1EXP int    ASN1CALL copy_TESTOptional  (const TESTOptional *, TESTOptional *);
ASN1EXP void   ASN1CALL free_TESTOptional  (TESTOptional *);


/*
TESTCONTAINING ::= OCTET STRING
*/

typedef heim_octet_string TESTCONTAINING;

ASN1EXP int    ASN1CALL decode_TESTCONTAINING(const unsigned char *, size_t, TESTCONTAINING *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTCONTAINING(unsigned char *, size_t, const TESTCONTAINING *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTCONTAINING(const TESTCONTAINING *);
ASN1EXP int    ASN1CALL copy_TESTCONTAINING  (const TESTCONTAINING *, TESTCONTAINING *);
ASN1EXP void   ASN1CALL free_TESTCONTAINING  (TESTCONTAINING *);


/*
TESTENCODEDBY ::= OCTET STRING
*/

typedef heim_octet_string TESTENCODEDBY;

ASN1EXP int    ASN1CALL decode_TESTENCODEDBY(const unsigned char *, size_t, TESTENCODEDBY *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTENCODEDBY(unsigned char *, size_t, const TESTENCODEDBY *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTENCODEDBY(const TESTENCODEDBY *);
ASN1EXP int    ASN1CALL copy_TESTENCODEDBY  (const TESTENCODEDBY *, TESTENCODEDBY *);
ASN1EXP void   ASN1CALL free_TESTENCODEDBY  (TESTENCODEDBY *);


/* OBJECT IDENTIFIER TESTDer ::= { joint-iso-itu-t(2) asn(1) ber-derived(2) distinguished-encoding(1) } */
extern ASN1EXP const heim_oid asn1_oid_TESTDer;
#define ASN1_OID_TESTDER (&asn1_oid_TESTDer)

/*
TESTCONTAININGENCODEDBY ::= OCTET STRING
*/

typedef heim_octet_string TESTCONTAININGENCODEDBY;

ASN1EXP int    ASN1CALL decode_TESTCONTAININGENCODEDBY(const unsigned char *, size_t, TESTCONTAININGENCODEDBY *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTCONTAININGENCODEDBY(unsigned char *, size_t, const TESTCONTAININGENCODEDBY *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTCONTAININGENCODEDBY(const TESTCONTAININGENCODEDBY *);
ASN1EXP int    ASN1CALL copy_TESTCONTAININGENCODEDBY  (const TESTCONTAININGENCODEDBY *, TESTCONTAININGENCODEDBY *);
ASN1EXP void   ASN1CALL free_TESTCONTAININGENCODEDBY  (TESTCONTAININGENCODEDBY *);


/*
TESTCONTAININGENCODEDBY2 ::= OCTET STRING
*/

typedef heim_octet_string TESTCONTAININGENCODEDBY2;

ASN1EXP int    ASN1CALL decode_TESTCONTAININGENCODEDBY2(const unsigned char *, size_t, TESTCONTAININGENCODEDBY2 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTCONTAININGENCODEDBY2(unsigned char *, size_t, const TESTCONTAININGENCODEDBY2 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTCONTAININGENCODEDBY2(const TESTCONTAININGENCODEDBY2 *);
ASN1EXP int    ASN1CALL copy_TESTCONTAININGENCODEDBY2  (const TESTCONTAININGENCODEDBY2 *, TESTCONTAININGENCODEDBY2 *);
ASN1EXP void   ASN1CALL free_TESTCONTAININGENCODEDBY2  (TESTCONTAININGENCODEDBY2 *);


enum { TESTValue1 = 1 };

/*
TESTUSERCONSTRAINED ::= OCTET STRING
*/

typedef heim_octet_string TESTUSERCONSTRAINED;

ASN1EXP int    ASN1CALL decode_TESTUSERCONSTRAINED(const unsigned char *, size_t, TESTUSERCONSTRAINED *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTUSERCONSTRAINED(unsigned char *, size_t, const TESTUSERCONSTRAINED *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTUSERCONSTRAINED(const TESTUSERCONSTRAINED *);
ASN1EXP int    ASN1CALL copy_TESTUSERCONSTRAINED  (const TESTUSERCONSTRAINED *, TESTUSERCONSTRAINED *);
ASN1EXP void   ASN1CALL free_TESTUSERCONSTRAINED  (TESTUSERCONSTRAINED *);


/*
TESTSeqOf ::= SEQUENCE OF TESTInteger
*/

typedef struct TESTSeqOf {
  unsigned int len;
  TESTInteger *val;
} TESTSeqOf;

ASN1EXP int   ASN1CALL add_TESTSeqOf  (TESTSeqOf *, const TESTInteger *);
ASN1EXP int   ASN1CALL remove_TESTSeqOf  (TESTSeqOf *, unsigned int);
ASN1EXP int    ASN1CALL decode_TESTSeqOf(const unsigned char *, size_t, TESTSeqOf *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTSeqOf(unsigned char *, size_t, const TESTSeqOf *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTSeqOf(const TESTSeqOf *);
ASN1EXP int    ASN1CALL copy_TESTSeqOf  (const TESTSeqOf *, TESTSeqOf *);
ASN1EXP void   ASN1CALL free_TESTSeqOf  (TESTSeqOf *);


/*
TESTSeqSizeOf1 ::= SEQUENCE OF TESTInteger
*/

typedef struct TESTSeqSizeOf1 {
  unsigned int len;
  TESTInteger *val;
} TESTSeqSizeOf1;

ASN1EXP int    ASN1CALL decode_TESTSeqSizeOf1(const unsigned char *, size_t, TESTSeqSizeOf1 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTSeqSizeOf1(unsigned char *, size_t, const TESTSeqSizeOf1 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTSeqSizeOf1(const TESTSeqSizeOf1 *);
ASN1EXP int    ASN1CALL copy_TESTSeqSizeOf1  (const TESTSeqSizeOf1 *, TESTSeqSizeOf1 *);
ASN1EXP void   ASN1CALL free_TESTSeqSizeOf1  (TESTSeqSizeOf1 *);


/*
TESTSeqSizeOf2 ::= SEQUENCE OF TESTInteger
*/

typedef struct TESTSeqSizeOf2 {
  unsigned int len;
  TESTInteger *val;
} TESTSeqSizeOf2;

ASN1EXP int    ASN1CALL decode_TESTSeqSizeOf2(const unsigned char *, size_t, TESTSeqSizeOf2 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTSeqSizeOf2(unsigned char *, size_t, const TESTSeqSizeOf2 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTSeqSizeOf2(const TESTSeqSizeOf2 *);
ASN1EXP int    ASN1CALL copy_TESTSeqSizeOf2  (const TESTSeqSizeOf2 *, TESTSeqSizeOf2 *);
ASN1EXP void   ASN1CALL free_TESTSeqSizeOf2  (TESTSeqSizeOf2 *);


/*
TESTSeqSizeOf3 ::= SEQUENCE OF TESTInteger
*/

typedef struct TESTSeqSizeOf3 {
  unsigned int len;
  TESTInteger *val;
} TESTSeqSizeOf3;

ASN1EXP int    ASN1CALL decode_TESTSeqSizeOf3(const unsigned char *, size_t, TESTSeqSizeOf3 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTSeqSizeOf3(unsigned char *, size_t, const TESTSeqSizeOf3 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTSeqSizeOf3(const TESTSeqSizeOf3 *);
ASN1EXP int    ASN1CALL copy_TESTSeqSizeOf3  (const TESTSeqSizeOf3 *, TESTSeqSizeOf3 *);
ASN1EXP void   ASN1CALL free_TESTSeqSizeOf3  (TESTSeqSizeOf3 *);


/*
TESTSeqSizeOf4 ::= SEQUENCE OF TESTInteger
*/

typedef struct TESTSeqSizeOf4 {
  unsigned int len;
  TESTInteger *val;
} TESTSeqSizeOf4;

ASN1EXP int    ASN1CALL decode_TESTSeqSizeOf4(const unsigned char *, size_t, TESTSeqSizeOf4 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTSeqSizeOf4(unsigned char *, size_t, const TESTSeqSizeOf4 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTSeqSizeOf4(const TESTSeqSizeOf4 *);
ASN1EXP int    ASN1CALL copy_TESTSeqSizeOf4  (const TESTSeqSizeOf4 *, TESTSeqSizeOf4 *);
ASN1EXP void   ASN1CALL free_TESTSeqSizeOf4  (TESTSeqSizeOf4 *);


/*
TESTOSSize1 ::= OCTET STRING
*/

typedef heim_octet_string TESTOSSize1;

ASN1EXP int    ASN1CALL decode_TESTOSSize1(const unsigned char *, size_t, TESTOSSize1 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTOSSize1(unsigned char *, size_t, const TESTOSSize1 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTOSSize1(const TESTOSSize1 *);
ASN1EXP int    ASN1CALL copy_TESTOSSize1  (const TESTOSSize1 *, TESTOSSize1 *);
ASN1EXP void   ASN1CALL free_TESTOSSize1  (TESTOSSize1 *);


/*
TESTSeqOfSeq ::= SEQUENCE OF SEQUENCE {
  zero            [0] TESTInteger,
}
*/

typedef struct TESTSeqOfSeq {
  unsigned int len;
  struct TESTSeqOfSeq_val {
    TESTInteger zero;
  } *val;
} TESTSeqOfSeq;

ASN1EXP int    ASN1CALL decode_TESTSeqOfSeq(const unsigned char *, size_t, TESTSeqOfSeq *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTSeqOfSeq(unsigned char *, size_t, const TESTSeqOfSeq *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTSeqOfSeq(const TESTSeqOfSeq *);
ASN1EXP int    ASN1CALL copy_TESTSeqOfSeq  (const TESTSeqOfSeq *, TESTSeqOfSeq *);
ASN1EXP void   ASN1CALL free_TESTSeqOfSeq  (TESTSeqOfSeq *);


/*
TESTSeqOfSeq2 ::= SEQUENCE OF SEQUENCE {
  string          [0] GeneralString,
}
*/

typedef struct TESTSeqOfSeq2 {
  unsigned int len;
  struct TESTSeqOfSeq2_val {
    heim_general_string string;
  } *val;
} TESTSeqOfSeq2;

ASN1EXP int    ASN1CALL decode_TESTSeqOfSeq2(const unsigned char *, size_t, TESTSeqOfSeq2 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTSeqOfSeq2(unsigned char *, size_t, const TESTSeqOfSeq2 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTSeqOfSeq2(const TESTSeqOfSeq2 *);
ASN1EXP int    ASN1CALL copy_TESTSeqOfSeq2  (const TESTSeqOfSeq2 *, TESTSeqOfSeq2 *);
ASN1EXP void   ASN1CALL free_TESTSeqOfSeq2  (TESTSeqOfSeq2 *);


/*
TESTSeqOfSeq3 ::= SEQUENCE OF SEQUENCE {
  zero            [0] TESTInteger,
  string          [0] GeneralString,
}
*/

typedef struct TESTSeqOfSeq3 {
  unsigned int len;
  struct TESTSeqOfSeq3_val {
    TESTInteger zero;
    heim_general_string string;
  } *val;
} TESTSeqOfSeq3;

ASN1EXP int    ASN1CALL decode_TESTSeqOfSeq3(const unsigned char *, size_t, TESTSeqOfSeq3 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTSeqOfSeq3(unsigned char *, size_t, const TESTSeqOfSeq3 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTSeqOfSeq3(const TESTSeqOfSeq3 *);
ASN1EXP int    ASN1CALL copy_TESTSeqOfSeq3  (const TESTSeqOfSeq3 *, TESTSeqOfSeq3 *);
ASN1EXP void   ASN1CALL free_TESTSeqOfSeq3  (TESTSeqOfSeq3 *);


/*
TESTSeqOf2 ::= SEQUENCE {
  strings         SEQUENCE OF GeneralString,
}
*/

typedef struct TESTSeqOf2 {
  struct TESTSeqOf2_strings {
    unsigned int len;
    heim_general_string *val;
  } strings;
} TESTSeqOf2;

ASN1EXP int    ASN1CALL decode_TESTSeqOf2(const unsigned char *, size_t, TESTSeqOf2 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTSeqOf2(unsigned char *, size_t, const TESTSeqOf2 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTSeqOf2(const TESTSeqOf2 *);
ASN1EXP int    ASN1CALL copy_TESTSeqOf2  (const TESTSeqOf2 *, TESTSeqOf2 *);
ASN1EXP void   ASN1CALL free_TESTSeqOf2  (TESTSeqOf2 *);


/*
TESTSeqOf3 ::= SEQUENCE {
  strings         SEQUENCE OF GeneralString OPTIONAL,
}
*/

typedef struct TESTSeqOf3 {
  struct TESTSeqOf3_strings {
    unsigned int len;
    heim_general_string *val;
  } *strings;
} TESTSeqOf3;

ASN1EXP int    ASN1CALL decode_TESTSeqOf3(const unsigned char *, size_t, TESTSeqOf3 *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTSeqOf3(unsigned char *, size_t, const TESTSeqOf3 *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTSeqOf3(const TESTSeqOf3 *);
ASN1EXP int    ASN1CALL copy_TESTSeqOf3  (const TESTSeqOf3 *, TESTSeqOf3 *);
ASN1EXP void   ASN1CALL free_TESTSeqOf3  (TESTSeqOf3 *);


/*
TESTPreserve ::= SEQUENCE {
  zero            [0] TESTInteger,
  one             [1] TESTInteger,
}
*/

typedef struct TESTPreserve {
  TESTInteger zero;
  TESTInteger one;
} TESTPreserve;

ASN1EXP int    ASN1CALL decode_TESTPreserve(const unsigned char *, size_t, TESTPreserve *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTPreserve(unsigned char *, size_t, const TESTPreserve *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTPreserve(const TESTPreserve *);
ASN1EXP int    ASN1CALL copy_TESTPreserve  (const TESTPreserve *, TESTPreserve *);
ASN1EXP void   ASN1CALL free_TESTPreserve  (TESTPreserve *);


/*
TESTBitString ::= BIT STRING {
  zero(0),
  eight(8),
  thirtyone(31)
}
*/

typedef struct TESTBitString {
  unsigned int zero:1;
  unsigned int _unused1:1;
  unsigned int _unused2:1;
  unsigned int _unused3:1;
  unsigned int _unused4:1;
  unsigned int _unused5:1;
  unsigned int _unused6:1;
  unsigned int _unused7:1;
  unsigned int eight:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int _unused14:1;
  unsigned int _unused15:1;
  unsigned int _unused16:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int _unused30:1;
  unsigned int thirtyone:1;
} TESTBitString;


unsigned TESTBitString2int(TESTBitString);
TESTBitString int2TESTBitString(unsigned);
extern const struct units *asn1_TESTBitString_table_units;
#define asn1_TESTBitString_units() (asn1_TESTBitString_table_units)
ASN1EXP int    ASN1CALL decode_TESTBitString(const unsigned char *, size_t, TESTBitString *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTBitString(unsigned char *, size_t, const TESTBitString *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTBitString(const TESTBitString *);
ASN1EXP int    ASN1CALL copy_TESTBitString  (const TESTBitString *, TESTBitString *);
ASN1EXP void   ASN1CALL free_TESTBitString  (TESTBitString *);


/*
TESTMechType ::= OBJECT IDENTIFIER
*/

typedef heim_oid TESTMechType;

ASN1EXP int    ASN1CALL decode_TESTMechType(const unsigned char *, size_t, TESTMechType *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTMechType(unsigned char *, size_t, const TESTMechType *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTMechType(const TESTMechType *);
ASN1EXP int    ASN1CALL copy_TESTMechType  (const TESTMechType *, TESTMechType *);
ASN1EXP void   ASN1CALL free_TESTMechType  (TESTMechType *);


/*
TESTMechTypeList ::= SEQUENCE OF TESTMechType
*/

typedef struct TESTMechTypeList {
  unsigned int len;
  TESTMechType *val;
} TESTMechTypeList;

ASN1EXP int    ASN1CALL decode_TESTMechTypeList(const unsigned char *, size_t, TESTMechTypeList *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTMechTypeList(unsigned char *, size_t, const TESTMechTypeList *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTMechTypeList(const TESTMechTypeList *);
ASN1EXP int    ASN1CALL copy_TESTMechTypeList  (const TESTMechTypeList *, TESTMechTypeList *);
ASN1EXP void   ASN1CALL free_TESTMechTypeList  (TESTMechTypeList *);


/*
TESTContextFlags ::= BIT STRING {
  delegFlag(0),
  mutualFlag(1),
  replayFlag(2),
  sequenceFlag(3),
  anonFlag(4),
  confFlag(5),
  integFlag(6)
}
*/

typedef struct TESTContextFlags {
  unsigned int delegFlag:1;
  unsigned int mutualFlag:1;
  unsigned int replayFlag:1;
  unsigned int sequenceFlag:1;
  unsigned int anonFlag:1;
  unsigned int confFlag:1;
  unsigned int integFlag:1;
  unsigned int _unused7:1;
  unsigned int _unused8:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int _unused14:1;
  unsigned int _unused15:1;
  unsigned int _unused16:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int _unused30:1;
  unsigned int _unused31:1;
} TESTContextFlags;


unsigned TESTContextFlags2int(TESTContextFlags);
TESTContextFlags int2TESTContextFlags(unsigned);
extern const struct units *asn1_TESTContextFlags_table_units;
#define asn1_TESTContextFlags_units() (asn1_TESTContextFlags_table_units)
ASN1EXP int    ASN1CALL decode_TESTContextFlags(const unsigned char *, size_t, TESTContextFlags *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTContextFlags(unsigned char *, size_t, const TESTContextFlags *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTContextFlags(const TESTContextFlags *);
ASN1EXP int    ASN1CALL copy_TESTContextFlags  (const TESTContextFlags *, TESTContextFlags *);
ASN1EXP void   ASN1CALL free_TESTContextFlags  (TESTContextFlags *);


/*
TESTNegHints ::= SEQUENCE {
  hintName        [0] GeneralString OPTIONAL,
  hintAddress     [1] OCTET STRING OPTIONAL,
}
*/

typedef struct TESTNegHints {
  heim_general_string *hintName;
  heim_octet_string *hintAddress;
} TESTNegHints;

ASN1EXP int    ASN1CALL decode_TESTNegHints(const unsigned char *, size_t, TESTNegHints *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTNegHints(unsigned char *, size_t, const TESTNegHints *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTNegHints(const TESTNegHints *);
ASN1EXP int    ASN1CALL copy_TESTNegHints  (const TESTNegHints *, TESTNegHints *);
ASN1EXP void   ASN1CALL free_TESTNegHints  (TESTNegHints *);


/*
TESTNegTokenInit ::= SEQUENCE {
  mechTypes       [0] TESTMechTypeList,
  reqFlags        [1] TESTContextFlags OPTIONAL,
  mechToken       [2] OCTET STRING OPTIONAL,
  mechListMIC     [3] OCTET STRING OPTIONAL,
  ...,
}
*/

typedef struct TESTNegTokenInit {
  TESTMechTypeList mechTypes;
  TESTContextFlags *reqFlags;
  heim_octet_string *mechToken;
  heim_octet_string *mechListMIC;
} TESTNegTokenInit;

ASN1EXP int    ASN1CALL decode_TESTNegTokenInit(const unsigned char *, size_t, TESTNegTokenInit *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTNegTokenInit(unsigned char *, size_t, const TESTNegTokenInit *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTNegTokenInit(const TESTNegTokenInit *);
ASN1EXP int    ASN1CALL copy_TESTNegTokenInit  (const TESTNegTokenInit *, TESTNegTokenInit *);
ASN1EXP void   ASN1CALL free_TESTNegTokenInit  (TESTNegTokenInit *);


/*
TESTNegResultEnum ::= INTEGER {
  accept_completed(0),
  accept_incomplete(1),
  reject(2),
  request_mic(3)
}
*/

typedef enum TESTNegResultEnum {
  accept_completed = 0,
  accept_incomplete = 1,
  reject = 2,
  request_mic = 3
} TESTNegResultEnum;

ASN1EXP int    ASN1CALL decode_TESTNegResultEnum(const unsigned char *, size_t, TESTNegResultEnum *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTNegResultEnum(unsigned char *, size_t, const TESTNegResultEnum *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTNegResultEnum(const TESTNegResultEnum *);
ASN1EXP int    ASN1CALL copy_TESTNegResultEnum  (const TESTNegResultEnum *, TESTNegResultEnum *);
ASN1EXP void   ASN1CALL free_TESTNegResultEnum  (TESTNegResultEnum *);


/*
TESTNegTokenResp ::= SEQUENCE {
  negResult       [0] TESTNegResultEnum OPTIONAL,
  supportedMech   [1] TESTMechType OPTIONAL,
  responseToken   [2] OCTET STRING OPTIONAL,
  mechListMIC     [3] OCTET STRING OPTIONAL,
  ...,
}
*/

typedef struct TESTNegTokenResp {
  TESTNegResultEnum *negResult;
  TESTMechType *supportedMech;
  heim_octet_string *responseToken;
  heim_octet_string *mechListMIC;
} TESTNegTokenResp;

ASN1EXP int    ASN1CALL decode_TESTNegTokenResp(const unsigned char *, size_t, TESTNegTokenResp *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTNegTokenResp(unsigned char *, size_t, const TESTNegTokenResp *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTNegTokenResp(const TESTNegTokenResp *);
ASN1EXP int    ASN1CALL copy_TESTNegTokenResp  (const TESTNegTokenResp *, TESTNegTokenResp *);
ASN1EXP void   ASN1CALL free_TESTNegTokenResp  (TESTNegTokenResp *);


/*
TESTNegotiationToken ::= CHOICE {
  negTokenInit    [0] TESTNegTokenInit,
  negTokenResp    [1] TESTNegTokenResp,
}
*/

typedef struct TESTNegotiationToken {
  enum TESTNegotiationToken_enum {
invalid_choice_TESTNegotiationToken = 0,
    choice_TESTNegotiationToken_negTokenInit = 1,
    choice_TESTNegotiationToken_negTokenResp
  } element;
  union {
    TESTNegTokenInit negTokenInit;
    TESTNegTokenResp negTokenResp;
  } u;
} TESTNegotiationToken;

ASN1EXP int    ASN1CALL decode_TESTNegotiationToken(const unsigned char *, size_t, TESTNegotiationToken *, size_t *);
ASN1EXP int    ASN1CALL encode_TESTNegotiationToken(unsigned char *, size_t, const TESTNegotiationToken *, size_t *);
ASN1EXP size_t ASN1CALL length_TESTNegotiationToken(const TESTNegotiationToken *);
ASN1EXP int    ASN1CALL copy_TESTNegotiationToken  (const TESTNegotiationToken *, TESTNegotiationToken *);
ASN1EXP void   ASN1CALL free_TESTNegotiationToken  (TESTNegotiationToken *);


#endif /* __test_asn1_h__ */
