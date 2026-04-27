# Creates the exclusive executable for activity 04
add_executable(app_ponto2d
    src/main.cpp
    src/ponto2d.cpp
)

# Notifies the compiler that the headers (.hpp) for this activity are in the include/ folder
target_include_directories(app_ponto2d PRIVATE include)