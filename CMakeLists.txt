cmake_minimum_required(VERSION 3.20)
# TODO 1: 自定义项目名称
project(Test LANGUAGES CXX)

# 启用 C++20 标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# TODO 2: 查找并添加依赖
# find_package(glfw3 CONFIG REQUIRED)
# find_package(Vulkan REQUIRED)
# find_package(glm CONFIG REQUIRED)
# find_package(spdlog CONFIG REQUIRED)

# TODO 3: 添加可执行文件
add_executable(Test src/test.cpp)

# (Optional) 
# TODO 4: 链接库
# target_link_libraries(Test
#   PRIVATE
#     glfw
#     Vulkan::Vulkan
#     glm
#     spdlog::spdlog
# )

# (Optional)
# TODO: 包含目录
# target_include_directories(Test
#   PRIVATE
#     ${CMAKE_CURRENT_SOURCE_DIR}/src
# )