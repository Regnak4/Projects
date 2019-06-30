#ifndef SPELL_H
#define SPELL_H

#include "../unit/Unit.h"


class Spell {
    protected:
        int actionPoints;
        int cost;
        int ammoCost;
        bool combatSpell;
    public:
        Spell(int actionPoints, int cost, int ammoCost);
        virtual ~Spell();

        int getActionPoints() const;
        int getCost() const;
        int getCombatSpell() const;
        int getAmmoCost() const;

        virtual void action(Unit* target, double SpellPower) = 0;
};

#endif // SPELL_H
