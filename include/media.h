#pragma once
#include"SDL.h"
#include"SDL_image.h"
#include"iostream"
#include"string.h"
using std::string;

bool init(SDL_Window*& winNo1, SDL_Surface*& surfNo1){
    if(SDL_Init(SDL_INIT_VIDEO)!=-1){
        winNo1=SDL_CreateWindow("", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 900, 490, SDL_WINDOW_SHOWN);
        if(winNo1!=NULL){
            surfNo1=SDL_GetWindowSurface(winNo1);
            if(surfNo1!=NULL){
                return true;
            }else{
                printf("%s\n", SDL_GetError());
                return false;
            };
        }else{
            printf("%s\n", SDL_GetError());
            return false;
        };
    }else{
        printf("%s\n", SDL_GetError());
        return false;
    };
};

bool surf(SDL_Surface*& surfNo1, string prmNo1="44.png"){
	surfNo1=IMG_Load(prmNo1.c_str());
	if(surfNo1==NULL){
		return false;
	}else{
		return true;
	};
};

bool free(SDL_Surface*& surfNo1){
	SDL_FreeSurface(surfNo1); surfNo1=NULL;
};

bool des(SDL_Window*& winNo1){
	SDL_DestroyWindow(winNo1); winNo1=NULL;
};
