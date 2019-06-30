#ifndef ARMY_CONF_H
#define ARMY_CONF_H

enum class HP {
    SOLDIER = 17,
    ROGUE = 14,
    BERSERKER = 18,
    VAMPIRE = 34,
    WEREWOLF = 24,
    DEMON = 23,
    WIZARD = 14,
    HEALER = 13,
    PRIEST = 16,
    NECROMANCER = 13,
    WARLOCK = 18
};

enum class STM {
    SOLDIER = 15,
    ROGUE = 10,
    BERSERKER = 15,
    VAMPIRE = 13,
    WEREWOLF = 20,
    DEMON = 18,
    WIZARD = 12,
    HEALER = 16,
    PRIEST = 12,
    NECROMANCER = 11,
    WARLOCK = 15
};

enum class MOR {
    SOLDIER = 12,
    ROGUE = 8,
    BERSERKER = 20,
    VAMPIRE = 11,
    WEREWOLF = 10,
    DEMON = 7,
    WIZARD = 9,
    HEALER = 14,
    PRIEST = 18,
    NECROMANCER = 10,
    WARLOCK = 8
};

enum class ATK {
    SOLDIER = 7,
    ROGUE = 8,
    BERSERKER = 9,
    VAMPIRE = 15,
    WEREWOLF = 13,
    DEMON = 12,
    WIZARD = 5,
    HEALER = 6,
    PRIEST = 4,
    NECROMANCER = 7,
    WARLOCK = 8
};

enum class CATK {
    SOLDIER = 8,
    ROGUE = 4,
    BERSERKER = 5,
    VAMPIRE = 11,
    WEREWOLF = 8,
    DEMON = 13,
    WIZARD = 4,
    HEALER = 6,
    PRIEST = 3,
    NECROMANCER = 8,
    WARLOCK = 9
};

enum class MP {
    SOLDIER = 1,
    ROGUE = 2,
    BERSERKER = 2,
    VAMPIRE = 3,
    WEREWOLF = 1,
    DEMON = 2,
    WIZARD = 2,
    HEALER = 2,
    PRIEST = 2,
    NECROMANCER = 2,
    WARLOCK = 2
};

enum class DEF {
    SOLDIER = 5,
    ROGUE = 2,
    BERSERKER = 1,
    VAMPIRE = 3,
    WEREWOLF = 0,
    DEMON = 3,
    WIZARD = 3,
    HEALER = 2,
    PRIEST = 1,
    NECROMANCER = 0,
    WARLOCK = 1
};

enum class RDEF {
    SOLDIER = 7,
    ROGUE = 0,
    BERSERKER = 2,
    VAMPIRE = 1,
    WEREWOLF = 0,
    DEMON = 1,
    WIZARD = 0,
    HEALER = 0,
    PRIEST = 0,
    NECROMANCER = 1,
    WARLOCK = 0
};

enum class RES {
    SOLDIER = 2,
    ROGUE = 1,
    BERSERKER = 1,
    VAMPIRE = 3,
    WEREWOLF = 0,
    DEMON = 3,
    WIZARD = 7,
    HEALER = 4,
    PRIEST = 8,
    NECROMANCER = 5,
    WARLOCK = 3
};

enum class RDM {
    SOLDIER = 0,
    ROGUE = 5,
    BERSERKER = 5,
    VAMPIRE = 0,
    WEREWOLF = 0,
    DEMON = 0,
    WIZARD = 13,
    HEALER = 0,
    PRIEST = 11,
    NECROMANCER = 14,
    WARLOCK = 18
};

enum class RNG {
    SOLDIER = 1,
    ROGUE = 3,
    BERSERKER = 3,
    VAMPIRE = 1,
    WEREWOLF = 1,
    DEMON = 1,
    WIZARD = 5,
    HEALER = 2,
    PRIEST = 6,
    NECROMANCER = 4,
    WARLOCK = 5
};

enum class AMMO {
    SOLDIER = 0,
    ROGUE = 3,
    BERSERKER = 1,
    VAMPIRE = 0,
    WEREWOLF = 0,
    DEMON = 0,
    WIZARD = 8,
    HEALER = 6,
    PRIEST = 10,
    NECROMANCER = 8,
    WARLOCK = 6
};

enum class MANA {
    WIZARD = 80,
    HEALER = 60,
    PRIEST = 100,
    NECROMANCER = 80,
    WARLOCK = 70
};

enum class UnitEnum {
    SOLDIER = 1,
    ROGUE,
    BERSERKER,
    VAMPIRE,
    WEREWOLF,
    DEMON,
    WIZARD,
    HEALER,
    PRIEST,
    NECROMANCER,
    WARLOCK
};

#endif //ARMY_CONF_H
