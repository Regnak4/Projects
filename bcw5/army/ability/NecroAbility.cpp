#include "NecroAbility.h"

NecroAbility::NecroAbility(SpellCaster* owner, spells spell) : MagicAbility(owner, spell) {}

NecroAbility::~NecroAbility() {}

void NecroAbility::cast(Unit* enemy) {
	this->owner->ensureIsAlive();
	this->owner->spendMana(this->spell->getCost());

	double SpellPower;

	if ( this->spell->getCombatSpell() ) {
		SpellPower = 2;
	} else {
		SpellPower = 0;
	}
	this->spell->action(enemy, SpellPower);
	std::cout << "\nSpell was casted!\n" << std::endl;
}