#ifndef WARLOCK_H
#define WARLOCK_H

#include <iostream>
#include "SpellCaster.h"
#include "../spell/Fireball.h"
#include "../spell/ChaosFlame.h"
#include "../ability/WarlockAbility.h"
#include "../conf_Spells.h"

class Warlock : public SpellCaster {
	public:
		Warlock(const char* title, int hitPoints, int stamina, int morale,
			    int attack, int counterattack, int movingPoints, int defence, 
			    int rangeDefence, int resistance, int rangeDamage, int range, int ammo, int mana);
		~Warlock();
};

#endif //WARLOCK_H