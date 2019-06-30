#include "Demon.h"

Demon::Demon(const char* title, int hitPoints, int stamina, int morale,int attack,
        int counterattack, int movingPoints, int defence, int rangeDefence, 
        int resistance, int rangeDamage, int range, int ammo)
		: Soldier(title, hitPoints, stamina, morale, attack, counterattack, 
        movingPoints, defence, rangeDamage, resistance, rangeDamage, range, ammo) {

    this->ability = new SoldierAbility(this);
    this->isUndead = true;
}

Demon::~Demon() {}