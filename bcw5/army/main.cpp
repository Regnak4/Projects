#include <iostream>
#include "library.h"


int main() {

    //Soldier* soldier = new Soldier("Soldier", 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100);
    // Rogue* rogue = new Rogue("Rogue", 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100);
    Wizard* zed = new Wizard("Zed", 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100);
    // Berserker* bers = new Berserker("Bers", 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100);
    // Vampire* vampire = new Vampire("Vampire", 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100);
    // Werewolf* werewolf = new Werewolf("Werewolf", 100, 100, 100, 100,  100, 100, 100, 100, 100, 100, 100, 100);
    // Healer* healer = new Healer("Healer", 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100);
    // Priest* priest = new Priest("Priest", 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100);
    // Warlock* warlock = new Warlock("Warlock", 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100);
    // Necromancer* necromancer = new Necromancer("Necromancer", 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100);

    //soldier->PrintDescription();
    // rogue->PrintDescription();
    zed->PrintDescription();
    // bers->PrintDescription();
    // vampire->PrintDescription();
    // werewolf->PrintDescription();
    // healer->PrintDescription();
    // priest->PrintDescription();
    // warlock->PrintDescription();
    // necromancer->PrintDescription();

    std::cout << "====================|!!!Action!!!|======================" << std::endl;

    // //priest->changeSpell(new Heal(8, 8, 8));
    // //priest->cast(rogue);
    // //priest->cast(necromancer);
    // //priest->changeSpell(new Exorcism(10, 10, 10));
    // //priest->cast(vampire);
    // Demon* demon1 = warlock->evokeDemon();
    // Demon* demon2 = warlock->evokeDemon();
    // demon2->attack(vampire);
    // demon1->attack(vampire);
    // //warlock->attack(soldier);
    // warlock->changeSpell(new ChaosFlame(20, 20, 20));
    // warlock->cast(soldier);
    // //demon1->attack(soldier);
    // //priest->cast(soldier);
    // necromancer->attack(soldier);

    std::cout << "====================|Action ends.|======================" << std::endl;

    //soldier->PrintDescription();
    // demon1->PrintDescription();
    // rogue->PrintDescription();
    zed->PrintDescription();
    // bers->PrintDescription();
    // vampire->PrintDescription();
    // werewolf->PrintDescription();
    // healer->PrintDescription();
    // priest->PrintDescription();
    // warlock->PrintDescription();
    // necromancer->PrintDescription();

    //delete soldier;
    // delete rogue;
    delete zed;
    // delete bers;
    // delete vampire;
    // delete werewolf;
    // delete healer;
    // delete warlock;
    // delete necromancer;

    return 0;
}