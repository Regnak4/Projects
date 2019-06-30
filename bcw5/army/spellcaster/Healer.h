#ifndef HEALER_H
#define HEALER_H

#include "SpellCaster.h"
#include "../spell/Heal.h"
#include "../spell/Curse.h"
#include "../ability/HealerAbility.h"
#include "../conf_Spells.h"

class Healer : public SpellCaster {
	public:
		Healer(const char* title, int hitPoints, int stamina, int morale,
			    int attack, int counterattack, int movingPoints, int defence, 
			    int rangeDefence, int resistance, int rangeDamage, int range, int ammo, int mana);
		virtual ~Healer();
};

#endif //HEALER_H