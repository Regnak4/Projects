#include "ChaosFlame.h"

ChaosFlame::ChaosFlame(int actionPoints, int cost, int ammoCost) 
	: Spell(actionPoints, cost, ammoCost) {
	this->combatSpell = true;
}

ChaosFlame::~ChaosFlame() {}

void ChaosFlame::action(Unit* target, double SpellPower) {
	if ( target->getIsUndead() == false ) {
    	target->takeMagicDamage((int)(this->getActionPoints()) * SpellPower);
	} else {
		target->takeMagicDamage((int)(this->getActionPoints() * SpellPower / 5));
		std::cout << "This target is tarnished!\n" << std::endl;
	}
}
