cmake_minimum_required(VERSION 3.10)

project(app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt automoc (required for Q_OBJECT)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Find Qt5
find_package(Qt5 REQUIRED COMPONENTS Widgets)

# Include headers
include_directories(include)

# Sources
set(SOURCES
    main.cpp
    src/gui.cpp
)

set(HEADERS
    include/gui.h
    include/guiTypes.h
)

# Executable
add_executable(app
    ${SOURCES}
    ${HEADERS}
)

# Link Qt5
target_link_libraries(app PRIVATE Qt5::Widgets)
