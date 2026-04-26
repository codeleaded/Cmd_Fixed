## Overview
The project is a C-based application that performs fixed-point arithmetic operations. It includes support for Linux, Windows (using Wine), WebAssembly, and cross-compilation for Windows using GCC.

## Features
- Fixed-point number representation (`Fixed16`)
- Conversion between fixed-point numbers and doubles
- Arithmetic operations on fixed-point numbers

## Project Structure
```
/home/codeleaded/Hecke/C/Cmd_Fixed/
├── build/
├── src/
│   ├── Main.c
│   └── Fixed.h
├── Makefile.linux
├── Makefile.windows
├── Makefile.wine
└── README.md
```

### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools

## Build & Run
To build the project for a specific OS, use one of the following commands:

**Linux:**
```sh
make -f Makefile.linux all
```

**Windows:**
```sh
make -f Makefile.windows all
```

**Wine (cross-compilation to Windows):**
```sh
make -f Makefile.wine all
```

**WebAssembly (Emscripten/clang):**
```sh
make -f Makefile.web all
```

For clean rebuilds:
```sh
make -f Makefile.linux clean
make -f Makefile.windows clean
make -f Makefile.wine clean
make -f Makefile.web clean
```

Build and execute with:
```sh
make -f Makefile.linux exe
make -f Makefile.windows exe
make -f Makefile.wine exe
make -f Makefile.web exe
```

For debugging:
```sh
make -f Makefile.linux debug
make -f Makefile.windows debug
make -f Makefile.wine debug
```

## Additional Commands
- `alldebug` builds the project with debugging symbols.
- `dg` performs a clean rebuild and runs the debugger.

By following these instructions, you can build and execute the application on various platforms.