#!/bin/bash

echo "Building Handmade Hero"

mkdir ./build/
pushd ./build/

clang++ -g -o handmade ../code/osx_main.cpp

echo "Finished building"

popd
