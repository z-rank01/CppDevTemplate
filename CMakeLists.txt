cmake_minimum_required(VERSION 3.20)
project(Test LANGUAGES CXX)

# 启用 C++20 标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置 vcpkg 工具链文件（如果未通过命令行指定）
# if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
#   set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
#       CACHE STRING "Vcpkg toolchain file")
# endif()

# TODO: 查找依赖
# find_package(glfw3 CONFIG REQUIRED)
# find_package(Vulkan REQUIRED)
# find_package(glm CONFIG REQUIRED)
# find_package(spdlog CONFIG REQUIRED)

# 添加可执行文件
add_executable(Test src/test.cpp)

# TODO: 链接库
# target_link_libraries(Test
#   PRIVATE
#     glfw
#     Vulkan::Vulkan
#     glm
#     spdlog::spdlog
# )

# TODO: 包含目录
# target_include_directories(Test
#   PRIVATE
#     ${CMAKE_CURRENT_SOURCE_DIR}/src
# )