#ifndef WARLOCKABILITY_H
#define WARLOCKABILITY_H

#include "MagicAbility.h"
#include "../unit/Demon.h"
#include "../conf_Units.h"

class WarlockAbility : public MagicAbility {
	public:
		WarlockAbility(SpellCaster* owner, spells spell);
		virtual ~WarlockAbility();

		virtual void cast(Unit* enemy);

		Demon* evokeDemon();
};

#endif //WARLOCKABILITY_H