/* Generated from /Users/ariel/git/darling/src/external/Heimdal/lib/asn1/krb5.asn1 */
/* Do not edit */

#ifndef __krb5_asn1_h__
#define __krb5_asn1_h__

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

/*
NAME-TYPE ::= INTEGER {
  KRB5_NT_UNKNOWN(0),
  KRB5_NT_PRINCIPAL(1),
  KRB5_NT_SRV_INST(2),
  KRB5_NT_SRV_HST(3),
  KRB5_NT_SRV_XHST(4),
  KRB5_NT_UID(5),
  KRB5_NT_X500_PRINCIPAL(6),
  KRB5_NT_SMTP_NAME(7),
  KRB5_NT_ENTERPRISE_PRINCIPAL(10),
  KRB5_NT_WELLKNOWN(11),
  KRB5_NT_ENT_PRINCIPAL_AND_ID(-130),
  KRB5_NT_MS_PRINCIPAL(-128),
  KRB5_NT_MS_PRINCIPAL_AND_ID(-129),
  KRB5_NT_NTLM(-1200),
  KRB5_NT_X509_GENERAL_NAME(-1201),
  KRB5_NT_GSS_HOSTBASED_SERVICE(-1202),
  KRB5_NT_CACHE_UUID(-1203)
}
*/

typedef enum NAME_TYPE {
  KRB5_NT_UNKNOWN = 0,
  KRB5_NT_PRINCIPAL = 1,
  KRB5_NT_SRV_INST = 2,
  KRB5_NT_SRV_HST = 3,
  KRB5_NT_SRV_XHST = 4,
  KRB5_NT_UID = 5,
  KRB5_NT_X500_PRINCIPAL = 6,
  KRB5_NT_SMTP_NAME = 7,
  KRB5_NT_ENTERPRISE_PRINCIPAL = 10,
  KRB5_NT_WELLKNOWN = 11,
  KRB5_NT_ENT_PRINCIPAL_AND_ID = -130,
  KRB5_NT_MS_PRINCIPAL = -128,
  KRB5_NT_MS_PRINCIPAL_AND_ID = -129,
  KRB5_NT_NTLM = -1200,
  KRB5_NT_X509_GENERAL_NAME = -1201,
  KRB5_NT_GSS_HOSTBASED_SERVICE = -1202,
  KRB5_NT_CACHE_UUID = -1203
} NAME_TYPE;

ASN1EXP int    ASN1CALL decode_NAME_TYPE(const unsigned char *, size_t, NAME_TYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_NAME_TYPE(unsigned char *, size_t, const NAME_TYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_NAME_TYPE(const NAME_TYPE *);
ASN1EXP int    ASN1CALL copy_NAME_TYPE  (const NAME_TYPE *, NAME_TYPE *);
ASN1EXP void   ASN1CALL free_NAME_TYPE  (NAME_TYPE *);


/*
MESSAGE-TYPE ::= INTEGER {
  krb_as_req(10),
  krb_as_rep(11),
  krb_tgs_req(12),
  krb_tgs_rep(13),
  krb_ap_req(14),
  krb_ap_rep(15),
  krb_safe(20),
  krb_priv(21),
  krb_cred(22),
  krb_error(30)
}
*/

typedef enum MESSAGE_TYPE {
  krb_as_req = 10,
  krb_as_rep = 11,
  krb_tgs_req = 12,
  krb_tgs_rep = 13,
  krb_ap_req = 14,
  krb_ap_rep = 15,
  krb_safe = 20,
  krb_priv = 21,
  krb_cred = 22,
  krb_error = 30
} MESSAGE_TYPE;

/*
PADATA-TYPE ::= INTEGER {
  KRB5_PADATA_NONE(0),
  KRB5_PADATA_TGS_REQ(1),
  KRB5_PADATA_AP_REQ(1),
  KRB5_PADATA_ENC_TIMESTAMP(2),
  KRB5_PADATA_PW_SALT(3),
  KRB5_PADATA_ENC_UNIX_TIME(5),
  KRB5_PADATA_SANDIA_SECUREID(6),
  KRB5_PADATA_SESAME(7),
  KRB5_PADATA_OSF_DCE(8),
  KRB5_PADATA_CYBERSAFE_SECUREID(9),
  KRB5_PADATA_AFS3_SALT(10),
  KRB5_PADATA_ETYPE_INFO(11),
  KRB5_PADATA_SAM_CHALLENGE(12),
  KRB5_PADATA_SAM_RESPONSE(13),
  KRB5_PADATA_PK_AS_REQ_19(14),
  KRB5_PADATA_PK_AS_REP_19(15),
  KRB5_PADATA_PK_AS_REQ_WIN(15),
  KRB5_PADATA_PK_AS_REQ(16),
  KRB5_PADATA_PK_AS_REP(17),
  KRB5_PADATA_PA_PK_OCSP_RESPONSE(18),
  KRB5_PADATA_ETYPE_INFO2(19),
  KRB5_PADATA_USE_SPECIFIED_KVNO(20),
  KRB5_PADATA_SVR_REFERRAL_INFO(20),
  KRB5_PADATA_SAM_REDIRECT(21),
  KRB5_PADATA_GET_FROM_TYPED_DATA(22),
  KRB5_PADATA_SAM_ETYPE_INFO(23),
  KRB5_PADATA_SERVER_REFERRAL(25),
  KRB5_PADATA_ALT_PRINC(24),
  KRB5_PADATA_SAM_CHALLENGE2(30),
  KRB5_PADATA_SAM_RESPONSE2(31),
  KRB5_PA_EXTRA_TGT(41),
  KRB5_PADATA_FX_FAST_ARMOR(71),
  KRB5_PADATA_TD_KRB_PRINCIPAL(102),
  KRB5_PADATA_PK_TD_TRUSTED_CERTIFIERS(104),
  KRB5_PADATA_PK_TD_CERTIFICATE_INDEX(105),
  KRB5_PADATA_TD_APP_DEFINED_ERROR(106),
  KRB5_PADATA_TD_REQ_NONCE(107),
  KRB5_PADATA_TD_REQ_SEQ(108),
  KRB5_PADATA_PA_PAC_REQUEST(128),
  KRB5_PADATA_FOR_USER(129),
  KRB5_PADATA_FOR_X509_USER(130),
  KRB5_PADATA_FOR_CHECK_DUPS(131),
  KRB5_PADATA_AS_CHECKSUM(132),
  KRB5_PADATA_PK_AS_09_BINDING(132),
  KRB5_PADATA_CLIENT_CANONICALIZED(133),
  KRB5_PADATA_FX_COOKIE(133),
  KRB5_PADATA_AUTHENTICATION_SET(134),
  KRB5_PADATA_AUTH_SET_SELECTED(135),
  KRB5_PADATA_FX_FAST(136),
  KRB5_PADATA_FX_ERROR(137),
  KRB5_PADATA_ENCRYPTED_CHALLENGE(138),
  KRB5_PADATA_OTP_CHALLENGE(141),
  KRB5_PADATA_OTP_REQUEST(142),
  KBB5_PADATA_OTP_CONFIRM(143),
  KRB5_PADATA_OTP_PIN_CHANGE(144),
  KRB5_PADATA_EPAK_AS_REQ(145),
  KRB5_PADATA_EPAK_AS_REP(146),
  KRB5_PADATA_PKINIT_KX(147),
  KRB5_PADATA_PKU2U_NAME(148),
  KRB5_PADATA_REQ_ENC_PA_REP(149),
  KRB5_PADATA_SUPPORTED_ETYPES(165),
  KRB5_PADATA_SRP(250)
}
*/

typedef enum PADATA_TYPE {
  KRB5_PADATA_NONE = 0,
  KRB5_PADATA_TGS_REQ = 1,
  KRB5_PADATA_AP_REQ = 1,
  KRB5_PADATA_ENC_TIMESTAMP = 2,
  KRB5_PADATA_PW_SALT = 3,
  KRB5_PADATA_ENC_UNIX_TIME = 5,
  KRB5_PADATA_SANDIA_SECUREID = 6,
  KRB5_PADATA_SESAME = 7,
  KRB5_PADATA_OSF_DCE = 8,
  KRB5_PADATA_CYBERSAFE_SECUREID = 9,
  KRB5_PADATA_AFS3_SALT = 10,
  KRB5_PADATA_ETYPE_INFO = 11,
  KRB5_PADATA_SAM_CHALLENGE = 12,
  KRB5_PADATA_SAM_RESPONSE = 13,
  KRB5_PADATA_PK_AS_REQ_19 = 14,
  KRB5_PADATA_PK_AS_REP_19 = 15,
  KRB5_PADATA_PK_AS_REQ_WIN = 15,
  KRB5_PADATA_PK_AS_REQ = 16,
  KRB5_PADATA_PK_AS_REP = 17,
  KRB5_PADATA_PA_PK_OCSP_RESPONSE = 18,
  KRB5_PADATA_ETYPE_INFO2 = 19,
  KRB5_PADATA_USE_SPECIFIED_KVNO = 20,
  KRB5_PADATA_SVR_REFERRAL_INFO = 20,
  KRB5_PADATA_SAM_REDIRECT = 21,
  KRB5_PADATA_GET_FROM_TYPED_DATA = 22,
  KRB5_PADATA_SAM_ETYPE_INFO = 23,
  KRB5_PADATA_SERVER_REFERRAL = 25,
  KRB5_PADATA_ALT_PRINC = 24,
  KRB5_PADATA_SAM_CHALLENGE2 = 30,
  KRB5_PADATA_SAM_RESPONSE2 = 31,
  KRB5_PA_EXTRA_TGT = 41,
  KRB5_PADATA_FX_FAST_ARMOR = 71,
  KRB5_PADATA_TD_KRB_PRINCIPAL = 102,
  KRB5_PADATA_PK_TD_TRUSTED_CERTIFIERS = 104,
  KRB5_PADATA_PK_TD_CERTIFICATE_INDEX = 105,
  KRB5_PADATA_TD_APP_DEFINED_ERROR = 106,
  KRB5_PADATA_TD_REQ_NONCE = 107,
  KRB5_PADATA_TD_REQ_SEQ = 108,
  KRB5_PADATA_PA_PAC_REQUEST = 128,
  KRB5_PADATA_FOR_USER = 129,
  KRB5_PADATA_FOR_X509_USER = 130,
  KRB5_PADATA_FOR_CHECK_DUPS = 131,
  KRB5_PADATA_AS_CHECKSUM = 132,
  KRB5_PADATA_PK_AS_09_BINDING = 132,
  KRB5_PADATA_CLIENT_CANONICALIZED = 133,
  KRB5_PADATA_FX_COOKIE = 133,
  KRB5_PADATA_AUTHENTICATION_SET = 134,
  KRB5_PADATA_AUTH_SET_SELECTED = 135,
  KRB5_PADATA_FX_FAST = 136,
  KRB5_PADATA_FX_ERROR = 137,
  KRB5_PADATA_ENCRYPTED_CHALLENGE = 138,
  KRB5_PADATA_OTP_CHALLENGE = 141,
  KRB5_PADATA_OTP_REQUEST = 142,
  KBB5_PADATA_OTP_CONFIRM = 143,
  KRB5_PADATA_OTP_PIN_CHANGE = 144,
  KRB5_PADATA_EPAK_AS_REQ = 145,
  KRB5_PADATA_EPAK_AS_REP = 146,
  KRB5_PADATA_PKINIT_KX = 147,
  KRB5_PADATA_PKU2U_NAME = 148,
  KRB5_PADATA_REQ_ENC_PA_REP = 149,
  KRB5_PADATA_SUPPORTED_ETYPES = 165,
  KRB5_PADATA_SRP = 250
} PADATA_TYPE;

ASN1EXP int    ASN1CALL decode_PADATA_TYPE(const unsigned char *, size_t, PADATA_TYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_PADATA_TYPE(unsigned char *, size_t, const PADATA_TYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_PADATA_TYPE(const PADATA_TYPE *);
ASN1EXP int    ASN1CALL copy_PADATA_TYPE  (const PADATA_TYPE *, PADATA_TYPE *);
ASN1EXP void   ASN1CALL free_PADATA_TYPE  (PADATA_TYPE *);


/*
AUTHDATA-TYPE ::= INTEGER {
  KRB5_AUTHDATA_IF_RELEVANT(1),
  KRB5_AUTHDATA_INTENDED_FOR_SERVER(2),
  KRB5_AUTHDATA_INTENDED_FOR_APPLICATION_CLASS(3),
  KRB5_AUTHDATA_KDC_ISSUED(4),
  KRB5_AUTHDATA_AND_OR(5),
  KRB5_AUTHDATA_MANDATORY_TICKET_EXTENSIONS(6),
  KRB5_AUTHDATA_IN_TICKET_EXTENSIONS(7),
  KRB5_AUTHDATA_MANDATORY_FOR_KDC(8),
  KRB5_AUTHDATA_INITIAL_VERIFIED_CAS(9),
  KRB5_AUTHDATA_OSF_DCE(64),
  KRB5_AUTHDATA_SESAME(65),
  KRB5_AUTHDATA_OSF_DCE_PKI_CERTID(66),
  KRB5_AUTHDATA_WIN2K_PAC(128),
  KRB5_AUTHDATA_GSS_API_ETYPE_NEGOTIATION(129),
  KRB5_AUTHDATA_SIGNTICKET_OLDER(-17),
  KRB5_AUTHDATA_SIGNTICKET_OLD(142),
  KRB5_AUTHDATA_SIGNTICKET(512),
  KRB5_AUTHDATA_PFS(513)
}
*/

typedef enum AUTHDATA_TYPE {
  KRB5_AUTHDATA_IF_RELEVANT = 1,
  KRB5_AUTHDATA_INTENDED_FOR_SERVER = 2,
  KRB5_AUTHDATA_INTENDED_FOR_APPLICATION_CLASS = 3,
  KRB5_AUTHDATA_KDC_ISSUED = 4,
  KRB5_AUTHDATA_AND_OR = 5,
  KRB5_AUTHDATA_MANDATORY_TICKET_EXTENSIONS = 6,
  KRB5_AUTHDATA_IN_TICKET_EXTENSIONS = 7,
  KRB5_AUTHDATA_MANDATORY_FOR_KDC = 8,
  KRB5_AUTHDATA_INITIAL_VERIFIED_CAS = 9,
  KRB5_AUTHDATA_OSF_DCE = 64,
  KRB5_AUTHDATA_SESAME = 65,
  KRB5_AUTHDATA_OSF_DCE_PKI_CERTID = 66,
  KRB5_AUTHDATA_WIN2K_PAC = 128,
  KRB5_AUTHDATA_GSS_API_ETYPE_NEGOTIATION = 129,
  KRB5_AUTHDATA_SIGNTICKET_OLDER = -17,
  KRB5_AUTHDATA_SIGNTICKET_OLD = 142,
  KRB5_AUTHDATA_SIGNTICKET = 512,
  KRB5_AUTHDATA_PFS = 513
} AUTHDATA_TYPE;

ASN1EXP int    ASN1CALL decode_AUTHDATA_TYPE(const unsigned char *, size_t, AUTHDATA_TYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_AUTHDATA_TYPE(unsigned char *, size_t, const AUTHDATA_TYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_AUTHDATA_TYPE(const AUTHDATA_TYPE *);
ASN1EXP int    ASN1CALL copy_AUTHDATA_TYPE  (const AUTHDATA_TYPE *, AUTHDATA_TYPE *);
ASN1EXP void   ASN1CALL free_AUTHDATA_TYPE  (AUTHDATA_TYPE *);


/*
CKSUMTYPE ::= INTEGER {
  CKSUMTYPE_NONE(0),
  CKSUMTYPE_CRC32(1),
  CKSUMTYPE_RSA_MD4(2),
  CKSUMTYPE_RSA_MD4_DES(3),
  CKSUMTYPE_DES_MAC(4),
  CKSUMTYPE_DES_MAC_K(5),
  CKSUMTYPE_RSA_MD4_DES_K(6),
  CKSUMTYPE_RSA_MD5(7),
  CKSUMTYPE_RSA_MD5_DES(8),
  CKSUMTYPE_RSA_MD5_DES3(9),
  CKSUMTYPE_SHA1_OTHER(10),
  CKSUMTYPE_HMAC_SHA1_DES3(12),
  CKSUMTYPE_SHA1(14),
  CKSUMTYPE_HMAC_SHA1_96_AES_128(15),
  CKSUMTYPE_HMAC_SHA1_96_AES_256(16),
  CKSUMTYPE_GSSAPI(32771),
  CKSUMTYPE_HMAC_MD5(-138),
  CKSUMTYPE_HMAC_MD5_ENC(-1138)
}
*/

typedef enum CKSUMTYPE {
  CKSUMTYPE_NONE = 0,
  CKSUMTYPE_CRC32 = 1,
  CKSUMTYPE_RSA_MD4 = 2,
  CKSUMTYPE_RSA_MD4_DES = 3,
  CKSUMTYPE_DES_MAC = 4,
  CKSUMTYPE_DES_MAC_K = 5,
  CKSUMTYPE_RSA_MD4_DES_K = 6,
  CKSUMTYPE_RSA_MD5 = 7,
  CKSUMTYPE_RSA_MD5_DES = 8,
  CKSUMTYPE_RSA_MD5_DES3 = 9,
  CKSUMTYPE_SHA1_OTHER = 10,
  CKSUMTYPE_HMAC_SHA1_DES3 = 12,
  CKSUMTYPE_SHA1 = 14,
  CKSUMTYPE_HMAC_SHA1_96_AES_128 = 15,
  CKSUMTYPE_HMAC_SHA1_96_AES_256 = 16,
  CKSUMTYPE_GSSAPI = 32771,
  CKSUMTYPE_HMAC_MD5 = -138,
  CKSUMTYPE_HMAC_MD5_ENC = -1138
} CKSUMTYPE;

ASN1EXP int    ASN1CALL decode_CKSUMTYPE(const unsigned char *, size_t, CKSUMTYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_CKSUMTYPE(unsigned char *, size_t, const CKSUMTYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_CKSUMTYPE(const CKSUMTYPE *);
ASN1EXP int    ASN1CALL copy_CKSUMTYPE  (const CKSUMTYPE *, CKSUMTYPE *);
ASN1EXP void   ASN1CALL free_CKSUMTYPE  (CKSUMTYPE *);


/*
ENCTYPE ::= INTEGER {
  KRB5_ENCTYPE_NULL(0),
  KRB5_ENCTYPE_DES_CBC_CRC(1),
  KRB5_ENCTYPE_DES_CBC_MD4(2),
  KRB5_ENCTYPE_DES_CBC_MD5(3),
  KRB5_ENCTYPE_DES3_CBC_MD5(5),
  KRB5_ENCTYPE_OLD_DES3_CBC_SHA1(7),
  KRB5_ENCTYPE_SIGN_DSA_GENERATE(8),
  KRB5_ENCTYPE_ENCRYPT_RSA_PRIV(9),
  KRB5_ENCTYPE_ENCRYPT_RSA_PUB(10),
  KRB5_ENCTYPE_DES3_CBC_SHA1(16),
  KRB5_ENCTYPE_AES128_CTS_HMAC_SHA1_96(17),
  KRB5_ENCTYPE_AES256_CTS_HMAC_SHA1_96(18),
  KRB5_ENCTYPE_ARCFOUR_HMAC_MD5(23),
  KRB5_ENCTYPE_ARCFOUR_HMAC_MD5_56(24),
  KRB5_ENCTYPE_ENCTYPE_PK_CROSS(48),
  KRB5_ENCTYPE_ARCFOUR_MD4(-128),
  KRB5_ENCTYPE_ARCFOUR_HMAC_OLD(-133),
  KRB5_ENCTYPE_ARCFOUR_HMAC_OLD_EXP(-135),
  KRB5_ENCTYPE_DES_CBC_NONE(-4096),
  KRB5_ENCTYPE_DES3_CBC_NONE(-4097),
  KRB5_ENCTYPE_DES_CFB64_NONE(-4098),
  KRB5_ENCTYPE_DES_PCBC_NONE(-4099),
  KRB5_ENCTYPE_DIGEST_MD5_NONE(-4100),
  KRB5_ENCTYPE_CRAM_MD5_NONE(-4101)
}
*/

typedef enum ENCTYPE {
  KRB5_ENCTYPE_NULL = 0,
  KRB5_ENCTYPE_DES_CBC_CRC = 1,
  KRB5_ENCTYPE_DES_CBC_MD4 = 2,
  KRB5_ENCTYPE_DES_CBC_MD5 = 3,
  KRB5_ENCTYPE_DES3_CBC_MD5 = 5,
  KRB5_ENCTYPE_OLD_DES3_CBC_SHA1 = 7,
  KRB5_ENCTYPE_SIGN_DSA_GENERATE = 8,
  KRB5_ENCTYPE_ENCRYPT_RSA_PRIV = 9,
  KRB5_ENCTYPE_ENCRYPT_RSA_PUB = 10,
  KRB5_ENCTYPE_DES3_CBC_SHA1 = 16,
  KRB5_ENCTYPE_AES128_CTS_HMAC_SHA1_96 = 17,
  KRB5_ENCTYPE_AES256_CTS_HMAC_SHA1_96 = 18,
  KRB5_ENCTYPE_ARCFOUR_HMAC_MD5 = 23,
  KRB5_ENCTYPE_ARCFOUR_HMAC_MD5_56 = 24,
  KRB5_ENCTYPE_ENCTYPE_PK_CROSS = 48,
  KRB5_ENCTYPE_ARCFOUR_MD4 = -128,
  KRB5_ENCTYPE_ARCFOUR_HMAC_OLD = -133,
  KRB5_ENCTYPE_ARCFOUR_HMAC_OLD_EXP = -135,
  KRB5_ENCTYPE_DES_CBC_NONE = -4096,
  KRB5_ENCTYPE_DES3_CBC_NONE = -4097,
  KRB5_ENCTYPE_DES_CFB64_NONE = -4098,
  KRB5_ENCTYPE_DES_PCBC_NONE = -4099,
  KRB5_ENCTYPE_DIGEST_MD5_NONE = -4100,
  KRB5_ENCTYPE_CRAM_MD5_NONE = -4101
} ENCTYPE;

ASN1EXP int    ASN1CALL decode_ENCTYPE(const unsigned char *, size_t, ENCTYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_ENCTYPE(unsigned char *, size_t, const ENCTYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_ENCTYPE(const ENCTYPE *);
ASN1EXP int    ASN1CALL copy_ENCTYPE  (const ENCTYPE *, ENCTYPE *);
ASN1EXP void   ASN1CALL free_ENCTYPE  (ENCTYPE *);


/*
KRB5-SRP-GROUP ::= INTEGER {
  KRB5_SRP_GROUP_INVALID(0),
  KRB5_SRP_GROUP_RFC5054_4096_PBKDF2_SHA512(1)
}
*/

typedef enum KRB5_SRP_GROUP {
  KRB5_SRP_GROUP_INVALID = 0,
  KRB5_SRP_GROUP_RFC5054_4096_PBKDF2_SHA512 = 1
} KRB5_SRP_GROUP;

ASN1EXP int    ASN1CALL decode_KRB5_SRP_GROUP(const unsigned char *, size_t, KRB5_SRP_GROUP *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_SRP_GROUP(unsigned char *, size_t, const KRB5_SRP_GROUP *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_SRP_GROUP(const KRB5_SRP_GROUP *);
ASN1EXP int    ASN1CALL copy_KRB5_SRP_GROUP  (const KRB5_SRP_GROUP *, KRB5_SRP_GROUP *);
ASN1EXP void   ASN1CALL free_KRB5_SRP_GROUP  (KRB5_SRP_GROUP *);


/*
krb5uint32 ::= INTEGER (0..-1)
*/

typedef unsigned int krb5uint32;

/*
krb5int32 ::= INTEGER (-2147483648..2147483647)
*/

typedef int krb5int32;

/*
KerberosString ::= GeneralString
*/

typedef heim_general_string KerberosString;

ASN1EXP int    ASN1CALL decode_KerberosString(const unsigned char *, size_t, KerberosString *, size_t *);
ASN1EXP int    ASN1CALL encode_KerberosString(unsigned char *, size_t, const KerberosString *, size_t *);
ASN1EXP size_t ASN1CALL length_KerberosString(const KerberosString *);
ASN1EXP int    ASN1CALL copy_KerberosString  (const KerberosString *, KerberosString *);
ASN1EXP void   ASN1CALL free_KerberosString  (KerberosString *);


/*
Realm ::= GeneralString
*/

typedef heim_general_string Realm;

ASN1EXP int    ASN1CALL decode_Realm(const unsigned char *, size_t, Realm *, size_t *);
ASN1EXP int    ASN1CALL encode_Realm(unsigned char *, size_t, const Realm *, size_t *);
ASN1EXP size_t ASN1CALL length_Realm(const Realm *);
ASN1EXP int    ASN1CALL copy_Realm  (const Realm *, Realm *);
ASN1EXP void   ASN1CALL free_Realm  (Realm *);


/*
PrincipalName ::= SEQUENCE {
  name-type       [0] NAME-TYPE,
  name-string     [1] SEQUENCE OF GeneralString,
}
*/

typedef struct PrincipalName {
  NAME_TYPE name_type;
  struct PrincipalName_name_string {
    unsigned int len;
    heim_general_string *val;
  } name_string;
} PrincipalName;

ASN1EXP int    ASN1CALL decode_PrincipalName(const unsigned char *, size_t, PrincipalName *, size_t *);
ASN1EXP int    ASN1CALL encode_PrincipalName(unsigned char *, size_t, const PrincipalName *, size_t *);
ASN1EXP size_t ASN1CALL length_PrincipalName(const PrincipalName *);
ASN1EXP int    ASN1CALL copy_PrincipalName  (const PrincipalName *, PrincipalName *);
ASN1EXP void   ASN1CALL free_PrincipalName  (PrincipalName *);


/*
Principal ::= SEQUENCE {
  name            [0] PrincipalName,
  realm           [1] Realm,
}
*/

typedef struct Principal {
  PrincipalName name;
  Realm realm;
} Principal;

ASN1EXP int    ASN1CALL decode_Principal(const unsigned char *, size_t, Principal *, size_t *);
ASN1EXP int    ASN1CALL encode_Principal(unsigned char *, size_t, const Principal *, size_t *);
ASN1EXP size_t ASN1CALL length_Principal(const Principal *);
ASN1EXP int    ASN1CALL copy_Principal  (const Principal *, Principal *);
ASN1EXP void   ASN1CALL free_Principal  (Principal *);


/*
Principals ::= SEQUENCE OF Principal
*/

typedef struct Principals {
  unsigned int len;
  Principal *val;
} Principals;

ASN1EXP int   ASN1CALL add_Principals  (Principals *, const Principal *);
ASN1EXP int   ASN1CALL remove_Principals  (Principals *, unsigned int);
ASN1EXP int    ASN1CALL decode_Principals(const unsigned char *, size_t, Principals *, size_t *);
ASN1EXP int    ASN1CALL encode_Principals(unsigned char *, size_t, const Principals *, size_t *);
ASN1EXP size_t ASN1CALL length_Principals(const Principals *);
ASN1EXP int    ASN1CALL copy_Principals  (const Principals *, Principals *);
ASN1EXP void   ASN1CALL free_Principals  (Principals *);


/*
HostAddress ::= SEQUENCE {
  addr-type       [0] krb5int32,
  address         [1] OCTET STRING,
}
*/

typedef struct HostAddress {
  krb5int32 addr_type;
  heim_octet_string address;
} HostAddress;

ASN1EXP int    ASN1CALL decode_HostAddress(const unsigned char *, size_t, HostAddress *, size_t *);
ASN1EXP int    ASN1CALL encode_HostAddress(unsigned char *, size_t, const HostAddress *, size_t *);
ASN1EXP size_t ASN1CALL length_HostAddress(const HostAddress *);
ASN1EXP int    ASN1CALL copy_HostAddress  (const HostAddress *, HostAddress *);
ASN1EXP void   ASN1CALL free_HostAddress  (HostAddress *);


/*
HostAddresses ::= SEQUENCE OF HostAddress
*/

typedef struct HostAddresses {
  unsigned int len;
  HostAddress *val;
} HostAddresses;

ASN1EXP int    ASN1CALL decode_HostAddresses(const unsigned char *, size_t, HostAddresses *, size_t *);
ASN1EXP int    ASN1CALL encode_HostAddresses(unsigned char *, size_t, const HostAddresses *, size_t *);
ASN1EXP size_t ASN1CALL length_HostAddresses(const HostAddresses *);
ASN1EXP int    ASN1CALL copy_HostAddresses  (const HostAddresses *, HostAddresses *);
ASN1EXP void   ASN1CALL free_HostAddresses  (HostAddresses *);


/*
KerberosTime ::= GeneralizedTime
*/

typedef time_t KerberosTime;

ASN1EXP int    ASN1CALL decode_KerberosTime(const unsigned char *, size_t, KerberosTime *, size_t *);
ASN1EXP int    ASN1CALL encode_KerberosTime(unsigned char *, size_t, const KerberosTime *, size_t *);
ASN1EXP size_t ASN1CALL length_KerberosTime(const KerberosTime *);
ASN1EXP int    ASN1CALL copy_KerberosTime  (const KerberosTime *, KerberosTime *);
ASN1EXP void   ASN1CALL free_KerberosTime  (KerberosTime *);


/*
AuthorizationDataElement ::= SEQUENCE {
  ad-type         [0] krb5int32,
  ad-data         [1] OCTET STRING,
}
*/

typedef struct AuthorizationDataElement {
  krb5int32 ad_type;
  heim_octet_string ad_data;
} AuthorizationDataElement;

ASN1EXP int    ASN1CALL decode_AuthorizationDataElement(const unsigned char *, size_t, AuthorizationDataElement *, size_t *);
ASN1EXP int    ASN1CALL encode_AuthorizationDataElement(unsigned char *, size_t, const AuthorizationDataElement *, size_t *);
ASN1EXP size_t ASN1CALL length_AuthorizationDataElement(const AuthorizationDataElement *);
ASN1EXP int    ASN1CALL copy_AuthorizationDataElement  (const AuthorizationDataElement *, AuthorizationDataElement *);
ASN1EXP void   ASN1CALL free_AuthorizationDataElement  (AuthorizationDataElement *);


/*
AuthorizationData ::= SEQUENCE OF AuthorizationDataElement
*/

typedef struct AuthorizationData {
  unsigned int len;
  AuthorizationDataElement *val;
} AuthorizationData;

ASN1EXP int   ASN1CALL add_AuthorizationData  (AuthorizationData *, const AuthorizationDataElement *);
ASN1EXP int   ASN1CALL remove_AuthorizationData  (AuthorizationData *, unsigned int);
ASN1EXP int    ASN1CALL decode_AuthorizationData(const unsigned char *, size_t, AuthorizationData *, size_t *);
ASN1EXP int    ASN1CALL encode_AuthorizationData(unsigned char *, size_t, const AuthorizationData *, size_t *);
ASN1EXP size_t ASN1CALL length_AuthorizationData(const AuthorizationData *);
ASN1EXP int    ASN1CALL copy_AuthorizationData  (const AuthorizationData *, AuthorizationData *);
ASN1EXP void   ASN1CALL free_AuthorizationData  (AuthorizationData *);


/*
APOptions ::= BIT STRING {
  reserved(0),
  use-session-key(1),
  mutual-required(2)
}
*/

typedef struct APOptions {
  unsigned int reserved:1;
  unsigned int use_session_key:1;
  unsigned int mutual_required:1;
  unsigned int _unused3:1;
  unsigned int _unused4:1;
  unsigned int _unused5:1;
  unsigned int _unused6:1;
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
} APOptions;


unsigned APOptions2int(APOptions);
APOptions int2APOptions(unsigned);
extern const struct units *asn1_APOptions_table_units;
#define asn1_APOptions_units() (asn1_APOptions_table_units)
/*
TicketFlags ::= BIT STRING {
  reserved(0),
  forwardable(1),
  forwarded(2),
  proxiable(3),
  proxy(4),
  may-postdate(5),
  postdated(6),
  invalid(7),
  renewable(8),
  initial(9),
  pre-authent(10),
  hw-authent(11),
  transited-policy-checked(12),
  ok-as-delegate(13),
  anonymous(14),
  enc-pa-rep(15)
}
*/

typedef struct TicketFlags {
  unsigned int reserved:1;
  unsigned int forwardable:1;
  unsigned int forwarded:1;
  unsigned int proxiable:1;
  unsigned int proxy:1;
  unsigned int may_postdate:1;
  unsigned int postdated:1;
  unsigned int invalid:1;
  unsigned int renewable:1;
  unsigned int initial:1;
  unsigned int pre_authent:1;
  unsigned int hw_authent:1;
  unsigned int transited_policy_checked:1;
  unsigned int ok_as_delegate:1;
  unsigned int anonymous:1;
  unsigned int enc_pa_rep:1;
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
} TicketFlags;


unsigned TicketFlags2int(TicketFlags);
TicketFlags int2TicketFlags(unsigned);
extern const struct units *asn1_TicketFlags_table_units;
#define asn1_TicketFlags_units() (asn1_TicketFlags_table_units)
ASN1EXP int    ASN1CALL decode_TicketFlags(const unsigned char *, size_t, TicketFlags *, size_t *);
ASN1EXP int    ASN1CALL encode_TicketFlags(unsigned char *, size_t, const TicketFlags *, size_t *);
ASN1EXP size_t ASN1CALL length_TicketFlags(const TicketFlags *);
ASN1EXP int    ASN1CALL copy_TicketFlags  (const TicketFlags *, TicketFlags *);
ASN1EXP void   ASN1CALL free_TicketFlags  (TicketFlags *);


/*
KDCOptions ::= BIT STRING {
  reserved(0),
  forwardable(1),
  forwarded(2),
  proxiable(3),
  proxy(4),
  allow-postdate(5),
  postdated(6),
  renewable(8),
  canonicalize(15),
  request-anonymous(16),
  disable-transited-check(26),
  renewable-ok(27),
  enc-tkt-in-skey(28),
  renew(30),
  validate(31)
}
*/

typedef struct KDCOptions {
  unsigned int reserved:1;
  unsigned int forwardable:1;
  unsigned int forwarded:1;
  unsigned int proxiable:1;
  unsigned int proxy:1;
  unsigned int allow_postdate:1;
  unsigned int postdated:1;
  unsigned int _unused7:1;
  unsigned int renewable:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int _unused14:1;
  unsigned int canonicalize:1;
  unsigned int request_anonymous:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int disable_transited_check:1;
  unsigned int renewable_ok:1;
  unsigned int enc_tkt_in_skey:1;
  unsigned int _unused29:1;
  unsigned int renew:1;
  unsigned int validate:1;
} KDCOptions;


unsigned KDCOptions2int(KDCOptions);
KDCOptions int2KDCOptions(unsigned);
extern const struct units *asn1_KDCOptions_table_units;
#define asn1_KDCOptions_units() (asn1_KDCOptions_table_units)
ASN1EXP int    ASN1CALL decode_KDCOptions(const unsigned char *, size_t, KDCOptions *, size_t *);
ASN1EXP int    ASN1CALL encode_KDCOptions(unsigned char *, size_t, const KDCOptions *, size_t *);
ASN1EXP size_t ASN1CALL length_KDCOptions(const KDCOptions *);
ASN1EXP int    ASN1CALL copy_KDCOptions  (const KDCOptions *, KDCOptions *);
ASN1EXP void   ASN1CALL free_KDCOptions  (KDCOptions *);


/*
LR-TYPE ::= INTEGER {
  LR_NONE(0),
  LR_INITIAL_TGT(1),
  LR_INITIAL(2),
  LR_ISSUE_USE_TGT(3),
  LR_RENEWAL(4),
  LR_REQUEST(5),
  LR_PW_EXPTIME(6),
  LR_ACCT_EXPTIME(7)
}
*/

typedef enum LR_TYPE {
  LR_NONE = 0,
  LR_INITIAL_TGT = 1,
  LR_INITIAL = 2,
  LR_ISSUE_USE_TGT = 3,
  LR_RENEWAL = 4,
  LR_REQUEST = 5,
  LR_PW_EXPTIME = 6,
  LR_ACCT_EXPTIME = 7
} LR_TYPE;

ASN1EXP int    ASN1CALL decode_LR_TYPE(const unsigned char *, size_t, LR_TYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_LR_TYPE(unsigned char *, size_t, const LR_TYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_LR_TYPE(const LR_TYPE *);
ASN1EXP int    ASN1CALL copy_LR_TYPE  (const LR_TYPE *, LR_TYPE *);
ASN1EXP void   ASN1CALL free_LR_TYPE  (LR_TYPE *);


/*
LastReq ::= SEQUENCE OF SEQUENCE {
  lr-type         [0] LR-TYPE,
  lr-value        [1] KerberosTime,
}
*/

typedef struct LastReq {
  unsigned int len;
  struct LastReq_val {
    LR_TYPE lr_type;
    KerberosTime lr_value;
  } *val;
} LastReq;

ASN1EXP int    ASN1CALL decode_LastReq(const unsigned char *, size_t, LastReq *, size_t *);
ASN1EXP int    ASN1CALL encode_LastReq(unsigned char *, size_t, const LastReq *, size_t *);
ASN1EXP size_t ASN1CALL length_LastReq(const LastReq *);
ASN1EXP int    ASN1CALL copy_LastReq  (const LastReq *, LastReq *);
ASN1EXP void   ASN1CALL free_LastReq  (LastReq *);


/*
EncryptedData ::= SEQUENCE {
  etype           [0] ENCTYPE,
  kvno            [1] krb5int32 OPTIONAL,
  cipher          [2] OCTET STRING,
}
*/

typedef struct EncryptedData {
  ENCTYPE etype;
  krb5int32 *kvno;
  heim_octet_string cipher;
} EncryptedData;

ASN1EXP int    ASN1CALL decode_EncryptedData(const unsigned char *, size_t, EncryptedData *, size_t *);
ASN1EXP int    ASN1CALL encode_EncryptedData(unsigned char *, size_t, const EncryptedData *, size_t *);
ASN1EXP size_t ASN1CALL length_EncryptedData(const EncryptedData *);
ASN1EXP int    ASN1CALL copy_EncryptedData  (const EncryptedData *, EncryptedData *);
ASN1EXP void   ASN1CALL free_EncryptedData  (EncryptedData *);


/*
EncryptionKey ::= SEQUENCE {
  keytype         [0] krb5int32,
  keyvalue        [1] OCTET STRING,
}
*/

typedef struct EncryptionKey {
  krb5int32 keytype;
  heim_octet_string keyvalue;
} EncryptionKey;

ASN1EXP int    ASN1CALL decode_EncryptionKey(const unsigned char *, size_t, EncryptionKey *, size_t *);
ASN1EXP int    ASN1CALL encode_EncryptionKey(unsigned char *, size_t, const EncryptionKey *, size_t *);
ASN1EXP size_t ASN1CALL length_EncryptionKey(const EncryptionKey *);
ASN1EXP int    ASN1CALL copy_EncryptionKey  (const EncryptionKey *, EncryptionKey *);
ASN1EXP void   ASN1CALL free_EncryptionKey  (EncryptionKey *);


/*
TransitedEncoding ::= SEQUENCE {
  tr-type         [0] krb5int32,
  contents        [1] OCTET STRING,
}
*/

typedef struct TransitedEncoding {
  krb5int32 tr_type;
  heim_octet_string contents;
} TransitedEncoding;

ASN1EXP int    ASN1CALL decode_TransitedEncoding(const unsigned char *, size_t, TransitedEncoding *, size_t *);
ASN1EXP int    ASN1CALL encode_TransitedEncoding(unsigned char *, size_t, const TransitedEncoding *, size_t *);
ASN1EXP size_t ASN1CALL length_TransitedEncoding(const TransitedEncoding *);
ASN1EXP int    ASN1CALL copy_TransitedEncoding  (const TransitedEncoding *, TransitedEncoding *);
ASN1EXP void   ASN1CALL free_TransitedEncoding  (TransitedEncoding *);


/*
Ticket ::= [APPLICATION 1] SEQUENCE {
  tkt-vno         [0] krb5int32,
  realm           [1] Realm,
  sname           [2] PrincipalName,
  enc-part        [3] EncryptedData,
}
*/

typedef struct Ticket {
  krb5int32 tkt_vno;
  Realm realm;
  PrincipalName sname;
  EncryptedData enc_part;
} Ticket;

ASN1EXP int    ASN1CALL decode_Ticket(const unsigned char *, size_t, Ticket *, size_t *);
ASN1EXP int    ASN1CALL encode_Ticket(unsigned char *, size_t, const Ticket *, size_t *);
ASN1EXP size_t ASN1CALL length_Ticket(const Ticket *);
ASN1EXP int    ASN1CALL copy_Ticket  (const Ticket *, Ticket *);
ASN1EXP void   ASN1CALL free_Ticket  (Ticket *);


/*
EncTicketPart ::= [APPLICATION 3] SEQUENCE {
  flags                [0] TicketFlags,
  key                  [1] EncryptionKey,
  crealm               [2] Realm,
  cname                [3] PrincipalName,
  transited            [4] TransitedEncoding,
  authtime             [5] KerberosTime,
  starttime            [6] KerberosTime OPTIONAL,
  endtime              [7] KerberosTime,
  renew-till           [8] KerberosTime OPTIONAL,
  caddr                [9] HostAddresses OPTIONAL,
  authorization-data   [10] AuthorizationData OPTIONAL,
}
*/

typedef struct EncTicketPart {
  TicketFlags flags;
  EncryptionKey key;
  Realm crealm;
  PrincipalName cname;
  TransitedEncoding transited;
  KerberosTime authtime;
  KerberosTime *starttime;
  KerberosTime endtime;
  KerberosTime *renew_till;
  HostAddresses *caddr;
  AuthorizationData *authorization_data;
} EncTicketPart;

ASN1EXP int    ASN1CALL decode_EncTicketPart(const unsigned char *, size_t, EncTicketPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncTicketPart(unsigned char *, size_t, const EncTicketPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncTicketPart(const EncTicketPart *);
ASN1EXP int    ASN1CALL copy_EncTicketPart  (const EncTicketPart *, EncTicketPart *);
ASN1EXP void   ASN1CALL free_EncTicketPart  (EncTicketPart *);


/*
Checksum ::= SEQUENCE {
  cksumtype       [0] CKSUMTYPE,
  checksum        [1] OCTET STRING,
}
*/

typedef struct Checksum {
  CKSUMTYPE cksumtype;
  heim_octet_string checksum;
} Checksum;

ASN1EXP int    ASN1CALL decode_Checksum(const unsigned char *, size_t, Checksum *, size_t *);
ASN1EXP int    ASN1CALL encode_Checksum(unsigned char *, size_t, const Checksum *, size_t *);
ASN1EXP size_t ASN1CALL length_Checksum(const Checksum *);
ASN1EXP int    ASN1CALL copy_Checksum  (const Checksum *, Checksum *);
ASN1EXP void   ASN1CALL free_Checksum  (Checksum *);


/*
Authenticator ::= [APPLICATION 2] SEQUENCE {
  authenticator-vno    [0] krb5int32,
  crealm               [1] Realm,
  cname                [2] PrincipalName,
  cksum                [3] Checksum OPTIONAL,
  cusec                [4] krb5int32,
  ctime                [5] KerberosTime,
  subkey               [6] EncryptionKey OPTIONAL,
  seq-number           [7] krb5uint32 OPTIONAL,
  authorization-data   [8] AuthorizationData OPTIONAL,
}
*/

typedef struct Authenticator {
  krb5int32 authenticator_vno;
  Realm crealm;
  PrincipalName cname;
  Checksum *cksum;
  krb5int32 cusec;
  KerberosTime ctime;
  EncryptionKey *subkey;
  krb5uint32 *seq_number;
  AuthorizationData *authorization_data;
} Authenticator;

ASN1EXP int    ASN1CALL decode_Authenticator(const unsigned char *, size_t, Authenticator *, size_t *);
ASN1EXP int    ASN1CALL encode_Authenticator(unsigned char *, size_t, const Authenticator *, size_t *);
ASN1EXP size_t ASN1CALL length_Authenticator(const Authenticator *);
ASN1EXP int    ASN1CALL copy_Authenticator  (const Authenticator *, Authenticator *);
ASN1EXP void   ASN1CALL free_Authenticator  (Authenticator *);


/*
PA-DATA ::= SEQUENCE {
  padata-type     [1] PADATA-TYPE,
  padata-value    [2] OCTET STRING,
}
*/

typedef struct PA_DATA {
  PADATA_TYPE padata_type;
  heim_octet_string padata_value;
} PA_DATA;

ASN1EXP int    ASN1CALL decode_PA_DATA(const unsigned char *, size_t, PA_DATA *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_DATA(unsigned char *, size_t, const PA_DATA *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_DATA(const PA_DATA *);
ASN1EXP int    ASN1CALL copy_PA_DATA  (const PA_DATA *, PA_DATA *);
ASN1EXP void   ASN1CALL free_PA_DATA  (PA_DATA *);


/*
ETYPE-INFO-ENTRY ::= SEQUENCE {
  etype           [0] ENCTYPE,
  salt            [1] OCTET STRING OPTIONAL,
  salttype        [2] krb5int32 OPTIONAL,
}
*/

typedef struct ETYPE_INFO_ENTRY {
  ENCTYPE etype;
  heim_octet_string *salt;
  krb5int32 *salttype;
} ETYPE_INFO_ENTRY;

ASN1EXP int    ASN1CALL decode_ETYPE_INFO_ENTRY(const unsigned char *, size_t, ETYPE_INFO_ENTRY *, size_t *);
ASN1EXP int    ASN1CALL encode_ETYPE_INFO_ENTRY(unsigned char *, size_t, const ETYPE_INFO_ENTRY *, size_t *);
ASN1EXP size_t ASN1CALL length_ETYPE_INFO_ENTRY(const ETYPE_INFO_ENTRY *);
ASN1EXP int    ASN1CALL copy_ETYPE_INFO_ENTRY  (const ETYPE_INFO_ENTRY *, ETYPE_INFO_ENTRY *);
ASN1EXP void   ASN1CALL free_ETYPE_INFO_ENTRY  (ETYPE_INFO_ENTRY *);


/*
ETYPE-INFO ::= SEQUENCE OF ETYPE-INFO-ENTRY
*/

typedef struct ETYPE_INFO {
  unsigned int len;
  ETYPE_INFO_ENTRY *val;
} ETYPE_INFO;

ASN1EXP int   ASN1CALL add_ETYPE_INFO  (ETYPE_INFO *, const ETYPE_INFO_ENTRY *);
ASN1EXP int   ASN1CALL remove_ETYPE_INFO  (ETYPE_INFO *, unsigned int);
ASN1EXP int    ASN1CALL decode_ETYPE_INFO(const unsigned char *, size_t, ETYPE_INFO *, size_t *);
ASN1EXP int    ASN1CALL encode_ETYPE_INFO(unsigned char *, size_t, const ETYPE_INFO *, size_t *);
ASN1EXP size_t ASN1CALL length_ETYPE_INFO(const ETYPE_INFO *);
ASN1EXP int    ASN1CALL copy_ETYPE_INFO  (const ETYPE_INFO *, ETYPE_INFO *);
ASN1EXP void   ASN1CALL free_ETYPE_INFO  (ETYPE_INFO *);


/*
ETYPE-INFO2-ENTRY ::= SEQUENCE {
  etype           [0] ENCTYPE,
  salt            [1] KerberosString OPTIONAL,
  s2kparams       [2] OCTET STRING OPTIONAL,
}
*/

typedef struct ETYPE_INFO2_ENTRY {
  ENCTYPE etype;
  KerberosString *salt;
  heim_octet_string *s2kparams;
} ETYPE_INFO2_ENTRY;

ASN1EXP int    ASN1CALL decode_ETYPE_INFO2_ENTRY(const unsigned char *, size_t, ETYPE_INFO2_ENTRY *, size_t *);
ASN1EXP int    ASN1CALL encode_ETYPE_INFO2_ENTRY(unsigned char *, size_t, const ETYPE_INFO2_ENTRY *, size_t *);
ASN1EXP size_t ASN1CALL length_ETYPE_INFO2_ENTRY(const ETYPE_INFO2_ENTRY *);
ASN1EXP int    ASN1CALL copy_ETYPE_INFO2_ENTRY  (const ETYPE_INFO2_ENTRY *, ETYPE_INFO2_ENTRY *);
ASN1EXP void   ASN1CALL free_ETYPE_INFO2_ENTRY  (ETYPE_INFO2_ENTRY *);


/*
ETYPE-INFO2 ::= SEQUENCE OF ETYPE-INFO2-ENTRY
*/

typedef struct ETYPE_INFO2 {
  unsigned int len;
  ETYPE_INFO2_ENTRY *val;
} ETYPE_INFO2;

ASN1EXP int   ASN1CALL add_ETYPE_INFO2  (ETYPE_INFO2 *, const ETYPE_INFO2_ENTRY *);
ASN1EXP int   ASN1CALL remove_ETYPE_INFO2  (ETYPE_INFO2 *, unsigned int);
ASN1EXP int    ASN1CALL decode_ETYPE_INFO2(const unsigned char *, size_t, ETYPE_INFO2 *, size_t *);
ASN1EXP int    ASN1CALL encode_ETYPE_INFO2(unsigned char *, size_t, const ETYPE_INFO2 *, size_t *);
ASN1EXP size_t ASN1CALL length_ETYPE_INFO2(const ETYPE_INFO2 *);
ASN1EXP int    ASN1CALL copy_ETYPE_INFO2  (const ETYPE_INFO2 *, ETYPE_INFO2 *);
ASN1EXP void   ASN1CALL free_ETYPE_INFO2  (ETYPE_INFO2 *);


/*
METHOD-DATA ::= SEQUENCE OF PA-DATA
*/

typedef struct METHOD_DATA {
  unsigned int len;
  PA_DATA *val;
} METHOD_DATA;

ASN1EXP int   ASN1CALL add_METHOD_DATA  (METHOD_DATA *, const PA_DATA *);
ASN1EXP int   ASN1CALL remove_METHOD_DATA  (METHOD_DATA *, unsigned int);
ASN1EXP int    ASN1CALL decode_METHOD_DATA(const unsigned char *, size_t, METHOD_DATA *, size_t *);
ASN1EXP int    ASN1CALL encode_METHOD_DATA(unsigned char *, size_t, const METHOD_DATA *, size_t *);
ASN1EXP size_t ASN1CALL length_METHOD_DATA(const METHOD_DATA *);
ASN1EXP int    ASN1CALL copy_METHOD_DATA  (const METHOD_DATA *, METHOD_DATA *);
ASN1EXP void   ASN1CALL free_METHOD_DATA  (METHOD_DATA *);


/*
TypedData ::= SEQUENCE {
  data-type       [0] krb5int32,
  data-value      [1] OCTET STRING OPTIONAL,
}
*/

typedef struct TypedData {
  krb5int32 data_type;
  heim_octet_string *data_value;
} TypedData;

ASN1EXP int    ASN1CALL decode_TypedData(const unsigned char *, size_t, TypedData *, size_t *);
ASN1EXP int    ASN1CALL encode_TypedData(unsigned char *, size_t, const TypedData *, size_t *);
ASN1EXP size_t ASN1CALL length_TypedData(const TypedData *);
ASN1EXP int    ASN1CALL copy_TypedData  (const TypedData *, TypedData *);
ASN1EXP void   ASN1CALL free_TypedData  (TypedData *);


/*
TYPED-DATA ::= SEQUENCE OF TypedData
*/

typedef struct TYPED_DATA {
  unsigned int len;
  TypedData *val;
} TYPED_DATA;

ASN1EXP int    ASN1CALL decode_TYPED_DATA(const unsigned char *, size_t, TYPED_DATA *, size_t *);
ASN1EXP int    ASN1CALL encode_TYPED_DATA(unsigned char *, size_t, const TYPED_DATA *, size_t *);
ASN1EXP size_t ASN1CALL length_TYPED_DATA(const TYPED_DATA *);
ASN1EXP int    ASN1CALL copy_TYPED_DATA  (const TYPED_DATA *, TYPED_DATA *);
ASN1EXP void   ASN1CALL free_TYPED_DATA  (TYPED_DATA *);


/*
KDC-REQ-BODY ::= SEQUENCE {
  kdc-options              [0] KDCOptions,
  cname                    [1] PrincipalName OPTIONAL,
  realm                    [2] Realm,
  sname                    [3] PrincipalName OPTIONAL,
  from                     [4] KerberosTime OPTIONAL,
  till                     [5] KerberosTime OPTIONAL,
  rtime                    [6] KerberosTime OPTIONAL,
  nonce                    [7] krb5int32,
  etype                    [8] SEQUENCE OF ENCTYPE,
  addresses                [9] HostAddresses OPTIONAL,
  enc-authorization-data   [10] EncryptedData OPTIONAL,
  additional-tickets       [11] SEQUENCE OF Ticket OPTIONAL,
}
*/

typedef struct KDC_REQ_BODY {
  KDCOptions kdc_options;
  PrincipalName *cname;
  Realm realm;
  PrincipalName *sname;
  KerberosTime *from;
  KerberosTime *till;
  KerberosTime *rtime;
  krb5int32 nonce;
  struct KDC_REQ_BODY_etype {
    unsigned int len;
    ENCTYPE *val;
  } etype;
  HostAddresses *addresses;
  EncryptedData *enc_authorization_data;
  struct KDC_REQ_BODY_additional_tickets {
    unsigned int len;
    Ticket *val;
  } *additional_tickets;
} KDC_REQ_BODY;

ASN1EXP int    ASN1CALL decode_KDC_REQ_BODY(const unsigned char *, size_t, KDC_REQ_BODY *, size_t *);
ASN1EXP int    ASN1CALL encode_KDC_REQ_BODY(unsigned char *, size_t, const KDC_REQ_BODY *, size_t *);
ASN1EXP size_t ASN1CALL length_KDC_REQ_BODY(const KDC_REQ_BODY *);
ASN1EXP int    ASN1CALL copy_KDC_REQ_BODY  (const KDC_REQ_BODY *, KDC_REQ_BODY *);
ASN1EXP void   ASN1CALL free_KDC_REQ_BODY  (KDC_REQ_BODY *);


/*
KDC-REQ ::= SEQUENCE {
  pvno            [1] krb5int32,
  msg-type        [2] MESSAGE-TYPE,
  padata          [3] METHOD-DATA OPTIONAL,
  req-body        [4] KDC-REQ-BODY,
}
*/

typedef struct KDC_REQ {
  krb5int32 pvno;
  MESSAGE_TYPE msg_type;
  METHOD_DATA *padata;
  KDC_REQ_BODY req_body;
} KDC_REQ;

/*
AS-REQ ::= [APPLICATION 10] KDC-REQ
*/

typedef KDC_REQ AS_REQ;

ASN1EXP int    ASN1CALL decode_AS_REQ(const unsigned char *, size_t, AS_REQ *, size_t *);
ASN1EXP int    ASN1CALL encode_AS_REQ(unsigned char *, size_t, const AS_REQ *, size_t *);
ASN1EXP size_t ASN1CALL length_AS_REQ(const AS_REQ *);
ASN1EXP int    ASN1CALL copy_AS_REQ  (const AS_REQ *, AS_REQ *);
ASN1EXP void   ASN1CALL free_AS_REQ  (AS_REQ *);


/*
TGS-REQ ::= [APPLICATION 12] KDC-REQ
*/

typedef KDC_REQ TGS_REQ;

ASN1EXP int    ASN1CALL decode_TGS_REQ(const unsigned char *, size_t, TGS_REQ *, size_t *);
ASN1EXP int    ASN1CALL encode_TGS_REQ(unsigned char *, size_t, const TGS_REQ *, size_t *);
ASN1EXP size_t ASN1CALL length_TGS_REQ(const TGS_REQ *);
ASN1EXP int    ASN1CALL copy_TGS_REQ  (const TGS_REQ *, TGS_REQ *);
ASN1EXP void   ASN1CALL free_TGS_REQ  (TGS_REQ *);


/*
PA-ENC-TS-ENC ::= SEQUENCE {
  patimestamp     [0] KerberosTime,
  pausec          [1] krb5int32 OPTIONAL,
}
*/

typedef struct PA_ENC_TS_ENC {
  KerberosTime patimestamp;
  krb5int32 *pausec;
} PA_ENC_TS_ENC;

ASN1EXP int    ASN1CALL decode_PA_ENC_TS_ENC(const unsigned char *, size_t, PA_ENC_TS_ENC *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_ENC_TS_ENC(unsigned char *, size_t, const PA_ENC_TS_ENC *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_ENC_TS_ENC(const PA_ENC_TS_ENC *);
ASN1EXP int    ASN1CALL copy_PA_ENC_TS_ENC  (const PA_ENC_TS_ENC *, PA_ENC_TS_ENC *);
ASN1EXP void   ASN1CALL free_PA_ENC_TS_ENC  (PA_ENC_TS_ENC *);


/*
PA-PAC-REQUEST ::= SEQUENCE {
  include-pac     [0] BOOLEAN,
}
*/

typedef struct PA_PAC_REQUEST {
  int include_pac;
} PA_PAC_REQUEST;

ASN1EXP int    ASN1CALL decode_PA_PAC_REQUEST(const unsigned char *, size_t, PA_PAC_REQUEST *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_PAC_REQUEST(unsigned char *, size_t, const PA_PAC_REQUEST *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_PAC_REQUEST(const PA_PAC_REQUEST *);
ASN1EXP int    ASN1CALL copy_PA_PAC_REQUEST  (const PA_PAC_REQUEST *, PA_PAC_REQUEST *);
ASN1EXP void   ASN1CALL free_PA_PAC_REQUEST  (PA_PAC_REQUEST *);


/*
KRB5-PFS-GROUP ::= INTEGER {
  KRB5_PFS_INVALID(0),
  KRB5_PFS_NIST_P256(1),
  KRB5_PFS_X25519(2)
}
*/

typedef enum KRB5_PFS_GROUP {
  KRB5_PFS_INVALID = 0,
  KRB5_PFS_NIST_P256 = 1,
  KRB5_PFS_X25519 = 2
} KRB5_PFS_GROUP;

/*
KRB5-PFS-SELECTION ::= SEQUENCE {
  group           [0] KRB5-PFS-GROUP,
  public-key      [1] OCTET STRING,
}
*/

typedef struct KRB5_PFS_SELECTION {
  KRB5_PFS_GROUP group;
  heim_octet_string public_key;
} KRB5_PFS_SELECTION;

ASN1EXP int    ASN1CALL decode_KRB5_PFS_SELECTION(const unsigned char *, size_t, KRB5_PFS_SELECTION *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_PFS_SELECTION(unsigned char *, size_t, const KRB5_PFS_SELECTION *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_PFS_SELECTION(const KRB5_PFS_SELECTION *);
ASN1EXP int    ASN1CALL copy_KRB5_PFS_SELECTION  (const KRB5_PFS_SELECTION *, KRB5_PFS_SELECTION *);
ASN1EXP void   ASN1CALL free_KRB5_PFS_SELECTION  (KRB5_PFS_SELECTION *);


/*
KRB5-PFS-SELECTIONS ::= SEQUENCE OF KRB5-PFS-SELECTION
*/

typedef struct KRB5_PFS_SELECTIONS {
  unsigned int len;
  KRB5_PFS_SELECTION *val;
} KRB5_PFS_SELECTIONS;

ASN1EXP int   ASN1CALL add_KRB5_PFS_SELECTIONS  (KRB5_PFS_SELECTIONS *, const KRB5_PFS_SELECTION *);
ASN1EXP int   ASN1CALL remove_KRB5_PFS_SELECTIONS  (KRB5_PFS_SELECTIONS *, unsigned int);
ASN1EXP int    ASN1CALL decode_KRB5_PFS_SELECTIONS(const unsigned char *, size_t, KRB5_PFS_SELECTIONS *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_PFS_SELECTIONS(unsigned char *, size_t, const KRB5_PFS_SELECTIONS *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_PFS_SELECTIONS(const KRB5_PFS_SELECTIONS *);
ASN1EXP int    ASN1CALL copy_KRB5_PFS_SELECTIONS  (const KRB5_PFS_SELECTIONS *, KRB5_PFS_SELECTIONS *);
ASN1EXP void   ASN1CALL free_KRB5_PFS_SELECTIONS  (KRB5_PFS_SELECTIONS *);


/*
KRB5-PFS-PROPOSE ::= SEQUENCE {
  checksum        [0] Checksum OPTIONAL,
  selections      [1] KRB5-PFS-SELECTIONS,
}
*/

typedef struct KRB5_PFS_PROPOSE {
  Checksum *checksum;
  KRB5_PFS_SELECTIONS selections;
} KRB5_PFS_PROPOSE;

ASN1EXP int    ASN1CALL decode_KRB5_PFS_PROPOSE(const unsigned char *, size_t, KRB5_PFS_PROPOSE *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_PFS_PROPOSE(unsigned char *, size_t, const KRB5_PFS_PROPOSE *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_PFS_PROPOSE(const KRB5_PFS_PROPOSE *);
ASN1EXP int    ASN1CALL copy_KRB5_PFS_PROPOSE  (const KRB5_PFS_PROPOSE *, KRB5_PFS_PROPOSE *);
ASN1EXP void   ASN1CALL free_KRB5_PFS_PROPOSE  (KRB5_PFS_PROPOSE *);


/*
KRB5-PFS-ACCEPT ::= SEQUENCE {
  checksum        [0] Checksum OPTIONAL,
  selection       [1] KRB5-PFS-SELECTION,
}
*/

typedef struct KRB5_PFS_ACCEPT {
  Checksum *checksum;
  KRB5_PFS_SELECTION selection;
} KRB5_PFS_ACCEPT;

ASN1EXP int    ASN1CALL decode_KRB5_PFS_ACCEPT(const unsigned char *, size_t, KRB5_PFS_ACCEPT *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_PFS_ACCEPT(unsigned char *, size_t, const KRB5_PFS_ACCEPT *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_PFS_ACCEPT(const KRB5_PFS_ACCEPT *);
ASN1EXP int    ASN1CALL copy_KRB5_PFS_ACCEPT  (const KRB5_PFS_ACCEPT *, KRB5_PFS_ACCEPT *);
ASN1EXP void   ASN1CALL free_KRB5_PFS_ACCEPT  (KRB5_PFS_ACCEPT *);


/*
KRB5-PFS-ERROR ::= SEQUENCE {
  groups          [0] SEQUENCE OF KRB5-PFS-GROUP,
}
*/

typedef struct KRB5_PFS_ERROR {
  struct KRB5_PFS_ERROR_groups {
    unsigned int len;
    KRB5_PFS_GROUP *val;
  } groups;
} KRB5_PFS_ERROR;

ASN1EXP int    ASN1CALL decode_KRB5_PFS_ERROR(const unsigned char *, size_t, KRB5_PFS_ERROR *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_PFS_ERROR(unsigned char *, size_t, const KRB5_PFS_ERROR *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_PFS_ERROR(const KRB5_PFS_ERROR *);
ASN1EXP int    ASN1CALL copy_KRB5_PFS_ERROR  (const KRB5_PFS_ERROR *, KRB5_PFS_ERROR *);
ASN1EXP void   ASN1CALL free_KRB5_PFS_ERROR  (KRB5_PFS_ERROR *);


/*
PROV-SRV-LOCATION ::= GeneralString
*/

typedef heim_general_string PROV_SRV_LOCATION;

ASN1EXP int    ASN1CALL decode_PROV_SRV_LOCATION(const unsigned char *, size_t, PROV_SRV_LOCATION *, size_t *);
ASN1EXP int    ASN1CALL encode_PROV_SRV_LOCATION(unsigned char *, size_t, const PROV_SRV_LOCATION *, size_t *);
ASN1EXP size_t ASN1CALL length_PROV_SRV_LOCATION(const PROV_SRV_LOCATION *);
ASN1EXP int    ASN1CALL copy_PROV_SRV_LOCATION  (const PROV_SRV_LOCATION *, PROV_SRV_LOCATION *);
ASN1EXP void   ASN1CALL free_PROV_SRV_LOCATION  (PROV_SRV_LOCATION *);


/*
KDC-REP ::= SEQUENCE {
  pvno            [0] krb5int32,
  msg-type        [1] MESSAGE-TYPE,
  padata          [2] METHOD-DATA OPTIONAL,
  crealm          [3] Realm,
  cname           [4] PrincipalName,
  ticket          [5] Ticket,
  enc-part        [6] EncryptedData,
}
*/

typedef struct KDC_REP {
  krb5int32 pvno;
  MESSAGE_TYPE msg_type;
  METHOD_DATA *padata;
  Realm crealm;
  PrincipalName cname;
  Ticket ticket;
  EncryptedData enc_part;
} KDC_REP;

ASN1EXP int    ASN1CALL decode_KDC_REP(const unsigned char *, size_t, KDC_REP *, size_t *);
ASN1EXP int    ASN1CALL encode_KDC_REP(unsigned char *, size_t, const KDC_REP *, size_t *);
ASN1EXP size_t ASN1CALL length_KDC_REP(const KDC_REP *);
ASN1EXP int    ASN1CALL copy_KDC_REP  (const KDC_REP *, KDC_REP *);
ASN1EXP void   ASN1CALL free_KDC_REP  (KDC_REP *);


/*
AS-REP ::= [APPLICATION 11] KDC-REP
*/

typedef KDC_REP AS_REP;

ASN1EXP int    ASN1CALL decode_AS_REP(const unsigned char *, size_t, AS_REP *, size_t *);
ASN1EXP int    ASN1CALL encode_AS_REP(unsigned char *, size_t, const AS_REP *, size_t *);
ASN1EXP size_t ASN1CALL length_AS_REP(const AS_REP *);
ASN1EXP int    ASN1CALL copy_AS_REP  (const AS_REP *, AS_REP *);
ASN1EXP void   ASN1CALL free_AS_REP  (AS_REP *);


/*
TGS-REP ::= [APPLICATION 13] KDC-REP
*/

typedef KDC_REP TGS_REP;

ASN1EXP int    ASN1CALL decode_TGS_REP(const unsigned char *, size_t, TGS_REP *, size_t *);
ASN1EXP int    ASN1CALL encode_TGS_REP(unsigned char *, size_t, const TGS_REP *, size_t *);
ASN1EXP size_t ASN1CALL length_TGS_REP(const TGS_REP *);
ASN1EXP int    ASN1CALL copy_TGS_REP  (const TGS_REP *, TGS_REP *);
ASN1EXP void   ASN1CALL free_TGS_REP  (TGS_REP *);


/*
EncKDCRepPart ::= SEQUENCE {
  key                 [0] EncryptionKey,
  last-req            [1] LastReq,
  nonce               [2] krb5int32,
  key-expiration      [3] KerberosTime OPTIONAL,
  flags               [4] TicketFlags,
  authtime            [5] KerberosTime,
  starttime           [6] KerberosTime OPTIONAL,
  endtime             [7] KerberosTime,
  renew-till          [8] KerberosTime OPTIONAL,
  srealm              [9] Realm,
  sname               [10] PrincipalName,
  caddr               [11] HostAddresses OPTIONAL,
  encrypted-pa-data   [12] METHOD-DATA OPTIONAL,
}
*/

typedef struct EncKDCRepPart {
  EncryptionKey key;
  LastReq last_req;
  krb5int32 nonce;
  KerberosTime *key_expiration;
  TicketFlags flags;
  KerberosTime authtime;
  KerberosTime *starttime;
  KerberosTime endtime;
  KerberosTime *renew_till;
  Realm srealm;
  PrincipalName sname;
  HostAddresses *caddr;
  METHOD_DATA *encrypted_pa_data;
} EncKDCRepPart;

ASN1EXP int    ASN1CALL decode_EncKDCRepPart(const unsigned char *, size_t, EncKDCRepPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncKDCRepPart(unsigned char *, size_t, const EncKDCRepPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncKDCRepPart(const EncKDCRepPart *);
ASN1EXP int    ASN1CALL copy_EncKDCRepPart  (const EncKDCRepPart *, EncKDCRepPart *);
ASN1EXP void   ASN1CALL free_EncKDCRepPart  (EncKDCRepPart *);


/*
EncASRepPart ::= [APPLICATION 25] EncKDCRepPart
*/

typedef EncKDCRepPart EncASRepPart;

ASN1EXP int    ASN1CALL decode_EncASRepPart(const unsigned char *, size_t, EncASRepPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncASRepPart(unsigned char *, size_t, const EncASRepPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncASRepPart(const EncASRepPart *);
ASN1EXP int    ASN1CALL copy_EncASRepPart  (const EncASRepPart *, EncASRepPart *);
ASN1EXP void   ASN1CALL free_EncASRepPart  (EncASRepPart *);


/*
EncTGSRepPart ::= [APPLICATION 26] EncKDCRepPart
*/

typedef EncKDCRepPart EncTGSRepPart;

ASN1EXP int    ASN1CALL decode_EncTGSRepPart(const unsigned char *, size_t, EncTGSRepPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncTGSRepPart(unsigned char *, size_t, const EncTGSRepPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncTGSRepPart(const EncTGSRepPart *);
ASN1EXP int    ASN1CALL copy_EncTGSRepPart  (const EncTGSRepPart *, EncTGSRepPart *);
ASN1EXP void   ASN1CALL free_EncTGSRepPart  (EncTGSRepPart *);


/*
AP-REQ ::= [APPLICATION 14] SEQUENCE {
  pvno            [0] krb5int32,
  msg-type        [1] MESSAGE-TYPE,
  ap-options      [2] APOptions,
  ticket          [3] Ticket,
  authenticator   [4] EncryptedData,
}
*/

typedef struct AP_REQ {
  krb5int32 pvno;
  MESSAGE_TYPE msg_type;
  APOptions ap_options;
  Ticket ticket;
  EncryptedData authenticator;
} AP_REQ;

ASN1EXP int    ASN1CALL decode_AP_REQ(const unsigned char *, size_t, AP_REQ *, size_t *);
ASN1EXP int    ASN1CALL encode_AP_REQ(unsigned char *, size_t, const AP_REQ *, size_t *);
ASN1EXP size_t ASN1CALL length_AP_REQ(const AP_REQ *);
ASN1EXP int    ASN1CALL copy_AP_REQ  (const AP_REQ *, AP_REQ *);
ASN1EXP void   ASN1CALL free_AP_REQ  (AP_REQ *);


/*
AP-REP ::= [APPLICATION 15] SEQUENCE {
  pvno            [0] krb5int32,
  msg-type        [1] MESSAGE-TYPE,
  enc-part        [2] EncryptedData,
  pfs             [3] KRB5-PFS-ACCEPT OPTIONAL,
}
*/

typedef struct AP_REP {
  krb5int32 pvno;
  MESSAGE_TYPE msg_type;
  EncryptedData enc_part;
  KRB5_PFS_ACCEPT *pfs;
} AP_REP;

ASN1EXP int    ASN1CALL decode_AP_REP(const unsigned char *, size_t, AP_REP *, size_t *);
ASN1EXP int    ASN1CALL encode_AP_REP(unsigned char *, size_t, const AP_REP *, size_t *);
ASN1EXP size_t ASN1CALL length_AP_REP(const AP_REP *);
ASN1EXP int    ASN1CALL copy_AP_REP  (const AP_REP *, AP_REP *);
ASN1EXP void   ASN1CALL free_AP_REP  (AP_REP *);


/*
EncAPRepPart ::= [APPLICATION 27] SEQUENCE {
  ctime           [0] KerberosTime,
  cusec           [1] krb5int32,
  subkey          [2] EncryptionKey OPTIONAL,
  seq-number      [3] krb5uint32 OPTIONAL,
}
*/

typedef struct EncAPRepPart {
  KerberosTime ctime;
  krb5int32 cusec;
  EncryptionKey *subkey;
  krb5uint32 *seq_number;
} EncAPRepPart;

ASN1EXP int    ASN1CALL decode_EncAPRepPart(const unsigned char *, size_t, EncAPRepPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncAPRepPart(unsigned char *, size_t, const EncAPRepPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncAPRepPart(const EncAPRepPart *);
ASN1EXP int    ASN1CALL copy_EncAPRepPart  (const EncAPRepPart *, EncAPRepPart *);
ASN1EXP void   ASN1CALL free_EncAPRepPart  (EncAPRepPart *);


/*
KRB-SAFE-BODY ::= SEQUENCE {
  user-data       [0] OCTET STRING,
  timestamp       [1] KerberosTime OPTIONAL,
  usec            [2] krb5int32 OPTIONAL,
  seq-number      [3] krb5uint32 OPTIONAL,
  s-address       [4] HostAddress OPTIONAL,
  r-address       [5] HostAddress OPTIONAL,
}
*/

typedef struct KRB_SAFE_BODY {
  heim_octet_string user_data;
  KerberosTime *timestamp;
  krb5int32 *usec;
  krb5uint32 *seq_number;
  HostAddress *s_address;
  HostAddress *r_address;
} KRB_SAFE_BODY;

ASN1EXP int    ASN1CALL decode_KRB_SAFE_BODY(const unsigned char *, size_t, KRB_SAFE_BODY *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB_SAFE_BODY(unsigned char *, size_t, const KRB_SAFE_BODY *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB_SAFE_BODY(const KRB_SAFE_BODY *);
ASN1EXP int    ASN1CALL copy_KRB_SAFE_BODY  (const KRB_SAFE_BODY *, KRB_SAFE_BODY *);
ASN1EXP void   ASN1CALL free_KRB_SAFE_BODY  (KRB_SAFE_BODY *);


/*
KRB-SAFE ::= [APPLICATION 20] SEQUENCE {
  pvno            [0] krb5int32,
  msg-type        [1] MESSAGE-TYPE,
  safe-body       [2] KRB-SAFE-BODY,
  cksum           [3] Checksum,
}
*/

typedef struct KRB_SAFE {
  krb5int32 pvno;
  MESSAGE_TYPE msg_type;
  KRB_SAFE_BODY safe_body;
  Checksum cksum;
} KRB_SAFE;

ASN1EXP int    ASN1CALL decode_KRB_SAFE(const unsigned char *, size_t, KRB_SAFE *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB_SAFE(unsigned char *, size_t, const KRB_SAFE *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB_SAFE(const KRB_SAFE *);
ASN1EXP int    ASN1CALL copy_KRB_SAFE  (const KRB_SAFE *, KRB_SAFE *);
ASN1EXP void   ASN1CALL free_KRB_SAFE  (KRB_SAFE *);


/*
KRB-PRIV ::= [APPLICATION 21] SEQUENCE {
  pvno            [0] krb5int32,
  msg-type        [1] MESSAGE-TYPE,
  enc-part        [3] EncryptedData,
}
*/

typedef struct KRB_PRIV {
  krb5int32 pvno;
  MESSAGE_TYPE msg_type;
  EncryptedData enc_part;
} KRB_PRIV;

ASN1EXP int    ASN1CALL decode_KRB_PRIV(const unsigned char *, size_t, KRB_PRIV *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB_PRIV(unsigned char *, size_t, const KRB_PRIV *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB_PRIV(const KRB_PRIV *);
ASN1EXP int    ASN1CALL copy_KRB_PRIV  (const KRB_PRIV *, KRB_PRIV *);
ASN1EXP void   ASN1CALL free_KRB_PRIV  (KRB_PRIV *);


/*
EncKrbPrivPart ::= [APPLICATION 28] SEQUENCE {
  user-data       [0] OCTET STRING,
  timestamp       [1] KerberosTime OPTIONAL,
  usec            [2] krb5int32 OPTIONAL,
  seq-number      [3] krb5uint32 OPTIONAL,
  s-address       [4] HostAddress OPTIONAL,
  r-address       [5] HostAddress OPTIONAL,
}
*/

typedef struct EncKrbPrivPart {
  heim_octet_string user_data;
  KerberosTime *timestamp;
  krb5int32 *usec;
  krb5uint32 *seq_number;
  HostAddress *s_address;
  HostAddress *r_address;
} EncKrbPrivPart;

ASN1EXP int    ASN1CALL decode_EncKrbPrivPart(const unsigned char *, size_t, EncKrbPrivPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncKrbPrivPart(unsigned char *, size_t, const EncKrbPrivPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncKrbPrivPart(const EncKrbPrivPart *);
ASN1EXP int    ASN1CALL copy_EncKrbPrivPart  (const EncKrbPrivPart *, EncKrbPrivPart *);
ASN1EXP void   ASN1CALL free_EncKrbPrivPart  (EncKrbPrivPart *);


/*
KRB-CRED ::= [APPLICATION 22] SEQUENCE {
  pvno            [0] krb5int32,
  msg-type        [1] MESSAGE-TYPE,
  tickets         [2] SEQUENCE OF Ticket,
  enc-part        [3] EncryptedData,
}
*/

typedef struct KRB_CRED {
  krb5int32 pvno;
  MESSAGE_TYPE msg_type;
  struct KRB_CRED_tickets {
    unsigned int len;
    Ticket *val;
  } tickets;
  EncryptedData enc_part;
} KRB_CRED;

ASN1EXP int    ASN1CALL decode_KRB_CRED(const unsigned char *, size_t, KRB_CRED *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB_CRED(unsigned char *, size_t, const KRB_CRED *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB_CRED(const KRB_CRED *);
ASN1EXP int    ASN1CALL copy_KRB_CRED  (const KRB_CRED *, KRB_CRED *);
ASN1EXP void   ASN1CALL free_KRB_CRED  (KRB_CRED *);


/*
KrbCredInfo ::= SEQUENCE {
  key             [0] EncryptionKey,
  prealm          [1] Realm OPTIONAL,
  pname           [2] PrincipalName OPTIONAL,
  flags           [3] TicketFlags OPTIONAL,
  authtime        [4] KerberosTime OPTIONAL,
  starttime       [5] KerberosTime OPTIONAL,
  endtime         [6] KerberosTime OPTIONAL,
  renew-till      [7] KerberosTime OPTIONAL,
  srealm          [8] Realm OPTIONAL,
  sname           [9] PrincipalName OPTIONAL,
  caddr           [10] HostAddresses OPTIONAL,
}
*/

typedef struct KrbCredInfo {
  EncryptionKey key;
  Realm *prealm;
  PrincipalName *pname;
  TicketFlags *flags;
  KerberosTime *authtime;
  KerberosTime *starttime;
  KerberosTime *endtime;
  KerberosTime *renew_till;
  Realm *srealm;
  PrincipalName *sname;
  HostAddresses *caddr;
} KrbCredInfo;

ASN1EXP int    ASN1CALL decode_KrbCredInfo(const unsigned char *, size_t, KrbCredInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_KrbCredInfo(unsigned char *, size_t, const KrbCredInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_KrbCredInfo(const KrbCredInfo *);
ASN1EXP int    ASN1CALL copy_KrbCredInfo  (const KrbCredInfo *, KrbCredInfo *);
ASN1EXP void   ASN1CALL free_KrbCredInfo  (KrbCredInfo *);


/*
EncKrbCredPart ::= [APPLICATION 29] SEQUENCE {
  ticket-info     [0] SEQUENCE OF KrbCredInfo,
  nonce           [1] krb5int32 OPTIONAL,
  timestamp       [2] KerberosTime OPTIONAL,
  usec            [3] krb5int32 OPTIONAL,
  s-address       [4] HostAddress OPTIONAL,
  r-address       [5] HostAddress OPTIONAL,
}
*/

typedef struct EncKrbCredPart {
  struct EncKrbCredPart_ticket_info {
    unsigned int len;
    KrbCredInfo *val;
  } ticket_info;
  krb5int32 *nonce;
  KerberosTime *timestamp;
  krb5int32 *usec;
  HostAddress *s_address;
  HostAddress *r_address;
} EncKrbCredPart;

ASN1EXP int    ASN1CALL decode_EncKrbCredPart(const unsigned char *, size_t, EncKrbCredPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncKrbCredPart(unsigned char *, size_t, const EncKrbCredPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncKrbCredPart(const EncKrbCredPart *);
ASN1EXP int    ASN1CALL copy_EncKrbCredPart  (const EncKrbCredPart *, EncKrbCredPart *);
ASN1EXP void   ASN1CALL free_EncKrbCredPart  (EncKrbCredPart *);


/*
KRB-ERROR ::= [APPLICATION 30] SEQUENCE {
  pvno            [0] krb5int32,
  msg-type        [1] MESSAGE-TYPE,
  ctime           [2] KerberosTime OPTIONAL,
  cusec           [3] krb5int32 OPTIONAL,
  stime           [4] KerberosTime,
  susec           [5] krb5int32,
  error-code      [6] krb5int32,
  crealm          [7] Realm OPTIONAL,
  cname           [8] PrincipalName OPTIONAL,
  realm           [9] Realm,
  sname           [10] PrincipalName,
  e-text          [11] GeneralString OPTIONAL,
  e-data          [12] OCTET STRING OPTIONAL,
}
*/

typedef struct KRB_ERROR {
  krb5int32 pvno;
  MESSAGE_TYPE msg_type;
  KerberosTime *ctime;
  krb5int32 *cusec;
  KerberosTime stime;
  krb5int32 susec;
  krb5int32 error_code;
  Realm *crealm;
  PrincipalName *cname;
  Realm realm;
  PrincipalName sname;
  heim_general_string *e_text;
  heim_octet_string *e_data;
} KRB_ERROR;

ASN1EXP int    ASN1CALL decode_KRB_ERROR(const unsigned char *, size_t, KRB_ERROR *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB_ERROR(unsigned char *, size_t, const KRB_ERROR *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB_ERROR(const KRB_ERROR *);
ASN1EXP int    ASN1CALL copy_KRB_ERROR  (const KRB_ERROR *, KRB_ERROR *);
ASN1EXP void   ASN1CALL free_KRB_ERROR  (KRB_ERROR *);


/*
ChangePasswdDataMS ::= SEQUENCE {
  newpasswd       [0] OCTET STRING,
  targname        [1] PrincipalName OPTIONAL,
  targrealm       [2] Realm OPTIONAL,
}
*/

typedef struct ChangePasswdDataMS {
  heim_octet_string newpasswd;
  PrincipalName *targname;
  Realm *targrealm;
} ChangePasswdDataMS;

ASN1EXP int    ASN1CALL decode_ChangePasswdDataMS(const unsigned char *, size_t, ChangePasswdDataMS *, size_t *);
ASN1EXP int    ASN1CALL encode_ChangePasswdDataMS(unsigned char *, size_t, const ChangePasswdDataMS *, size_t *);
ASN1EXP size_t ASN1CALL length_ChangePasswdDataMS(const ChangePasswdDataMS *);
ASN1EXP int    ASN1CALL copy_ChangePasswdDataMS  (const ChangePasswdDataMS *, ChangePasswdDataMS *);
ASN1EXP void   ASN1CALL free_ChangePasswdDataMS  (ChangePasswdDataMS *);


/*
EtypeList ::= SEQUENCE OF ENCTYPE
*/

typedef struct EtypeList {
  unsigned int len;
  ENCTYPE *val;
} EtypeList;

ASN1EXP int    ASN1CALL decode_EtypeList(const unsigned char *, size_t, EtypeList *, size_t *);
ASN1EXP int    ASN1CALL encode_EtypeList(unsigned char *, size_t, const EtypeList *, size_t *);
ASN1EXP size_t ASN1CALL length_EtypeList(const EtypeList *);
ASN1EXP int    ASN1CALL copy_EtypeList  (const EtypeList *, EtypeList *);
ASN1EXP void   ASN1CALL free_EtypeList  (EtypeList *);


enum { krb5_pvno = 5 };

enum { DOMAIN_X500_COMPRESS = 1 };

/*
AD-IF-RELEVANT ::= AuthorizationData
*/

typedef AuthorizationData AD_IF_RELEVANT;

ASN1EXP int    ASN1CALL decode_AD_IF_RELEVANT(const unsigned char *, size_t, AD_IF_RELEVANT *, size_t *);
ASN1EXP int    ASN1CALL encode_AD_IF_RELEVANT(unsigned char *, size_t, const AD_IF_RELEVANT *, size_t *);
ASN1EXP size_t ASN1CALL length_AD_IF_RELEVANT(const AD_IF_RELEVANT *);
ASN1EXP int    ASN1CALL copy_AD_IF_RELEVANT  (const AD_IF_RELEVANT *, AD_IF_RELEVANT *);
ASN1EXP void   ASN1CALL free_AD_IF_RELEVANT  (AD_IF_RELEVANT *);


/*
AD-KDCIssued ::= SEQUENCE {
  ad-checksum     [0] Checksum,
  i-realm         [1] Realm OPTIONAL,
  i-sname         [2] PrincipalName OPTIONAL,
  elements        [3] AuthorizationData,
}
*/

typedef struct AD_KDCIssued {
  Checksum ad_checksum;
  Realm *i_realm;
  PrincipalName *i_sname;
  AuthorizationData elements;
} AD_KDCIssued;

ASN1EXP int    ASN1CALL decode_AD_KDCIssued(const unsigned char *, size_t, AD_KDCIssued *, size_t *);
ASN1EXP int    ASN1CALL encode_AD_KDCIssued(unsigned char *, size_t, const AD_KDCIssued *, size_t *);
ASN1EXP size_t ASN1CALL length_AD_KDCIssued(const AD_KDCIssued *);
ASN1EXP int    ASN1CALL copy_AD_KDCIssued  (const AD_KDCIssued *, AD_KDCIssued *);
ASN1EXP void   ASN1CALL free_AD_KDCIssued  (AD_KDCIssued *);


/*
AD-AND-OR ::= SEQUENCE {
  condition-count   [0] INTEGER,
  elements          [1] AuthorizationData,
}
*/

typedef struct AD_AND_OR {
  heim_integer condition_count;
  AuthorizationData elements;
} AD_AND_OR;

ASN1EXP int    ASN1CALL decode_AD_AND_OR(const unsigned char *, size_t, AD_AND_OR *, size_t *);
ASN1EXP int    ASN1CALL encode_AD_AND_OR(unsigned char *, size_t, const AD_AND_OR *, size_t *);
ASN1EXP size_t ASN1CALL length_AD_AND_OR(const AD_AND_OR *);
ASN1EXP int    ASN1CALL copy_AD_AND_OR  (const AD_AND_OR *, AD_AND_OR *);
ASN1EXP void   ASN1CALL free_AD_AND_OR  (AD_AND_OR *);


/*
AD-MANDATORY-FOR-KDC ::= AuthorizationData
*/

typedef AuthorizationData AD_MANDATORY_FOR_KDC;

ASN1EXP int    ASN1CALL decode_AD_MANDATORY_FOR_KDC(const unsigned char *, size_t, AD_MANDATORY_FOR_KDC *, size_t *);
ASN1EXP int    ASN1CALL encode_AD_MANDATORY_FOR_KDC(unsigned char *, size_t, const AD_MANDATORY_FOR_KDC *, size_t *);
ASN1EXP size_t ASN1CALL length_AD_MANDATORY_FOR_KDC(const AD_MANDATORY_FOR_KDC *);
ASN1EXP int    ASN1CALL copy_AD_MANDATORY_FOR_KDC  (const AD_MANDATORY_FOR_KDC *, AD_MANDATORY_FOR_KDC *);
ASN1EXP void   ASN1CALL free_AD_MANDATORY_FOR_KDC  (AD_MANDATORY_FOR_KDC *);


/*
PA-SAM-TYPE ::= INTEGER {
  PA_SAM_TYPE_ENIGMA(1),
  PA_SAM_TYPE_DIGI_PATH(2),
  PA_SAM_TYPE_SKEY_K0(3),
  PA_SAM_TYPE_SKEY(4),
  PA_SAM_TYPE_SECURID(5),
  PA_SAM_TYPE_CRYPTOCARD(6)
}
*/

typedef enum PA_SAM_TYPE {
  PA_SAM_TYPE_ENIGMA = 1,
  PA_SAM_TYPE_DIGI_PATH = 2,
  PA_SAM_TYPE_SKEY_K0 = 3,
  PA_SAM_TYPE_SKEY = 4,
  PA_SAM_TYPE_SECURID = 5,
  PA_SAM_TYPE_CRYPTOCARD = 6
} PA_SAM_TYPE;

ASN1EXP int    ASN1CALL decode_PA_SAM_TYPE(const unsigned char *, size_t, PA_SAM_TYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_SAM_TYPE(unsigned char *, size_t, const PA_SAM_TYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_SAM_TYPE(const PA_SAM_TYPE *);
ASN1EXP int    ASN1CALL copy_PA_SAM_TYPE  (const PA_SAM_TYPE *, PA_SAM_TYPE *);
ASN1EXP void   ASN1CALL free_PA_SAM_TYPE  (PA_SAM_TYPE *);


/*
PA-SAM-REDIRECT ::= HostAddresses
*/

typedef HostAddresses PA_SAM_REDIRECT;

ASN1EXP int    ASN1CALL decode_PA_SAM_REDIRECT(const unsigned char *, size_t, PA_SAM_REDIRECT *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_SAM_REDIRECT(unsigned char *, size_t, const PA_SAM_REDIRECT *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_SAM_REDIRECT(const PA_SAM_REDIRECT *);
ASN1EXP int    ASN1CALL copy_PA_SAM_REDIRECT  (const PA_SAM_REDIRECT *, PA_SAM_REDIRECT *);
ASN1EXP void   ASN1CALL free_PA_SAM_REDIRECT  (PA_SAM_REDIRECT *);


/*
SAMFlags ::= BIT STRING {
  use-sad-as-key(0),
  send-encrypted-sad(1),
  must-pk-encrypt-sad(2)
}
*/

typedef struct SAMFlags {
  unsigned int use_sad_as_key:1;
  unsigned int send_encrypted_sad:1;
  unsigned int must_pk_encrypt_sad:1;
  unsigned int _unused3:1;
  unsigned int _unused4:1;
  unsigned int _unused5:1;
  unsigned int _unused6:1;
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
} SAMFlags;


unsigned SAMFlags2int(SAMFlags);
SAMFlags int2SAMFlags(unsigned);
extern const struct units *asn1_SAMFlags_table_units;
#define asn1_SAMFlags_units() (asn1_SAMFlags_table_units)
/*
PA-SAM-CHALLENGE-2-BODY ::= SEQUENCE {
  sam-type              [0] krb5int32,
  sam-flags             [1] SAMFlags,
  sam-type-name         [2] GeneralString OPTIONAL,
  sam-track-id          [3] GeneralString OPTIONAL,
  sam-challenge-label   [4] GeneralString OPTIONAL,
  sam-challenge         [5] GeneralString OPTIONAL,
  sam-response-prompt   [6] GeneralString OPTIONAL,
  sam-pk-for-sad        [7] EncryptionKey OPTIONAL,
  sam-nonce             [8] krb5int32,
  sam-etype             [9] krb5int32,
  ...,
}
*/

typedef struct PA_SAM_CHALLENGE_2_BODY {
  krb5int32 sam_type;
  SAMFlags sam_flags;
  heim_general_string *sam_type_name;
  heim_general_string *sam_track_id;
  heim_general_string *sam_challenge_label;
  heim_general_string *sam_challenge;
  heim_general_string *sam_response_prompt;
  EncryptionKey *sam_pk_for_sad;
  krb5int32 sam_nonce;
  krb5int32 sam_etype;
} PA_SAM_CHALLENGE_2_BODY;

/*
PA-SAM-CHALLENGE-2 ::= SEQUENCE {
  sam-body        [0] PA-SAM-CHALLENGE-2-BODY,
  sam-cksum       [1] SEQUENCE OF Checksum,
  ...,
}
*/

typedef struct PA_SAM_CHALLENGE_2 {
  PA_SAM_CHALLENGE_2_BODY sam_body;
  struct PA_SAM_CHALLENGE_2_sam_cksum {
    unsigned int len;
    Checksum *val;
  } sam_cksum;
} PA_SAM_CHALLENGE_2;

ASN1EXP int    ASN1CALL decode_PA_SAM_CHALLENGE_2(const unsigned char *, size_t, PA_SAM_CHALLENGE_2 *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_SAM_CHALLENGE_2(unsigned char *, size_t, const PA_SAM_CHALLENGE_2 *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_SAM_CHALLENGE_2(const PA_SAM_CHALLENGE_2 *);
ASN1EXP int    ASN1CALL copy_PA_SAM_CHALLENGE_2  (const PA_SAM_CHALLENGE_2 *, PA_SAM_CHALLENGE_2 *);
ASN1EXP void   ASN1CALL free_PA_SAM_CHALLENGE_2  (PA_SAM_CHALLENGE_2 *);


/*
PA-SAM-RESPONSE-2 ::= SEQUENCE {
  sam-type               [0] krb5int32,
  sam-flags              [1] SAMFlags,
  sam-track-id           [2] GeneralString OPTIONAL,
  sam-enc-nonce-or-sad   [3] EncryptedData,
  sam-nonce              [4] krb5int32,
  ...,
}
*/

typedef struct PA_SAM_RESPONSE_2 {
  krb5int32 sam_type;
  SAMFlags sam_flags;
  heim_general_string *sam_track_id;
  EncryptedData sam_enc_nonce_or_sad;
  krb5int32 sam_nonce;
} PA_SAM_RESPONSE_2;

ASN1EXP int    ASN1CALL decode_PA_SAM_RESPONSE_2(const unsigned char *, size_t, PA_SAM_RESPONSE_2 *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_SAM_RESPONSE_2(unsigned char *, size_t, const PA_SAM_RESPONSE_2 *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_SAM_RESPONSE_2(const PA_SAM_RESPONSE_2 *);
ASN1EXP int    ASN1CALL copy_PA_SAM_RESPONSE_2  (const PA_SAM_RESPONSE_2 *, PA_SAM_RESPONSE_2 *);
ASN1EXP void   ASN1CALL free_PA_SAM_RESPONSE_2  (PA_SAM_RESPONSE_2 *);


/*
PA-ENC-SAM-RESPONSE-ENC ::= SEQUENCE {
  sam-nonce       [0] krb5int32,
  sam-sad         [1] GeneralString OPTIONAL,
  ...,
}
*/

typedef struct PA_ENC_SAM_RESPONSE_ENC {
  krb5int32 sam_nonce;
  heim_general_string *sam_sad;
} PA_ENC_SAM_RESPONSE_ENC;

ASN1EXP int    ASN1CALL decode_PA_ENC_SAM_RESPONSE_ENC(const unsigned char *, size_t, PA_ENC_SAM_RESPONSE_ENC *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_ENC_SAM_RESPONSE_ENC(unsigned char *, size_t, const PA_ENC_SAM_RESPONSE_ENC *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_ENC_SAM_RESPONSE_ENC(const PA_ENC_SAM_RESPONSE_ENC *);
ASN1EXP int    ASN1CALL copy_PA_ENC_SAM_RESPONSE_ENC  (const PA_ENC_SAM_RESPONSE_ENC *, PA_ENC_SAM_RESPONSE_ENC *);
ASN1EXP void   ASN1CALL free_PA_ENC_SAM_RESPONSE_ENC  (PA_ENC_SAM_RESPONSE_ENC *);


/*
PA-S4U2Self ::= SEQUENCE {
  name            [0] PrincipalName,
  realm           [1] Realm,
  cksum           [2] Checksum,
  auth            [3] GeneralString,
}
*/

typedef struct PA_S4U2Self {
  PrincipalName name;
  Realm realm;
  Checksum cksum;
  heim_general_string auth;
} PA_S4U2Self;

ASN1EXP int    ASN1CALL decode_PA_S4U2Self(const unsigned char *, size_t, PA_S4U2Self *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_S4U2Self(unsigned char *, size_t, const PA_S4U2Self *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_S4U2Self(const PA_S4U2Self *);
ASN1EXP int    ASN1CALL copy_PA_S4U2Self  (const PA_S4U2Self *, PA_S4U2Self *);
ASN1EXP void   ASN1CALL free_PA_S4U2Self  (PA_S4U2Self *);


/*
KRB5SignedPathData ::= SEQUENCE {
  client          [0] Principal OPTIONAL,
  authtime        [1] KerberosTime,
  delegated       [2] Principals OPTIONAL,
  method_data     [3] METHOD-DATA OPTIONAL,
}
*/

typedef struct KRB5SignedPathData {
  Principal *client;
  KerberosTime authtime;
  Principals *delegated;
  METHOD_DATA *method_data;
} KRB5SignedPathData;

ASN1EXP int    ASN1CALL decode_KRB5SignedPathData(const unsigned char *, size_t, KRB5SignedPathData *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5SignedPathData(unsigned char *, size_t, const KRB5SignedPathData *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5SignedPathData(const KRB5SignedPathData *);
ASN1EXP int    ASN1CALL copy_KRB5SignedPathData  (const KRB5SignedPathData *, KRB5SignedPathData *);
ASN1EXP void   ASN1CALL free_KRB5SignedPathData  (KRB5SignedPathData *);


/*
KRB5SignedPath ::= SEQUENCE {
  etype           [0] ENCTYPE,
  cksum           [1] Checksum,
  delegated       [2] Principals OPTIONAL,
  method_data     [3] METHOD-DATA OPTIONAL,
}
*/

typedef struct KRB5SignedPath {
  ENCTYPE etype;
  Checksum cksum;
  Principals *delegated;
  METHOD_DATA *method_data;
} KRB5SignedPath;

ASN1EXP int    ASN1CALL decode_KRB5SignedPath(const unsigned char *, size_t, KRB5SignedPath *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5SignedPath(unsigned char *, size_t, const KRB5SignedPath *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5SignedPath(const KRB5SignedPath *);
ASN1EXP int    ASN1CALL copy_KRB5SignedPath  (const KRB5SignedPath *, KRB5SignedPath *);
ASN1EXP void   ASN1CALL free_KRB5SignedPath  (KRB5SignedPath *);


/*
PA-ClientCanonicalizedNames ::= SEQUENCE {
  requested-name   [0] PrincipalName,
  mapped-name      [1] PrincipalName,
}
*/

typedef struct PA_ClientCanonicalizedNames {
  PrincipalName requested_name;
  PrincipalName mapped_name;
} PA_ClientCanonicalizedNames;

ASN1EXP int    ASN1CALL decode_PA_ClientCanonicalizedNames(const unsigned char *, size_t, PA_ClientCanonicalizedNames *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_ClientCanonicalizedNames(unsigned char *, size_t, const PA_ClientCanonicalizedNames *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_ClientCanonicalizedNames(const PA_ClientCanonicalizedNames *);
ASN1EXP int    ASN1CALL copy_PA_ClientCanonicalizedNames  (const PA_ClientCanonicalizedNames *, PA_ClientCanonicalizedNames *);
ASN1EXP void   ASN1CALL free_PA_ClientCanonicalizedNames  (PA_ClientCanonicalizedNames *);


/*
PA-ClientCanonicalized ::= SEQUENCE {
  names            [0] PA-ClientCanonicalizedNames,
  canon-checksum   [1] Checksum,
}
*/

typedef struct PA_ClientCanonicalized {
  PA_ClientCanonicalizedNames names;
  Checksum canon_checksum;
} PA_ClientCanonicalized;

ASN1EXP int    ASN1CALL decode_PA_ClientCanonicalized(const unsigned char *, size_t, PA_ClientCanonicalized *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_ClientCanonicalized(unsigned char *, size_t, const PA_ClientCanonicalized *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_ClientCanonicalized(const PA_ClientCanonicalized *);
ASN1EXP int    ASN1CALL copy_PA_ClientCanonicalized  (const PA_ClientCanonicalized *, PA_ClientCanonicalized *);
ASN1EXP void   ASN1CALL free_PA_ClientCanonicalized  (PA_ClientCanonicalized *);


/*
AD-LoginAlias ::= SEQUENCE {
  login-alias     [0] PrincipalName,
  checksum        [1] Checksum,
}
*/

typedef struct AD_LoginAlias {
  PrincipalName login_alias;
  Checksum checksum;
} AD_LoginAlias;

ASN1EXP int    ASN1CALL decode_AD_LoginAlias(const unsigned char *, size_t, AD_LoginAlias *, size_t *);
ASN1EXP int    ASN1CALL encode_AD_LoginAlias(unsigned char *, size_t, const AD_LoginAlias *, size_t *);
ASN1EXP size_t ASN1CALL length_AD_LoginAlias(const AD_LoginAlias *);
ASN1EXP int    ASN1CALL copy_AD_LoginAlias  (const AD_LoginAlias *, AD_LoginAlias *);
ASN1EXP void   ASN1CALL free_AD_LoginAlias  (AD_LoginAlias *);


/*
PA-SvrReferralData ::= SEQUENCE {
  referred-name    [1] PrincipalName OPTIONAL,
  referred-realm   [0] Realm,
}
*/

typedef struct PA_SvrReferralData {
  PrincipalName *referred_name;
  Realm referred_realm;
} PA_SvrReferralData;

ASN1EXP int    ASN1CALL decode_PA_SvrReferralData(const unsigned char *, size_t, PA_SvrReferralData *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_SvrReferralData(unsigned char *, size_t, const PA_SvrReferralData *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_SvrReferralData(const PA_SvrReferralData *);
ASN1EXP int    ASN1CALL copy_PA_SvrReferralData  (const PA_SvrReferralData *, PA_SvrReferralData *);
ASN1EXP void   ASN1CALL free_PA_SvrReferralData  (PA_SvrReferralData *);


/*
PA-SERVER-REFERRAL-DATA ::= EncryptedData
*/

typedef EncryptedData PA_SERVER_REFERRAL_DATA;

ASN1EXP int    ASN1CALL decode_PA_SERVER_REFERRAL_DATA(const unsigned char *, size_t, PA_SERVER_REFERRAL_DATA *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_SERVER_REFERRAL_DATA(unsigned char *, size_t, const PA_SERVER_REFERRAL_DATA *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_SERVER_REFERRAL_DATA(const PA_SERVER_REFERRAL_DATA *);
ASN1EXP int    ASN1CALL copy_PA_SERVER_REFERRAL_DATA  (const PA_SERVER_REFERRAL_DATA *, PA_SERVER_REFERRAL_DATA *);
ASN1EXP void   ASN1CALL free_PA_SERVER_REFERRAL_DATA  (PA_SERVER_REFERRAL_DATA *);


/*
PA-ServerReferralData ::= SEQUENCE {
  referred-realm             [0] Realm OPTIONAL,
  true-principal-name        [1] PrincipalName OPTIONAL,
  requested-principal-name   [2] PrincipalName OPTIONAL,
  referral-valid-until       [3] KerberosTime OPTIONAL,
  ...,
}
*/

typedef struct PA_ServerReferralData {
  Realm *referred_realm;
  PrincipalName *true_principal_name;
  PrincipalName *requested_principal_name;
  KerberosTime *referral_valid_until;
} PA_ServerReferralData;

ASN1EXP int    ASN1CALL decode_PA_ServerReferralData(const unsigned char *, size_t, PA_ServerReferralData *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_ServerReferralData(unsigned char *, size_t, const PA_ServerReferralData *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_ServerReferralData(const PA_ServerReferralData *);
ASN1EXP int    ASN1CALL copy_PA_ServerReferralData  (const PA_ServerReferralData *, PA_ServerReferralData *);
ASN1EXP void   ASN1CALL free_PA_ServerReferralData  (PA_ServerReferralData *);


/*
FastOptions ::= BIT STRING {
  reserved(0),
  hide-client-names(1),
  kdc-follow-referrals(16)
}
*/

typedef struct FastOptions {
  unsigned int reserved:1;
  unsigned int hide_client_names:1;
  unsigned int _unused2:1;
  unsigned int _unused3:1;
  unsigned int _unused4:1;
  unsigned int _unused5:1;
  unsigned int _unused6:1;
  unsigned int _unused7:1;
  unsigned int _unused8:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int _unused14:1;
  unsigned int _unused15:1;
  unsigned int kdc_follow_referrals:1;
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
} FastOptions;


unsigned FastOptions2int(FastOptions);
FastOptions int2FastOptions(unsigned);
extern const struct units *asn1_FastOptions_table_units;
#define asn1_FastOptions_units() (asn1_FastOptions_table_units)
/*
KrbFastReq ::= SEQUENCE {
  fast-options    [0] FastOptions,
  padata          [1] METHOD-DATA,
  req-body        [2] KDC-REQ-BODY,
  ...,
}
*/

typedef struct KrbFastReq {
  FastOptions fast_options;
  METHOD_DATA padata;
  KDC_REQ_BODY req_body;
} KrbFastReq;

ASN1EXP int    ASN1CALL decode_KrbFastReq(const unsigned char *, size_t, KrbFastReq *, size_t *);
ASN1EXP int    ASN1CALL encode_KrbFastReq(unsigned char *, size_t, const KrbFastReq *, size_t *);
ASN1EXP size_t ASN1CALL length_KrbFastReq(const KrbFastReq *);
ASN1EXP int    ASN1CALL copy_KrbFastReq  (const KrbFastReq *, KrbFastReq *);
ASN1EXP void   ASN1CALL free_KrbFastReq  (KrbFastReq *);


/*
KrbFastArmor ::= SEQUENCE {
  armor-type      [0] krb5int32,
  armor-value     [1] OCTET STRING,
  ...,
}
*/

typedef struct KrbFastArmor {
  krb5int32 armor_type;
  heim_octet_string armor_value;
} KrbFastArmor;

ASN1EXP int    ASN1CALL decode_KrbFastArmor(const unsigned char *, size_t, KrbFastArmor *, size_t *);
ASN1EXP int    ASN1CALL encode_KrbFastArmor(unsigned char *, size_t, const KrbFastArmor *, size_t *);
ASN1EXP size_t ASN1CALL length_KrbFastArmor(const KrbFastArmor *);
ASN1EXP int    ASN1CALL copy_KrbFastArmor  (const KrbFastArmor *, KrbFastArmor *);
ASN1EXP void   ASN1CALL free_KrbFastArmor  (KrbFastArmor *);


/*
KrbFastArmoredReq ::= SEQUENCE {
  armor           [0] KrbFastArmor OPTIONAL,
  req-checksum    [1] Checksum,
  enc-fast-req    [2] EncryptedData,
}
*/

typedef struct KrbFastArmoredReq {
  KrbFastArmor *armor;
  Checksum req_checksum;
  EncryptedData enc_fast_req;
} KrbFastArmoredReq;

/*
PA-FX-FAST-REQUEST ::= CHOICE {
  armored-data    [0] KrbFastArmoredReq,
  ...,
}
*/

typedef struct PA_FX_FAST_REQUEST {
  enum PA_FX_FAST_REQUEST_enum {
    choice_PA_FX_FAST_REQUEST_asn1_ellipsis = -1,
invalid_choice_PA_FX_FAST_REQUEST = 0,
    choice_PA_FX_FAST_REQUEST_armored_data
    /* ... */
  } element;
  union {
    KrbFastArmoredReq armored_data;
    heim_octet_string asn1_ellipsis;
  } u;
} PA_FX_FAST_REQUEST;

ASN1EXP int    ASN1CALL decode_PA_FX_FAST_REQUEST(const unsigned char *, size_t, PA_FX_FAST_REQUEST *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_FX_FAST_REQUEST(unsigned char *, size_t, const PA_FX_FAST_REQUEST *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_FX_FAST_REQUEST(const PA_FX_FAST_REQUEST *);
ASN1EXP int    ASN1CALL copy_PA_FX_FAST_REQUEST  (const PA_FX_FAST_REQUEST *, PA_FX_FAST_REQUEST *);
ASN1EXP void   ASN1CALL free_PA_FX_FAST_REQUEST  (PA_FX_FAST_REQUEST *);


/*
KrbFastFinished ::= SEQUENCE {
  timestamp         [0] KerberosTime,
  usec              [1] krb5int32,
  crealm            [2] Realm,
  cname             [3] PrincipalName,
  ticket-checksum   [4] Checksum,
  ...,
}
*/

typedef struct KrbFastFinished {
  KerberosTime timestamp;
  krb5int32 usec;
  Realm crealm;
  PrincipalName cname;
  Checksum ticket_checksum;
} KrbFastFinished;

ASN1EXP int    ASN1CALL decode_KrbFastFinished(const unsigned char *, size_t, KrbFastFinished *, size_t *);
ASN1EXP int    ASN1CALL encode_KrbFastFinished(unsigned char *, size_t, const KrbFastFinished *, size_t *);
ASN1EXP size_t ASN1CALL length_KrbFastFinished(const KrbFastFinished *);
ASN1EXP int    ASN1CALL copy_KrbFastFinished  (const KrbFastFinished *, KrbFastFinished *);
ASN1EXP void   ASN1CALL free_KrbFastFinished  (KrbFastFinished *);


/*
KrbFastResponse ::= SEQUENCE {
  padata           [0] METHOD-DATA,
  strengthen-key   [1] EncryptionKey OPTIONAL,
  finished         [2] KrbFastFinished OPTIONAL,
  nonce            [3] krb5uint32,
  ...,
}
*/

typedef struct KrbFastResponse {
  METHOD_DATA padata;
  EncryptionKey *strengthen_key;
  KrbFastFinished *finished;
  krb5uint32 nonce;
} KrbFastResponse;

ASN1EXP int    ASN1CALL decode_KrbFastResponse(const unsigned char *, size_t, KrbFastResponse *, size_t *);
ASN1EXP int    ASN1CALL encode_KrbFastResponse(unsigned char *, size_t, const KrbFastResponse *, size_t *);
ASN1EXP size_t ASN1CALL length_KrbFastResponse(const KrbFastResponse *);
ASN1EXP int    ASN1CALL copy_KrbFastResponse  (const KrbFastResponse *, KrbFastResponse *);
ASN1EXP void   ASN1CALL free_KrbFastResponse  (KrbFastResponse *);


/*
KrbFastArmoredRep ::= SEQUENCE {
  enc-fast-rep    [0] EncryptedData,
  ...,
}
*/

typedef struct KrbFastArmoredRep {
  EncryptedData enc_fast_rep;
} KrbFastArmoredRep;

/*
PA-FX-FAST-REPLY ::= CHOICE {
  armored-data    [0] KrbFastArmoredRep,
  ...,
}
*/

typedef struct PA_FX_FAST_REPLY {
  enum PA_FX_FAST_REPLY_enum {
    choice_PA_FX_FAST_REPLY_asn1_ellipsis = -1,
invalid_choice_PA_FX_FAST_REPLY = 0,
    choice_PA_FX_FAST_REPLY_armored_data
    /* ... */
  } element;
  union {
    KrbFastArmoredRep armored_data;
    heim_octet_string asn1_ellipsis;
  } u;
} PA_FX_FAST_REPLY;

ASN1EXP int    ASN1CALL decode_PA_FX_FAST_REPLY(const unsigned char *, size_t, PA_FX_FAST_REPLY *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_FX_FAST_REPLY(unsigned char *, size_t, const PA_FX_FAST_REPLY *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_FX_FAST_REPLY(const PA_FX_FAST_REPLY *);
ASN1EXP int    ASN1CALL copy_PA_FX_FAST_REPLY  (const PA_FX_FAST_REPLY *, PA_FX_FAST_REPLY *);
ASN1EXP void   ASN1CALL free_PA_FX_FAST_REPLY  (PA_FX_FAST_REPLY *);


/*
KDCFastFlags ::= BIT STRING {
  use-reply-key(0),
  reply-key-used(1),
  reply-key-replaced(2),
  kdc-verfied(3),
  requested-hidden-names(4)
}
*/

typedef struct KDCFastFlags {
  unsigned int use_reply_key:1;
  unsigned int reply_key_used:1;
  unsigned int reply_key_replaced:1;
  unsigned int kdc_verfied:1;
  unsigned int requested_hidden_names:1;
  unsigned int _unused5:1;
  unsigned int _unused6:1;
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
} KDCFastFlags;


unsigned KDCFastFlags2int(KDCFastFlags);
KDCFastFlags int2KDCFastFlags(unsigned);
extern const struct units *asn1_KDCFastFlags_table_units;
#define asn1_KDCFastFlags_units() (asn1_KDCFastFlags_table_units)
/*
KDCSRPState ::= SEQUENCE {
  pa-announce     [0] OCTET STRING,
  group           [1] KRB5-SRP-GROUP,
  m               [2] OCTET STRING,
  hamk            [3] OCTET STRING,
  k               [4] OCTET STRING,
}
*/

typedef struct KDCSRPState {
  heim_octet_string pa_announce;
  KRB5_SRP_GROUP group;
  heim_octet_string m;
  heim_octet_string hamk;
  heim_octet_string k;
} KDCSRPState;

ASN1EXP int    ASN1CALL decode_KDCSRPState(const unsigned char *, size_t, KDCSRPState *, size_t *);
ASN1EXP int    ASN1CALL encode_KDCSRPState(unsigned char *, size_t, const KDCSRPState *, size_t *);
ASN1EXP size_t ASN1CALL length_KDCSRPState(const KDCSRPState *);
ASN1EXP int    ASN1CALL copy_KDCSRPState  (const KDCSRPState *, KDCSRPState *);
ASN1EXP void   ASN1CALL free_KDCSRPState  (KDCSRPState *);


/*
KDCFastPAState ::= SEQUENCE {
  srp             [0] KDCSRPState OPTIONAL,
}
*/

typedef struct KDCFastPAState {
  KDCSRPState *srp;
} KDCFastPAState;

/*
KDCFastState ::= SEQUENCE {
  flags               [0] KDCFastFlags,
  expiration          [1] GeneralizedTime,
  expected-pa-types   [2] SEQUENCE OF PADATA-TYPE OPTIONAL,
  pa-state            [3] KDCFastPAState,
}
*/

typedef struct KDCFastState {
  KDCFastFlags flags;
  time_t expiration;
  struct KDCFastState_expected_pa_types {
    unsigned int len;
    PADATA_TYPE *val;
  } *expected_pa_types;
  KDCFastPAState pa_state;
} KDCFastState;

ASN1EXP int    ASN1CALL decode_KDCFastState(const unsigned char *, size_t, KDCFastState *, size_t *);
ASN1EXP int    ASN1CALL encode_KDCFastState(unsigned char *, size_t, const KDCFastState *, size_t *);
ASN1EXP size_t ASN1CALL length_KDCFastState(const KDCFastState *);
ASN1EXP int    ASN1CALL copy_KDCFastState  (const KDCFastState *, KDCFastState *);
ASN1EXP void   ASN1CALL free_KDCFastState  (KDCFastState *);


/*
KDCFastCookie ::= SEQUENCE {
  version         [0] krb5uint32,
  realm           [1]   UTF8String,
  cookie          [2] EncryptedData,
}
*/

typedef struct KDCFastCookie {
  krb5uint32 version;
  heim_utf8_string realm;
  EncryptedData cookie;
} KDCFastCookie;

ASN1EXP int    ASN1CALL decode_KDCFastCookie(const unsigned char *, size_t, KDCFastCookie *, size_t *);
ASN1EXP int    ASN1CALL encode_KDCFastCookie(unsigned char *, size_t, const KDCFastCookie *, size_t *);
ASN1EXP size_t ASN1CALL length_KDCFastCookie(const KDCFastCookie *);
ASN1EXP int    ASN1CALL copy_KDCFastCookie  (const KDCFastCookie *, KDCFastCookie *);
ASN1EXP void   ASN1CALL free_KDCFastCookie  (KDCFastCookie *);


/*
KDC-PROXY-MESSAGE ::= SEQUENCE {
  kerb-message     [0] OCTET STRING,
  target-domain    [1] Realm OPTIONAL,
  dclocator-hint   [2] INTEGER OPTIONAL,
}
*/

typedef struct KDC_PROXY_MESSAGE {
  heim_octet_string kerb_message;
  Realm *target_domain;
  heim_integer *dclocator_hint;
} KDC_PROXY_MESSAGE;

ASN1EXP int    ASN1CALL decode_KDC_PROXY_MESSAGE(const unsigned char *, size_t, KDC_PROXY_MESSAGE *, size_t *);
ASN1EXP int    ASN1CALL encode_KDC_PROXY_MESSAGE(unsigned char *, size_t, const KDC_PROXY_MESSAGE *, size_t *);
ASN1EXP size_t ASN1CALL length_KDC_PROXY_MESSAGE(const KDC_PROXY_MESSAGE *);
ASN1EXP int    ASN1CALL copy_KDC_PROXY_MESSAGE  (const KDC_PROXY_MESSAGE *, KDC_PROXY_MESSAGE *);
ASN1EXP void   ASN1CALL free_KDC_PROXY_MESSAGE  (KDC_PROXY_MESSAGE *);


/*
KERB-TIMES ::= SEQUENCE {
  authtime        [0] KerberosTime,
  starttime       [1] KerberosTime,
  endtime         [2] KerberosTime,
  renew_till      [3] KerberosTime,
}
*/

typedef struct KERB_TIMES {
  KerberosTime authtime;
  KerberosTime starttime;
  KerberosTime endtime;
  KerberosTime renew_till;
} KERB_TIMES;

ASN1EXP int    ASN1CALL decode_KERB_TIMES(const unsigned char *, size_t, KERB_TIMES *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_TIMES(unsigned char *, size_t, const KERB_TIMES *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_TIMES(const KERB_TIMES *);
ASN1EXP int    ASN1CALL copy_KERB_TIMES  (const KERB_TIMES *, KERB_TIMES *);
ASN1EXP void   ASN1CALL free_KERB_TIMES  (KERB_TIMES *);


/*
KERB-CRED ::= SEQUENCE {
  client          [0] Principal,
  server          [1] Principal,
  keyblock        [2] EncryptionKey,
  times           [3] KERB-TIMES,
  ticket          [4] OCTET STRING,
  authdata        [5] OCTET STRING,
  addresses       [6] HostAddresses,
  flags           [7] TicketFlags,
}
*/

typedef struct KERB_CRED {
  Principal client;
  Principal server;
  EncryptionKey keyblock;
  KERB_TIMES times;
  heim_octet_string ticket;
  heim_octet_string authdata;
  HostAddresses addresses;
  TicketFlags flags;
} KERB_CRED;

ASN1EXP int    ASN1CALL decode_KERB_CRED(const unsigned char *, size_t, KERB_CRED *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_CRED(unsigned char *, size_t, const KERB_CRED *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_CRED(const KERB_CRED *);
ASN1EXP int    ASN1CALL copy_KERB_CRED  (const KERB_CRED *, KERB_CRED *);
ASN1EXP void   ASN1CALL free_KERB_CRED  (KERB_CRED *);


/*
KERB-TGS-REQ-IN ::= SEQUENCE {
  cache           [0] OCTET STRING,
  addrs           [1] HostAddresses,
  flags           [2] krb5uint32,
  imp             [3] Principal OPTIONAL,
  ticket          [4] OCTET STRING OPTIONAL,
  in_cred         [5] KERB-CRED,
  krbtgt          [6] KERB-CRED,
  padata          [7] METHOD-DATA,
}
*/

typedef struct KERB_TGS_REQ_IN {
  heim_octet_string cache;
  HostAddresses addrs;
  krb5uint32 flags;
  Principal *imp;
  heim_octet_string *ticket;
  KERB_CRED in_cred;
  KERB_CRED krbtgt;
  METHOD_DATA padata;
} KERB_TGS_REQ_IN;

ASN1EXP int    ASN1CALL decode_KERB_TGS_REQ_IN(const unsigned char *, size_t, KERB_TGS_REQ_IN *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_TGS_REQ_IN(unsigned char *, size_t, const KERB_TGS_REQ_IN *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_TGS_REQ_IN(const KERB_TGS_REQ_IN *);
ASN1EXP int    ASN1CALL copy_KERB_TGS_REQ_IN  (const KERB_TGS_REQ_IN *, KERB_TGS_REQ_IN *);
ASN1EXP void   ASN1CALL free_KERB_TGS_REQ_IN  (KERB_TGS_REQ_IN *);


/*
KERB-TGS-REQ-OUT ::= SEQUENCE {
  subkey          [0] EncryptionKey OPTIONAL,
  t               [1] TGS-REQ,
}
*/

typedef struct KERB_TGS_REQ_OUT {
  EncryptionKey *subkey;
  TGS_REQ t;
} KERB_TGS_REQ_OUT;

ASN1EXP int    ASN1CALL decode_KERB_TGS_REQ_OUT(const unsigned char *, size_t, KERB_TGS_REQ_OUT *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_TGS_REQ_OUT(unsigned char *, size_t, const KERB_TGS_REQ_OUT *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_TGS_REQ_OUT(const KERB_TGS_REQ_OUT *);
ASN1EXP int    ASN1CALL copy_KERB_TGS_REQ_OUT  (const KERB_TGS_REQ_OUT *, KERB_TGS_REQ_OUT *);
ASN1EXP void   ASN1CALL free_KERB_TGS_REQ_OUT  (KERB_TGS_REQ_OUT *);


/*
KERB-TGS-REP-IN ::= SEQUENCE {
  cache           [0] OCTET STRING,
  subkey          [1] EncryptionKey OPTIONAL,
  in_cred         [2] KERB-CRED,
  t               [3] TGS-REP,
}
*/

typedef struct KERB_TGS_REP_IN {
  heim_octet_string cache;
  EncryptionKey *subkey;
  KERB_CRED in_cred;
  TGS_REP t;
} KERB_TGS_REP_IN;

ASN1EXP int    ASN1CALL decode_KERB_TGS_REP_IN(const unsigned char *, size_t, KERB_TGS_REP_IN *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_TGS_REP_IN(unsigned char *, size_t, const KERB_TGS_REP_IN *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_TGS_REP_IN(const KERB_TGS_REP_IN *);
ASN1EXP int    ASN1CALL copy_KERB_TGS_REP_IN  (const KERB_TGS_REP_IN *, KERB_TGS_REP_IN *);
ASN1EXP void   ASN1CALL free_KERB_TGS_REP_IN  (KERB_TGS_REP_IN *);


/*
KERB-TGS-REP-OUT ::= SEQUENCE {
  cache           [0] OCTET STRING,
  cred            [1] KERB-CRED,
  subkey          [2] EncryptionKey,
}
*/

typedef struct KERB_TGS_REP_OUT {
  heim_octet_string cache;
  KERB_CRED cred;
  EncryptionKey subkey;
} KERB_TGS_REP_OUT;

ASN1EXP int    ASN1CALL decode_KERB_TGS_REP_OUT(const unsigned char *, size_t, KERB_TGS_REP_OUT *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_TGS_REP_OUT(unsigned char *, size_t, const KERB_TGS_REP_OUT *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_TGS_REP_OUT(const KERB_TGS_REP_OUT *);
ASN1EXP int    ASN1CALL copy_KERB_TGS_REP_OUT  (const KERB_TGS_REP_OUT *, KERB_TGS_REP_OUT *);
ASN1EXP void   ASN1CALL free_KERB_TGS_REP_OUT  (KERB_TGS_REP_OUT *);


/*
KERB-ARMOR-SERVICE-REPLY ::= SEQUENCE {
  armor           [0] KrbFastArmor,
  armor-key       [1] EncryptionKey,
}
*/

typedef struct KERB_ARMOR_SERVICE_REPLY {
  KrbFastArmor armor;
  EncryptionKey armor_key;
} KERB_ARMOR_SERVICE_REPLY;

ASN1EXP int    ASN1CALL decode_KERB_ARMOR_SERVICE_REPLY(const unsigned char *, size_t, KERB_ARMOR_SERVICE_REPLY *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_ARMOR_SERVICE_REPLY(unsigned char *, size_t, const KERB_ARMOR_SERVICE_REPLY *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_ARMOR_SERVICE_REPLY(const KERB_ARMOR_SERVICE_REPLY *);
ASN1EXP int    ASN1CALL copy_KERB_ARMOR_SERVICE_REPLY  (const KERB_ARMOR_SERVICE_REPLY *, KERB_ARMOR_SERVICE_REPLY *);
ASN1EXP void   ASN1CALL free_KERB_ARMOR_SERVICE_REPLY  (KERB_ARMOR_SERVICE_REPLY *);


/*
KERB-ERROR-NUMBER ::= INTEGER {
  KRB5_AP_ERR_WINDOWS_ERROR_CODE(1),
  KRB5_AP_ERR_TYPE_SKEW_RECOVERY(2)
}
*/

typedef enum KERB_ERROR_NUMBER {
  KRB5_AP_ERR_WINDOWS_ERROR_CODE = 1,
  KRB5_AP_ERR_TYPE_SKEW_RECOVERY = 2
} KERB_ERROR_NUMBER;

ASN1EXP int    ASN1CALL decode_KERB_ERROR_NUMBER(const unsigned char *, size_t, KERB_ERROR_NUMBER *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_ERROR_NUMBER(unsigned char *, size_t, const KERB_ERROR_NUMBER *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_ERROR_NUMBER(const KERB_ERROR_NUMBER *);
ASN1EXP int    ASN1CALL copy_KERB_ERROR_NUMBER  (const KERB_ERROR_NUMBER *, KERB_ERROR_NUMBER *);
ASN1EXP void   ASN1CALL free_KERB_ERROR_NUMBER  (KERB_ERROR_NUMBER *);


/*
KERB-ERROR-DATA ::= SEQUENCE {
  data-type       [1] krb5int32,
  data-value      [2] OCTET STRING OPTIONAL,
}
*/

typedef struct KERB_ERROR_DATA {
  krb5int32 data_type;
  heim_octet_string *data_value;
} KERB_ERROR_DATA;

ASN1EXP int    ASN1CALL decode_KERB_ERROR_DATA(const unsigned char *, size_t, KERB_ERROR_DATA *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_ERROR_DATA(unsigned char *, size_t, const KERB_ERROR_DATA *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_ERROR_DATA(const KERB_ERROR_DATA *);
ASN1EXP int    ASN1CALL copy_KERB_ERROR_DATA  (const KERB_ERROR_DATA *, KERB_ERROR_DATA *);
ASN1EXP void   ASN1CALL free_KERB_ERROR_DATA  (KERB_ERROR_DATA *);


/*
KRB5-SRP-PA ::= SEQUENCE {
  group           [0] KRB5-SRP-GROUP,
  salt            [1] OCTET STRING,
  iterations      [2] krb5uint32,
}
*/

typedef struct KRB5_SRP_PA {
  KRB5_SRP_GROUP group;
  heim_octet_string salt;
  krb5uint32 iterations;
} KRB5_SRP_PA;

ASN1EXP int    ASN1CALL decode_KRB5_SRP_PA(const unsigned char *, size_t, KRB5_SRP_PA *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_SRP_PA(unsigned char *, size_t, const KRB5_SRP_PA *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_SRP_PA(const KRB5_SRP_PA *);
ASN1EXP int    ASN1CALL copy_KRB5_SRP_PA  (const KRB5_SRP_PA *, KRB5_SRP_PA *);
ASN1EXP void   ASN1CALL free_KRB5_SRP_PA  (KRB5_SRP_PA *);


/*
KRB5-SRP-PA-ANNOUNCE ::= SEQUENCE {
  groups          [0] SET OF KRB5-SRP-PA,
  as-req          [1] Checksum,
}
*/

typedef struct KRB5_SRP_PA_ANNOUNCE {
  struct KRB5_SRP_PA_ANNOUNCE_groups {
    unsigned int len;
    KRB5_SRP_PA *val;
  } groups;
  Checksum as_req;
} KRB5_SRP_PA_ANNOUNCE;

ASN1EXP int    ASN1CALL decode_KRB5_SRP_PA_ANNOUNCE(const unsigned char *, size_t, KRB5_SRP_PA_ANNOUNCE *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_SRP_PA_ANNOUNCE(unsigned char *, size_t, const KRB5_SRP_PA_ANNOUNCE *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_SRP_PA_ANNOUNCE(const KRB5_SRP_PA_ANNOUNCE *);
ASN1EXP int    ASN1CALL copy_KRB5_SRP_PA_ANNOUNCE  (const KRB5_SRP_PA_ANNOUNCE *, KRB5_SRP_PA_ANNOUNCE *);
ASN1EXP void   ASN1CALL free_KRB5_SRP_PA_ANNOUNCE  (KRB5_SRP_PA_ANNOUNCE *);


/*
KRB5-SRP-PA-INIT ::= [APPLICATION 0] SEQUENCE {
  group           [0] krb5uint32,
  a               [1] OCTET STRING,
}
*/

typedef struct KRB5_SRP_PA_INIT {
  krb5uint32 group;
  heim_octet_string a;
} KRB5_SRP_PA_INIT;

ASN1EXP int    ASN1CALL decode_KRB5_SRP_PA_INIT(const unsigned char *, size_t, KRB5_SRP_PA_INIT *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_SRP_PA_INIT(unsigned char *, size_t, const KRB5_SRP_PA_INIT *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_SRP_PA_INIT(const KRB5_SRP_PA_INIT *);
ASN1EXP int    ASN1CALL copy_KRB5_SRP_PA_INIT  (const KRB5_SRP_PA_INIT *, KRB5_SRP_PA_INIT *);
ASN1EXP void   ASN1CALL free_KRB5_SRP_PA_INIT  (KRB5_SRP_PA_INIT *);


/*
KRB5-SRP-PA-SERVER-CHALLENGE ::= [APPLICATION 1] OCTET STRING
*/

typedef heim_octet_string KRB5_SRP_PA_SERVER_CHALLENGE;

ASN1EXP int    ASN1CALL decode_KRB5_SRP_PA_SERVER_CHALLENGE(const unsigned char *, size_t, KRB5_SRP_PA_SERVER_CHALLENGE *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_SRP_PA_SERVER_CHALLENGE(unsigned char *, size_t, const KRB5_SRP_PA_SERVER_CHALLENGE *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_SRP_PA_SERVER_CHALLENGE(const KRB5_SRP_PA_SERVER_CHALLENGE *);
ASN1EXP int    ASN1CALL copy_KRB5_SRP_PA_SERVER_CHALLENGE  (const KRB5_SRP_PA_SERVER_CHALLENGE *, KRB5_SRP_PA_SERVER_CHALLENGE *);
ASN1EXP void   ASN1CALL free_KRB5_SRP_PA_SERVER_CHALLENGE  (KRB5_SRP_PA_SERVER_CHALLENGE *);


/*
KRB5-SRP-PA-CLIENT-RESPONSE ::= [APPLICATION 2] OCTET STRING
*/

typedef heim_octet_string KRB5_SRP_PA_CLIENT_RESPONSE;

ASN1EXP int    ASN1CALL decode_KRB5_SRP_PA_CLIENT_RESPONSE(const unsigned char *, size_t, KRB5_SRP_PA_CLIENT_RESPONSE *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_SRP_PA_CLIENT_RESPONSE(unsigned char *, size_t, const KRB5_SRP_PA_CLIENT_RESPONSE *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_SRP_PA_CLIENT_RESPONSE(const KRB5_SRP_PA_CLIENT_RESPONSE *);
ASN1EXP int    ASN1CALL copy_KRB5_SRP_PA_CLIENT_RESPONSE  (const KRB5_SRP_PA_CLIENT_RESPONSE *, KRB5_SRP_PA_CLIENT_RESPONSE *);
ASN1EXP void   ASN1CALL free_KRB5_SRP_PA_CLIENT_RESPONSE  (KRB5_SRP_PA_CLIENT_RESPONSE *);


/*
KRB5-SRP-PA-SERVER-VERIFIER ::= [APPLICATION 3] OCTET STRING
*/

typedef heim_octet_string KRB5_SRP_PA_SERVER_VERIFIER;

ASN1EXP int    ASN1CALL decode_KRB5_SRP_PA_SERVER_VERIFIER(const unsigned char *, size_t, KRB5_SRP_PA_SERVER_VERIFIER *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5_SRP_PA_SERVER_VERIFIER(unsigned char *, size_t, const KRB5_SRP_PA_SERVER_VERIFIER *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5_SRP_PA_SERVER_VERIFIER(const KRB5_SRP_PA_SERVER_VERIFIER *);
ASN1EXP int    ASN1CALL copy_KRB5_SRP_PA_SERVER_VERIFIER  (const KRB5_SRP_PA_SERVER_VERIFIER *, KRB5_SRP_PA_SERVER_VERIFIER *);
ASN1EXP void   ASN1CALL free_KRB5_SRP_PA_SERVER_VERIFIER  (KRB5_SRP_PA_SERVER_VERIFIER *);


#endif /* __krb5_asn1_h__ */
