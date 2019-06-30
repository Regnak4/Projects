#ifndef SOLDIER_ABILITY_H
#define SOLDIER_ABILITY_H

#include "Ability.h"

class SoldierAbility : public Ability {
    public:
        SoldierAbility(Unit* owner);
        virtual ~SoldierAbility();
        
        virtual void attack(Unit* enemy);
};

#endif // SOLDIER_ABILITY_H
