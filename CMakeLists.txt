cmake_minimum_required(VERSION 3.10)

project(lru-cache VERSION 0.1.0 LANGUAGES C)

set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lru-cache)
set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)
set(INCLUDE_DIRECTORIES ${PROJECT_DIR}/include)
set(PROJECT_EXAMPLE_DIR ${PROJECT_DIR}/examples)

add_library(lru-cache SHARED
    ${PROJECT_SOURCE_DIR}/lru_cache.c
    ${PROJECT_SOURCE_DIR}/double_linked_list.c
    ${PROJECT_SOURCE_DIR}/hashmap.c
)

target_include_directories(lru-cache PUBLIC ${INCLUDE_DIRECTORIES})

add_executable(double_linked_list
    ${PROJECT_EXAMPLE_DIR}/double_linked_list.c)

target_link_directories(double_linked_list PUBLIC lru-cache)