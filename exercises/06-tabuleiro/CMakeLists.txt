# Creates the exclusive executable for activity 06
add_executable(app_tabuleiro
    src/main.cpp
    src/tabuleiro.cpp
)

# Notifies the compiler that the headers (.hpp) for this activity are in the include/ folder
target_include_directories(app_tabuleiro PRIVATE include)