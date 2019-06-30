#include "WerewolfState.h"

WerewolfState::WerewolfState (const char* title, int hitPoints, int stamina, int morale,int attack, 
    int counterattack, int movingPoints, int defence, int rangeDefence, int resistance, 
    int rangeDamage, int range, int ammo) : State(title, hitPoints, stamina, morale, attack, 
    counterattack, movingPoints, defence, rangeDefence, resistance, rangeDamage, range, ammo) {

    this->isWolf = true;
}

WerewolfState::~WerewolfState() {}

bool WerewolfState::getIsWolf() {
	return this->isWolf;
}