#ifndef TURNWOLFSTATE_H
#define TURNWOLFSTATE_H

#include <iostream>
#include "../exceptions.h"
#include "State.h"

class TurnWolfState : public State {
	public:
		TurnWolfState(const char* title, int hitPoints, int stamina, int morale,int attack, 
            int counterattack, int movingPoints, int defence, int rangeDefence, 
            int resistance, int rangeDamage, int range, int ammo);
		~TurnWolfState();

		bool getIsTurnWolf();
		bool getIsWolf();

		void takeMagicDamage(int dmg);
};

#endif //TURNWOLFSTATE_H