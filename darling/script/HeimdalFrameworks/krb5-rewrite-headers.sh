#!/bin/sh
# export SRCROOT="$(cd ../../.. && pwd)"
# export GENERATED_DIR="$SRCROOT/gen"
export HEIMDAL_TMPDIR="$GENERATED_DIR/krb5-rewrite-headers"

sh "${SRCROOT}/packages/mac/krb5-rewrite-headers.sh"
