project(Heimdal)

add_compile_options(
	-nostdinc
)

add_definitions(
	-D__GSSAPI_APPLE_API_PRIVATE
)

include_directories(BEFORE
	${CMAKE_CURRENT_SOURCE_DIR}/include
	${CMAKE_CURRENT_SOURCE_DIR}/packages/mac/SnowLeopard10A
	${CMAKE_CURRENT_SOURCE_DIR}/lib/roken
	${CMAKE_CURRENT_SOURCE_DIR}/lib/asn1
	${CMAKE_CURRENT_SOURCE_DIR}/lib/com_err
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

# Same version as above
#add_framework(Heimdal
#	FAT
#	CURRENT_VERSION
#	PRIVATE
#	VERSION "A"

#	SOURCES
#		functions.c
#		copy.c

#	DEPENDENCIES
#		system
#)
#make_fat(Heimdal)

#target_link_libraries(Heimdal sqlite3 resolv.9 Security CoreFoundation CFNetwork icucore heimdal-asn1)

install(TARGETS heimdal-asn1 DESTINATION libexec/darling/usr/lib)
