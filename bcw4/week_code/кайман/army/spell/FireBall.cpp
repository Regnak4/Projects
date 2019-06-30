#include "FireBall.h"

FireBall::FireBall(int actionPoints, int cost, int ammoCost) : Spell(actionPoints, cost, ammoCost) {}

FireBall::~FireBall() {}

void FireBall::action(Unit* target) {
    target->takeDamage(this->getActionPoints());
}
