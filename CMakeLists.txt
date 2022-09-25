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
    ${CMAKE_SOURCE_DIR}/install/sdlsdk/sdl/lib
)

# Specify your app's executable name and a list of linked libraries
target_link_libraries(test
    # ... any other linked libraries
    ${CMAKE_SOURCE_DIR}/install/mavsdk/lib/mavsdk.lib
    ${CMAKE_SOURCE_DIR}/install/sdlsdk/sdl/lib/SDL2d.lib
    #${CMAKE_SOURCE_DIR}/install/sdlsdk/sdl/SDL2main.lib
    #kernel32.lib
    #user32.lib
    #gdi32.lib
    #winspool.lib
    #shell32.lib
    #ole32.lib
    #oleaut32.lib
    #uuid.lib
    #comdlg32.lib
    #advapi32.lib
)

message("Done!")