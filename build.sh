#!/bin/bash

MAIN_DIR=$(pwd)
BUILD_DIR=${MAIN_DIR}/build
BIN_DIR="${MAIN_DIR}/bin"


if [ -d "${BUILD_DIR}" ]; then
    echo "Removing existing build directory..."
    rm -rf "${BUILD_DIR}"
fi

if [ -d "${BIN_DIR}" ]; then
    echo "Removing existing bin directory..."
    rm -rf "${BIN_DIR}"
fi

echo "Creating build directory..."
mkdir "${BUILD_DIR}"
cd "${BUILD_DIR}"

echo "Running cmake..."
cmake "${MAIN_DIR}"

echo "Running make..."
make

mkdir -p "${BIN_DIR}"

cp "${BUILD_DIR}/zamazingo" "${BIN_DIR}/"
