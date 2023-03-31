#include"iostream"
#include"SDL.h"
#include"SDL_image.h"
#include"media.h"

bool update(SDL_Event& arg, SDL_Window*& winNo1, SDL_Surface*& surfNo1){
	if(arg.type==SDL_KEYDOWN){
		switch(arg.key.keysym.sym){
			case SDLK_BACKSPACE:
				arg.type=SDL_QUIT;
				break;
			case SDLK_ESCAPE:
				arg.type=SDL_QUIT;
				break;
            case SDLK_SPACE:
                SDL_Surface* surfNo2=NULL;
                surf(surfNo2, "44.png");
                SDL_BlitSurface(surfNo2, NULL, surfNo1, NULL);
                free(surfNo2);
                SDL_UpdateWindowSurface(winNo1);
                break;
		};
	};
};
