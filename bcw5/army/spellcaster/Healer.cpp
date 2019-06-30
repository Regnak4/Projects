#include "Healer.h"

Healer::Healer(const char* title, int hitPoints, int stamina, int morale,
	int attack, int counterattack, int movingPoints, int defence, 
	int rangeDefence, int resistance, int rangeDamage, int range, int ammo, int mana)
    : SpellCaster(title, hitPoints, stamina, morale, attack, counterattack, 
    movingPoints, defence, rangeDamage, resistance, rangeDamage, range, ammo, mana) {

    this->magicAbility = new HealerAbility(this, heal);
}

Healer::~Healer() {}