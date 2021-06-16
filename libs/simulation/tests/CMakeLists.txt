find_package(Catch2 CONFIG REQUIRED)

add_executable(simulation_tests
    test_main.cpp
    simple.cpp
)

target_link_libraries(simulation_tests
PRIVATE
    simulation
    Catch2::Catch2
)
