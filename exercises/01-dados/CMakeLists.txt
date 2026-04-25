# Creates the exclusive executable for activity 01
add_executable(app_dados
    src/main.cpp
    src/dados.cpp
)

# Notifies the compiler that the headers (.hpp) for this activity are in the include/ folder
target_include_directories(app_dados PRIVATE include)