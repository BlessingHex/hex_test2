#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MAVSDK::mavsdk" for configuration "Debug"
set_property(TARGET MAVSDK::mavsdk APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(MAVSDK::mavsdk PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libmavsdk.so.1.4.0"
  IMPORTED_SONAME_DEBUG "libmavsdk.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS MAVSDK::mavsdk )
list(APPEND _IMPORT_CHECK_FILES_FOR_MAVSDK::mavsdk "${_IMPORT_PREFIX}/lib/libmavsdk.so.1.4.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
