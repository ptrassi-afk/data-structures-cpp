# Creates the exclusive executable for activity 01
add_executable(app_dado
    src/main.cpp
    src/dado.cpp
)

# Notifies the compiler that the headers (.hpp) for this activity are in the include/ folder
target_include_directories(app_dado PRIVATE include)