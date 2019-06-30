#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "../ability/VampireAbility.h"
#include "../state/VampireState.h"

class Vampire : public Unit {
	public:
		Vampire(const char* title, int hitPoints, int stamina, int morale,int attack,
        int counterattack, int movingPoints, int defence, int rangeDefence, 
        int resistance, int rangeDamage, int range, int ammo);

        virtual ~Vampire();
};

#endif //VAMPIRE_H