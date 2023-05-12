#!/bin/sh
# export SRCROOT="$(cd ../../.. && pwd)"
# export GENERATED_DIR="$SRCROOT/gen"
DERIVED_FILES_DIR="$GENERATED_DIR/asn1-generate-template"
DERIVED_SOURCES_DIR="$DERIVED_FILES_DIR"
HEIMDAL_TMPDIR="$DERIVED_FILES_DIR/asn1-generate-template"

generate_tempate() {
    INPUT_FILE_BASE=$1
    INPUT_FILE_DIR=$2
    ASN1_COMPILE_ARGS="$3"
    INPUT_FILE_PATH=${SRCROOT}/${INPUT_FILE_DIR}/${INPUT_FILE_BASE}.asn1

    cfile="${DERIVED_FILES_DIR}/asn1_${INPUT_FILE_BASE}_asn1.x"

    optfile=${SRCROOT}/${INPUT_FILE_DIR}/${INPUT_FILE_BASE}.opt
    optfilearg=
    if [ -f ${optfile} ] ; then
        optfilearg="--option-file=${optfile}"
    fi

    # c="xcrun heimdal-asn1_compile"
    c="$GENERATED_DIR/tmp/install/bin/heimdal-asn1_compile"

    mkdir -p ${DERIVED_FILES_DIR}

    cd ${DERIVED_FILES_DIR} && ${c} ${ASN1_COMPILE_ARGS} --one-code-file ${optfilearg} ${INPUT_FILE_PATH} ${INPUT_FILE_BASE}_asn1 || exit 1
    cd ${DERIVED_FILES_DIR} && cmp -s ${INPUT_FILE_BASE}_asn1.hx ${INPUT_FILE_BASE}_asn1.h || cp ${INPUT_FILE_BASE}_asn1.hx ${INPUT_FILE_BASE}_asn1.h
    cd ${DERIVED_FILES_DIR} && cmp -s ${INPUT_FILE_BASE}_asn1-priv.hx ${INPUT_FILE_BASE}_asn1-priv.h || cp ${INPUT_FILE_BASE}_asn1-priv.hx ${INPUT_FILE_BASE}_asn1-priv.h
     mkdir -p ${HEIMDAL_TMPDIR} || exit 1
     mkdir -p ${HEIMDAL_TMPDIR}/Heimdal || exit 1
     sh ${SRCROOT}/packages/mac/update-header.sh build ${INPUT_FILE_BASE}_asn1.h "${DERIVED_SOURCES_DIR}" ${HEIMDAL_TMPDIR} || exit 1
     sh ${SRCROOT}/packages/mac/update-header.sh build ${INPUT_FILE_BASE}_asn1-priv.h "${DERIVED_SOURCES_DIR}" ${HEIMDAL_TMPDIR} || exit 1
     perl ${SRCROOT}/packages/mac/Heimdal-ify.pl Heimdal "${HEIMDAL_TMPDIR}/${INPUT_FILE_BASE}_asn1.h" ${HEIMDAL_TMPDIR}/Heimdal || exit 1

	if test -f "${cfile}"  && cmp -s "${cfile}" "${HEIMDAL_TMPDIR}/asn1_${INPUT_FILE_BASE}_asn1.c" ; then
		echo "${INPUT_FILE_PATH} not changed"
		rm "${cfile}"
	else
		echo "${INPUT_FILE_PATH} modified"
		mv "${cfile}" "${HEIMDAL_TMPDIR}/asn1_${INPUT_FILE_BASE}_asn1.c"
	fi

}

generate_tempate krb5 lib/asn1 --template
generate_tempate cms lib/asn1 --template
generate_tempate pkinit lib/asn1 --template
generate_tempate pkcs8 lib/asn1 --template
generate_tempate pkcs9 lib/asn1 --template
generate_tempate pkcs10 lib/hx509 --template
generate_tempate pkcs12 lib/asn1 --template
generate_tempate rfc2459 lib/asn1 --template
generate_tempate pku2u lib/asn1 --template
generate_tempate digest lib/asn1 --template
generate_tempate test lib/asn1 --template
generate_tempate ocsp lib/hx509 --template
generate_tempate gssapi lib/gssapi/mech --template
generate_tempate spnego lib/gssapi/spnego --template
generate_tempate hdb lib/hdb


