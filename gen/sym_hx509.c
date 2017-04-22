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

extern const void *hx509_sym_export[];

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
const void *hx509_sym_export[] = {
#ifdef PKINIT
(const void *)hx509_bitstring_print,
(const void *)hx509_ca_sign,
(const void *)hx509_ca_sign_self,
(const void *)hx509_ca_tbs_add_crl_dp_uri,
(const void *)hx509_ca_tbs_add_eku,
(const void *)hx509_ca_tbs_add_san_hostname,
(const void *)hx509_ca_tbs_add_san_jid,
(const void *)hx509_ca_tbs_add_san_ms_upn,
(const void *)hx509_ca_tbs_add_san_otherName,
(const void *)hx509_ca_tbs_add_san_pkinit,
(const void *)hx509_ca_tbs_add_san_rfc822name,
(const void *)hx509_ca_tbs_free,
(const void *)hx509_ca_tbs_init,
(const void *)hx509_ca_tbs_set_ca,
(const void *)hx509_ca_tbs_set_domaincontroller,
(const void *)hx509_ca_tbs_set_notAfter,
(const void *)hx509_ca_tbs_set_notAfter_lifetime,
(const void *)hx509_ca_tbs_set_notBefore,
(const void *)hx509_ca_tbs_set_proxy,
(const void *)hx509_ca_tbs_set_serialnumber,
(const void *)hx509_ca_tbs_set_spki,
(const void *)hx509_ca_tbs_set_subject,
(const void *)hx509_ca_tbs_set_template,
(const void *)hx509_ca_tbs_subject_expand,
(const void *)hx509_ca_tbs_template_units,
(const void *)hx509_cert_binary,
(const void *)hx509_cert_check_eku,
(const void *)hx509_cert_cmp,
(const void *)hx509_cert_find_subjectAltName_otherName,
(const void *)hx509_cert_free,
(const void *)hx509_cert_get_SPKI,
(const void *)hx509_cert_get_attribute,
(const void *)hx509_cert_get_base_subject,
(const void *)hx509_cert_get_friendly_name,
(const void *)hx509_cert_get_issuer,
(const void *)hx509_cert_get_notAfter,
(const void *)hx509_cert_get_notBefore,
(const void *)hx509_cert_get_serialnumber,
(const void *)hx509_cert_get_subject,
(const void *)hx509_cert_init,
(const void *)hx509_cert_init_SecFramework,
(const void *)hx509_cert_init_SecFrameworkAuth,
(const void *)hx509_cert_init_data,
(const void *)hx509_cert_keyusage_print,
(const void *)hx509_cert_ref,
(const void *)hx509_cert_set_friendly_name,
(const void *)hx509_certs_add,
(const void *)hx509_certs_append,
(const void *)hx509_certs_end_seq,
(const void *)hx509_certs_filter,
(const void *)hx509_certs_find,
(const void *)hx509_certs_free,
(const void *)hx509_certs_info,
(const void *)hx509_certs_init,
(const void *)hx509_certs_iter,
(const void *)hx509_certs_iter_f,
(const void *)hx509_certs_merge,
(const void *)hx509_certs_next_cert,
(const void *)hx509_certs_start_seq,
(const void *)hx509_certs_store,
(const void *)hx509_ci_print_names,
(const void *)hx509_clear_error_string,
(const void *)hx509_cms_create_signed,
(const void *)hx509_cms_create_signed_1,
(const void *)hx509_cms_decrypt_encrypted,
(const void *)hx509_cms_envelope_1,
(const void *)hx509_cms_unenvelope,
(const void *)hx509_cms_unwrap_ContentInfo,
(const void *)hx509_cms_verify_signed,
(const void *)hx509_cms_wrap_ContentInfo,
(const void *)hx509_context_free,
(const void *)hx509_context_init,
(const void *)hx509_context_set_missing_revoke,
(const void *)hx509_crl_add_revoked_certs,
(const void *)hx509_crl_alloc,
(const void *)hx509_crl_free,
(const void *)hx509_crl_lifetime,
(const void *)hx509_crl_sign,
(const void *)hx509_crypto_aes128_cbc,
(const void *)hx509_crypto_aes256_cbc,
(const void *)hx509_crypto_available,
(const void *)hx509_crypto_decrypt,
(const void *)hx509_crypto_des_rsdi_ede3_cbc,
(const void *)hx509_crypto_destroy,
(const void *)hx509_crypto_encrypt,
(const void *)hx509_crypto_enctype_by_name,
(const void *)hx509_crypto_free_algs,
(const void *)hx509_crypto_get_params,
(const void *)hx509_crypto_init,
(const void *)hx509_crypto_provider,
(const void *)hx509_crypto_select,
(const void *)hx509_crypto_set_key_data,
(const void *)hx509_crypto_set_key_name,
(const void *)hx509_crypto_set_params,
(const void *)hx509_crypto_set_random_key,
(const void *)hx509_env_add,
(const void *)hx509_env_add_binding,
(const void *)hx509_env_find,
(const void *)hx509_env_find_binding,
(const void *)hx509_env_free,
(const void *)hx509_env_lfind,
(const void *)hx509_err,
(const void *)hx509_free_error_string,
(const void *)hx509_free_octet_string_list,
(const void *)hx509_general_name_unparse,
(const void *)hx509_get_error_string,
(const void *)hx509_get_one_cert,
(const void *)hx509_lock_add_cert,
(const void *)hx509_lock_add_certs,
(const void *)hx509_lock_add_password,
(const void *)hx509_lock_command_string,
(const void *)hx509_lock_free,
(const void *)hx509_lock_init,
(const void *)hx509_lock_prompt,
(const void *)hx509_lock_reset_certs,
(const void *)hx509_lock_reset_passwords,
(const void *)hx509_lock_reset_promper,
(const void *)hx509_lock_set_prompter,
(const void *)hx509_name_binary,
(const void *)hx509_name_cmp,
(const void *)hx509_name_copy,
(const void *)hx509_name_expand,
(const void *)hx509_name_free,
(const void *)hx509_name_from_Name,
(const void *)hx509_name_is_null_p,
(const void *)hx509_name_normalize,
(const void *)hx509_name_to_Name,
(const void *)hx509_name_to_string,
(const void *)hx509_ocsp_request,
(const void *)hx509_ocsp_verify,
(const void *)hx509_oid_print,
(const void *)hx509_oid_sprint,
(const void *)hx509_parse_name,
(const void *)hx509_peer_info_add_cms_alg,
(const void *)hx509_peer_info_alloc,
(const void *)hx509_peer_info_free,
(const void *)hx509_peer_info_set_cert,
(const void *)hx509_peer_info_set_cms_algs,
(const void *)hx509_pem_add_header,
(const void *)hx509_pem_find_header,
(const void *)hx509_pem_free_header,
(const void *)hx509_pem_read,
(const void *)hx509_pem_write,
(const void *)hx509_print_cert,
(const void *)hx509_print_stdout,
(const void *)hx509_prompt_hidden,
(const void *)hx509_query_alloc,
(const void *)hx509_query_free,
(const void *)hx509_query_match_cmp_func,
(const void *)hx509_query_match_eku,
(const void *)hx509_query_match_friendly_name,
(const void *)hx509_query_match_issuer_serial,
(const void *)hx509_query_match_option,
(const void *)hx509_revoke_add_crl,
(const void *)hx509_revoke_add_ocsp,
(const void *)hx509_revoke_free,
(const void *)hx509_revoke_init,
(const void *)hx509_revoke_ocsp_print,
(const void *)hx509_revoke_verify,
(const void *)hx509_set_error_string,
(const void *)hx509_set_error_stringv,
(const void *)hx509_signature_md5,
(const void *)hx509_signature_rsa,
(const void *)hx509_signature_rsa_with_md5,
(const void *)hx509_signature_rsa_with_sha1,
(const void *)hx509_signature_rsa_with_sha256,
(const void *)hx509_signature_rsa_with_sha384,
(const void *)hx509_signature_rsa_with_sha512,
(const void *)hx509_signature_sha1,
(const void *)hx509_signature_sha256,
(const void *)hx509_signature_sha384,
(const void *)hx509_signature_sha512,
(const void *)hx509_unparse_der_name,
(const void *)hx509_validate_cert,
(const void *)hx509_validate_ctx_add_flags,
(const void *)hx509_validate_ctx_free,
(const void *)hx509_validate_ctx_init,
(const void *)hx509_validate_ctx_set_print,
(const void *)hx509_verify_attach_anchors,
(const void *)hx509_verify_attach_revoke,
(const void *)hx509_verify_ctx_f_allow_default_trustanchors,
(const void *)hx509_verify_destroy_ctx,
(const void *)hx509_verify_hostname,
(const void *)hx509_verify_init_ctx,
(const void *)hx509_verify_path,
(const void *)hx509_verify_set_max_depth,
(const void *)hx509_verify_set_proxy_certificate,
(const void *)hx509_verify_set_strict_rfc3280_verification,
(const void *)hx509_verify_set_time,
(const void *)hx509_verify_signature,
(const void *)hx509_xfree,
(const void *)initialize_hx_error_table_r,
(const void *)_hx509_cert_set_key,
(const void *)_hx509_cert_private_key,
(const void *)_hx509_certs_keys_free,
(const void *)_hx509_certs_keys_get,
(const void *)_hx509_generate_private_key_bits,
(const void *)_hx509_generate_private_key_free,
(const void *)_hx509_generate_private_key_init,
(const void *)_hx509_generate_private_key_is_ca,
(const void *)_hx509_generate_private_key,
(const void *)_hx509_map_file_os,
(const void *)hx509_private_key2SPKI,
(const void *)hx509_private_key_free,
(const void *)_hx509_private_key_ref,
(const void *)_hx509_request_add_dns_name,
(const void *)_hx509_request_add_email,
(const void *)hx509_request_free,
(const void *)hx509_request_get_SubjectPublicKeyInfo,
(const void *)hx509_request_get_name,
(const void *)hx509_request_init,
(const void *)_hx509_request_parse,
(const void *)_hx509_request_print,
(const void *)hx509_request_set_SubjectPublicKeyInfo,
(const void *)hx509_request_set_name,
(const void *)_hx509_request_to_pkcs10,
(const void *)_hx509_unmap_file_os,
(const void *)_hx509_write_file,
(const void *)hx509_cert_get_appleid,
(const void *)hx509_cert_get_persistent,
(const void *)hx509_evaluate_free,
(const void *)hx509_evaluate_get_length,
(const void *)hx509_evaluate_get_cert,
(const void *)hx509_evaluate_get_ta,
(const void *)hx509_query_match_persistent,
#endif
NULL
};

#pragma clang diagnostic pop

