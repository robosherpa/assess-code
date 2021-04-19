cmake_minimum_required(VERSION 2.8)
project(sample-code)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Locate GTest
find_package(GTest REQUIRED)

include_directories(
  ${PROJECT_BUILD_DIR}
  ${PROJECT_SOURCE_DIR}
  ${GTEST_INCLUDE_DIRS}
  )

# Link executables
add_executable(
   build/vehicle_test
   tests/vehicle_test.cpp
   )

target_link_libraries(
   build/vehicle_test
   ${GTEST_LIBRARIES}
   pthread
   )

# Link executables
add_executable(
	build/mRO_test
	tests/mRO_test.cpp
   )

target_link_libraries(
	build/mRO_test
   ${GTEST_LIBRARIES}
   pthread
   )

