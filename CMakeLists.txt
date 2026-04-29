# Define the minimum version of CMake
cmake_minimum_required(VERSION 3.15)

#1. Define the project name and the language (C++)
project(TADs VERSION 1.0 LANGUAGES CXX)

# ---------------------------------------------------------
#2. GLOBAL CONFIGURATIONS IN C++
# ---------------------------------------------------------
# Forces the use of C++17
set(CMAKE_CXX_STANDARD 17)
# Forces the compiler to respect the version above.
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Disables specific compiler extensions (ensures cross-platform code)
set(CMAKE_CXX_EXTENSIONS OFF) 

# ---------------------------------------------------------
#3. STRICT COMPILATION FLAGS
# ---------------------------------------------------------
# Applies warnings and errors to all subfolders automatically
if(MSVC)
    # If you are using Visual Studio on Windows
    add_compile_options(/W4 /WX)
else()
    # If you are using GCC/Clang on Linux or Mac
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

# ---------------------------------------------------------
# 4. DELEGATION OF PORTFOLIOS
# ---------------------------------------------------------
# WARNING: The root file NEVER calls the activities directly.
# It only points to the organizing folder "exercises".
add_subdirectory(exercises)