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

extern const void *base_sym_export[];

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
const void *base_sym_export[] = {
(const void *)heim_abort,
(const void *)heim_array_append_value,
(const void *)heim_array_copy_value,
(const void *)heim_array_create,
(const void *)heim_array_delete_value,
(const void *)heim_array_filter,
(const void *)heim_array_get_length,
(const void *)heim_array_iterate,
(const void *)heim_array_iterate_f,
(const void *)heim_base_once_f,
(const void *)heim_data_create,
(const void *)heim_data_get_bytes,
(const void *)heim_data_get_length,
(const void *)heim_data_get_type_id,
(const void *)heim_dict_get_type_id,
(const void *)heim_dict_set_value,
(const void *)heim_dict_copy_value,
(const void *)heim_dict_create,
(const void *)heim_dict_delete_key,
(const void *)heim_dict_iterate,
(const void *)heim_error_append,
(const void *)heim_error_copy_string,
(const void *)heim_error_createv,
(const void *)heim_error_get_code,
(const void *)heim_get_tid,
(const void *)heim_release,
(const void *)heim_retain,
(const void *)heim_string_copy_utf8,
(const void *)heim_string_create,
(const void *)heim_string_get_type_id,
(const void *)heim_uniq_alloc,
(const void *)heim_warn_blocking,
NULL
};

#pragma clang diagnostic pop

