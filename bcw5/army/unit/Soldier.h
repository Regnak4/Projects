#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"
#include "../ability/SoldierAbility.h"

class Soldier : public Unit {
    public:
        Soldier(const char* title, int hitPoints, int stamina, int morale,int attack,
            int counterattack, int movingPoints, int defence, int rangeDefence, 
            int resistance, int rangeDamage, int range, int ammo);
        virtual ~Soldier();
};

#endif // SOLDIER_H