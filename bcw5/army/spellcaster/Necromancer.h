#ifndef NECROMANCER_H
#define NECROMANCER_H

#include <iostream>
#include "../ability/NecroAbility.h"
#include "../state/NecroState.h"
#include "../spell/Fireball.h"
#include "../spell/ChaosFlame.h"
#include "../exceptions.h"
#include "../conf_Spells.h"

class Necromancer : public SpellCaster {
	public:
		Necromancer(const char* title, int hitPoints, int stamina, int morale,
			    int attack, int counterattack, int movingPoints, int defence, 
			    int rangeDefence, int resistance, int rangeDamage, int range, int ammo, int mana);
		~Necromancer();

		void addObserver();

		virtual void attack(Unit* enemy);
		virtual void cast(Unit* enemy);

		virtual void takeDamage(int dmg);
		virtual void takeMagicDamage(int dmg);
};

#endif //NECROMANCER_H