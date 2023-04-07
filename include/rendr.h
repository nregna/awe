#pragma once
#include"iostream"
#include"SDL.h"
#include"SDL_image.h"

void dest(SDL_Texture*&);
void desw(SDL_Window*&);

class Draw{
    public:
        bool texture(SDL_Texture*&, SDL_Renderer*, const char*);
};

bool Draw::texture(SDL_Texture*& tex, SDL_Renderer* ren, const char* prm="44.png"){
    if(SDL_Surface* surf=IMG_Load(prm); surf){
        tex=SDL_CreateTextureFromSurface(ren, surf);
        if(tex==NULL){
            return false;
        };
        SDL_FreeSurface(surf);
    };
};

void dest(SDL_Texture*& tex){
    SDL_DestroyTexture(tex); tex=NULL;
};

void desw(SDL_Window*& wind){
	SDL_DestroyWindow(wind); wind=NULL;
};
