#include "SpellCaster.h"

SpellCaster::SpellCaster(const char* title, int hitPoints, int stamina, int morale,int attack,
            int counterattack, int movingPoints, int defence, int rangeDefence, 
            int resistance, int rangeDamage, int range, int ammo, int mana)
    : Unit(title, hitPs, stamina, morale attack,
            counterattack, movingPs, defence, rangeDefence, 
            resistance, rangeDamage, range, ammo), magicState(new MagicState(mana)) {
        this->ability = new DefaultAbility(this);
    }

SpellCaster::~SpellCaster() {
    std::cout << 10 << std::endl;
    delete(this->magicState);
    delete(this->magicAbility);
    std::cout << 10 << std::endl; 
}

int SpellCaster::getMana() const {
    return this->magicState->getMana();
}

int SpellCaster::getManaLimit() const {
    return this->magicState->getManaLimit();
}

void SpellCaster::addMana(int extra) {
    this->magicState->addMana(extra);
}

void SpellCaster::spendMana(int cost) {
    this->magicState->spendMana(cost);
}

void SpellCaster::changeSpell(Spell* newSpell) {
    this->magicAbility->changeSpell(newSpell);
}

void SpellCaster::cast(Unit* enemy) {
    this->magicAbility->cast(enemy);
}
