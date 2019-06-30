#ifndef ABILITY_H
#define ABILITY_H

#include "../unit/Unit.h"

class Unit;

class Ability {
    protected:
        Unit* owner;

    public:
        Ability(Unit* owner);
        virtual ~Ability();
        
        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);

        virtual void turnMySelf();
        virtual void convert(Unit* enemy);
};

#endif // ABILITY_H
