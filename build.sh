#!/bin/bash

echo "Building Handmade Hero"

mkdir ./build/
pushd ./build/

clang++ -g -o handmade ../src/osx_main.cpp

echo "Finished building"

popd
