# CMake Example

## Introduction

CMake is a popular build system generator. This example demonstrates how to use
CMake to build a piece of software which has different modules each of which
produces static libraries and possibly executables that link to a common shared
library and a 3rdparty library FreeGLUT. This example is tested on Windows but
it should be even easier to apply the same ideas to any other OS.

Here is the directory structure of the project:

	cmake-example
	│   .cproject
	│   .project
	│   CMakeLists.txt
	│   README.md
	│
	├───circle
	│   │   CMakeLists.txt
	│   │
	│   ├───blue
	│   │       blue.c
	│   │       blue.h
	│   │       CMakeLists.txt
	│   │       main.c
	│   │
	│   ├───green
	│   │       CMakeLists.txt
	│   │       green.c
	│   │       green.h
	│   │       main.c
	│   │
	│   └───libcircle
	│           circle.c
	│           circle.h
	│           CMakeLists.txt
	│
	├───cmake
	│       BuildTypeConfig.cmake
	│       FindFreeGLUT.cmake
	│
	├───common
	│   │   CMakeLists.txt
	│   │
	│   └───libdisplay
	│           CMakeLists.txt
	│           display.c
	│           display.h
	│
	└───square
		│   CMakeLists.txt
		│
		├───libsquare
		│       CMakeLists.txt
		│       square.c
		│       square.h
		│
		├───red
		│       CMakeLists.txt
		│       main.c
		│       red.c
		│       red.h
		│
		└───yellow
				CMakeLists.txt
				main.c
				yellow.c
				yellow.h

The modules are `circle`, `square` and `common`. These modules are defined as
CMake projects. The modules contain targets. For example, the `square` module
contains `libsquare`, `red`, and `yellow` targets. As its name suggests, `libsquare`
target is a library while the other two are executables. The same convention also
applies to `circle` module.

`libsquare` and `libcircle` are static libraries. They just print hello
messages. Static libraries go to a library directory specified by
`build/<EXAMPLE-BUILD-TYPE>/lib`.

`libdisplay` is a dynamic (~shared) library which links to FreeGLUT and serves
executables to displays circles and squares in different colors. DLLs and
executables all go to a runtime directory specified by
`build/<EXAMPLE-BUILD-TYPE>/bin` so that the executables can run. See **Build**
for <EXAMPLE-BUILD-TYPE> values.

## Build

Though I am not a big fan of IDEs (I love [neo]vim), Eclipse runs the following
commands through cmake4eclipse plugin.

	cmake -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=ON -G "MinGW Makefiles" -DEXAMPLE_BUILD_TYPE:STRING=<EXAMPLE-BUILD-TYPE> "path/to/cmake-example"
	make -j6 all

Possible values for `<EXECUTABLE-BUILD-TYPE>` are

- x64Debug
- x64Release
- x86Debug
- x86Release

We simply ignore `-DCMAKE_BUILD_TYPE:STRING=Debug` and set it according to
`<EXECUTABLE-BUILD-TYPE>`. Using the architecture information provided by our
build type, we can implement a multi-architecture build system generator.

You can also build the project from Cmder. Instead of Makefile-based
generators, you can give *Ninja* a try, which is supposed to be faster than
make. Assuming you have installed Ninja and have it on your `PATH` environment
variable, run the following commands

	cd /path/to/cmake-project
	mkdir "build/<EXAMPLE-BUILD-TYPE>"
	cd build/<EXAMPLE-BUILD-TYPE>
	cmake -G "Ninja" -DEXAMPLE_BUILD_TYPE=<EXAMPLE-BUILD-TYPE> ../../
	ninja all | cat

Note that cmake won't work with *MinGW Makefiles* on Cmder, but it should work with
*MSYS Makefiles* and *Unix Makefiles*. Run `cmake -h` to see other generators.
