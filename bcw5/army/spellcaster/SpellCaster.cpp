#include "SpellCaster.h"

SpellCaster::SpellCaster(const char* title, int hitPoints, int stamina, int morale, 
    int attack, int counterattack, int movingPoints, int defence, int rangeDefence, 
    int resistance, int rangeDamage, int range, int ammo, int mana)
    : Unit(title, hitPoints, stamina, morale, attack, counterattack, movingPoints, defence, 
    rangeDamage, resistance, rangeDamage, range, ammo), magicState(new MagicState(mana, ammo)) {
    this->ability = new SoldierAbility(this);
}

SpellCaster::~SpellCaster() {
    delete(this->magicState);
    delete(this->magicAbility);
    std::cout << "10" << std::endl;
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

void SpellCaster::spendAmmo(int ammoCost) {
    this->magicState->spendAmmo(ammoCost);
}

void SpellCaster::magicBolt(Unit* enemy, int dmg) {
    this->state->ensureIsAlive();

    if ( dmg - enemy->getResistance() > enemy->getHitPoints() ) {
        enemy->getHitPoints() - enemy->getHitPoints();
        return;
    }
    enemy->getHitPoints() - (dmg - enemy->getResistance());
    this->state->getAmmo() - 1; 
}

void SpellCaster::changeSpell(Spell* newSpell) {
    this->magicAbility->changeSpell(newSpell);
}

void SpellCaster::cast(Unit* enemy) {
    this->magicAbility->cast(enemy);
}

Demon* SpellCaster::evokeDemon() {
    return this->magicAbility->evokeDemon();
}
