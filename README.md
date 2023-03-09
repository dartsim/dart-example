# dart-example [![CI](https://github.com/dartsim/dart-example/actions/workflows/ci.yml/badge.svg)](https://github.com/dartsim/dart-example/actions/workflows/ci.yml)

This is a minimal example C++ project that uses DART physics engine and CMake build system.

## Prerequisites

To build and run this project, you will need to install DART on your system. You can do this by running the following commands in your terminal:

```
sudo apt-add-repository ppa:dartsim/ppa
sudo apt install libdart6-all-dev
```

## Building the project

To build the project, follow these steps:

1. Create a `build` directory in the project root directory:

   ```
   mkdir build
   cd build
   ```

1. Run `cmake` in the `build` directory:

   ```
   cmake ..
   ```

1. Build the project using `make`:

   ```
   make
   ```

This will compile the project and generate an executable called `example` in the `build` directory.

## Running the project

To run the project, simply execute the `example` executable:

```
./example
```

If everything is working correctly, you should see some output printed to the console.

If you want to install DART on a different operating system or need more information about installing and using DART, please visit the DART documentation at either https://dartsim.github.io/install-dart/ (for DART 6) or https://dart.readthedocs.io/ (for DART 7, currently under development).
