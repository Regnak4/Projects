#ifndef NECROABILITY_H
#define NECROABILITY_H

#include "MagicAbility.h"

class NecroAbility : public MagicAbility {
	public:
		NecroAbility(SpellCaster* owner, spells spell);
		virtual ~NecroAbility();

		void cast(Unit* enemy);
};

#endif //NECROABILITY_H