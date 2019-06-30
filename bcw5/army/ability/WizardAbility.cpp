#include "WizardAbility.h"

WizardAbility::WizardAbility(SpellCaster* owner, spells spell)  : MagicAbility(owner, spell) {}

WizardAbility::~WizardAbility() {
	std::cout << 9 << std::endl; 
}

void WizardAbility::cast(Unit* enemy) {
	this->owner->ensureIsAlive();
	this->owner->spendMana(this->spell->getCost());

	double SpellPower;

	if ( this->spell->getCombatSpell() ) {
		SpellPower = 1.5;
	} else {
		SpellPower = 0.5;
	}
	this->spell->action(enemy, SpellPower);
	std::cout << "\nSpell was casted!\n" << std::endl;
}