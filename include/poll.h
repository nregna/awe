#include"iostream"
#include"SDL.h"
#include"SDL_image.h"
#include"include\rendr.h"

bool slide(SDL_Window*&, SDL_Surface*&);

bool menuPoll(SDL_Event& arg, SDL_Window*& winNo1, SDL_Surface*& surfNo1){
	if(arg.type==SDL_KEYDOWN){
		switch(arg.key.keysym.sym){
			case SDLK_BACKSPACE:
				arg.type=SDL_QUIT;
				break;
			case SDLK_ESCAPE:
				arg.type=SDL_QUIT;
				break;
            case SDLK_RETURN:
                slide(winNo1, surfNo1);
                break;
            case SDLK_SPACE:
                slide(winNo1, surfNo1);
                break;
		};
	};
};

//Copy surface with image to window surface.
bool slide(SDL_Window*& winPrm, SDL_Surface*& surfPrm){
    Draw draw;
    SDL_Surface* surfNo2=NULL; draw.surf(surfPrm, surfNo2, "44.png");
    SDL_BlitSurface(surfNo2, NULL, surfPrm, NULL); SDL_UpdateWindowSurface(winPrm);
    free(surfNo2);
};
