# Creates the exclusive executable for activity 02
add_executable(app_temperatura
    src/main.cpp
    src/temperatura.cpp 
)

# Notifies the compiler that the headers (.hpp) for this activity are in the include/ folder
target_include_directories(app_temperatura PRIVATE include)