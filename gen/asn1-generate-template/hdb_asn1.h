/* Generated from /Users/user/Downloads/darling-Heimdal/lib/hdb/hdb.asn1 */
/* Do not edit */

#ifndef __hdb_asn1_h__
#define __hdb_asn1_h__

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
enum { HDB_DB_FORMAT = 2 };

enum { hdb_pw_salt = 3 };

enum { hdb_afs3_salt = 10 };

/*
Salt ::= SEQUENCE {
  type            [0] INTEGER (0..-1),
  salt            [1] OCTET STRING,
  opaque          [2] OCTET STRING OPTIONAL,
}
*/

typedef struct Salt {
  unsigned int type;
  heim_octet_string salt;
  heim_octet_string *opaque;
} Salt;

ASN1EXP int    ASN1CALL decode_Salt(const unsigned char *, size_t, Salt *, size_t *);
ASN1EXP int    ASN1CALL encode_Salt(unsigned char *, size_t, const Salt *, size_t *);
ASN1EXP size_t ASN1CALL length_Salt(const Salt *);
ASN1EXP int    ASN1CALL copy_Salt  (const Salt *, Salt *);
ASN1EXP void   ASN1CALL free_Salt  (Salt *);


/*
Key ::= SEQUENCE {
  mkvno           [0] INTEGER (-2147483648..2147483647) OPTIONAL,
  key             [1] EncryptionKey,
  salt            [2] Salt OPTIONAL,
}
*/

typedef struct Key {
  int *mkvno;
  EncryptionKey key;
  Salt *salt;
} Key;

ASN1EXP int    ASN1CALL decode_Key(const unsigned char *, size_t, Key *, size_t *);
ASN1EXP int    ASN1CALL encode_Key(unsigned char *, size_t, const Key *, size_t *);
ASN1EXP size_t ASN1CALL length_Key(const Key *);
ASN1EXP int    ASN1CALL copy_Key  (const Key *, Key *);
ASN1EXP void   ASN1CALL free_Key  (Key *);


/*
Event ::= SEQUENCE {
  time            [0] KerberosTime,
  principal       [1] Principal OPTIONAL,
}
*/

typedef struct Event {
  KerberosTime time;
  Principal *principal;
} Event;

ASN1EXP int    ASN1CALL decode_Event(const unsigned char *, size_t, Event *, size_t *);
ASN1EXP int    ASN1CALL encode_Event(unsigned char *, size_t, const Event *, size_t *);
ASN1EXP size_t ASN1CALL length_Event(const Event *);
ASN1EXP int    ASN1CALL copy_Event  (const Event *, Event *);
ASN1EXP void   ASN1CALL free_Event  (Event *);


/*
HDBFlags ::= BIT STRING {
  initial(0),
  forwardable(1),
  proxiable(2),
  renewable(3),
  postdate(4),
  server(5),
  client(6),
  invalid(7),
  require-preauth(8),
  change-pw(9),
  require-hwauth(10),
  ok-as-delegate(11),
  user-to-user(12),
  immutable(13),
  trusted-for-delegation(14),
  allow-kerberos4(15),
  allow-digest(16),
  locked-out(17),
  require-pwchange(18),
  do-not-store(31)
}
*/

typedef struct HDBFlags {
  unsigned int initial:1;
  unsigned int forwardable:1;
  unsigned int proxiable:1;
  unsigned int renewable:1;
  unsigned int postdate:1;
  unsigned int server:1;
  unsigned int client:1;
  unsigned int invalid:1;
  unsigned int require_preauth:1;
  unsigned int change_pw:1;
  unsigned int require_hwauth:1;
  unsigned int ok_as_delegate:1;
  unsigned int user_to_user:1;
  unsigned int immutable:1;
  unsigned int trusted_for_delegation:1;
  unsigned int allow_kerberos4:1;
  unsigned int allow_digest:1;
  unsigned int locked_out:1;
  unsigned int require_pwchange:1;
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
  unsigned int do_not_store:1;
} HDBFlags;


unsigned HDBFlags2int(HDBFlags);
HDBFlags int2HDBFlags(unsigned);
const struct units * asn1_HDBFlags_units(void);
ASN1EXP int    ASN1CALL decode_HDBFlags(const unsigned char *, size_t, HDBFlags *, size_t *);
ASN1EXP int    ASN1CALL encode_HDBFlags(unsigned char *, size_t, const HDBFlags *, size_t *);
ASN1EXP size_t ASN1CALL length_HDBFlags(const HDBFlags *);
ASN1EXP int    ASN1CALL copy_HDBFlags  (const HDBFlags *, HDBFlags *);
ASN1EXP void   ASN1CALL free_HDBFlags  (HDBFlags *);


/*
GENERATION ::= SEQUENCE {
  time            [0] KerberosTime,
  usec            [1] INTEGER (0..-1),
  gen             [2] INTEGER (0..-1),
}
*/

typedef struct GENERATION {
  KerberosTime time;
  unsigned int usec;
  unsigned int gen;
} GENERATION;

ASN1EXP int    ASN1CALL decode_GENERATION(const unsigned char *, size_t, GENERATION *, size_t *);
ASN1EXP int    ASN1CALL encode_GENERATION(unsigned char *, size_t, const GENERATION *, size_t *);
ASN1EXP size_t ASN1CALL length_GENERATION(const GENERATION *);
ASN1EXP int    ASN1CALL copy_GENERATION  (const GENERATION *, GENERATION *);
ASN1EXP void   ASN1CALL free_GENERATION  (GENERATION *);


/*
HDB-Ext-PKINIT-acl ::= SEQUENCE OF SEQUENCE {
  subject         [0]   UTF8String,
  issuer          [1]   UTF8String OPTIONAL,
  anchor          [2]   UTF8String OPTIONAL,
}
*/

typedef struct HDB_Ext_PKINIT_acl {
  unsigned int len;
  struct HDB_Ext_PKINIT_acl_val {
    heim_utf8_string subject;
    heim_utf8_string *issuer;
    heim_utf8_string *anchor;
  } *val;
} HDB_Ext_PKINIT_acl;

ASN1EXP int    ASN1CALL decode_HDB_Ext_PKINIT_acl(const unsigned char *, size_t, HDB_Ext_PKINIT_acl *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_PKINIT_acl(unsigned char *, size_t, const HDB_Ext_PKINIT_acl *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_PKINIT_acl(const HDB_Ext_PKINIT_acl *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_PKINIT_acl  (const HDB_Ext_PKINIT_acl *, HDB_Ext_PKINIT_acl *);
ASN1EXP void   ASN1CALL free_HDB_Ext_PKINIT_acl  (HDB_Ext_PKINIT_acl *);


/*
HDB-Ext-PKINIT-hash ::= SEQUENCE OF SEQUENCE {
  digest-type     [0]   OBJECT IDENTIFIER,
  digest          [1] OCTET STRING,
}
*/

typedef struct HDB_Ext_PKINIT_hash {
  unsigned int len;
  struct HDB_Ext_PKINIT_hash_val {
    heim_oid digest_type;
    heim_octet_string digest;
  } *val;
} HDB_Ext_PKINIT_hash;

ASN1EXP int    ASN1CALL decode_HDB_Ext_PKINIT_hash(const unsigned char *, size_t, HDB_Ext_PKINIT_hash *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_PKINIT_hash(unsigned char *, size_t, const HDB_Ext_PKINIT_hash *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_PKINIT_hash(const HDB_Ext_PKINIT_hash *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_PKINIT_hash  (const HDB_Ext_PKINIT_hash *, HDB_Ext_PKINIT_hash *);
ASN1EXP void   ASN1CALL free_HDB_Ext_PKINIT_hash  (HDB_Ext_PKINIT_hash *);


/*
HDB-Ext-PKINIT-cert ::= SEQUENCE OF SEQUENCE {
  cert            [0] OCTET STRING,
}
*/

typedef struct HDB_Ext_PKINIT_cert {
  unsigned int len;
  struct HDB_Ext_PKINIT_cert_val {
    heim_octet_string cert;
  } *val;
} HDB_Ext_PKINIT_cert;

ASN1EXP int    ASN1CALL decode_HDB_Ext_PKINIT_cert(const unsigned char *, size_t, HDB_Ext_PKINIT_cert *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_PKINIT_cert(unsigned char *, size_t, const HDB_Ext_PKINIT_cert *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_PKINIT_cert(const HDB_Ext_PKINIT_cert *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_PKINIT_cert  (const HDB_Ext_PKINIT_cert *, HDB_Ext_PKINIT_cert *);
ASN1EXP void   ASN1CALL free_HDB_Ext_PKINIT_cert  (HDB_Ext_PKINIT_cert *);


/*
HDB-Ext-Constrained-delegation-acl ::= SEQUENCE OF Principal
*/

typedef struct HDB_Ext_Constrained_delegation_acl {
  unsigned int len;
  Principal *val;
} HDB_Ext_Constrained_delegation_acl;

ASN1EXP int    ASN1CALL decode_HDB_Ext_Constrained_delegation_acl(const unsigned char *, size_t, HDB_Ext_Constrained_delegation_acl *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_Constrained_delegation_acl(unsigned char *, size_t, const HDB_Ext_Constrained_delegation_acl *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_Constrained_delegation_acl(const HDB_Ext_Constrained_delegation_acl *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_Constrained_delegation_acl  (const HDB_Ext_Constrained_delegation_acl *, HDB_Ext_Constrained_delegation_acl *);
ASN1EXP void   ASN1CALL free_HDB_Ext_Constrained_delegation_acl  (HDB_Ext_Constrained_delegation_acl *);


/*
HDB-Ext-Lan-Manager-OWF ::= OCTET STRING
*/

typedef heim_octet_string HDB_Ext_Lan_Manager_OWF;

ASN1EXP int    ASN1CALL decode_HDB_Ext_Lan_Manager_OWF(const unsigned char *, size_t, HDB_Ext_Lan_Manager_OWF *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_Lan_Manager_OWF(unsigned char *, size_t, const HDB_Ext_Lan_Manager_OWF *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_Lan_Manager_OWF(const HDB_Ext_Lan_Manager_OWF *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_Lan_Manager_OWF  (const HDB_Ext_Lan_Manager_OWF *, HDB_Ext_Lan_Manager_OWF *);
ASN1EXP void   ASN1CALL free_HDB_Ext_Lan_Manager_OWF  (HDB_Ext_Lan_Manager_OWF *);


/*
HDB-Ext-Password ::= SEQUENCE {
  mkvno           [0] INTEGER (-2147483648..2147483647) OPTIONAL,
  password        OCTET STRING,
}
*/

typedef struct HDB_Ext_Password {
  int *mkvno;
  heim_octet_string password;
} HDB_Ext_Password;

ASN1EXP int    ASN1CALL decode_HDB_Ext_Password(const unsigned char *, size_t, HDB_Ext_Password *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_Password(unsigned char *, size_t, const HDB_Ext_Password *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_Password(const HDB_Ext_Password *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_Password  (const HDB_Ext_Password *, HDB_Ext_Password *);
ASN1EXP void   ASN1CALL free_HDB_Ext_Password  (HDB_Ext_Password *);


/*
HDB-Ext-Aliases ::= SEQUENCE {
  case-insensitive   [0] BOOLEAN,
  aliases            [1] SEQUENCE OF Principal,
}
*/

typedef struct HDB_Ext_Aliases {
  int case_insensitive;
  struct HDB_Ext_Aliases_aliases {
    unsigned int len;
    Principal *val;
  } aliases;
} HDB_Ext_Aliases;

ASN1EXP int    ASN1CALL decode_HDB_Ext_Aliases(const unsigned char *, size_t, HDB_Ext_Aliases *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_Aliases(unsigned char *, size_t, const HDB_Ext_Aliases *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_Aliases(const HDB_Ext_Aliases *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_Aliases  (const HDB_Ext_Aliases *, HDB_Ext_Aliases *);
ASN1EXP void   ASN1CALL free_HDB_Ext_Aliases  (HDB_Ext_Aliases *);


/*
Keys ::= SEQUENCE OF Key
*/

typedef struct Keys {
  unsigned int len;
  Key *val;
} Keys;

ASN1EXP int   ASN1CALL add_Keys  (Keys *, const Key *);
ASN1EXP int   ASN1CALL remove_Keys  (Keys *, unsigned int);
ASN1EXP int    ASN1CALL decode_Keys(const unsigned char *, size_t, Keys *, size_t *);
ASN1EXP int    ASN1CALL encode_Keys(unsigned char *, size_t, const Keys *, size_t *);
ASN1EXP size_t ASN1CALL length_Keys(const Keys *);
ASN1EXP int    ASN1CALL copy_Keys  (const Keys *, Keys *);
ASN1EXP void   ASN1CALL free_Keys  (Keys *);


/*
hdb_keyset_aapl ::= SEQUENCE {
  kvno            [1] INTEGER (-2147483648..2147483647),
  keys            [0] Keys,
  principal       [2] Principal OPTIONAL,
}
*/

typedef struct hdb_keyset_aapl {
  int kvno;
  Keys keys;
  Principal *principal;
} hdb_keyset_aapl;

ASN1EXP int    ASN1CALL decode_hdb_keyset_aapl(const unsigned char *, size_t, hdb_keyset_aapl *, size_t *);
ASN1EXP int    ASN1CALL encode_hdb_keyset_aapl(unsigned char *, size_t, const hdb_keyset_aapl *, size_t *);
ASN1EXP size_t ASN1CALL length_hdb_keyset_aapl(const hdb_keyset_aapl *);
ASN1EXP int    ASN1CALL copy_hdb_keyset_aapl  (const hdb_keyset_aapl *, hdb_keyset_aapl *);
ASN1EXP void   ASN1CALL free_hdb_keyset_aapl  (hdb_keyset_aapl *);


/*
hdb_keyset ::= SEQUENCE {
  kvno            [0] INTEGER (-2147483648..2147483647),
  keys            [1] Keys,
  set-time        [2] KerberosTime OPTIONAL,
  principal       [3] Principal OPTIONAL,
  ...,
}
*/

typedef struct hdb_keyset {
  int kvno;
  Keys keys;
  KerberosTime *set_time;
  Principal *principal;
} hdb_keyset;

ASN1EXP int    ASN1CALL decode_hdb_keyset(const unsigned char *, size_t, hdb_keyset *, size_t *);
ASN1EXP int    ASN1CALL encode_hdb_keyset(unsigned char *, size_t, const hdb_keyset *, size_t *);
ASN1EXP size_t ASN1CALL length_hdb_keyset(const hdb_keyset *);
ASN1EXP int    ASN1CALL copy_hdb_keyset  (const hdb_keyset *, hdb_keyset *);
ASN1EXP void   ASN1CALL free_hdb_keyset  (hdb_keyset *);


/*
hdb-srp ::= SEQUENCE {
  verifier        [0] OCTET STRING,
  param           [1] KRB5-SRP-PA,
}
*/

typedef struct hdb_srp {
  heim_octet_string verifier;
  KRB5_SRP_PA param;
} hdb_srp;

ASN1EXP int    ASN1CALL decode_hdb_srp(const unsigned char *, size_t, hdb_srp *, size_t *);
ASN1EXP int    ASN1CALL encode_hdb_srp(unsigned char *, size_t, const hdb_srp *, size_t *);
ASN1EXP size_t ASN1CALL length_hdb_srp(const hdb_srp *);
ASN1EXP int    ASN1CALL copy_hdb_srp  (const hdb_srp *, hdb_srp *);
ASN1EXP void   ASN1CALL free_hdb_srp  (hdb_srp *);


/*
hdb-srp-set ::= SET OF hdb-srp
*/

typedef struct hdb_srp_set {
  unsigned int len;
  hdb_srp *val;
} hdb_srp_set;

ASN1EXP int   ASN1CALL add_hdb_srp_set  (hdb_srp_set *, const hdb_srp *);
ASN1EXP int   ASN1CALL remove_hdb_srp_set  (hdb_srp_set *, unsigned int);
ASN1EXP int    ASN1CALL decode_hdb_srp_set(const unsigned char *, size_t, hdb_srp_set *, size_t *);
ASN1EXP int    ASN1CALL encode_hdb_srp_set(unsigned char *, size_t, const hdb_srp_set *, size_t *);
ASN1EXP size_t ASN1CALL length_hdb_srp_set(const hdb_srp_set *);
ASN1EXP int    ASN1CALL copy_hdb_srp_set  (const hdb_srp_set *, hdb_srp_set *);
ASN1EXP void   ASN1CALL free_hdb_srp_set  (hdb_srp_set *);


/*
HDB-Ext-KeySet ::= SEQUENCE OF hdb_keyset
*/

typedef struct HDB_Ext_KeySet {
  unsigned int len;
  hdb_keyset *val;
} HDB_Ext_KeySet;

ASN1EXP int   ASN1CALL add_HDB_Ext_KeySet  (HDB_Ext_KeySet *, const hdb_keyset *);
ASN1EXP int   ASN1CALL remove_HDB_Ext_KeySet  (HDB_Ext_KeySet *, unsigned int);
ASN1EXP int    ASN1CALL decode_HDB_Ext_KeySet(const unsigned char *, size_t, HDB_Ext_KeySet *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_KeySet(unsigned char *, size_t, const HDB_Ext_KeySet *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_KeySet(const HDB_Ext_KeySet *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_KeySet  (const HDB_Ext_KeySet *, HDB_Ext_KeySet *);
ASN1EXP void   ASN1CALL free_HDB_Ext_KeySet  (HDB_Ext_KeySet *);


/*
HDB-extension ::= SEQUENCE {
  mandatory       [0] BOOLEAN,
  data            [1] CHOICE {
    pkinit-acl               [0] HDB-Ext-PKINIT-acl,
    pkinit-cert-hash         [1] HDB-Ext-PKINIT-hash,
    allowed-to-delegate-to   [2] HDB-Ext-Constrained-delegation-acl,
    lm-owf                   [4] HDB-Ext-Lan-Manager-OWF,
    password                 [5] HDB-Ext-Password,
    aliases                  [6] HDB-Ext-Aliases,
    last-pw-change           [7] KerberosTime,
    pkinit-cert              [8] HDB-Ext-PKINIT-cert,
    hist-keys                [9] HDB-Ext-KeySet,
    hist-kvno-diff-clnt      [10] INTEGER (-2147483648..2147483647),
    hist-kvno-diff-svc       [11] INTEGER (-2147483648..2147483647),
    policy                   [12]     UTF8String,
    srp                      [13] hdb-srp-set,
    ...,
  },
  ...,
}
*/

typedef struct HDB_extension {
  int mandatory;
  struct HDB_extension_data {
    enum HDB_extension_data_enum {
      choice_HDB_extension_data_asn1_ellipsis = -1,
invalid_choice_HDB_extension_data = 0,
      choice_HDB_extension_data_pkinit_acl,
      choice_HDB_extension_data_pkinit_cert_hash,
      choice_HDB_extension_data_allowed_to_delegate_to,
      choice_HDB_extension_data_lm_owf,
      choice_HDB_extension_data_password,
      choice_HDB_extension_data_aliases,
      choice_HDB_extension_data_last_pw_change,
      choice_HDB_extension_data_pkinit_cert,
      choice_HDB_extension_data_hist_keys,
      choice_HDB_extension_data_hist_kvno_diff_clnt,
      choice_HDB_extension_data_hist_kvno_diff_svc,
      choice_HDB_extension_data_policy,
      choice_HDB_extension_data_srp
      /* ... */
    } element;
    union {
      HDB_Ext_PKINIT_acl pkinit_acl;
      HDB_Ext_PKINIT_hash pkinit_cert_hash;
      HDB_Ext_Constrained_delegation_acl allowed_to_delegate_to;
      HDB_Ext_Lan_Manager_OWF lm_owf;
      HDB_Ext_Password password;
      HDB_Ext_Aliases aliases;
      KerberosTime last_pw_change;
      HDB_Ext_PKINIT_cert pkinit_cert;
      HDB_Ext_KeySet hist_keys;
      int hist_kvno_diff_clnt;
      int hist_kvno_diff_svc;
      heim_utf8_string policy;
      hdb_srp_set srp;
      heim_octet_string asn1_ellipsis;
    } u;
  } data;
} HDB_extension;

ASN1EXP int    ASN1CALL decode_HDB_extension(const unsigned char *, size_t, HDB_extension *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_extension(unsigned char *, size_t, const HDB_extension *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_extension(const HDB_extension *);
ASN1EXP int    ASN1CALL copy_HDB_extension  (const HDB_extension *, HDB_extension *);
ASN1EXP void   ASN1CALL free_HDB_extension  (HDB_extension *);


/*
HDB-extensions ::= SEQUENCE OF HDB-extension
*/

typedef struct HDB_extensions {
  unsigned int len;
  HDB_extension *val;
} HDB_extensions;

ASN1EXP int    ASN1CALL decode_HDB_extensions(const unsigned char *, size_t, HDB_extensions *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_extensions(unsigned char *, size_t, const HDB_extensions *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_extensions(const HDB_extensions *);
ASN1EXP int    ASN1CALL copy_HDB_extensions  (const HDB_extensions *, HDB_extensions *);
ASN1EXP void   ASN1CALL free_HDB_extensions  (HDB_extensions *);


/*
hdb_entry ::= SEQUENCE {
  principal       [0] Principal OPTIONAL,
  kvno            [1] INTEGER (-2147483648..2147483647),
  keys            [2] Keys,
  created-by      [3] Event,
  modified-by     [4] Event OPTIONAL,
  valid-start     [5] KerberosTime OPTIONAL,
  valid-end       [6] KerberosTime OPTIONAL,
  pw-end          [7] KerberosTime OPTIONAL,
  max-life        [8] INTEGER (0..-1) OPTIONAL,
  max-renew       [9] INTEGER (0..-1) OPTIONAL,
  flags           [10] HDBFlags,
  etypes          [11] SEQUENCE OF INTEGER (0..-1) OPTIONAL,
  generation      [12] GENERATION OPTIONAL,
  extensions      [13] HDB-extensions OPTIONAL,
  acl-rights      [13] INTEGER (0..-1) OPTIONAL,
}
*/

typedef struct hdb_entry {
  Principal *principal;
  int kvno;
  Keys keys;
  Event created_by;
  Event *modified_by;
  KerberosTime *valid_start;
  KerberosTime *valid_end;
  KerberosTime *pw_end;
  unsigned int *max_life;
  unsigned int *max_renew;
  HDBFlags flags;
  struct hdb_entry_etypes {
    unsigned int len;
    unsigned int *val;
  } *etypes;
  GENERATION *generation;
  HDB_extensions *extensions;
  unsigned int *acl_rights;
} hdb_entry;

ASN1EXP int    ASN1CALL decode_hdb_entry(const unsigned char *, size_t, hdb_entry *, size_t *);
ASN1EXP int    ASN1CALL encode_hdb_entry(unsigned char *, size_t, const hdb_entry *, size_t *);
ASN1EXP size_t ASN1CALL length_hdb_entry(const hdb_entry *);
ASN1EXP int    ASN1CALL copy_hdb_entry  (const hdb_entry *, hdb_entry *);
ASN1EXP void   ASN1CALL free_hdb_entry  (hdb_entry *);


/*
hdb_entry_alias ::= [APPLICATION 0] SEQUENCE {
  principal       [0] Principal OPTIONAL,
}
*/

typedef struct hdb_entry_alias {
  Principal *principal;
} hdb_entry_alias;

ASN1EXP int    ASN1CALL decode_hdb_entry_alias(const unsigned char *, size_t, hdb_entry_alias *, size_t *);
ASN1EXP int    ASN1CALL encode_hdb_entry_alias(unsigned char *, size_t, const hdb_entry_alias *, size_t *);
ASN1EXP size_t ASN1CALL length_hdb_entry_alias(const hdb_entry_alias *);
ASN1EXP int    ASN1CALL copy_hdb_entry_alias  (const hdb_entry_alias *, hdb_entry_alias *);
ASN1EXP void   ASN1CALL free_hdb_entry_alias  (hdb_entry_alias *);


#endif /* __hdb_asn1_h__ */
