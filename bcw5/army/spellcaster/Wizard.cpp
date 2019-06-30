#include "Wizard.h"

Wizard::Wizard(const char* title, int hitPoints, int stamina, int morale,
	int attack, int counterattack, int movingPoints, int defence, 
	int rangeDefence, int resistance, int rangeDamage, int range, int ammo, int mana)
    : SpellCaster(title, hitPoints, stamina, morale, attack, counterattack, 
    movingPoints, defence, rangeDamage, resistance, rangeDamage, range, ammo, mana) {

    this->magicAbility = new WizardAbility(this, fireball);
}

Wizard::~Wizard() {
	std::cout << 20 << std::endl;
}
