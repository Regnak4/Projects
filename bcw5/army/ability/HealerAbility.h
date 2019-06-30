#ifndef HEALER_ABILITY_H
#define HEALER_ABILITY_H

#include "MagicAbility.h"

class HealerAbility : public MagicAbility {
	public:
		HealerAbility(SpellCaster* owner, spells spell);
		virtual ~HealerAbility();

		virtual void cast(Unit* target);
};

#endif //HEALER_ABILITY_H