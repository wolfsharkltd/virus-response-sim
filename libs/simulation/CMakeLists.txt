option(SIMULATION_TESTS "Build test suite for simulation" ON)

add_library(simulation
    src/simulation.cpp
)

target_include_directories(simulation PUBLIC include)

target_compile_options(simulation PRIVATE ${TOOLBOX_CXX_FLAGS})

target_link_libraries(simulation PRIVATE
)

target_analyse_code(simulation)

if (SIMULATION_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif (SIMULATION_TESTS)
