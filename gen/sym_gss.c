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

extern const void *gss_sym_export[];

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
const void *gss_sym_export[] = {
(const void *)&__gss_c_nt_uuid_desc,
(const void *)&__gss_appl_lkdc_supported_desc,
(const void *)&__gss_c_attr_local_login_user,
#ifdef ENABLE_NTLM
(const void *)&__gss_c_ntlm_v1,
(const void *)&__gss_c_ntlm_force_v1,
(const void *)&__gss_c_ntlm_v2,
(const void *)&__gss_c_ntlm_session_key,
(const void *)&__gss_c_ntlm_support_channelbindings,
(const void *)&__gss_c_ntlm_support_lm2,
(const void *)&__gss_ntlm_is_digest_service,
#endif
(const void *)gss_accept_sec_context,
(const void *)gss_acquire_cred,
(const void *)gss_acquire_cred_ex,
(const void *)gss_acquire_cred_ex_f,
(const void *)gss_acquire_cred_ext,
(const void *)gss_aapl_initial_cred,
(const void *)gss_aapl_change_password,
(const void *)gss_add_buffer_set_member,
(const void *)gss_add_cred,
(const void *)gss_add_oid_set_member,
(const void *)gss_canonicalize_name,
(const void *)gss_compare_name,
(const void *)gss_context_query_attributes,
(const void *)gss_context_time,
(const void *)gss_create_empty_buffer_set,
(const void *)gss_create_empty_oid_set,
(const void *)gss_decapsulate_token,
(const void *)gss_delete_sec_context,
(const void *)gss_destroy_cred,
(const void *)gss_display_name,
(const void *)gss_display_status,
(const void *)gss_duplicate_name,
(const void *)gss_duplicate_oid,
(const void *)gss_encapsulate_token,
(const void *)gss_export_cred,
(const void *)gss_export_name,
(const void *)gss_export_sec_context,
(const void *)gss_get_mic,
(const void *)gss_import_cred,
(const void *)gss_import_name,
(const void *)gss_import_sec_context,
(const void *)gss_indicate_mechs,
(const void *)gss_init_sec_context,
(const void *)gss_inquire_context,
(const void *)gss_inquire_cred,
(const void *)gss_inquire_cred_by_mech,
(const void *)gss_inquire_cred_by_oid,
(const void *)gss_inquire_mechs_for_name,
(const void *)gss_inquire_name,
(const void *)gss_inquire_names_for_mech,
(const void *)gss_inquire_sec_context_by_oid,
(const void *)gss_inquire_sec_context_by_oid,
(const void *)gss_iter_creds,
(const void *)gss_iter_creds_f,
(const void *)gss_krb5_ccache_name,
(const void *)gss_krb5_copy_ccache,
(const void *)gss_krb5_export_lucid_sec_context,
(const void *)gss_krb5_free_lucid_sec_context,
(const void *)gss_krb5_get_tkt_flags,
(const void *)gss_krb5_import_cred,
(const void *)gss_krb5_set_allowable_enctypes,
(const void *)gss_cred_hold,
(const void *)gss_cred_unhold,
(const void *)gss_oid_equal,
(const void *)gss_oid_to_str,
(const void *)gss_process_context_token,
(const void *)gss_pseudo_random,
(const void *)gss_release_buffer,
(const void *)gss_release_buffer_set,
(const void *)gss_release_cred,
(const void *)gss_release_iov_buffer,
(const void *)gss_release_name,
(const void *)gss_release_oid,
(const void *)gss_release_oid_set,
(const void *)gss_seal,
(const void *)gss_set_cred_option,
(const void *)gss_set_sec_context_option,
(const void *)gss_sign,
(const void *)gss_test_oid_set_member,
(const void *)gss_mo_set,
(const void *)gss_mo_get,
(const void *)gss_mo_name,
(const void *)gss_mo_list,
(const void *)gss_userok,
(const void *)gss_unseal,
(const void *)gss_unwrap,
(const void *)gss_unwrap_iov,
(const void *)gss_verify,
(const void *)gss_verify_mic,
(const void *)gss_wrap,
(const void *)gss_wrap_iov,
(const void *)gss_wrap_iov_length,
(const void *)gss_wrap_size_limit,
(const void *)gsskrb5_extract_authtime_from_sec_context,
(const void *)gsskrb5_extract_authz_data_from_sec_context,
(const void *)gsskrb5_extract_service_keyblock,
(const void *)gsskrb5_get_initiator_subkey,
(const void *)gsskrb5_get_subkey,
(const void *)gsskrb5_get_time_offset,
(const void *)gsskrb5_register_acceptor_identity,
(const void *)gsskrb5_set_default_realm,
(const void *)gsskrb5_set_dns_canonicalize,
(const void *)gsskrb5_set_time_offset,
(const void *)krb5_gss_register_acceptor_identity,
(const void *)_gsskrb5_init,
(const void *)gss_oid_to_name,
(const void *)gss_name_to_oid,
(const void *)gss_cred_label_get,
(const void *)gss_cred_label_set,
(const void *)gss_inquire_attrs_for_mech,
(const void *)gss_display_mech_attr,
(const void *)gss_acquire_cred_with_password,
(const void *)&kGSSAttrClass,
(const void *)&kGSSAttrClassKerberos,
(const void *)&kGSSAttrClassNTLM,
(const void *)&kGSSAttrClassIAKerb,
(const void *)&kGSSAttrSupportGSSCredential,
(const void *)&kGSSAttrNameType,
(const void *)&kGSSAttrNameTypeGSSExportedName,
(const void *)&kGSSAttrNameTypeGSSUsername,
(const void *)&kGSSAttrNameTypeGSSHostBasedService,
(const void *)&kGSSAttrName,
(const void *)&kGSSAttrNameDisplay,
(const void *)&kGSSAttrUUID,
(const void *)&kGSSAttrTransientExpire,
(const void *)&kGSSAttrCredentialPassword,
(const void *)&kGSSAttrCredentialStore,
(const void *)&kGSSAttrCredentialSecIdentity,
(const void *)&kGSSAttrCredentialExists,
(const void *)&kGSSAttrStatusPersistant,
(const void *)&kGSSAttrStatusAutoAcquire,
(const void *)&kGSSAttrStatusTransient,
(const void *)&kGSSAttrStatusAutoAcquireStatus,
(const void *)&kGSSAttrTransientDefaultInClass,
(const void *)&__kGSSOperationAcquire,
(const void *)&__kGSSOperationGetGSSCredential,
(const void *)&__kGSSOperationCredentialDiagnostics,
(const void *)&__kGSSOperationDestoryTransient,
(const void *)&__kGSSOperationDestroyTransient,
(const void *)&__kGSSOperationChangePassword,
(const void *)&__kGSSOperationSetDefault,
(const void *)&__kGSSOperationRenewCredential,
(const void *)&__kGSSOperationRemoveBackingCredential,
(const void *)&kGSSOperationChangePasswordOldPassword,
(const void *)&kGSSOperationChangePasswordNewPassword,
(const void *)GSSItemAdd,
(const void *)GSSItemCopyMatching,
(const void *)GSSItemDelete,
(const void *)GSSItemDeleteItem,
(const void *)GSSItemUpdate,
(const void *)GSSItemOperation,
(const void *)GSSItemGetValue,
(const void *)GSSItemGetTypeID,
(const void *)GSSCredentialCopyUUID,
(const void *)GSSCreateCredentialFromUUID,
(const void *)GSSRuleAddMatch,
(const void *)GSSRuleGetMatch,
(const void *)GSSCreateName,
(const void *)GSSNameCreateDisplayString,
(const void *)GSSCredentialCopyName,
(const void *)GSSCredentialGetLifetime,
(const void *)GSSCredCopyName,
(const void *)GSSCredGetLifetime,
(const void *)GSSCreateError,
(const void *)gss_set_log_function,
(const void *)gss_inquire_saslname_for_mech,
(const void *)gss_inquire_mech_for_saslname,
(const void *)gss_indicate_mechs_by_attrs,
(const void *)GSSCheckNTLMReflection,
NULL
};

#pragma clang diagnostic pop

