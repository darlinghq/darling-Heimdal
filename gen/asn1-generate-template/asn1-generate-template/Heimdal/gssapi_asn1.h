/* Generated from /Users/user/Downloads/darling-Heimdal/lib/gssapi/mech/gssapi.asn1 */
/* Do not edit */

#ifndef __gssapi_asn1_h__
#define __gssapi_asn1_h__

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
GSSAPIContextToken ::= [APPLICATION 0] IMPLICIT SEQUENCE {
  thisMech              OBJECT IDENTIFIER,
  innerContextToken   heim_any_set,
}
*/

typedef struct GSSAPIContextToken {
  heim_oid thisMech;
  heim_any_set innerContextToken;
} GSSAPIContextToken;

ASN1EXP int    ASN1CALL decode_GSSAPIContextToken(const unsigned char *, size_t, GSSAPIContextToken *, size_t *);
ASN1EXP int    ASN1CALL encode_GSSAPIContextToken(unsigned char *, size_t, const GSSAPIContextToken *, size_t *);
ASN1EXP size_t ASN1CALL length_GSSAPIContextToken(const GSSAPIContextToken *);
ASN1EXP int    ASN1CALL copy_GSSAPIContextToken  (const GSSAPIContextToken *, GSSAPIContextToken *);
ASN1EXP void   ASN1CALL free_GSSAPIContextToken  (GSSAPIContextToken *);


/*
IAKERB-HEADER ::= SEQUENCE {
  target-realm    [1]   UTF8String,
  cookie          [2] OCTET STRING OPTIONAL,
}
*/

typedef struct IAKERB_HEADER {
  heim_utf8_string target_realm;
  heim_octet_string *cookie;
} IAKERB_HEADER;

ASN1EXP int    ASN1CALL decode_IAKERB_HEADER(const unsigned char *, size_t, IAKERB_HEADER *, size_t *);
ASN1EXP int    ASN1CALL encode_IAKERB_HEADER(unsigned char *, size_t, const IAKERB_HEADER *, size_t *);
ASN1EXP size_t ASN1CALL length_IAKERB_HEADER(const IAKERB_HEADER *);
ASN1EXP int    ASN1CALL copy_IAKERB_HEADER  (const IAKERB_HEADER *, IAKERB_HEADER *);
ASN1EXP void   ASN1CALL free_IAKERB_HEADER  (IAKERB_HEADER *);


#endif /* __gssapi_asn1_h__ */
