#include "HealerAbility.h"

HealerAbility::HealerAbility(SpellCaster* owner, spells spell)  : MagicAbility(owner, spell) {}

HealerAbility::~HealerAbility() {}

void HealerAbility::cast(Unit* target) {
	this->owner->ensureIsAlive();
	this->owner->spendMana(this->spell->getCost());

	double SpellPower;

	if ( this->spell->getCombatSpell() ) {
		SpellPower = 0.5;
	} else {
		SpellPower = 1;
	}
	this->spell->action(target, SpellPower);
	std::cout << "\nSpell was casted!\n" << std::endl;
}