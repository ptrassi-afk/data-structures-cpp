# Define a versão mínima do CMake
cmake_minimum_required(VERSION 3.15)

# 1. Define o nome do seu projeto e a linguagem (C++)
project(DataStructures VERSION 1.0 LANGUAGES CXX)

# ---------------------------------------------------------
# 2. CONFIGURAÇÕES GLOBAIS DO C++
# ---------------------------------------------------------
# Força o uso do C++17
set(CMAKE_CXX_STANDARD 17)
# Obriga o compilador a respeitar a versão acima
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Desativa extensões específicas de compilador (garante código multiplataforma)
set(CMAKE_CXX_EXTENSIONS OFF) 

# ---------------------------------------------------------
# 3. FLAGS DE COMPILAÇÃO RIGOROSAS
# ---------------------------------------------------------
# Aplica os avisos e erros para todas as subpastas automaticamente
if(MSVC)
    # Se estiver usando Visual Studio no Windows
    add_compile_options(/W4 /WX)
else()
    # Se estiver usando GCC/Clang no Linux ou Mac
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

# ---------------------------------------------------------
# 4. DELEGAÇÃO DE PASTAS
# ---------------------------------------------------------
# ATENÇÃO: O arquivo da raiz NUNCA chama as atividades diretamente.
# Ele apenas aponta para a pasta organizadora "exercises".
add_subdirectory(exercises)