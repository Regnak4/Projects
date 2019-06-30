#ifndef VAMPIRESTATE_H
#define VAMPIRESTATE_H

#include <iostream>
#include "../exceptions.h"
#include "State.h"

class VampireState : public State {
	public:
		VampireState(const char* title, int hitPoints, int stamina, int morale,int attack, 
            int counterattack, int movingPoints, int defence, int rangeDefence, 
            int resistance, int rangeDamage, int range, int ammo);
		virtual ~VampireState();

		bool getIsVampire();
};

#endif //VAMPIRESTATE_H