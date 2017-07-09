find_package(OpenGL REQUIRED)

if (EXAMPLE_TARGET_ARCHITECTURE STREQUAL "x64")
    set(_freeglut_lib_path lib/x64)
    set(_freeglut_runtime_path bin/x64)
elseif (EXAMPLE_TARGET_ARCHITECTURE STREQUAL "x86")
    set(_freeglut_lib_path lib)
    set(_freeglut_runtime_path bin)
endif()

find_library(FreeGLUT_LIBRARY NAMES freeglut
    PATHS "$ENV{WNIX_LIBS_PATH}/freeglut/${_freeglut_lib_path}"
)

find_library(FreeGLUT_RUNTIME_LIBRARY NAMES freeglut
    PATHS "$ENV{WNIX_LIBS_PATH}/freeglut/${_freeglut_runtime_path}"
)

find_path(FreeGLUT_INCLUDE_DIR NAMES GL/glut.h
    PATHS "$ENV{WNIX_LIBS_PATH}/freeglut/include"
)

list(REMOVE_DUPLICATES FreeGLUT_INCLUDE_DIR)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(FreeGLUT
    REQUIRED_VARS
    FreeGLUT_INCLUDE_DIR
    FreeGLUT_LIBRARY
)

mark_as_advanced(
    FreeGLUT_INCLUDE_DIR
    FreeGLUT_LIBRARY
)

if(FreeGLUT_FOUND)
    if(NOT TARGET FreeGLUT::FreeGLUT)
        set(FreeGLUT_LINK_LIBRARIES OpenGL::GL)
        add_library(FreeGLUT::FreeGLUT SHARED IMPORTED)
        set_target_properties(FreeGLUT::FreeGLUT
            PROPERTIES
            IMPORTED_LINK_INTERFACE_LANGUAGES "C"
            IMPORTED_IMPLIB "${FreeGLUT_LIBRARY}"
            IMPORTED_LOCATION "${FreeGLUT_RUNTIME_LIBRARY}"
            INTERFACE_INCLUDE_DIRECTORIES "${FreeGLUT_INCLUDE_DIR}"
            INTERFACE_LINK_LIBRARIES "${FreeGLUT_LINK_LIBRARIES}"
        )
    endif()
endif()