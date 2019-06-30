#include "PriestAbility.h"

PriestAbility::PriestAbility(SpellCaster* owner, spells spell) : MagicAbility(owner, spell) {}
PriestAbility::~PriestAbility() {}

void PriestAbility::cast(Unit* enemy) {
	this->owner->ensureIsAlive();
	this->owner->spendMana(this->spell->getCost());

	double SpellPower;

	if ( this->spell->getCombatSpell() ) {
		SpellPower = 0.75;
		if ( enemy->getIsUndead() ) {
			SpellPower = 2;
		}
	}
	this->spell->action(enemy, SpellPower);
	std::cout << "\nSpell was casted!\n" << std::endl;
}