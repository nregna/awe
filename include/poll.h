#include<iostream>
#include<SDL.h>
#include<SDL_image.h>
#include"rendr.h"

class Screen{
    public:
        bool menu(SDL_Event&, SDL_Texture*&, SDL_Renderer*&);
};

bool Screen::menu(SDL_Event& arg, SDL_Texture*& tex, SDL_Renderer*& ren){
	if(Draw draw; arg.type==SDL_KEYDOWN){
		switch(arg.key.keysym.sym){
			case SDLK_BACKSPACE:
				arg.type=SDL_QUIT;
				break;
			case SDLK_ESCAPE:
				arg.type=SDL_QUIT;
				break;
            case SDLK_RETURN:
                draw.texture(tex, ren, "44.png");
                SDL_RenderClear(ren);
                SDL_RenderCopy(ren, tex, NULL, NULL);
                SDL_RenderPresent(ren);
                break;
            case SDLK_SPACE:
                draw.texture(tex, ren, "44.png");
                SDL_RenderClear(ren);
                SDL_RenderCopy(ren, tex, NULL, NULL);
                SDL_RenderPresent(ren);
                break;
		};
	};
};
