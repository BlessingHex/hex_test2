cmake_minimum_required(VERSION 3.22.1)  # CMake version check

project(test VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(test main.cpp)

# Specify include directories
include_directories(
    ${CMAKE_SOURCE_DIR}/install/mavsdk/include/mavsdk
    ${CMAKE_SOURCE_DIR}/install/sdlsdk/sdl/include
)


if(WIN32)
    message("Linking for Windows")

    # Specify your app's executable name and a list of linked libraries
    target_link_libraries(test
        # ... any other linked libraries
        ${CMAKE_SOURCE_DIR}/install/mavsdk/lib/mavsdk.lib
        ${CMAKE_SOURCE_DIR}/install/sdlsdk/sdl/lib/SDL2d.lib
    )

endif(WIN32)

if(UNIX)
    message("Linking for Linux")

    # Specify your app's executable name and a list of linked libraries
    target_link_libraries(test
        # ... any other linked libraries
        ${CMAKE_SOURCE_DIR}/install/mavsdk/lib/libmavsdk.so
        ${CMAKE_SOURCE_DIR}/install/sdlsdk/sdl/lib/libSDL2d.so
    )

endif(UNIX)



message("Done!")