#!/bin/sh
# export SRCROOT="$(cd ../.. && pwd)"
# export GENERATED_DIR="$SRCROOT/gen"

HEIMDAL_SLC_DIR="$GENERATED_DIR/tmp/slc"
mkdir -p "$HEIMDAL_SLC_DIR"

heimdal-slc/slc-yacc.sh
flex -o "$HEIMDAL_SLC_DIR/slc-lex.c" "$SRCROOT/lib/sl/slc-lex.l"
