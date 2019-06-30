#ifndef WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"
#include "../spell/FireBall.h"
#include "../ability/WizardAbility.h"
#include "../conf_Spells.h"

class Wizard : public SpellCaster {
    public:
        Wizard(const char* title, int hitPoints, int stamina, int morale,
			    int attack, int counterattack, int movingPoints, int defence, 
			    int rangeDefence, int resistance, int rangeDamage, int range, int ammo, int mana);
        virtual ~Wizard();
};

#endif // WIZARD_H
