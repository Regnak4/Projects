#include "SoldierAbility.h"

SoldierAbility::SoldierAbility(Unit* owner): Ability(owner) {}

SoldierAbility::~SoldierAbility() {}

void SoldierAbility::attack(Unit* enemy) {
    this->Ability::attack(enemy);
}
