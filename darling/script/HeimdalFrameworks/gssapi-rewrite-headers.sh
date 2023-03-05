#!/bin/sh
# export SRCROOT="$(cd ../../.. && pwd)"
# export GENERATED_DIR="$SRCROOT/gen"
export HEIMDAL_TMPDIR="$GENERATED_DIR/gssapi-rewrite-headers"
export DARLING_BUILD_EXPORT_DATA_DIR="$GENERATED_DIR/build-export-data"

sh ${SRCROOT}/packages/mac/gssapi-rewrite-headers.sh
