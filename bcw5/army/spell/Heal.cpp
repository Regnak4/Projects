#include "Heal.h"

Heal::Heal(int actionPoints, int cost, int ammoCost) 
	: Spell(actionPoints, cost, ammoCost) {
	this->combatSpell = false;
}

Heal::~Heal() {}

void Heal::action(Unit* target, double SpellPower) {
	if ( target->getIsUndead() == false ) {
		target->addHitPoints((int)(this->getActionPoints()) * SpellPower);
	} else {
		target->takeMagicDamage((int)(this->getActionPoints()) * SpellPower);
	}
}