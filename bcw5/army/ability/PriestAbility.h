#ifndef PRIESTABILITY_H
#define PRIESTABILITY_H

#include "MagicAbility.h"

class PriestAbility : public MagicAbility {
	public:
		PriestAbility(SpellCaster* owner, spells spell);
		virtual ~PriestAbility();

		virtual void cast(Unit* enemy);
};

#endif // PRIESTABILITY_H