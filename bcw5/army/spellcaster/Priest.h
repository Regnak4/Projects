#ifndef PRIEST_H
#define PRIEST_H

#include "SpellCaster.h"
#include "../spell/Exorcism.h"
#include "../spell/Heal.h"
#include "../ability/PriestAbility.h"
#include "../conf_Spells.h"

class Priest : public SpellCaster {
	public:
		Priest(const char* title, int hitPoints, int stamina, int morale,
			    int attack, int counterattack, int movingPoints, int defence, 
			    int rangeDefence, int resistance, int rangeDamage, int range, int ammo, int mana);
		virtual ~Priest();
};

#endif //PRIEST_H