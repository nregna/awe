#pragma once
#include"iostream"
#include"SDL.h"
#include"SDL_image.h"
#include"include\rendr.h"
#include"include\poll.h"
#include"string.h"
using std::string;

struct Windw{
    Draw draw; SDL_Window* wind; SDL_Surface* windSurf;

    bool init(SDL_Window*& winNo1, SDL_Surface*& surfNo1){
        draw.wind(winNo1, surfNo1);
    };
    bool update(SDL_Event& argNo1){
        menuPoll(argNo1, wind, windSurf);
    };
};
