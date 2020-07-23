project(Heimdal)

add_compile_options(
	-nostdinc
	-includeconfig.h
)

add_compile_definitions(
	__GSSAPI_APPLE_API_PRIVATE
	BUILD_KRB5_LIB=1
	CORECRYPTO_DONOT_USE_TRANSPARENT_UNION=1
)

add_link_options(
	-Wl,-dead_strip
)

include_directories(BEFORE
	${CMAKE_CURRENT_SOURCE_DIR}/include
	${CMAKE_CURRENT_SOURCE_DIR}/base
	${CMAKE_CURRENT_SOURCE_DIR}/lib/roken
	${CMAKE_CURRENT_SOURCE_DIR}/lib/asn1
	${CMAKE_CURRENT_SOURCE_DIR}/lib/com_err
	${CMAKE_CURRENT_SOURCE_DIR}/lib/heimcred
	${CMAKE_CURRENT_SOURCE_DIR}/lib/krb5
	${CMAKE_CURRENT_SOURCE_DIR}/lib/gssapi/gssapi
	${CMAKE_CURRENT_SOURCE_DIR}/lib
	${CMAKE_CURRENT_SOURCE_DIR}/lib/gssapi/cf
	${CMAKE_CURRENT_SOURCE_DIR}/lib/hx509
	${CMAKE_CURRENT_SOURCE_DIR}/lib/ipc
	${CMAKE_CURRENT_SOURCE_DIR}/lib/hcrypto
	${CMAKE_CURRENT_SOURCE_DIR}/lib/wind
	${CMAKE_CURRENT_SOURCE_DIR}/lib/hx509/ref
	${CMAKE_CURRENT_SOURCE_DIR}/gen
	${CMAKE_CURRENT_BINARY_DIR}/lib/ipc
	${CMAKE_CURRENT_SOURCE_DIR}/packages/mac/SnowLeopard10A
	${CMAKE_CURRENT_SOURCE_DIR}/gen/kadm/kadm5
)

mig(lib/ipc/heim_ipc.defs)
mig(lib/ipc/heim_ipc_async.defs)

set(DYLIB_COMPAT_VERSION "1.0.0")
set(DYLIB_CURRENT_VERSION "1.0.0")

set(DYLIB_INSTALL_NAME "/usr/lib/libheimdal-asn1.dylib")
add_darling_library(heimdal-asn1 SHARED
	lib/asn1/der_cmp.c
	lib/asn1/der_copy.c
	lib/asn1/der_format.c
	lib/asn1/der_free.c
	lib/asn1/der_get.c
	lib/asn1/der_length.c
	lib/asn1/der_put.c
	lib/asn1/der.c
	lib/asn1/extra.c
	lib/asn1/fuzzer.c
	lib/asn1/template.c
	lib/asn1/timegm.c
	lib/roken/hex.c
	lib/roken/strpool.c
)
make_fat(heimdal-asn1)
target_link_libraries(heimdal-asn1 system)

target_link_options(heimdal-asn1 PRIVATE
	-Wl,-exported_symbols_list,${CMAKE_CURRENT_SOURCE_DIR}/gen/heimdal-asn1.exp
)

add_darling_static_library(heim_heimcred FAT SOURCES
	lib/heimcred/client.c
	lib/heimcred/common.c
)

add_darling_static_library(heim_krb5 FAT SOURCES
	lib/krb5/add_et_list.c
	lib/krb5/addr_families.c
	lib/krb5/aname_to_localname.c
	lib/krb5/appdefault.c
	lib/krb5/asn1_glue.c
	lib/krb5/auth_context.c
	lib/krb5/build_ap_req.c
	lib/krb5/build_auth.c
	lib/krb5/cache.c
	lib/krb5/changepw.c
	lib/krb5/codec.c
	lib/krb5/config_file.c
	lib/krb5/constants.c
	lib/krb5/context.c
	lib/krb5/convert_creds.c
	lib/krb5/copy_host_realm.c
	lib/krb5/crc.c
	lib/krb5/creds.c
	lib/krb5/crypto-aes.c
	lib/krb5/crypto-algs.c
	lib/krb5/crypto-arcfour.c
	lib/krb5/crypto-des-common.c
	lib/krb5/crypto-des.c
	lib/krb5/crypto-des3.c
	lib/krb5/crypto-evp.c
	lib/krb5/crypto-null.c
	lib/krb5/crypto-pk.c
	lib/krb5/crypto-rand.c
	lib/krb5/crypto-stubs.c
	lib/krb5/crypto.c
	lib/krb5/data.c
	lib/krb5/deprecated.c
	lib/krb5/derived-key-test.c
	lib/krb5/doxygen.c
	lib/krb5/eai_to_heim_errno.c
	lib/krb5/error_string.c
	lib/krb5/expand_hostname.c
	lib/krb5/expand_path.c
	lib/krb5/fast.c
	lib/krb5/fcache.c
	lib/krb5/free_host_realm.c
	lib/krb5/free.c
	lib/krb5/generate_seq_number.c
	lib/krb5/generate_subkey.c
	lib/krb5/get_addrs.c
	lib/krb5/get_cred.c
	lib/krb5/get_default_principal.c
	lib/krb5/get_default_realm.c
	lib/krb5/get_for_creds.c
	lib/krb5/get_host_realm.c
	lib/krb5/get_in_tkt.c
	lib/krb5/get_port.c
	lib/krb5/init_creds_pw.c
	lib/krb5/init_creds.c
	lib/krb5/kcm.c
	lib/krb5/keyblock.c
	lib/krb5/keytab_any.c
	lib/krb5/keytab_file.c
	lib/krb5/keytab_keyfile.c
	lib/krb5/keytab_memory.c
	lib/krb5/keytab.c
	lib/krb5/kkdcp.c
	lib/krb5/krbhst-test.c
	lib/krb5/krbhst.c
	lib/krb5/kuserok.c
	lib/krb5/log.c
	lib/krb5/mcache.c
	lib/krb5/misc.c
	lib/krb5/mit_glue.c
	lib/krb5/mk_error.c
	lib/krb5/mk_priv.c
	lib/krb5/mk_rep.c
	lib/krb5/mk_req_ext.c
	lib/krb5/mk_req.c
	lib/krb5/mk_safe.c
	lib/krb5/n-fold.c
	lib/krb5/net_read.c
	lib/krb5/net_write.c
	lib/krb5/pac.c
	lib/krb5/padata.c
	lib/krb5/pcache.c
	lib/krb5/pfs.c
	lib/krb5/pkinit.c
	lib/krb5/plugin.c
	lib/krb5/principal.c
	lib/krb5/prompter_posix.c
	lib/krb5/rd_cred.c
	lib/krb5/rd_error.c
	lib/krb5/rd_priv.c
	lib/krb5/rd_rep.c
	lib/krb5/rd_req.c
	lib/krb5/rd_safe.c
	lib/krb5/read_message.c
	lib/krb5/recvauth.c
	lib/krb5/replay.c
	lib/krb5/salt-aes.c
	lib/krb5/salt-arcfour.c
	lib/krb5/salt-des.c
	lib/krb5/salt-des3.c
	lib/krb5/salt.c
	lib/krb5/send_to_kdc.c
	lib/krb5/sendauth.c
	lib/krb5/set_default_realm.c
	lib/krb5/sock_principal.c
	lib/krb5/stat-kerberos.m
	lib/krb5/stat.m
	lib/krb5/store_emem.c
	lib/krb5/store_fd.c
	lib/krb5/store_mem.c
	lib/krb5/store-int.c
	lib/krb5/store.c
	lib/krb5/test_rfc3961.c
	lib/krb5/ticket.c
	lib/krb5/time.c
	lib/krb5/tkt.c
	lib/krb5/transited.c
	lib/krb5/verify_init.c
	lib/krb5/verify_user.c
	lib/krb5/version.c
	lib/krb5/warn.c
	lib/krb5/write_message.c
	lib/krb5/xcache.c
)

add_darling_static_library(heim_wind FAT SOURCES
	lib/wind/icu.c
	lib/wind/utf8.c
)

add_darling_static_library(heim_asn1-defs FAT SOURCES
	gen/asn1_gssapi_asn1.c
	gen/asn1_krb5_asn1.c
	gen/asn1_pkcs12_asn1.c
	gen/asn1_pkcs8_asn1.c
	gen/asn1_pkcs9_asn1.c
	gen/asn1_pkinit_asn1.c
	gen/asn1_pku2u_asn1.c
	gen/asn1_spnego_asn1.c
)

add_darling_static_library(heim_com_err FAT SOURCES
	lib/com_err/com_err.c
	lib/com_err/error.c
)

add_darling_static_library(heim_roken FAT SOURCES
	lib/roken/base64.c
	lib/roken/bswap.c
	lib/roken/cloexec.c
	lib/roken/closefrom.c
	lib/roken/concat.c
	lib/roken/ct.c
	lib/roken/dumpdata.c
	lib/roken/ecalloc.c
	lib/roken/emalloc.c
	lib/roken/environment.c
	lib/roken/eread.c
	lib/roken/erealloc.c
	lib/roken/esetenv.c
	lib/roken/estrdup.c
	lib/roken/ewrite.c
	lib/roken/get_default_username.c
	lib/roken/getnameinfo_verified.c
	lib/roken/hex.c
	lib/roken/issuid.c
	lib/roken/net_read.c
	lib/roken/net_write.c
	lib/roken/parse_bytes.c
	lib/roken/parse_time.c
	lib/roken/parse_units.c
	lib/roken/rand.c
	lib/roken/resolve.c
	lib/roken/rkcf.c
	lib/roken/roken_gethostby.c
	lib/roken/rtbl.c
	lib/roken/socket.c
	lib/roken/strlwr.c
	lib/roken/strpool.c
	lib/roken/strsep_copy.c
	lib/roken/strupr.c
	lib/roken/xfree.c
)

add_darling_static_library(heim_roken-application FAT SOURCES
	lib/roken/closefrom.c
	lib/roken/ct.c
	lib/roken/ecalloc.c
	lib/roken/emalloc.c
	lib/roken/erealloc.c
	lib/roken/get_default_username.c
	lib/roken/get_window_size.c
	lib/roken/getarg.c
	lib/roken/k_getpwnam.c
	lib/roken/k_getpwuid.c
	lib/roken/mini_inetd.c
	lib/roken/rand.c
	lib/roken/simple_exec.c
	lib/roken/strcollect.c
	lib/roken/timeval.c
	lib/roken/tm2time.c
	lib/roken/write_pid.c
	lib/roken/xfree.c
)

add_darling_static_library(heim_vers FAT SOURCES
	lib/vers/print_version.c
)

add_darling_static_library(heim_error-tables FAT SOURCES
	gen/asn1_err.c
	gen/gkrb5_err.c
	gen/hc_err.c
	gen/hdb_err.c
	gen/heim_err.c
	gen/hx509_err.c
	gen/k524_err.c
	gen/kadm5_err.c
	gen/krb_err.c
	gen/krb5_err.c
	gen/wind_err.c
)

add_darling_static_library(heim_hx509 FAT SOURCES
	lib/hx509/ca.c
	lib/hx509/cert.c
	lib/hx509/cms.c
	lib/hx509/collector.c
	lib/hx509/crypto.c
	lib/hx509/doxygen.c
	lib/hx509/env.c
	lib/hx509/error.c
	lib/hx509/file.c
	lib/hx509/keyset.c
	lib/hx509/ks_dir.c
	lib/hx509/ks_file.c
	lib/hx509/ks_keychain.c
	lib/hx509/ks_mem.c
	lib/hx509/ks_null.c
	lib/hx509/ks_p11.c
	lib/hx509/ks_p12.c
	lib/hx509/lock.c
	lib/hx509/name.c
	lib/hx509/peer.c
	lib/hx509/print.c
	lib/hx509/req.c
	lib/hx509/revoke.c
)

add_darling_static_library(heim_ipc-client FAT SOURCES
	lib/ipc/client.c
	lib/ipc/common.c

	${CMAKE_CURRENT_BINARY_DIR}/lib/ipc/heim_ipc_asyncServer.c
	${CMAKE_CURRENT_BINARY_DIR}/lib/ipc/heim_ipcUser.c
)

add_darling_static_library(heim_hcrypto FAT SOURCES
	lib/hcrypto/bn.c
	lib/hcrypto/common.c
	lib/hcrypto/dh-cdsa.c
	lib/hcrypto/dh-sf.c
	lib/hcrypto/dh.c
	lib/hcrypto/engine.c
	lib/hcrypto/evp-cc.c
	lib/hcrypto/evp.c
	lib/hcrypto/pkcs12.c
	lib/hcrypto/pkcs5.c
	lib/hcrypto/rsa-cdsa.c
	lib/hcrypto/rsa-sf.c
	lib/hcrypto/rsa.c
	lib/hcrypto/ui.c
	lib/hcrypto/validate.c
)

add_darling_static_library(heim_heimbase FAT SOURCES
	base/abort.c
	base/cf.c
	base/json.c
	base/log.c

	# These files aren't included in the build in Xcode
	# but they contain functions needed by code in the project,
	# so we will build them anyway
	#base/bool.c
	#base/null.c
)

add_darling_static_library(heim_asn1-hx509 FAT SOURCES
	gen/asn1_cms_asn1.c
	gen/asn1_ocsp_asn1.c
	gen/asn1_pkcs10_asn1.c
	gen/asn1_rfc2459_asn1.c
)

add_darling_static_library(heim_asn1-digest FAT SOURCES
	gen/asn1_digest_asn1.c
)

# Same version as above
add_framework(Heimdal
	FAT
	CURRENT_VERSION
	PRIVATE
	VERSION "A"

	SOURCES
		base/test_base.c
		gen/sym_hcrypto.c
		gen/sym_hx509.c
		gen/sym_krb5.c
		gen/sym_pkinit.c
		gen/sym_roken.c
		gen/sym_asn1.c
		gen/sym_base.c

	DEPENDENCIES
		system
		sqlite3
		resolv-darwin
		Security
		Foundation
		CoreFoundation
		CFNetwork
		icucore
		heimdal-asn1
		#libnetwork # missing

		# Static libs
		heim_heimcred
		heim_krb5
		heim_wind
		heim_asn1-defs
		heim_com_err
		heim_roken
		heim_vers
		heim_error-tables
		heim_hx509
		heim_ipc-client
		heim_hcrypto
		heim_heimbase
		heim_asn1-hx509
		heim_asn1-digest
		heim_roken-application
)
make_fat(Heimdal)

target_link_options(Heimdal PRIVATE
	-Wl,-exported_symbols_list,${CMAKE_CURRENT_SOURCE_DIR}/gen/heimdal.exp
)

install(TARGETS heimdal-asn1 DESTINATION libexec/darling/usr/lib)

add_framework(CommonAuth
	FAT
	CURRENT_VERSION
	PRIVATE
	VERSION "A"

	SOURCES
		gen/ntlm_err.c
		lib/krb5/data.c
		lib/krb5/error_string.c
		lib/krb5/store_emem.c
		lib/krb5/store_mem.c
		lib/krb5/store-int.c
		lib/krb5/store.c
		lib/ntlm/apop.c
		lib/ntlm/digest.c
		lib/ntlm/ntlm.c
		lib/ntlm/scram.c

	DEPENDENCIES
		heimdal-asn1
		icucore
		system

		# static libs
		heim_com_err
		heim_hcrypto
		heim_asn1-defs
		heim_roken
		heim_wind
		heim_heimbase
		heim_asn1-hx509
)

target_link_options(CommonAuth PRIVATE
	-Wl,-exported_symbols_list,${CMAKE_CURRENT_SOURCE_DIR}/gen/commonauth.exp
)

target_include_directories(CommonAuth PRIVATE
	lib/ntlm
)

# added as a subdirectory to avoid polluting the include list here
# (not sure if any headers would conflict, but just in case)
add_subdirectory(lib/gssapi)
