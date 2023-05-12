#!/bin/sh
# export SRCROOT="$(cd ../../.. && pwd)"
# export GENERATED_DIR="$SRCROOT/gen"
DERIVED_FILES_DIR="$GENERATED_DIR/error-tables"
DERIVED_SOURCES_DIR="$DERIVED_FILES_DIR"
export HEIMDAL_TMPDIR="$DERIVED_FILES_DIR/error-tables"

# c="xcrun heimdal-compile_et"
c="$GENERATED_DIR/tmp/install/bin/heimdal-compile_et"

mkdir -p ${DERIVED_FILES_DIR}

gen_table() {

    INPUT_FILE_BASE=$1
    INPUT_FILE_DIR=$2
    INPUT_FILE_PATH=${SRCROOT}/${INPUT_FILE_DIR}/${INPUT_FILE_BASE}.et
    DDIR=$3
    
    # type xcrun

    cd ${DERIVED_FILES_DIR} && ${c} ${INPUT_FILE_PATH} || exit 1
    mkdir -p ${HEIMDAL_TMPDIR}/${DDIR} || exit 1
    sh ${SRCROOT}/packages/mac/update-header.sh build ${INPUT_FILE_BASE}.h "${DERIVED_SOURCES_DIR}" "${HEIMDAL_TMPDIR}/${DDIR}" || exit 1

	cfile="${DERIVED_SOURCES_DIR}/${INPUT_FILE_BASE}.c"

	if test -f "${cfile}"  && cmp -s "${cfile}" "${HEIMDAL_TMPDIR}/${INPUT_FILE_BASE}.c" ; then
		echo "${INPUT_FILE_PATH} not changed"
		rm "${cfile}"
	else
		echo "${INPUT_FILE_PATH} modified"
		mv "${cfile}" "${HEIMDAL_TMPDIR}/${INPUT_FILE_BASE}.c"
	fi

}

gen_table asn1_err lib/asn1
gen_table gkrb5_err lib/gssapi/krb5
gen_table wind_err lib/wind
gen_table krb5_err lib/krb5
gen_table krb_err lib/krb5
gen_table k524_err lib/krb5
gen_table heim_err lib/krb5
gen_table hdb_err lib/hdb
gen_table hx509_err lib/hx509
gen_table kadm5_err lib/kadm5 kadm/kadm5
gen_table ntlm_err lib/ntlm
gen_table hc_err lib/heimcred

sh ${SRCROOT}/packages/mac/comerr-rewrite-headers.sh