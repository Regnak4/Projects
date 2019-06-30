#ifndef SPELL_CASTER_H
#define SPELL_CASTER_H

#include "../unit/Unit.h"
#include "../unit/Demon.h"

#include "../ability/MagicAbility.h"
#include "../state/MagicState.h"
#include "../ability/SoldierAbility.h"
#include "../spell/SpellBook.h"

class MagicAbility;
class Demon;

class SpellCaster: public Unit {
    protected:
        MagicState* magicState;
        MagicAbility* magicAbility;

    public:
        SpellCaster(const char* title, int hitPoints, int stamina, int morale,int attack,
            int counterattack, int movingPoints, int defence, int rangeDefence, 
            int resistance, int rangeDamage, int range, int ammo, int mana);
        virtual ~SpellCaster();

        int getMana() const;
        int getManaLimit() const;

        void addMana(int extra);
        void spendMana(int cost);
        void spendAmmo(int ammoCost);

        void magicBolt(Unit* enemy, int dmg);
        void changeSpell(Spell* newSpell);
        virtual void cast(Unit* enemy);
        
        virtual Demon* evokeDemon();

};

#endif // SPELL_CASTER_H
