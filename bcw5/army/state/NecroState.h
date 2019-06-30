#ifndef NECROSTATE_H
#define NECROSTATE_H

#include <iostream>
#include "../exceptions.h"
#include "State.h"
#include "MagicState.h"

class NecroState : public MagicState {
	protected:
		bool isNecromancer;
	public:
		NecroState(int mana, int ammo);
		virtual ~NecroState();

		bool getIsNecromancer();
};

#endif	//NECROSTATE_H