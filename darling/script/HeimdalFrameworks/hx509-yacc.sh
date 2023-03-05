#!/bin/sh
# export SRCROOT="$(cd ../../.. && pwd)"
# export GENERATED_DIR="$SRCROOT/gen"
DERIVED_FILES_DIR="$GENERATED_DIR/hx509-yacc"
DERIVED_SOURCES_DIR="$DERIVED_FILES_DIR"
export HEIMDAL_TMPDIR="$DERIVED_FILES_DIR/hx509-yacc"

INPUT_FILE_BASE=sel-gram
INPUT_FILE_DIR=${SRCROOT}/lib/hx509
INPUT_FILE_PATH=${INPUT_FILE_DIR}/${INPUT_FILE_BASE}.y

mkdir -p ${DERIVED_FILES_DIR}

cfile="${DERIVED_FILES_DIR}/${INPUT_FILE_BASE}-${CURRENT_ARCH}.c-new"

${SRCROOT}/ylwrap ${INPUT_FILE_PATH} y.tab.c "${cfile}" y.tab.h ${DERIVED_FILES_DIR}/${INPUT_FILE_BASE}.h y.output  -- yacc -d || exit 1

mkdir -p "${HEIMDAL_TMPDIR}/hx509"
sh ${SRCROOT}/packages/mac/update-header.sh build ${INPUT_FILE_BASE}.h "${DERIVED_SOURCES_DIR}" "${HEIMDAL_TMPDIR}/hx509" || exit 1


if test -f "${cfile}"  && cmp -s "${cfile}" "${HEIMDAL_TMPDIR}/hx509/${INPUT_FILE_BASE}.c"  ; then
	echo "${INPUT_FILE_PATH} not changed"
	rm "${cfile}"
else
	echo "${INPUT_FILE_PATH} modified"
	test -f "${HEIMDAL_TMPDIR}/hx509/${INPUT_FILE_BASE}.c" && diff -uw "${cfile}" "${HEIMDAL_TMPDIR}/hx509/${INPUT_FILE_BASE}.c" 
	mv "${cfile}" "${HEIMDAL_TMPDIR}/hx509/${INPUT_FILE_BASE}.c"
fi
