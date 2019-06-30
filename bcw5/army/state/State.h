#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "../exceptions.h"

class State {
    protected:
        const char* title;
        int hitPoints;
        int hitPointsLimit;
        int stamina;
        int staminaLimit;
        int morale;
        int moraleLimit;
        int attack;
        int counterattack;
        int movingPoints;
        int movingPointsLimit;
        int defence;
        int rangeDefence;
        int resistance;
        int rangeDamage;
        int range;
        int ammo;
        //int xp;

        bool isVampire;
        bool isWolf;
        bool isTurnWolf;
        bool isNecromancer;

        void _takeDamage(int dmg);
        void _takeMagicDamage(int dmg);
        void _takeRangeDamage(int dmg);
    public:
        State(const char* title, int hitPoints, int stamina, int morale,int attack, 
            int counterattack, int movingPoints, int defence, int rangeDefence, 
            int resistance, int rangeDamage, int range, int ammo);
        virtual ~State();

        void ensureIsAlive();
        void isOutOfStamina();
        void isOutOfMorale();

        const char* getTitle() const;
        const int getHitPoints() const;
        const int getHitPointsLimit() const;
        const int getStamina() const;
        const int getStaminaLimit() const;
        const int getMorale() const;
        const int getMoraleLimit() const;
        const int getAttack() const;
        const int getCounterAttack() const;
        const int getMovingPoints() const;
        const int getDefence() const;
        const int getRangeDefence() const;
        const int getResistance() const;
        const int getRangeDamage() const;
        const int getRange() const;
        const int getAmmo() const;

        void addHitPoints(int hp);
        void takeDamage(int dmg);
        void takeMagicDamage(int dmg);
        void takeRangeDamage(int dmg);

        bool getIsVampire();
        bool getIsWolf();
        bool getIsTurnWolf();
        bool getIsNecromancer();
};

#endif // STATE_H
