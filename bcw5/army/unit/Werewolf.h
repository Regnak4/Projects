#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "../ability/WerewolfAbility.h"
#include "../state/WerewolfState.h"

class Werewolf : public Unit {
	public:
		Werewolf(const char* title, int hitPoints, int stamina, int morale,int attack,
        int counterattack, int movingPoints, int defence, int rangeDefence, 
        int resistance, int rangeDamage, int range, int ammo);
        
		~Werewolf();
};

#endif //WEREWOLF_H