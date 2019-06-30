#ifndef UNIT_H
#define UNIT_H

#include <set>
#include "../state/State.h"
#include "../ability/Ability.h"
#include "../interface/Observable.h"
#include "../interface/Observer.h"
#include "../exceptions.h"

class Ability;

class Unit : public Observable, public Observer {
    protected:
        State* state;
        Ability* ability;
        bool isUndead;

    public:
        Unit(const char* title, int hitPoints, int stamina, int morale,int attack,
            int counterattack, int movingPoints, int defence, int rangeDefence, 
            int resistance, int rangeDamage, int range, int ammo);
        virtual ~Unit();

        void ensureIsAlive();
        void isOutOfStamina();
        void isOutOfMorale();

        const char* getTitle() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        int getStamina() const;
        int getStaminaLimit() const;
        int getMorale() const;
        int getMoraleLimit() const;
        int getAttack() const;
        int getCounterAttack() const;
        int getMovingPoints() const;
        int getDefence() const;
        int getRangeDefence() const;
        int getResistance() const;
        int getRangeDamage() const;
        int getRange() const;
        int getAmmo() const;

        void addHitPoints(int hp);
        void takeDamage(int dmg);
        void takeMagicDamage(int dmg);
        void takeRangeDamage(int dmg);

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
        virtual void convert(Unit* enemy);
        virtual void turnMySelf();

        bool getIsVampire();
        bool getIsWolf();
        bool getIsTurnWolf();
        bool getIsUndead();

        virtual void changeAbility(Ability* newAbility);
        virtual void changeState(State* newState);

        virtual void sendNotification();
        virtual void notify();

        void PrintDescription();
};

#endif // UNIT_H
