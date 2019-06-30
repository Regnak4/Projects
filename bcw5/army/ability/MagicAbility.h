#ifndef MAGIC_ABILITY_H
#define MAGIC_ABILITY_H

#include "../spell/Spell.h"
#include "../spellcaster/SpellCaster.h"
#include "../spell/SpellBook.h"
#include "../Interface/Observer.h"
#include "../Interface/Observable.h"
#include "../unit/Demon.h"

class SpellCaster;
class Demon;

class MagicAbility {
    protected:
        SpellCaster* owner;
        Spell* spell;
    public:
        MagicAbility(SpellCaster* owner, spells spell);
        virtual ~MagicAbility();
        
        void magicBolt(Unit* enemy, int dmg);

        void changeSpell(Spell* newSpell);
        virtual void cast(Unit* target);

        virtual Demon* evokeDemon();
};

#endif // MAGIC_ABILITY_H