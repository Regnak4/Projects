#ifndef BERSERKERSTATE_H
#define BERSERKERSTATE_H

#include <iostream>
#include "../exceptions.h"
#include "State.h"

class BerserkerState : public State {
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

        void _takeDamage(int dmg);
        void _takeMagicDamage(int dmg);
        void _takeRangeDamage(int dmg);
    public:
    	BerserkerState(const char* title, int hitPoints, int stamina, int morale, int attack, 
            int counterattack, int movingPoints, int defence, int rangeDefence, int resistance, 
            int rangeDamage, int range, int ammo);
    	virtual ~BerserkerState();

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
};

#endif //BERSERKERSTATE_H