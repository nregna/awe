#include"iostream"
#include"SDL.h"
#include"SDL_image.h"
#include"poll.h"

int main(int argc, char* argv[]){
	for(SDL_Event event; event.type!=SDL_QUIT;){
		while(SDL_PollEvent(&event)!=0){
			update(event);
		};
	};
};
