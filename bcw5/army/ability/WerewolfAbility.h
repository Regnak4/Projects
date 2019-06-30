#ifndef WEREWOLFABILITY_H
#define WEREWOLFABILITY_H

#include <cstdlib>
#include <string.h>
#include "Ability.h"
#include "../state/WerewolfState.h"
#include "../state/TurnWolfState.h"

class WerewolfAbility : public Ability {
	public:
		WerewolfAbility(Unit* owner);

		virtual ~WerewolfAbility();

		void attack(Unit* enemy);
		void counterAttack(Unit* enemy);

		void convert(Unit* enemy);
		void turnMyself();
};

#endif //WEREWOLFABILITY_H