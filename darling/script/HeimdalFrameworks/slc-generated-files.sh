#!/bin/sh
# export SRCROOT="$(cd ../../.. && pwd)"
# export GENERATED_DIR="$SRCROOT/gen"
DERIVED_FILES_DIR="$GENERATED_DIR/heimdal-slc"
HEIMDAL_TMPDIR="$DERIVED_FILES_DIR/heimdal-slc"
SOURCE_ROOT="$SRCROOT"

mkdir -p "${HEIMDAL_TMPDIR}/tmp"

function slccompile() {
	input="${SOURCE_ROOT}/$1"
	output="$2"

	echo "slc-compile $2"

	test -d ${DERIVED_FILES_DIR} || mkdir ${DERIVED_FILES_DIR}
    # c="xcrun heimdal-slc"
    c="$GENERATED_DIR/tmp/install/bin/heimdal-slc"

	cd ${HEIMDAL_TMPDIR}/tmp/ && ${c} ${input} || exit 1
   
	if cmp "${HEIMDAL_TMPDIR}/tmp/${output}.c" "${HEIMDAL_TMPDIR}/${output}.c" 2> /dev/null; then
		rm "${HEIMDAL_TMPDIR}/tmp/${output}".*
	else
		mv "${HEIMDAL_TMPDIR}/tmp/${output}".* "${HEIMDAL_TMPDIR}/"
	fi
}

slccompile lib/hx509/hxtool-commands.in hxtool-commands
slccompile lib/akadmin/hod-commands.in hod-commands
slccompile lib/gssapi/gss-commands.in gss-commands
slccompile kadmin/kadmin-commands.in kadmin-commands
slccompile admin/ktutil-commands.in ktutil-commands
slccompile kuser/kcc-commands.in kcc-commands

exit 0
