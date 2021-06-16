//
// Created by light on 16/06/2021.
//

#include <stdio.h>
#include <memory>

#include "simulation/Simulation.hpp"

int main([[maybe_unused]] int argc, [[maybe_unused]] char* argv[]) {

    auto sim = std::make_shared<Simulation>();

    printf("Hello world!\n");

    sim->Initialise();
}
