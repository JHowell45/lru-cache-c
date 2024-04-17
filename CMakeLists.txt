cmake_minimum_required(VERSION 3.10)

project(lru-cache VERSION 0.1.0 LANGUAGES C)

set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lru-cache)
set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)
set(INCLUDE_DIR ${PROJECT_DIR}/include)
set(PROJECT_EXAMPLE_DIR ${PROJECT_DIR}/examples)

set(LIBRARY_NAME lrucache)

include_directories(${INCLUDE_DIR})

add_library(${LIBRARY_NAME} SHARED
    ${PROJECT_SOURCE_DIR}/lru_cache.c
    ${PROJECT_SOURCE_DIR}/double_linked_list.c
    ${PROJECT_SOURCE_DIR}/hashmap.c
)

set_target_properties(${LIBRARY_NAME} PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR}
    PUBLIC_HEADER ${INCLUDE_DIR}/*.h
)

add_executable(double_linked_list ${PROJECT_EXAMPLE_DIR}/double_linked_list_example.c)
target_link_libraries(double_linked_list ${LIBRARY_NAME})

add_executable(lru_cache ${PROJECT_EXAMPLE_DIR}/lru_cache_example.c)
target_link_libraries(lru_cache ${LIBRARY_NAME})