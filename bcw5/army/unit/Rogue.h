#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"
#include "../ability/RogueAbility.h"

class Rogue : public Unit {
    public:
        Rogue(const char* title, int hitPoints, int stamina, int morale,int attack,
        int counterattack, int movingPoints, int defence, int rangeDefence, 
        int resistance, int rangeDamage, int range, int ammo);
        virtual ~Rogue();
};

#endif // ROGUE_H
