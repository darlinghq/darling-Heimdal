#!/bin/sh
export SRCROOT="$(cd ../.. && pwd)"
export GENERATED_DIR="$SRCROOT/gen"

/bin/bash heimdal-compile_et/build.sh
/bin/bash heimdal-slc/build.sh
/bin/bash heimdal-asn1_compile/build.sh

CMAKE_HEIMDAL_COMPILE_ET_DIR="$GENERATED_DIR/tmp/cmake_heimdal_compilers"
mkdir -p $CMAKE_HEIMDAL_COMPILE_ET_DIR

DARLING_INSTALL_DIR=$GENERATED_DIR/tmp/install
mkdir -p $DARLING_INSTALL_DIR

cmake -B $CMAKE_HEIMDAL_COMPILE_ET_DIR -S ./
cmake --build $CMAKE_HEIMDAL_COMPILE_ET_DIR
cmake --install $CMAKE_HEIMDAL_COMPILE_ET_DIR --prefix $DARLING_INSTALL_DIR
