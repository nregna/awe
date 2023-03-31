#include"iostream"
#include"SDL.h"
#include"SDL_image.h"

bool update(SDL_Event& arg){
	if(arg.type==SDL_KEYDOWN){
		switch(arg.key.keysym.sym){
			case SDLK_BACKSPACE:
				arg.type=SDL_QUIT;
				break;
			case SDLK_ESCAPE:
				arg.type=SDL_QUIT;
				break;
		};
	};
};
