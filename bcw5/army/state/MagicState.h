#ifndef MAGIC_STATE_H
#define MAGIC_STATE_H

#include <iostream>
#include "../exceptions.h"

class MagicState {
    protected:
        int mana;
        int manaLimit;
        int ammo;
        int ammoLimit;
        //bool isNecromancer;
    public:
        MagicState(int mana, int ammo);
        virtual ~MagicState();

        int getMana() const;
        int getManaLimit() const;

        void addMana(int extra);
        void spendMana(int cost);
        void spendAmmo(int ammoCost);
};

#endif // MAGIC_STATE_H
