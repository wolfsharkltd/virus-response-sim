//
// Created by light on 16/06/2021.
//

#define SDL_MAIN_HANDLED // insert this
#include <stdio.h>
#include <memory>

#include "simulation/Simulation.hpp"
#include "SDL2/SDL.h"

int main() {

    auto sim = std::make_shared<Simulation>();

    printf("Hello world!\n");

    sim->Initialise();

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow(
            "Virus Response Sim",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            640,
            480,
            0
    );

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    SDL_Delay(3000);

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
