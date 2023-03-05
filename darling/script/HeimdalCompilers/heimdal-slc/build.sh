#!/bin/sh
# export SRCROOT="$(cd ../.. && pwd)"
# export GENERATED_DIR="$SRCROOT/gen/tmp"

HEIMDAL_SLC_DIR="$GENERATED_DIR/slc-yacc/slc"
mkdir -p "$HEIMDAL_SLC_DIR"

HeimdalCompilers/heimdal-slc/slc-yacc.sh
flex -o "$HEIMDAL_SLC_DIR/slc-lex.c" "$SRCROOT/lib/sl/slc-lex.l"
