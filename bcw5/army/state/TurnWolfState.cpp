#include "TurnWolfState.h"

TurnWolfState::TurnWolfState (const char* title, int hitPoints, int stamina, int morale,int attack, 
    int counterattack, int movingPoints, int defence, int rangeDefence, int resistance, 
    int rangeDamage, int range, int ammo) : State(title, hitPoints, stamina, morale, attack, 
    counterattack, movingPoints, defence, rangeDefence, resistance, rangeDamage, range, ammo) {

    this->isWolf = false;
    this->isTurnWolf = true;
}

TurnWolfState::~TurnWolfState () {}

bool TurnWolfState::getIsWolf() {
	return this->isWolf;
}

bool TurnWolfState::getIsTurnWolf() {
	return this->isTurnWolf;
}

void TurnWolfState::takeMagicDamage(int dmg) {
	this->_takeMagicDamage(dmg * 3);
}