#include "Berserker.h"

Berserker::Berserker(const char* title, int hitPoints, int stamina, int morale,int attack,
        int counterattack, int movingPoints, int defence, int rangeDefence, 
        int resistance, int rangeDamage, int range, int ammo)
		: Unit(title, hitPoints, stamina, morale, attack, counterattack, 
        movingPoints, defence, rangeDamage, resistance, rangeDamage, range, ammo) {

	this->ability = new SoldierAbility(this);
	this->state = new BerserkerState(title, hitPoints, stamina, morale, attack, counterattack, 
    	movingPoints, defence, rangeDamage, resistance, rangeDamage, range, ammo);
}

Berserker::~Berserker() {}