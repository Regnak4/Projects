#include "SpellBook.h"

SpellBook::SpellBook() {
	//this->spellsMap = new std::map<spells, Spell*>();
	spellsMap.insert(std::pair<spells, Spell*>(fireball, new FireBall(25, 12, 2)));
	spellsMap.insert(std::pair<spells, Spell*>(heal, new Heal(10, 10, 1)));
	spellsMap.insert(std::pair<spells, Spell*>(chaosFlame, new ChaosFlame(20, 20, 2)));
	spellsMap.insert(std::pair<spells, Spell*>(exorcism, new Exorcism(30, 15, 2)));
	spellsMap.insert(std::pair<spells, Spell*>(curse, new Curse(8, 10, 1)));
}

SpellBook::~SpellBook() {}

SpellBook* SpellBook::Instance() {
	if ( !magicBook ) {
		magicBook = new SpellBook();
	}

	return magicBook;
}

Spell* SpellBook::getSpell(spells spell) {
    return this->spellsMap.find(spell);
}
