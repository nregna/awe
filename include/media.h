#pragma once
#include<iostream>
#include<SDL.h>
#include<SDL_image.h>
#include"rendr.h"
#include"poll.h"

class Window{
    public:
        Draw draw; Screen screen;
        bool init();
        bool update(SDL_Event&);
        bool close();
    private:
        SDL_Window* wind=NULL;
        SDL_Renderer* ren=NULL;
        SDL_Texture* tex=NULL;
};

bool Window::init(){
    wind=SDL_CreateWindow("Ain't so", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 391, 293, SDL_WINDOW_SHOWN);
    ren=SDL_CreateRenderer(wind, -1, SDL_RENDERER_ACCELERATED); SDL_SetRenderDrawColor(ren, 0xFF, 0xFF, 0xFF, 0xFF);
    draw.texture(tex, ren);
};

bool Window::update(SDL_Event& arg){
    screen.menu(arg, tex, ren);
    SDL_UpdateWindowSurface(wind);
};

bool Window::close(){
    desw(wind); dest(tex);
    SDL_DestroyRenderer(ren); ren=NULL;
};
