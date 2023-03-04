#!/bin/sh
# export SRCROOT="$(cd ../../.. && pwd)"
# export GENERATED_DIR="$SRCROOT/gen"

HEIMDAL_ASN1_COMPILE_DIR="$GENERATED_DIR/tmp/asn1_compile"
mkdir -p "$HEIMDAL_ASN1_COMPILE_DIR"

HeimdalCompilers/heimdal-asn1_compile/asn1_compiler-yacc.sh
flex -o "$HEIMDAL_ASN1_COMPILE_DIR/lex.c" "$SRCROOT/lib/asn1/lex.l"
