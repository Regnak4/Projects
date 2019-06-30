#ifndef CURSE_H
#define CURSE_H

#include "Spell.h"

class Curse : public Spell {
    public:
        Curse(int actionPoints, int cost, int ammoCost);
        virtual ~Curse();
        virtual void action(Unit* target, double SpellPower);
};

#endif // CURSE_H