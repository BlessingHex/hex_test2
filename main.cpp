#include <iostream>
#include <stdio.h>
#include "mavsdk.h"
#include "SDL.h"
#undef main

#define SCREEN_WIDTH 1280 
#define SCREEN_HEIGHT 720

void Log(const char* message)
{
    printf(message);
}


int main()
{
    Log("Hello World!");

    /*
    mavsdk::Mavsdk mavsdk;

    mavsdk::ConnectionResult connection_result = mavsdk.add_any_connection("tcp://192.168.1.12:14550");

    if (connection_result != mavsdk::ConnectionResult::Success) {
        Log("Connection failed");
        //std::cerr << "Connection failed: " << connection_result << '\n';
        return -1;
    }
    */

	
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Error: SDL failed to initialize\nSDL Error: '%s'\n", SDL_GetError());
        return 1;
    }


    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        printf("Error: Failed to create renderer\nSDL Error: '%s'\n", SDL_GetError());
        return 1;
    }

    bool running = true;
    while (running) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
            case SDL_QUIT:
                running = false;
                break;

            default:
                break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 255, 255, 255);
        SDL_RenderClear(renderer);

        SDL_RenderPresent(renderer);
    }

    Log("Hello There!");

    //std::cin.get();

	return 0;
}