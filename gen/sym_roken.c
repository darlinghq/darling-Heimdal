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

extern const void *roken_sym_export[];

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
const void *roken_sym_export[] = {
(const void *)base64_decode,
(const void *)base64_encode,
(const void *)ct_memcmp,
(const void *)issuid,
(const void *)parse_bytes,
(const void *)parse_flags,
(const void *)parse_time,
(const void *)parse_units,
(const void *)print_flags_table,
(const void *)print_time_table,
(const void *)rk_cfstring2cstring,
(const void *)rk_cloexec_file,
(const void *)rk_dumpdata,
(const void *)rk_estrdup,
(const void *)rk_hex_decode,
(const void *)rk_hex_encode,
(const void *)rk_socket_set_nopipe,
(const void *)rk_socket_set_ipv6only,
(const void *)rk_socket_set_reuseaddr,
(const void *)rk_strlwr,
(const void *)rk_strpoolcollect,
(const void *)rk_strpoolprintf,
(const void *)rk_strsep_copy,
(const void *)rk_strupr,
(const void *)rk_socket_sockaddr_size,
(const void *)rk_undumpdata,
(const void *)rtbl_add_column,
(const void *)rtbl_add_column_by_id,
(const void *)rtbl_add_column_entry,
(const void *)rtbl_add_column_entry_by_id,
(const void *)rtbl_add_column_entryv,
(const void *)rtbl_add_column_entryv_by_id,
(const void *)rtbl_create,
(const void *)rtbl_destroy,
(const void *)rtbl_format,
(const void *)rtbl_format_str,
(const void *)rtbl_get_flags,
(const void *)rtbl_new_row,
(const void *)rtbl_set_column_affix_by_id,
(const void *)rtbl_set_column_prefix,
(const void *)rtbl_set_flags,
(const void *)rtbl_set_prefix,
(const void *)rtbl_set_separator,
(const void *)unparse_bytes,
(const void *)unparse_bytes_short,
(const void *)unparse_flags,
(const void *)unparse_time,
NULL
};

#pragma clang diagnostic pop

