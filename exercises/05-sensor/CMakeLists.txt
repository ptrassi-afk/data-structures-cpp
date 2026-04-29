# Creates the exclusive executable for activity 05
add_executable(app_sensor
    src/main.cpp
)

# Notifies the compiler that the headers (.hpp) for this activity are in the include/ folder
target_include_directories(app_sensor PRIVATE include)