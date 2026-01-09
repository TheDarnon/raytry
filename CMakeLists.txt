cmake_minimum_required(VERSION 3.11)
project(RaylibGame)

# 1. Автоматичне завантаження Raylib
include(FetchContent)
FetchContent_Declare(
  raylib
  URL https://github.com/raysan5/raylib/archive/refs/tags/5.5.tar.gz
)
FetchContent_MakeAvailable(raylib)

# 2. Твій файл (переконайся, що шлях правильний)
add_executable(RAYTRY main.cpp)

# 3. Налаштування для Linux/Windows
target_link_libraries(RAYTRY raylib)

# Додаткові системні штуки для Linux
if(UNIX)
    target_link_libraries(RAYTRY m pthread dl rt)
endif()