# Creates the exclusive executable for activity 03
add_executable(app_produto
    src/main.cpp
)

# Notifies the compiler that the headers (.hpp) for this activity are in the include/ folder
target_include_directories(app_produto PRIVATE include)