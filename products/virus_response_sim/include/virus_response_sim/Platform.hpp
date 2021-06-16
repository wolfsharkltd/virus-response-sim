//
// Created by light on 16/06/2021.
//

#pragma once

#include <SDL.h>
#include "imgui.h"
#include "imgui_impl_sdl.h"
#include "imgui_impl_opengl3.h"

class Platform {
private:
    SDL_GLContext gl_context;
    SDL_Window* window;
    ImGuiIO* io;
    bool done = false;

public:
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

    bool Initialise();
    void Cleanup();
    bool IsRunning();
    void PollEvents();
    void NewFrame();
    void Render();
};
