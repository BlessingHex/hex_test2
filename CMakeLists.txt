cmake_minimum_required(VERSION 3.22.1)  # CMake version check

project(test VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(test ${SOURCE_FILES})

# Specify include directories
include_directories(
  ${CMAKE_SOURCE_DIR}/install/include
  ${CMAKE_SOURCE_DIR}/SDL
)

# Platform specific library linking
if (WIN32)

    message("Window mavsdk find")

    # Specify your app's executable name and a list of linked libraries
    target_link_libraries(test
      # ... any other linked libraries
      ${CMAKE_SOURCE_DIR}/install/lib/mavsdk.lib
      ${CMAKE_SOURCE_DIR}/SDL/SDL2.lib
    )

endif(WIN32)

if (UNIX)

    message("Unix mavsdk find")

    # Specify your app's executable name and a list of linked libraries
    target_link_libraries(test
        # ... any other linked libraries
        ${CMAKE_SOURCE_DIR}/install/lib/libmavsdk.so
	${CMAKE_SOURCE_DIR}/SDL/libSDL2d.so
    )

endif(UNIX)
