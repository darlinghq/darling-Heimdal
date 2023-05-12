/* Generated from /Users/user/Downloads/darling-Heimdal/lib/asn1/pku2u.asn1 */
/* Do not edit */

#ifndef __pku2u_asn1_h__
#define __pku2u_asn1_h__

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

#include <krb5_asn1.h>
#include <rfc2459_asn1.h>
/*
GSS_KRB5_FINISHED ::= SEQUENCE {
  gss-mic         [1] Checksum,
  ...,
}
*/

typedef struct GSS_KRB5_FINISHED {
  Checksum gss_mic;
} GSS_KRB5_FINISHED;

ASN1EXP int    ASN1CALL decode_GSS_KRB5_FINISHED(const unsigned char *, size_t, GSS_KRB5_FINISHED *, size_t *);
ASN1EXP int    ASN1CALL encode_GSS_KRB5_FINISHED(unsigned char *, size_t, const GSS_KRB5_FINISHED *, size_t *);
ASN1EXP size_t ASN1CALL length_GSS_KRB5_FINISHED(const GSS_KRB5_FINISHED *);
ASN1EXP int    ASN1CALL copy_GSS_KRB5_FINISHED  (const GSS_KRB5_FINISHED *, GSS_KRB5_FINISHED *);
ASN1EXP void   ASN1CALL free_GSS_KRB5_FINISHED  (GSS_KRB5_FINISHED *);


/*
InitiatorName ::= CHOICE {
  sanIndex        INTEGER (-2147483648..2147483647),
  nameNotInCert   [0] GeneralName,
  ...,
}
*/

typedef struct InitiatorName {
  enum InitiatorName_enum {
    choice_InitiatorName_asn1_ellipsis = -1,
invalid_choice_InitiatorName = 0,
    choice_InitiatorName_sanIndex,
    choice_InitiatorName_nameNotInCert
    /* ... */
  } element;
  union {
    int sanIndex;
    GeneralName nameNotInCert;
    heim_octet_string asn1_ellipsis;
  } u;
} InitiatorName;

ASN1EXP int    ASN1CALL decode_InitiatorName(const unsigned char *, size_t, InitiatorName *, size_t *);
ASN1EXP int    ASN1CALL encode_InitiatorName(unsigned char *, size_t, const InitiatorName *, size_t *);
ASN1EXP size_t ASN1CALL length_InitiatorName(const InitiatorName *);
ASN1EXP int    ASN1CALL copy_InitiatorName  (const InitiatorName *, InitiatorName *);
ASN1EXP void   ASN1CALL free_InitiatorName  (InitiatorName *);


/*
TargetName ::= CHOICE {
  exportedTargName   OCTET STRING,
  generalName        [0] GeneralName,
  ...,
}
*/

typedef struct TargetName {
  enum TargetName_enum {
    choice_TargetName_asn1_ellipsis = -1,
invalid_choice_TargetName = 0,
    choice_TargetName_exportedTargName,
    choice_TargetName_generalName
    /* ... */
  } element;
  union {
    heim_octet_string exportedTargName;
    GeneralName generalName;
    heim_octet_string asn1_ellipsis;
  } u;
} TargetName;

ASN1EXP int    ASN1CALL decode_TargetName(const unsigned char *, size_t, TargetName *, size_t *);
ASN1EXP int    ASN1CALL encode_TargetName(unsigned char *, size_t, const TargetName *, size_t *);
ASN1EXP size_t ASN1CALL length_TargetName(const TargetName *);
ASN1EXP int    ASN1CALL copy_TargetName  (const TargetName *, TargetName *);
ASN1EXP void   ASN1CALL free_TargetName  (TargetName *);


/*
InitiatorNameAssertion ::= SEQUENCE {
  initiatorName   [0] InitiatorName OPTIONAL,
  targetName      [1] TargetName OPTIONAL,
}
*/

typedef struct InitiatorNameAssertion {
  InitiatorName *initiatorName;
  TargetName *targetName;
} InitiatorNameAssertion;

ASN1EXP int    ASN1CALL decode_InitiatorNameAssertion(const unsigned char *, size_t, InitiatorNameAssertion *, size_t *);
ASN1EXP int    ASN1CALL encode_InitiatorNameAssertion(unsigned char *, size_t, const InitiatorNameAssertion *, size_t *);
ASN1EXP size_t ASN1CALL length_InitiatorNameAssertion(const InitiatorNameAssertion *);
ASN1EXP int    ASN1CALL copy_InitiatorNameAssertion  (const InitiatorNameAssertion *, InitiatorNameAssertion *);
ASN1EXP void   ASN1CALL free_InitiatorNameAssertion  (InitiatorNameAssertion *);


#endif /* __pku2u_asn1_h__ */
