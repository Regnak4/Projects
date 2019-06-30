#ifndef VAMPIREABILITY_H
#define VAMPIREABILITY_H

#include <cstdlib>
#include "Ability.h"
#include "../state/VampireState.h"

class VampireAbility : public Ability {
	public:
		VampireAbility(Unit* owner);
		virtual ~VampireAbility();
		void attack(Unit* enemy);
		void counterAttack(Unit* enemy);
		void stealHP(Unit* enemy);

		void convert(Unit* enemy);
};

#endif //VAMPIREABILITY_H