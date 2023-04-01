#include"iostream"
#include"SDL.h"
#include"SDL_image.h"
#include"string.h"
using std::string;

void free(SDL_Surface*&);
void des(SDL_Window*&);

struct Draw{
    bool wind(SDL_Window*& winNo1, SDL_Surface*& surfNo1){
        winNo1=SDL_CreateWindow("Ain't so", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 391, 293, SDL_WINDOW_SHOWN);
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
    };
    bool surf(SDL_Surface*& surfNo1, SDL_Surface*& surfNo2, string prmNo1="44.png"){
        SDL_Surface* optim=NULL; optim=IMG_Load(prmNo1.c_str());
        if(optim!=NULL){
            surfNo2=SDL_ConvertSurface(optim, surfNo1->format, 0); free(optim);
            return true;
        };
        return false;
    };
};

void free(SDL_Surface*& surfNo1){
	SDL_FreeSurface(surfNo1); surfNo1=NULL;
};

void des(SDL_Window*& winNo1){
	SDL_DestroyWindow(winNo1); winNo1=NULL;
};
