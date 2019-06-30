#include "Werewolf.h"

Werewolf::Werewolf(const char* title, int hitPoints, int stamina, int morale,int attack,
        int counterattack, int movingPoints, int defence, int rangeDefence, 
        int resistance, int rangeDamage, int range, int ammo)
		: Unit(title, hitPoints, stamina, morale, attack, counterattack, 
        movingPoints, defence, rangeDamage, resistance, rangeDamage, range, ammo) {

    this->ability = new WerewolfAbility(this);
    this->state = new WerewolfState(title, hitPoints, stamina, morale, attack, counterattack, 
        movingPoints, defence, rangeDamage, resistance, rangeDamage, range, ammo);
    this->isUndead = true;
}

Werewolf::~Werewolf() {}