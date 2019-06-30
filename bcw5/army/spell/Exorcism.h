#ifndef EXORCISM_H
#define EXORCISM_H

#include "Spell.h"

class Exorcism : public Spell {
    public:
        Exorcism(int actionPoints, int cost, int ammoCost);
        virtual ~Exorcism();
        virtual void action(Unit* target, double SpellPower);
};

#endif // EXORCISM_H