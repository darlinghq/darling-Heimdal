struct krb5_dh_moduli;
struct _krb5_krb_auth_data;
struct AlgorithmIdentifier;
struct _krb5_key_data;
struct _krb5_checksum_type;
struct _krb5_key_type;
struct _krb5_encryption_type;
struct _krb5_srv_query_ctx;
struct krb5_fast_state;
struct _krb5_srp_group;
struct _krb5_srp;

#define KRB5_DEPRECATED
#define KRB5_DEPRECATED_FUNCTION(x)
#define GSSAPI_DEPRECATED
#define HC_DEPRECATED
#define HC_DEPRECATED_CRYPTO
#define GSSAPI_DEPRECATED_FUNCTION(x)

#include <config.h>
#include <krb5.h>
#include <krb5cf-protos.h>
#include <krb5_asn1.h>
#include "crypto-headers.h"
#include <gssapi_rewrite.h>
#include <GSS.h>
#include <GSSPrivate.h>
#include <gssapi.h>
#include <gssapi_krb5.h>
#include <gssapi_scram.h>
#include <gssapi_spnego.h>
#include <gssapi_ntlm.h>
#include <gssapi_netlogon.h>
#include <gssapi_apple.h>
#include <gssapi_spi.h>
#include <GSSItem.h>
#include <heimbase.h>
#include <heimbasepriv.h>
#include <hx509.h>
#include <krb5-private.h>
#include <roken.h>
#include <rtbl.h>
#include <parse_bytes.h>
#include <krb5_err.h>
#include <heim_err.h>
#include <krb_err.h>
#include <hdb_err.h>
#include <hx509_err.h>
#include <heim-ipc.h>
#include <wind.h>
#include <parse_units.h>
#include <parse_time.h>
#include <base64.h>
#include <hex.h>
#include <com_err.h>
#include <der.h>
#include <rfc2459_asn1.h>
#include <cms_asn1.h>
#include <spnego_asn1.h>
#include <gkrb5_err.h>
#include <heimcred.h>

krb5_error_code _gsskrb5_init (krb5_context *);

extern int _krb5_AES_string_to_default_iterator;

struct hx509_collector;
struct hx_expr;
struct hx509_generate_private_context;
struct hx509_keyset_ops;
typedef struct hx509_path hx509_path;
typedef void (*_hx509_cert_release_func)(struct hx509_cert_data *, void *);

#include <hx509-private.h>

extern const void *asn1_sym_export[];

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
const void *asn1_sym_export[] = {
(const void *)TicketFlags2int,
(const void *)&asn1_oid_id_dhpublicnumber,
(const void *)&asn1_oid_id_pkcs7_data,
(const void *)&asn1_oid_id_pkcs7_envelopedData,
(const void *)&asn1_oid_id_pkcs7_signedData,
(const void *)&asn1_oid_id_rsadsi_des_ede3_cbc,
(const void *)copy_AlgorithmIdentifier,
(const void *)copy_IssuerAndSerialNumber,
(const void *)copy_KerberosTime,
(const void *)copy_Principal,
(const void *)copy_SubjectPublicKeyInfo,
(const void *)decode_AlgorithmIdentifier,
(const void *)decode_ChangePasswdDataMS,
(const void *)decode_DHPublicKey,
(const void *)decode_DomainParameters,
(const void *)decode_GeneralName,
(const void *)decode_IssuerAndSerialNumber,
(const void *)decode_KerberosTime,
(const void *)decode_Principal,
(const void *)decode_SubjectPublicKeyInfo,
(const void *)decode_Ticket,
(const void *)der_copy_bit_string,
(const void *)der_copy_bmp_string,
(const void *)der_copy_general_string,
(const void *)der_copy_generalized_time,
(const void *)der_copy_heim_integer,
(const void *)der_copy_ia5_string,
(const void *)der_copy_integer,
(const void *)der_copy_octet_string,
(const void *)der_copy_oid,
(const void *)der_copy_printable_string,
(const void *)der_copy_universal_string,
(const void *)der_copy_unsigned,
(const void *)der_copy_utctime,
(const void *)der_copy_utf8string,
(const void *)der_copy_visible_string,
(const void *)der_free_bit_string,
(const void *)der_free_bmp_string,
(const void *)der_free_general_string,
(const void *)der_free_generalized_time,
(const void *)der_free_heim_integer,
(const void *)der_free_ia5_string,
(const void *)der_free_integer,
(const void *)der_free_octet_string,
(const void *)der_free_oid,
(const void *)der_free_printable_string,
(const void *)der_free_universal_string,
(const void *)der_free_unsigned,
(const void *)der_free_utctime,
(const void *)der_free_utf8string,
(const void *)der_free_visible_string,
(const void *)der_get_bit_string,
(const void *)der_get_bmp_string,
(const void *)der_get_boolean,
(const void *)der_get_general_string,
(const void *)der_get_generalized_time,
(const void *)der_get_heim_integer,
(const void *)der_get_ia5_string,
(const void *)der_get_integer,
(const void *)der_get_length,
(const void *)der_get_octet_string,
(const void *)der_get_octet_string_ber,
(const void *)der_get_oid,
(const void *)der_get_printable_string,
(const void *)der_get_tag,
(const void *)der_get_universal_string,
(const void *)der_get_unsigned,
(const void *)der_get_utctime,
(const void *)der_get_utf8string,
(const void *)der_get_visible_string,
(const void *)der_heim_bit_string_cmp,
(const void *)der_heim_bmp_string_cmp,
(const void *)der_heim_integer_cmp,
(const void *)der_heim_octet_string_cmp,
(const void *)der_heim_oid_cmp,
(const void *)der_heim_universal_string_cmp,
(const void *)der_length_bit_string,
(const void *)der_length_bmp_string,
(const void *)der_length_boolean,
(const void *)der_length_enumerated,
(const void *)der_length_general_string,
(const void *)der_length_generalized_time,
(const void *)der_length_heim_integer,
(const void *)der_length_ia5_string,
(const void *)der_length_integer,
(const void *)der_length_len,
(const void *)der_length_octet_string,
(const void *)der_length_oid,
(const void *)der_length_printable_string,
(const void *)der_length_tag,
(const void *)der_length_universal_string,
(const void *)der_length_unsigned,
(const void *)der_length_utctime,
(const void *)der_length_utf8string,
(const void *)der_length_visible_string,
(const void *)der_match_tag,
(const void *)der_match_tag_and_length,
(const void *)der_parse_heim_oid,
(const void *)der_parse_hex_heim_integer,
(const void *)der_print_heim_oid,
(const void *)der_print_hex_heim_integer,
(const void *)der_put_bit_string,
(const void *)der_put_bmp_string,
(const void *)der_put_boolean,
(const void *)der_put_general_string,
(const void *)der_put_generalized_time,
(const void *)der_put_heim_integer,
(const void *)der_put_ia5_string,
(const void *)der_put_integer,
(const void *)der_put_length,
(const void *)der_put_length_and_tag,
(const void *)der_put_octet_string,
(const void *)der_put_oid,
(const void *)der_put_printable_string,
(const void *)der_put_tag,
(const void *)der_put_universal_string,
(const void *)der_put_unsigned,
(const void *)der_put_utctime,
(const void *)der_put_utf8string,
(const void *)der_put_visible_string,
(const void *)encode_AlgorithmIdentifier,
(const void *)encode_ContentInfo,
(const void *)encode_DHPublicKey,
(const void *)encode_GeneralName,
(const void *)encode_IssuerAndSerialNumber,
(const void *)encode_KerberosTime,
(const void *)encode_Principal,
(const void *)encode_SubjectPublicKeyInfo,
(const void *)free_AlgorithmIdentifier,
(const void *)free_ChangePasswdDataMS,
(const void *)free_ContentInfo,
(const void *)free_DomainParameters,
(const void *)free_GeneralName,
(const void *)free_IssuerAndSerialNumber,
(const void *)free_KerberosTime,
(const void *)free_Principal,
(const void *)free_SubjectPublicKeyInfo,
(const void *)free_Ticket,
(const void *)length_AlgorithmIdentifier,
(const void *)length_ContentInfo,
(const void *)length_DHPublicKey,
(const void *)length_GeneralName,
(const void *)length_IssuerAndSerialNumber,
(const void *)length_KerberosTime,
(const void *)length_Principal,
(const void *)length_SubjectPublicKeyInfo,
(const void *)copy_GeneralName,
(const void *)free_GeneralName,
(const void *)length_GeneralName,
(const void *)encode_GeneralName,
(const void *)decode_GeneralName,
(const void *)copy_EncryptionKey,
(const void *)free_EncryptionKey,
(const void *)length_EncryptionKey,
(const void *)encode_EncryptionKey,
(const void *)decode_EncryptionKey,
(const void *)length_KDC_PROXY_MESSAGE,
(const void *)encode_KDC_PROXY_MESSAGE,
(const void *)decode_KDC_PROXY_MESSAGE,
(const void *)copy_KRB5_SRP_PA,
(const void *)length_KRB5_SRP_PA,
(const void *)free_KRB5_SRP_PA,
(const void *)decode_KRB5_SRP_PA,
(const void *)encode_KRB5_SRP_PA,
(const void *)free_KDCSRPState,
NULL
};

#pragma clang diagnostic pop

