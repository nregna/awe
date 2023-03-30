#pragma once
#include"SDL.h"
#include"SDL_image.h"
#include"iostream"

bool surf(string prmNo1="44.png", SDL_Surface*& surfNo1=NULL){ 
	surfNo1=IMG_Load(prmNo1);
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
