#ifndef HEAL_H
#define HEAL_H

#include "Spell.h"

class Heal : public Spell {
	public:
		Heal(int actionPoints, int cost, int ammoCost);
		virtual ~Heal();
		virtual void action(Unit* target, double SpellPower);
};

#endif //HEAL_H