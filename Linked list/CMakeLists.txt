# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (linked_list)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/main.cpp
    src/list.cpp
    src/person.cpp
)

# Add an executable with the above sources
add_executable(${PROJECT_NAME} ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(linked_list
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/inc
)