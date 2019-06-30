#ifndef WIZARDABILITY_H
#define WIZARDABILITY_H

#include "MagicAbility.h"

class WizardAbility : public MagicAbility {
	public:
		WizardAbility(SpellCaster* owner, spells spell);
		virtual ~WizardAbility();

		virtual void cast(Unit* enemy);
};

#endif //WIZARDABILITY_H