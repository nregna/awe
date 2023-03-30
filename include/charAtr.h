#ifndef charAtr_H_INCLUDED
#define charAtr_H_INCLUDED

#include"iostream"
#include"SDL.h"
#include"SDL_image.h"
#include"media.h"

enum eric{
    player, idfk, idfc
};

class GenericEntityTemplate{
	public:
	protected:
        int type=0;
		int pastTenseOfBeingAlive=1;
		SDL_Surface* sprite=NULL;
};

class playerChar: GenericEntityTemplate{
	public:
		playerChar(int,int,int);
	private:
		int stamina=20;
		int endurance=20;
		int sneakiness=20;
};

playerChar::playerChar(int prmNo1, int prmNo2, int prmNo3): stamina(prmNo1), endurance(prmNo2), sneakiness(prmNo3){
	type=player; pastTenseOfBeingAlive=0;
	if(surf(,sprite)){
		printf("(◡‿◡✿)");
	}else{
		printf("ಠ◡ಠ");
	};
};

#endif
