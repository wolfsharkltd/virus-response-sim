find_package(imgui CONFIG REQUIRED)
find_package(Threads REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(SDL2 REQUIRED)

add_executable(virus_response_sim
        src/Platform.cpp
        src/main.cpp)

target_include_directories(virus_response_sim PRIVATE include)

target_compile_options(virus_response_sim PRIVATE ${TOOLBOX_CXX_FLAGS})

target_link_libraries(virus_response_sim PRIVATE
        imgui::imgui
        glad::glad
        simulation
        SDL2::SDL2
        Threads::Threads
)

target_analyse_code(virus_response_sim)

configure_file("fonts/verdana.ttf" "verdana.ttf" COPYONLY)
