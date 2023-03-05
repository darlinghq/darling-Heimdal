project(darling-Heimdal-gssapi)

remove_sdk_framework(GSS)

add_compile_definitions(
	PRIVATE
)

include_directories(BEFORE
	${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}/krb5
	${CMAKE_CURRENT_SOURCE_DIR}/spnego
	${CMAKE_CURRENT_SOURCE_DIR}/mech
	${CMAKE_CURRENT_SOURCE_DIR}/ntlm
	${CMAKE_CURRENT_SOURCE_DIR}/netlogon
	${CMAKE_CURRENT_SOURCE_DIR}/digest
	${CMAKE_CURRENT_SOURCE_DIR}/gssapi
	${CMAKE_CURRENT_SOURCE_DIR}/cf
	${CMAKE_CURRENT_SOURCE_DIR}/ns
	${CMAKE_CURRENT_SOURCE_DIR}/../ntlm
	${CMAKE_CURRENT_SOURCE_DIR}/../../gen/build-export-data
)

add_darling_static_library(gss-krb5 FAT SOURCES
	krb5/8003.c
	krb5/accept_sec_context.c
	krb5/acquire_cred.c
	krb5/add_cred.c
	krb5/address_to_krb5addr.c
	krb5/aeap.c
	krb5/arcfour.c
	krb5/authorize_localname.c
	krb5/canonicalize_name.c
	krb5/ccache_name.c
	krb5/cfx.c
	krb5/compare_name.c
	krb5/compat.c
	krb5/context_time.c
	krb5/copy_ccache.c
	krb5/creds.c
	krb5/decapsulate.c
	krb5/delete_sec_context.c
	krb5/display_name.c
	krb5/display_status.c
	krb5/duplicate_name.c
	krb5/encapsulate.c
	krb5/export_name.c
	krb5/export_sec_context.c
	krb5/external.c
	krb5/get_mic.c
	krb5/import_name.c
	krb5/import_sec_context.c
	krb5/indicate_mechs.c
	krb5/init_sec_context.c
	krb5/init.c
	krb5/inquire_context.c
	krb5/inquire_cred_by_mech.c
	krb5/inquire_cred_by_oid.c
	krb5/inquire_cred.c
	krb5/inquire_mechs_for_name.c
	krb5/inquire_names_for_mech.c
	krb5/inquire_sec_context_by_oid.c
	krb5/iter_cred.c
	krb5/pname_to_uid.c
	krb5/prf.c
	krb5/process_context_token.c
	krb5/release_buffer.c
	krb5/release_cred.c
	krb5/release_name.c
	krb5/sequence.c
	krb5/set_cred_option.c
	krb5/set_sec_context_option.c
	krb5/store_cred.c
	krb5/ticket_flags.c
	krb5/unwrap.c
	krb5/verify_mic.c
	krb5/wrap.c
)

target_include_directories(gss-krb5 PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/../../../../networkextension/include
)

add_darling_static_library(gss-spnego FAT SOURCES
	spnego/accept_sec_context.c
	spnego/compat.c
	spnego/context_stubs.c
	spnego/cred_stubs.c
	spnego/external.c
	spnego/init_sec_context.c
)

add_darling_static_library(gss-mechglue FAT SOURCES
	mech/context.c
	mech/cred.c
	mech/gss_accept_sec_context.c
	mech/gss_acquire_cred_ex.c
	mech/gss_acquire_cred_ext.c
	mech/gss_acquire_cred_with_password.c
	mech/gss_acquire_cred.c
	mech/gss_add_cred_with_password.c
	mech/gss_add_cred.c
	mech/gss_add_oid_set_member.c
	mech/gss_aeap.c
	mech/gss_authorize_localname.c
	mech/gss_buffer_set.c
	mech/gss_canonicalize_name.c
	mech/gss_cb.c
	mech/gss_compare_name.c
	mech/gss_context_time.c
	mech/gss_create_empty_oid_set.c
	mech/gss_cred_hold.c
	mech/gss_cred.c
	mech/gss_decapsulate_token.c
	mech/gss_delete_name_attribute.c
	mech/gss_delete_sec_context.c
	mech/gss_destroy_cred.c
	mech/gss_display_name_ext.c
	mech/gss_display_name.c
	mech/gss_display_status.c
	mech/gss_duplicate_name.c
	mech/gss_duplicate_oid.c
	mech/gss_encapsulate_token.c
	mech/gss_export_name_composite.c
	mech/gss_export_name.c
	mech/gss_export_sec_context.c
	mech/gss_get_mic.c
	mech/gss_get_name_attribute.c
	mech/gss_import_name.c
	mech/gss_import_sec_context.c
	mech/gss_indicate_mechs.c
	mech/gss_init_sec_context.c
	mech/gss_inquire_context.c
	mech/gss_inquire_cred_by_mech.c
	mech/gss_inquire_cred_by_oid.c
	mech/gss_inquire_cred.c
	mech/gss_inquire_mechs_for_name.c
	mech/gss_inquire_name.c
	mech/gss_inquire_names_for_mech.c
	mech/gss_inquire_sec_context_by_oid.c
	mech/gss_iter_cred.c
	mech/gss_krb5.c
	mech/gss_mech_switch.c
	mech/gss_mo.c
	mech/gss_names.c
	mech/gss_oid_equal.c
	mech/gss_oid_to_str.c
	mech/gss_oid.c
	mech/gss_pname_to_uid.c
	mech/gss_process_context_token.c
	mech/gss_pseudo_random.c
	mech/gss_release_buffer.c
	mech/gss_release_cred.c
	mech/gss_release_name.c
	mech/gss_release_oid_set.c
	mech/gss_release_oid.c
	mech/gss_seal.c
	mech/gss_set_cred_option.c
	mech/gss_set_name_attribute.c
	mech/gss_set_sec_context_option.c
	mech/gss_sign.c
	mech/gss_store_cred.c
	mech/gss_test_oid_set_member.c
	mech/gss_unseal.c
	mech/gss_unwrap.c
	mech/gss_utils.c
	mech/gss_verify_mic.c
	mech/gss_verify.c
	mech/gss_wrap_size_limit.c
	mech/gss_wrap.c
)

add_darling_static_library(gss-ntlm FAT SOURCES
	ntlm/accept_sec_context.c
	ntlm/acquire_cred.c
	ntlm/add_cred.c
	ntlm/canonicalize_name.c
	ntlm/compare_name.c
	ntlm/context_time.c
	ntlm/creds.c
	ntlm/crypto.c
	ntlm/delete_sec_context.c
	ntlm/digest.c
	ntlm/display_name.c
	ntlm/duplicate_name.c
	ntlm/export_name.c
	ntlm/export_sec_context.c
	ntlm/external.c
	ntlm/import_name.c
	ntlm/import_sec_context.c
	ntlm/indicate_mechs.c
	ntlm/init_sec_context.c
	ntlm/inquire_context.c
	ntlm/inquire_cred_by_mech.c
	ntlm/inquire_mechs_for_name.c
	ntlm/inquire_names_for_mech.c
	ntlm/inquire_sec_context_by_oid.c
	ntlm/iter_cred.c
	ntlm/process_context_token.c
	ntlm/release_cred.c
	ntlm/release_name.c
)

add_darling_static_library(gss-netlogon FAT SOURCES
	netlogon/accept_sec_context.c
	netlogon/acquire_cred.c
	netlogon/add_cred.c
	netlogon/canonicalize_name.c
	netlogon/compare_name.c
	netlogon/context_time.c
	netlogon/crypto.c
	netlogon/delete_sec_context.c
	netlogon/display_name.c
	netlogon/display_status.c
	netlogon/duplicate_name.c
	netlogon/export_name.c
	netlogon/export_sec_context.c
	netlogon/external.c
	netlogon/import_name.c
	netlogon/import_sec_context.c
	netlogon/indicate_mechs.c
	netlogon/init_sec_context.c
	netlogon/inquire_context.c
	netlogon/inquire_cred_by_mech.c
	netlogon/inquire_cred.c
	netlogon/inquire_mechs_for_name.c
	netlogon/inquire_names_for_mech.c
	netlogon/iter_cred.c
	netlogon/process_context_token.c
	netlogon/release_cred.c
	netlogon/release_name.c
)

add_darling_static_library(gss-digest FAT SOURCES
	digest/accept_sec_context.c
	digest/acquire_cred.c
	digest/add_cred.c
	digest/canonicalize_name.c
	digest/compare_name.c
	digest/context_time.c
	digest/creds.c
	digest/delete_sec_context.c
	digest/display_name.c
	digest/display_status.c
	digest/duplicate_name.c
	digest/export_name.c
	digest/export_sec_context.c
	digest/external.c
	digest/import_name.c
	digest/import_sec_context.c
	digest/indicate_mechs.c
	digest/init_sec_context.c
	digest/inquire_context.c
	digest/inquire_cred_by_mech.c
	digest/inquire_mechs_for_name.c
	digest/inquire_sec_context_by_oid.c
	digest/iter_cred.c
	digest/process_context_token.c
	digest/release_cred.c
	digest/release_name.c
)

set(FRAMEWORK_VERSION "A")

generate_sdk_framework(GSS
    VERSION ${FRAMEWORK_VERSION}
    HEADER "../../darling/include/GSS"
)

add_framework(GSS
	FAT
	CURRENT_VERSION
	VERSION ${FRAMEWORK_VERSION}

	SOURCES
		../../gen/build-export-data/sym_gss.c
		cf/item.c
		cf/ntlm.c
		cf/credential.c

	DEPENDENCIES
		Security
		heimdal-asn1
		Heimdal
		CoreFoundation
		resolv-darwin
		SystemConfiguration
		CommonAuth
		bsm.0

		# static libs
		heim_asn1-defs
		heim_asn1-digest
		heim_hcrypto
		gss-krb5
		gss-mechglue
		gss-spnego
		gss-ntlm
		gss-digest
		gss-netlogon
)

target_link_options(GSS PRIVATE
	-Wl,-exported_symbols_list,${CMAKE_CURRENT_SOURCE_DIR}/../../gen/build-export-data/gss.exp
)
