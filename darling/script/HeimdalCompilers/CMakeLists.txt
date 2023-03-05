# This cmake script is not part of the Darling build process. It
# is only intented to be used in macOS or Darling (shell).

cmake_minimum_required(VERSION 3.9)
project(cmake_heimdal_compiler)

set(SRCROOT "../../..")
set(HEIMDAL_COMPILE_ET_DIR "${SRCROOT}/gen/tmp/compile_et-yacc/compile_et")
set(HEIMDAL_SLC_DIR "${SRCROOT}/gen/tmp/slc-yacc/slc")
set(HEIMDAL_ASN1_COMPILE_DIR "${SRCROOT}/gen/tmp/asn1_compiler-yacc/asn1_compile")

# Build vers library
add_library(vers STATIC
    ${SRCROOT}/lib/vers/print_version.c
)

target_include_directories(vers PRIVATE
    ${SRCROOT}/lib/roken
    ${SRCROOT}/lib/vers/roken
    ${SRCROOT}/packages/mac/SnowLeopard10A
)

# Build roken library
add_library(roken STATIC
    ${SRCROOT}/lib/roken/base64.c
    ${SRCROOT}/lib/roken/cloexec.c
    ${SRCROOT}/lib/roken/concat.c
    ${SRCROOT}/lib/roken/ecalloc.c
    ${SRCROOT}/lib/roken/emalloc.c
    ${SRCROOT}/lib/roken/environment.c
    ${SRCROOT}/lib/roken/eread.c
    ${SRCROOT}/lib/roken/erealloc.c
    ${SRCROOT}/lib/roken/esetenv.c
    ${SRCROOT}/lib/roken/estrdup.c
    ${SRCROOT}/lib/roken/ewrite.c
    ${SRCROOT}/lib/roken/get_default_username.c
    ${SRCROOT}/lib/roken/hex.c
    ${SRCROOT}/lib/roken/issuid.c
    ${SRCROOT}/lib/roken/net_read.c
    ${SRCROOT}/lib/roken/net_write.c
    ${SRCROOT}/lib/roken/parse_bytes.c
    ${SRCROOT}/lib/roken/parse_time.c
    ${SRCROOT}/lib/roken/parse_units.c
    ${SRCROOT}/lib/roken/getnameinfo_verified.c
    ${SRCROOT}/lib/roken/strlwr.c
    ${SRCROOT}/lib/roken/strpool.c
    ${SRCROOT}/lib/roken/strsep_copy.c
    ${SRCROOT}/lib/roken/strupr.c
    ${SRCROOT}/lib/roken/resolve.c
    ${SRCROOT}/lib/roken/socket.c
    ${SRCROOT}/lib/roken/bswap.c
    ${SRCROOT}/lib/roken/roken_gethostby.c
    ${SRCROOT}/lib/roken/closefrom.c
    ${SRCROOT}/lib/roken/rtbl.c
    ${SRCROOT}/lib/roken/dumpdata.c
    ${SRCROOT}/lib/roken/xfree.c
    ${SRCROOT}/lib/roken/ct.c
    ${SRCROOT}/lib/roken/rand.c
    ${SRCROOT}/lib/roken/rkcf.c
)

target_include_directories(roken PRIVATE
    ${SRCROOT}/lib/roken
    ${SRCROOT}/packages/mac/SnowLeopard10A
)

# Build roken-application library
add_library(roken-application STATIC
    ${SRCROOT}/lib/roken/closefrom.c
    ${SRCROOT}/lib/roken/ct.c
    ${SRCROOT}/lib/roken/ecalloc.c
    ${SRCROOT}/lib/roken/emalloc.c
    ${SRCROOT}/lib/roken/erealloc.c
    ${SRCROOT}/lib/roken/get_default_username.c
    ${SRCROOT}/lib/roken/get_window_size.c
    ${SRCROOT}/lib/roken/getarg.c
    ${SRCROOT}/lib/roken/k_getpwnam.c
    ${SRCROOT}/lib/roken/k_getpwuid.c
    ${SRCROOT}/lib/roken/mini_inetd.c
    ${SRCROOT}/lib/roken/rand.c
    ${SRCROOT}/lib/roken/simple_exec.c
    ${SRCROOT}/lib/roken/strcollect.c
    ${SRCROOT}/lib/roken/timeval.c
    ${SRCROOT}/lib/roken/tm2time.c
    ${SRCROOT}/lib/roken/write_pid.c
    ${SRCROOT}/lib/roken/xfree.c
)

target_include_directories(roken-application PRIVATE
    ${SRCROOT}/lib/roken
    ${SRCROOT}/packages/mac/SnowLeopard10A
)

# Compile heimdal-compile_et executable
add_executable(heimdal-compile_et
    ${SRCROOT}/lib/com_err/compile_et.c
    ${SRCROOT}/lib/com_err/error.c
    ${HEIMDAL_COMPILE_ET_DIR}/lex_et.c
    ${HEIMDAL_COMPILE_ET_DIR}/parse.c
)

target_include_directories(heimdal-compile_et PRIVATE
    ${SRCROOT}/lib/com_err
    ${SRCROOT}/lib/roken
    ${SRCROOT}/lib/vers
    ${SRCROOT}/packages/mac/SnowLeopard10A
    ${HEIMDAL_COMPILE_ET_DIR}
)

target_link_libraries(heimdal-compile_et
    vers
    roken
    roken-application
)

# Compile heimdal-slc executable
add_executable(heimdal-slc
    ${SRCROOT}/lib/roken/strupr.c
    ${HEIMDAL_SLC_DIR}/slc-lex.c
    ${HEIMDAL_SLC_DIR}/slc-gram.c
)

target_include_directories(heimdal-slc PRIVATE
    ${SRCROOT}/lib/roken
    ${SRCROOT}/lib/sl
    ${SRCROOT}/lib/vers
    ${SRCROOT}/packages/mac/SnowLeopard10A
    ${HEIMDAL_SLC_DIR}
)

target_link_libraries(heimdal-slc
    vers
    roken-application
)

# Compile heimdal-asn1_compile executable
add_executable(heimdal-asn1_compile
    ${SRCROOT}/lib/asn1/gen_copy.c
    ${SRCROOT}/lib/asn1/gen_decode.c
    ${SRCROOT}/lib/asn1/gen_encode.c
    ${SRCROOT}/lib/asn1/gen_free.c
    ${SRCROOT}/lib/asn1/gen_glue.c
    ${SRCROOT}/lib/asn1/gen_length.c
    ${SRCROOT}/lib/asn1/gen_seq.c
    ${SRCROOT}/lib/asn1/gen_template.c
    ${SRCROOT}/lib/asn1/gen.c
    ${SRCROOT}/lib/asn1/hash.c
    ${SRCROOT}/lib/asn1/main.c
    ${SRCROOT}/lib/asn1/symbol.c
    ${SRCROOT}/lib/roken/ecalloc.c
    ${SRCROOT}/lib/roken/emalloc.c
    ${SRCROOT}/lib/roken/estrdup.c
    ${SRCROOT}/lib/roken/strupr.c
    ${HEIMDAL_ASN1_COMPILE_DIR}/asn1parse.c
    ${HEIMDAL_ASN1_COMPILE_DIR}/lex.c
)

target_include_directories(heimdal-asn1_compile PRIVATE
    ${SRCROOT}/base
    ${SRCROOT}/lib/asn1
    ${SRCROOT}/lib/com_err
    ${SRCROOT}/lib/roken
    ${SRCROOT}/lib/vers
    ${SRCROOT}/packages/mac/SnowLeopard10A
    ${HEIMDAL_ASN1_COMPILE_DIR}
)

target_link_libraries(heimdal-asn1_compile
    vers
    roken-application
)

install(
    TARGETS
        heimdal-compile_et
        heimdal-slc
        heimdal-asn1_compile
)
