#include "Priest.h"

Priest::Priest(const char* name, int hitPoints, int stamina, int morale,
	int attack, int counterattack, int movingPoints, int defence, 
	int rangeDefence, int resistance, int rangeDamage, int range, int ammo, int mana)
    : SpellCaster(name, hitPoints, stamina, morale, attack, counterattack, 
    movingPoints, defence, rangeDamage, resistance, rangeDamage, range, ammo, mana) {

    this->magicAbility = new PriestAbility(this, exorcism);
}

Priest::~Priest() {}