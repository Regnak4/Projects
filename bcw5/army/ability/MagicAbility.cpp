#include "MagicAbility.h"

MagicAbility::MagicAbility(SpellCaster* owner, spells spell)
    : owner(owner) {
    SpellBook* magicBook;
    // magicBook->Instance();
    //this->spell = magicBook->getSpell(spell);
}

MagicAbility::~MagicAbility() {
    delete(this->spell);
    std::cout << "Spell" << std::endl;
}

void MagicAbility::magicBolt(Unit* enemy, int dmg) {
    this->owner->ensureIsAlive();

    if ( dmg - enemy->getResistance() > enemy->getHitPoints() ) {
        enemy->getHitPoints() - enemy->getHitPoints();
        return;
    }
    enemy->getHitPoints() - (dmg - enemy->getResistance());
    this->owner->getAmmo() - 1;	
}

void MagicAbility::changeSpell(Spell* newSpell) {
    delete(this->spell);
    this->spell = newSpell;
}

void MagicAbility::cast(Unit* target) {
    double SpellPower;
    this->owner->ensureIsAlive();
    this->owner->spendMana(this->spell->getCost());
    this->owner->spendAmmo(this->spell->getAmmoCost());
    this->spell->action(target, SpellPower);
    std::cout << "\nSpell was casted!\n" << std::endl;
}

Demon* MagicAbility::evokeDemon() {
    return NULL;
}