#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include <iostream>
#include "Spell.h"
#include <map>
#include "Fireball.h"
#include "Heal.h"
#include "Curse.h"
#include "Exorcism.h"
#include "ChaosFlame.h"
#include "../conf_Spells.h"

typedef enum {
	fireball,
	heal,
	chaosFlame,
	exorcism,
	curse
} spells;

class SpellBook {
	protected:
		std::map<spells, Spell*> spellsMap;
		SpellBook* magicBook;

		SpellBook();
		~SpellBook();
	public:
		SpellBook* Instance();
		Spell* getSpell(spells spell);
};

#endif	//SPELLBOOK_H