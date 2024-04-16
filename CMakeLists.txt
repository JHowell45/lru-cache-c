cmake_minimum_required(VERSION 3.10 LANGUAGE C)

project(lru-cache)

set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lru-cache)
set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)
set(INCLUDE_DIRECTORIES ${PROJECT_DIR}/include)

add_library(lru-cache SHARED
    ${PROJECT_SOURCE_DIR}/lru_cache.c
)