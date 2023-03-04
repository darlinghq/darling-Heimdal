#!/bin/sh
# export SRCROOT="$(cd ../../.. && pwd)"
# export GENERATED_DIR="$SRCROOT/gen"

HEIMDAL_COMPILE_ET_DIR="$GENERATED_DIR/tmp/compile_et"
mkdir -p "$HEIMDAL_COMPILE_ET_DIR"

HeimdalCompilers/heimdal-compile_et/compile_et-yacc.sh
flex -o "$HEIMDAL_COMPILE_ET_DIR/lex_et.c" "$SRCROOT/lib/com_err/lex_et.l"
