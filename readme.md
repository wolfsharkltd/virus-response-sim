
# Virus Response Sim

Initial project file.

## Vision

SimCity like top down simulation game around the idea of virus challenges within a population and being a policy maker and enforcer and explore the idea of "could you do better if you were in that position" type simulation games.

## Architecture

* Modern C++
* SDL2 Graphics output; 2D
* Dear ImGui Gui
* YAML Configuration / Data Files

## Building The Project

The project uses git submodules for vcpkg so remember to do a recursive checkout!

```bash
❯ git clone --recursive https://github.com/wolfsharkltd/virus-response-sim 
❯ cd toolbox
❯ cmake -S . -B build
❯ cmake --build build
```
