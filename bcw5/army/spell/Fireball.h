#ifndef FIREBALL_H
#define FIREBALL_H

#include "Spell.h"

class FireBall : public Spell {
    public:
        FireBall(int actionPoints, int cost, int ammoCost);
        virtual ~FireBall();
        virtual void action(Unit* target, double SpellPower);
};

#endif // FIREBALL_H
