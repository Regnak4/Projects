#ifndef DEMON_H
#define DEMON_H

#include "Unit.h"
#include "Soldier.h"


class Demon : public Soldier {
	public:
		Demon(const char* title, int hitPoints, int stamina, int morale,int attack,
            int counterattack, int movingPoints, int defence, int rangeDefence, 
            int resistance, int rangeDamage, int range, int ammo);
		virtual ~Demon();
};

#endif // DEMON_H