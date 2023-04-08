// Using SDL and standard IO
#include<SDL.h>
#include<iostream>

// Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

// The window we'll be rendering to
SDL_Window* window = NULL;

// The surface contained by the window
SDL_Surface* screenSurface = NULL;

// Test image to display
SDL_Surface* testImage = NULL;

void loadMedia(){
    testImage = SDL_LoadBMP("testImage.bmp");
}

void close(){
    //Deallocate surface
    SDL_FreeSurface(testImage);
    testImage = NULL;

    //Destroy window
    SDL_DestroyWindow(window);
    window = NULL;

    //Quit SDL subsystems
    SDL_Quit();
}

int main(int argc, char* args[]){

    // Initialize SDL
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    }
    else{
        // Create window
        window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if(window == NULL){
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        }
        else{
            // Get window surface
            screenSurface = SDL_GetWindowSurface(window);

            // Fill the surface white
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0x22, 0x22, 0x22));

            // Update the surface
            SDL_UpdateWindowSurface(window);

            // Hack to get window to stay up
            //SDL_Event e; bool quit = false; while(!quit){ while(SDL_PollEvent(&e)){ if(e.type == SDL_QUIT) quit = true; } }

            loadMedia();

            // Main loop flag
            bool quit = false;

            // Event handler
            SDL_Event e;

            // While application is running
            while(!quit){

                while(SDL_PollEvent(&e) != 0){

                    // User request quit
                    if(e.type == SDL_QUIT){
                        quit = true;
                    }
                }

                // Apply the image
                SDL_BlitSurface(testImage, NULL, screenSurface, NULL);

                // Update the surface
                SDL_UpdateWindowSurface(window);
            }
        }
    }

    // Free resources and close SDL
    close();

    return 0;
}
