#include "FireBall.h"

FireBall::FireBall(int actionPoints, int cost, int ammoCost) 
	: Spell(actionPoints, cost, ammoCost) {
	this->combatSpell = true;
}

FireBall::~FireBall() {}

void FireBall::action(Unit* target, double SpellPower) {
    if ( target->getIsUndead() == false ) {
    	target->takeMagicDamage((int)(this->getActionPoints()) * SpellPower);
	} else {
		target->takeMagicDamage((int)(this->getActionPoints() * SpellPower * 2));
	}
}
