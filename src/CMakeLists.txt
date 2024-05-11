cmake_minimum_required(VERSION 3.8)

add_executable("module-30_task-1"
    main.cpp
    dog.cpp
    toy.cpp
)

target_include_directories("module-30_task-1" PUBLIC ${MY_INCLUDE_DIR})
