#ifndef WEREWOLFSTATE_H
#define WEREWOLFSTATE_H

#include <iostream>
#include "../exceptions.h"
#include "State.h"

class WerewolfState : public State {
	public:
		WerewolfState(const char* title, int hitPoints, int stamina, int morale,int attack, 
            int counterattack, int movingPoints, int defence, int rangeDefence, 
            int resistance, int rangeDamage, int range, int ammo);
		virtual ~WerewolfState();

		bool getIsWolf();
};

#endif //WEREWOLFSTATE_H