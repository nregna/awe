#include"iostream"
#include"SDL.h"
#include"SDL_image.h"
#include"include\media.h"

int main(int argc, char* argv[]){

    //create instance
    Windw windw;

    //SDL initialization
    if(SDL_Init(SDL_INIT_VIDEO)!=-1){

        //load instance window
        windw.init(windw.wind, windw.windSurf);

    };

    //game loop
	for(SDL_Event event; event.type!=SDL_QUIT;){

        //updates window surface
		while(SDL_PollEvent(&event)!=0){
			windw.update(event);
		};

	};

};
