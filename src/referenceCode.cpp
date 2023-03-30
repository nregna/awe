#include"SDL.h"
#include"SDL_image.h"
#include"iostream"

SDL_Window* winAtr01=NULL;
SDL_Surface* surfAtr01=NULL;
SDL_Surface* surfAtr02=NULL;

bool fxn01();
bool fxn02();
bool fxn03();

int main(int argc, char* argv[]){

    SDL_Event arg01;
    bool game=true;

    if(!fxn01()){

        printf("%s", SDL_GetError());

    }else{

        if(!fxn02()){

            printf("%s", SDL_GetError());

        }else{

            while(game){

                while(SDL_PollEvent(&arg01)!=0){

                    if(arg01.type==SDL_QUIT){

                        game=false;

                    };

                };

                SDL_BlitSurface(surfAtr02, NULL, surfAtr01, NULL);
                SDL_UpdateWindowSurface(winAtr01);

            };

        };
    };

    fxn03();

};

bool fxn01(){

    bool arg01=true;

    if(SDL_Init(SDL_INIT_VIDEO)<0){

        printf("%s", SDL_GetError());
        arg01=false;

    }else{

        winAtr01=SDL_CreateWindow("winAtr01", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1190, 1000, SDL_WINDOW_SHOWN);

        if(winAtr01==NULL){

            printf("%s", SDL_GetError);
            arg01=false;

        }else{

            surfAtr01=SDL_GetWindowSurface(winAtr01);

        };

    };

    return arg01;

}

bool fxn02(){

    bool arg01=true;

    surfAtr02=IMG_Load("n061.bmp");

    if(surfAtr02==NULL){

        printf("%s", SDL_GetError);
        arg01=false;

    }

    return arg01;

}
bool fxn03(){

    SDL_FreeSurface(surfAtr01);
    surfAtr01=NULL;
    SDL_DestroyWindow(winAtr01);
    winAtr01=NULL;
    SDL_Quit();

}
