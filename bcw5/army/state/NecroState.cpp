#include "NecroState.h"

NecroState::NecroState(int mana, int ammo) : MagicState(mana, ammo) {
	this->isNecromancer = true;
}

NecroState::~NecroState() {}

bool NecroState::getIsNecromancer() {
	return this->isNecromancer;
}