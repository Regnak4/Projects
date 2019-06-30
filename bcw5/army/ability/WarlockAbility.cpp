#include "WarlockAbility.h"

WarlockAbility::WarlockAbility(SpellCaster* owner, spells spell) : MagicAbility(owner, spell) {}

WarlockAbility::~WarlockAbility() {}

void WarlockAbility::cast(Unit* enemy) {
	this->owner->ensureIsAlive();
	this->owner->spendMana(this->spell->getCost());

	double SpellPower;

	if ( this->spell->getCombatSpell() ) {
		SpellPower = 2;
	}	else {
		SpellPower = 0;
	}
	this->spell->action(enemy, SpellPower);
	std::cout << "\nSpell was casted!\n" << std::endl;
}

Demon* WarlockAbility::evokeDemon() {
	return new Demon("Demon", 23, 18, 7, 12, 13, 2, 3, 1, 3, 0, 0, 0);
}
