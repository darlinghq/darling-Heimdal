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

extern const void *hcrypto_sym_export[];

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
const void *hcrypto_sym_export[] = {
#ifndef HAVE_CCDIGESTCREATE
(const void *)hc_CCDigest,
(const void *)hc_CCDigestCreate,
(const void *)hc_CCDigestDestroy,
(const void *)hc_CCDigestFinal,
(const void *)hc_CCDigestUpdate,
(const void *)&hc_kCCDigestMD4_s,
(const void *)&hc_kCCDigestMD5_s,
(const void *)&hc_kCCDigestSHA1_s,
(const void *)&hc_kCCDigestSHA256_s,
#endif
#ifndef PKINIT
(const void *)hc_DH_check_pubkey,
(const void *)hc_DH_compute_key,
(const void *)hc_DH_free,
(const void *)hc_DH_generate_key,
(const void *)hc_DH_generate_parameters_ex,
(const void *)hc_DH_get_default_method,
(const void *)hc_DH_get_ex_data,
(const void *)hc_DH_new,
(const void *)hc_DH_new_method,
(const void *)hc_DH_set_default_method,
(const void *)hc_DH_set_ex_data,
(const void *)hc_DH_set_method,
(const void *)hc_DH_size,
(const void *)hc_DH_up_ref,
(const void *)hc_EVP_BytesToKey,
#endif
(const void *)hc_EVP_CIPHER_CTX_block_size,
(const void *)hc_EVP_CIPHER_CTX_cipher,
(const void *)hc_EVP_CIPHER_CTX_cleanup,
(const void *)hc_EVP_CIPHER_CTX_ctrl,
(const void *)hc_EVP_CIPHER_CTX_flags,
(const void *)hc_EVP_CIPHER_CTX_get_app_data,
(const void *)hc_EVP_CIPHER_CTX_init,
(const void *)hc_EVP_CIPHER_CTX_iv_length,
(const void *)hc_EVP_CIPHER_CTX_key_length,
(const void *)hc_EVP_CIPHER_CTX_mode,
(const void *)hc_EVP_CIPHER_CTX_rand_key,
(const void *)hc_EVP_CIPHER_CTX_set_app_data,
(const void *)hc_EVP_CIPHER_CTX_set_key_length,
(const void *)hc_EVP_CIPHER_block_size,
(const void *)hc_EVP_CIPHER_iv_length,
(const void *)hc_EVP_CIPHER_key_length,
(const void *)hc_EVP_Cipher,
(const void *)hc_EVP_CipherFinal_ex,
(const void *)hc_EVP_CipherInit_ex,
(const void *)hc_EVP_CipherUpdate,
(const void *)hc_EVP_aes_128_cbc,
(const void *)hc_EVP_aes_128_cfb8,
(const void *)hc_EVP_aes_192_cbc,
(const void *)hc_EVP_aes_192_cfb8,
(const void *)hc_EVP_aes_256_cbc,
(const void *)hc_EVP_aes_256_cfb8,
(const void *)hc_EVP_des_cbc,
(const void *)hc_EVP_des_ede3_cbc,
(const void *)hc_EVP_enc_null,
(const void *)hc_EVP_get_cipherbyname,
(const void *)hc_EVP_md5,
(const void *)hc_EVP_md_null,
#ifndef __APPLE_TARGET_EMBEDDED__
(const void *)hc_EVP_rc2_40_cbc,
(const void *)hc_EVP_rc2_64_cbc,
(const void *)hc_EVP_rc2_cbc,
#endif
(const void *)hc_EVP_rc4,
(const void *)hc_OpenSSL_add_all_algorithms,
(const void *)hc_OpenSSL_add_all_algorithms_conf,
(const void *)hc_OpenSSL_add_all_algorithms_noconf,
#ifndef PKINIT
(const void *)hc_RSA_check_key,
(const void *)hc_RSA_free,
(const void *)hc_RSA_generate_key_ex,
(const void *)hc_RSA_get_app_data,
(const void *)hc_RSA_get_default_method,
(const void *)hc_RSA_get_method,
(const void *)hc_RSA_new,
(const void *)hc_RSA_new_method,
(const void *)hc_RSA_private_decrypt,
(const void *)hc_RSA_private_encrypt,
(const void *)hc_RSA_public_decrypt,
(const void *)hc_RSA_public_encrypt,
(const void *)hc_RSA_set_app_data,
(const void *)hc_RSA_set_default_method,
(const void *)hc_RSA_set_method,
(const void *)hc_RSA_sign,
(const void *)hc_RSA_size,
(const void *)hc_RSA_up_ref,
(const void *)hc_RSA_verify,
(const void *)hc_d2i_RSAPrivateKey,
(const void *)hc_d2i_RSAPublicKey,
(const void *)hc_i2d_RSAPrivateKey,
(const void *)hc_i2d_RSAPublicKey,
#endif
(const void *)hc_UI_UTIL_read_pw_string,
(const void *)hc_UI_UTIL_read_pw_string_stdio,
(const void *)hc_ENGINE_add_conf_module,
(const void *)hc_ENGINE_by_dso,
(const void *)hc_ENGINE_by_id,
(const void *)hc_ENGINE_finish,
(const void *)hc_ENGINE_get_DH,
(const void *)hc_ENGINE_get_RAND,
(const void *)hc_ENGINE_get_RSA,
(const void *)hc_ENGINE_get_default_DH,
(const void *)hc_ENGINE_get_default_RSA,
(const void *)hc_ENGINE_get_id,
(const void *)hc_ENGINE_get_name,
(const void *)hc_ENGINE_load_builtin_engines,
#ifndef PKINIT
(const void *)hc_ENGINE_set_DH,
(const void *)hc_ENGINE_set_RSA,
(const void *)hc_ENGINE_set_default_DH,
(const void *)hc_ENGINE_set_default_RSA,
#endif
(const void *)hc_ENGINE_set_destroy_function,
(const void *)hc_ENGINE_set_id,
(const void *)hc_ENGINE_set_name,
(const void *)hc_ENGINE_up_ref,
(const void *)hc_PKCS5_PBKDF2_HMAC_SHA1,
#ifndef __APPLE_TARGET_EMBEDDED__
(const void *)hc_PKCS12_key_gen,
#endif
NULL
};

#pragma clang diagnostic pop

