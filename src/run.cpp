#include<iostream>
#include<SDL.h>
#include<SDL_image.h>
#include"media.h"

int main(int argc, char* argv[]){

    //create instance
    Window window;

    //SDL initialization
    if(SDL_Init(SDL_INIT_VIDEO)!=-1&&IMG_Init(IMG_INIT_PNG)){

        //load instance window
        window.init();

    };

    //game loop
	for(SDL_Event event; event.type!=SDL_QUIT;){

        //updates window surface
		while(SDL_PollEvent(&event)!=0){
			window.update(event);
		};

	};

    //close up
    window.close(); SDL_Quit(); IMG_Quit();

};

