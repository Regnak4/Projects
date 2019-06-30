#include "Ability.h"

Ability::Ability(Unit* owner): owner(owner) {}
Ability::~Ability() {}

void Ability::attack(Unit* enemy) {
    this->owner->ensureIsAlive();
    this->owner->isOutOfStamina();
    this->owner->isOutOfMorale();
    
    enemy->takeDamage(this->owner->getAttack());
    enemy->counterAttack(this->owner);
    std::cout << "\n" <<this->owner->getTitle() << " Attacks " << enemy->getTitle() << "\n" << std::endl;
}

void Ability::counterAttack(Unit* enemy) {
    this->owner->ensureIsAlive();
    this->owner->isOutOfStamina();
    this->owner->isOutOfMorale();
    enemy->takeDamage(this->owner->getCounterAttack());
}

void Ability::convert(Unit* enemy) {}

void Ability::turnMySelf() {}