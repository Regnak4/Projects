#ifndef CHAOS_H
#define CHAOS_H

#include "Spell.h"

class ChaosFlame : public Spell {
    public:
        ChaosFlame(int actionPoints, int cost, int ammoCost);
        virtual ~ChaosFlame();
        virtual void action(Unit* target, double SpellPower);
};

#endif // CHAOS_H