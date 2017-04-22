project(Heimdal)

add_compile_options(
	-nostdinc
)

add_definitions(
	-D__GSSAPI_APPLE_API_PRIVATE
	-DBUILD_KRB5_LIB=1
)

include_directories(BEFORE
	${CMAKE_CURRENT_SOURCE_DIR}/include
	${CMAKE_CURRENT_SOURCE_DIR}/packages/mac/SnowLeopard10A
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
	${CMAKE_CURRENT_SOURCE_DIR}/lib/wind
	${CMAKE_CURRENT_SOURCE_DIR}/gen/include
)

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
	lib/asn1/timegm.c
	lib/roken/hex.c
	lib/roken/strpool.c
	lib/asn1/template.c
	lib/asn1/fuzzer.c
)
make_fat(heimdal-asn1)
target_link_libraries(heimdal-asn1 system)

add_library(heim_heimcred OBJECT
	lib/heimcred/common.c
	lib/heimcred/client.c
)
make_fat(heim_heimcred)

add_library(heim_krb5 OBJECT
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
	lib/krb5/crypto.c
	lib/krb5/data.c
	lib/krb5/deprecated.c
	lib/krb5/derived-key-test.c
	lib/krb5/doxygen.c
	lib/krb5/xcache.c
	lib/krb5/eai_to_heim_errno.c
	lib/krb5/error_string.c
	lib/krb5/expand_hostname.c
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
	lib/krb5/stat-kerberos.m
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
	lib/krb5/krbhst-test.c
	lib/krb5/krbhst.c
	lib/krb5/tkt.c
	lib/krb5/kuserok.c
	lib/krb5/log.c
	lib/krb5/stat.m
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
	lib/krb5/pkinit.c
	lib/krb5/plugin.c
	lib/krb5/principal.c
	lib/krb5/prompter_posix.c
	lib/krb5/rd_cred.c
	lib/krb5/rd_error.c
	lib/krb5/rd_priv.c
	lib/krb5/kkdcp.c
	lib/krb5/rd_rep.c
	lib/krb5/rd_req.c
	lib/krb5/rd_safe.c
	lib/krb5/read_message.c
	lib/krb5/recvauth.c
	lib/krb5/replay.c
	lib/krb5/send_to_kdc.c
	lib/krb5/sendauth.c
	lib/krb5/set_default_realm.c
	lib/krb5/sock_principal.c
	lib/krb5/store_emem.c
	lib/krb5/pfs.c
	lib/krb5/store_fd.c
	lib/krb5/store_mem.c
	lib/krb5/store.c
	lib/krb5/ticket.c
	lib/krb5/time.c
	lib/krb5/transited.c
	lib/krb5/verify_init.c
	lib/krb5/verify_user.c
	lib/krb5/version.c
	lib/krb5/warn.c
	lib/krb5/write_message.c
	lib/krb5/expand_path.c
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
	lib/krb5/salt-aes.c
	lib/krb5/salt-arcfour.c
	lib/krb5/salt-des.c
	lib/krb5/salt-des3.c
	lib/krb5/salt.c
	lib/krb5/store-int.c
	lib/krb5/test_rfc3961.c
	lib/krb5/pcache.c
	lib/krb5/fast.c
)
make_fat(heim_krb5)

add_library(heim_wind OBJECT
	lib/wind/utf8.c
	lib/wind/icu.c
)
make_fat(heim_wind)

add_library(heim_asn1-defs OBJECT
	gen/asn1_gssapi_asn1.c
	gen/asn1_krb5_asn1.c
	gen/asn1_pkcs8_asn1.c
	gen/asn1_pkcs9_asn1.c
	gen/asn1_pkcs12_asn1.c
	gen/asn1_pkinit_asn1.c
	gen/asn1_spnego_asn1.c
	gen/asn1_pku2u_asn1.c
)
make_fat(heim_asn1-defs)

add_library(heim_com_err OBJECT
	lib/com_err/com_err.c
	lib/com_err/error.c
)
make_fat(heim_com_err)

# Same version as above
add_framework(Heimdal
	FAT
	CURRENT_VERSION
	PRIVATE
	VERSION "A"

	SOURCES
		$<TARGET_OBJECTS:heim_heimcred>
		$<TARGET_OBJECTS:heim_krb5>
		$<TARGET_OBJECTS:heim_wind>
		$<TARGET_OBJECTS:heim_asn1-defs>
		$<TARGET_OBJECTS:heim_com_err>

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
		#Security
		CoreFoundation
		#CFNetwork
		icucore
		heimdal-asn1
)
make_fat(Heimdal)

install(TARGETS heimdal-asn1 DESTINATION libexec/darling/usr/lib)
