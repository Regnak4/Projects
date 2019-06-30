#include "Spell.h"

Spell::Spell(int actionPoints, int cost, int ammoCost) {
	this->actionPoints = actionPoints;
    this->cost = cost;
    this->ammoCost = ammoCost;
}

Spell::~Spell() {
	std::cout << "Spell" << std::endl;
}

int Spell::getActionPoints() const {
    return this->actionPoints;
}

int Spell::getCost() const {
    return this->cost;
}

int Spell::getCombatSpell() const {
	return this->combatSpell;
}

int Spell::getAmmoCost() const {
	return this->ammoCost;
}