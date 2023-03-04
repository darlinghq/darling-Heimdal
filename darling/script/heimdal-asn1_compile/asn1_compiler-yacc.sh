#!/bin/sh

# SRCROOT="$(cd ../../.. && pwd)"
# GENERATED_DIR="$SRCROOT/gen"
DERIVED_FILES_DIR="$GENERATED_DIR"
DERIVED_SOURCES_DIR="$GENERATED_DIR"
HEIMDAL_TMPDIR="$DERIVED_FILES_DIR/tmp"

INPUT_FILE_BASE=asn1parse
INPUT_FILE_DIR=${SRCROOT}/lib/asn1
INPUT_FILE_PATH=${INPUT_FILE_DIR}/asn1parse.y

mkdir -p ${DERIVED_FILES_DIR}

cfile="${DERIVED_FILES_DIR}/${INPUT_FILE_BASE}-${CURRENT_ARCH}.c-new"

${SRCROOT}/ylwrap ${INPUT_FILE_PATH} y.tab.c "${cfile}" y.tab.h ${DERIVED_FILES_DIR}/${INPUT_FILE_BASE}.h y.output  -- yacc -d || exit 1

mkdir -p "${HEIMDAL_TMPDIR}/asn1_compile"
sh ${SRCROOT}/packages/mac/update-header.sh build ${INPUT_FILE_BASE}.h "${DERIVED_SOURCES_DIR}" "${HEIMDAL_TMPDIR}/asn1_compile" || exit 1


if test -f "${cfile}"  && cmp -s "${cfile}" "${HEIMDAL_TMPDIR}/asn1_compile/${INPUT_FILE_BASE}.c"  ; then
	echo "${INPUT_FILE_PATH} not changed"
	rm "${cfile}"
else
	echo "${INPUT_FILE_PATH} modified"
	test -f "${HEIMDAL_TMPDIR}/compile_et/${INPUT_FILE_BASE}.c" && diff -uw "${cfile}" "${HEIMDAL_TMPDIR}/asn1_compile/${INPUT_FILE_BASE}.c" 
	mv "${cfile}" "${HEIMDAL_TMPDIR}/asn1_compile/${INPUT_FILE_BASE}.c"
fi
