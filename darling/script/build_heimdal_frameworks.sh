#!/bin/sh
export SRCROOT="$(cd ../.. && pwd)"
export GENERATED_DIR="$SRCROOT/gen"

/bin/bash HeimdalFrameworks/asn1-generate-template.sh
/bin/bash HeimdalFrameworks/gen-error-tables.sh
/bin/bash HeimdalFrameworks/build-export-data.sh
/bin/bash HeimdalFrameworks/hx509-yacc.sh
/bin/bash HeimdalFrameworks/slc-generated-files.sh
