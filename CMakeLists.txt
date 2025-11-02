cmake_minimum_required(VERSION 4.1.2)

project(sfml-project LANGUAGES CXX)

include(CTest)
enable_testing()

find_package(SFML 3 COMPONENTS Graphics Window System REQUIRED)

add_executable(${PROJECT_NAME} main.cpp Game.cpp Components.cpp EntityManager.cpp Entity.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE SFML::System SFML::Window SFML::Graphics)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
