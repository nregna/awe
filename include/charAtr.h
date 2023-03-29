#ifndef charAtr_H_INCLUDED
#define charAtr_H_INCLUDED

#include"iostream"

enum eric{
    player, idfk, idfc
};

class GenericEntityTemplate{
	public:
	protected:
        int type;
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
	printf("(◡‿◡✿)");
	type=player;
};

#endif
