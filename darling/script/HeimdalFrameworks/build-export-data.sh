#!/bin/sh
export HEIMDAL_TMPDIR="$GENERATED_DIR/build-export-data"
export SOURCE_ROOT="$SRCROOT"

sh ${SRCROOT}/packages/mac/build-import-files.sh
sh ${SRCROOT}/packages/mac/build-export-files.sh
