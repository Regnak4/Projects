#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"
#include "../ability/SoldierAbility.h"
#include "../state/BerserkerState.h"

class Berserker : public Unit {
	public:
		Berserker(const char* title, int hitPoints, int stamina, int morale,int attack,
        int counterattack, int movingPoints, int defence, int rangeDefence, 
        int resistance, int rangeDamage, int range, int ammo);
		virtual ~Berserker();
};

#endif //BERSERKER_H