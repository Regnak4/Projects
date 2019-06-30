#include "Curse.h"

Curse::Curse(int actionPoints, int cost, int ammoCost) 
	: Spell(actionPoints, cost, ammoCost) {
	this->combatSpell = false;
}

Curse::~Curse() {}

void Curse::action(Unit* target, double SpellPower) {
	if ( this->getActionPoints() * SpellPower - target->getResistance() <= 0 ) {	
		std::cout << "Target is resistant!" << std::endl;
	} else {
		target->getHitPointsLimit() - 1;
	    target->getStaminaLimit() - 1;
	    target->getMoraleLimit() - 1;
	    target->getAttack() - 1;
	    target->getCounterAttack() - 1;
	    target->getDefence() - 1;
	    target->getRangeDefence() - 1;
	}
}