# Non-Intrusive-Conan-CMake
This repository demonstrates an approach of using the Conan package manager in CMake-based projects without interfering the build configuration.

[![CircleCI](https://circleci.com/gh/NewProggie/Non-Intrusive-Conan-CMake.svg?style=shield)](https://circleci.com/gh/NewProggie/Non-Intrusive-Conan-CMake)

## Build steps
```bash
$ pip install conan
$ mkdir build && cd build
$ conan install --build=missing --profile ../.conan/profiles/clang_7_0 ..
$ CONAN_PATH=/Users/NewProggie/.conan/data
$ cmake \
    -DCMAKE_C_COMPILER=$(which clang) \
    -DCMAKE_CXX_COMPILER=$(which clang++) \
    -DCMAKE_TOOLCHAIN_FILE=conan_paths.cmake \
    -DCMAKE_BUILD_TYPE=Release \
    -DCONAN_LIBJPEG_ROOT:PATH=${CONAN_PATH}/libjpeg/9c/bincrafters/stable/package/560b128b7f18cdc8f77f23c6834ffad4a/ \
    -DCONAN_ZLIB_ROOT:PATH=${CONAN_PATH}/zlib/1.2.11/conan/stable/package/560b128b7f18cdc8ff080cad77f34ffad4a/ \
    -DCONAN_LIBPNG_ROOT:PATH=${CONAN_PATH}/libpng/1.6.34/bincrafters/stable/package/2fcedcd518d74d31f30df6a210eeb54d/ \
    -DCONAN_LIBTIFF_ROOT:PATH=${CONAN_PATH}/libtiff/4.0.9/bincrafters/stable/package/2fcedcd518d74d31f90df6a210eeb54d/ \
    ..
```
