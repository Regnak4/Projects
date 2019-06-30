#include "Exorcism.h"

Exorcism::Exorcism(int actionPoints, int cost, int ammoCost) 
	: Spell(actionPoints, cost, ammoCost) {
	this->combatSpell = true;
}

Exorcism::~Exorcism() {}

void Exorcism::action(Unit* target, double SpellPower) {
	if ( target->getIsUndead() == true ) {
    	target->takeMagicDamage((int)(this->getActionPoints()) * SpellPower);
	} else {
		std::cout << "This target is clear!\n" << std::endl;
	}
}
