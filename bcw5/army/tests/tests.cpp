#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../library.h"
// #include <string.h>

TEST_CASE( "Test Soldier class" ) {
    Soldier* soldier = new Soldier("Soldier", 150, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

    REQUIRE( soldier->getTitle() == "Soldier" );
    REQUIRE( soldier->getHitPoints() == 150 );
    REQUIRE( soldier->getHitPointsLimit() == 150 );
    REQUIRE( soldier->getAttack() == 20 );

    // SECTION( "Soldier::takeDamage tests" ) {
    //     int damage = 10;
    //     int iterations = soldier->getHitPoints() / damage;

    //     for ( int i = 1; i <= iterations; i++ ) {
    //         soldier->takeDamage(damage);
    //         int expectedHP = soldier->getHitPointsLimit() - damage * i;
    //         REQUIRE( soldier->getHitPoints() == expectedHP );
    //     }

    //     try {
    //         soldier->takeDamage(damage);
    //     } catch ( OutOfHitPointsException obj ) {
    //         REQUIRE( soldier->getHitPoints() == 0 );
    //     }

    //     try {
    //         soldier->addHitPoints(damage);
    //     } catch ( OutOfHitPointsException obj ) {
    //         REQUIRE( soldier->getHitPoints() == 0 );
    //     }
    // }

    // SECTION( "Soldier::takeMagicDamage tests" ) {
    //     int damage = 10;
    //     int iterations = soldier->getHitPoints() / damage;

    //     for ( int i = 1; i <= iterations; i++ ) {
    //         soldier->takeMagicDamage(damage);
    //         int expectedHP = soldier->getHitPointsLimit() - damage * i;
    //         REQUIRE( soldier->getHitPoints() == expectedHP );
    //     }

    //     try {
    //         soldier->takeMagicDamage(damage);
    //     } catch ( OutOfHitPointsException obj ) {
    //         REQUIRE( soldier->getHitPoints() == 0 );
    //     }

    //     try {
    //         soldier->addHitPoints(damage);
    //     } catch ( OutOfHitPointsException obj ) {
    //         REQUIRE( soldier->getHitPoints() == 0 );
    //     }
    // }
    // SECTION( "Soldier::addHitPoints tests" ) {
    //     soldier->takeDamage(50);
    //     REQUIRE( soldier->getHitPoints() == 100 );

    //     soldier->addHitPoints(40);
    //     REQUIRE( soldier->getHitPoints() == 140 );

    //     soldier->addHitPoints(10);
    //     REQUIRE( soldier->getHitPoints() == 150 );

    //     soldier->addHitPoints(10);
    //     REQUIRE( soldier->getHitPoints() == 150 );
    // }
    // SECTION( "Soldier::attack tests" ) {
    //     Soldier* enemy = new Soldier("Enemy", 150, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

    //     REQUIRE( enemy->getTitle() == "Enemy" );
    //     REQUIRE( enemy->getHitPoints() == 150 );
    //     REQUIRE( enemy->getHitPointsLimit() == 150 );
    //     REQUIRE( enemy->getDamage() == 20 );

    //     soldier->attack(enemy);

    //     REQUIRE( enemy->getHitPoints() == 130 );
    //     REQUIRE( soldier->getHitPoints() == 140 );

    //     soldier->attack(enemy);
    //     soldier->attack(enemy);
    //     soldier->attack(enemy);

    //     REQUIRE( enemy->getHitPoints() == 70 );
    //     REQUIRE( soldier->getHitPoints() == 110 );

    //     enemy->takeDamage(60);

    //     REQUIRE( enemy->getHitPoints() == 10 );

    //     try {
    //         soldier->attack(enemy);
    //     } catch ( OutOfHitPointsException obj ) {
    //         REQUIRE( enemy->getHitPoints() == 0 );
    //         REQUIRE( soldier->getHitPoints() == 110 );
    //     }

    //     try {
    //         enemy->attack(soldier);
    //     } catch ( OutOfHitPointsException obj ) {
    //         REQUIRE( enemy->getHitPoints() == 0 );
    //         REQUIRE( soldier->getHitPoints() == 110 );
    //     }

    // }

}

// TEST_CASE( "Tests for State class" ) {
//     State* state = new State("State", 150, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//     REQUIRE( state->getTitle() == "State" );
//     REQUIRE( state->getHitPoints() == 150 );
//     REQUIRE( state->getHitPointsLimit() == 150 );
//     REQUIRE( state->getDamage() == 20 );

//     SECTION( "State::takeDamage tests" ) {
//         int damage = 10;
//         int iterations = state->getHitPoints() / damage;

//         for ( int i = 1; i <= iterations; i++ ) {
//             state->takeDamage(damage);
//             int expectedHP = state->getHitPointsLimit() - damage * i;
//             REQUIRE( state->getHitPoints() == expectedHP );
//         }

//         try {
//             state->takeDamage(damage);
//         } catch ( OutOfHitPointsException ) {
//             REQUIRE( state->getHitPoints() == 0 );
//         }

//         try {
//             state->addHitPoints(damage);
//         } catch ( OutOfHitPointsException ) {
//             REQUIRE( state->getHitPoints() == 0 );
//         }

//     }
//     SECTION( "State::takeMagicDamage tests" ) {
//         int damage = 10;
//         int iterations = state->getHitPoints() / damage;

//         for ( int i = 1; i <= iterations; i++ ) {
//             state->takeMagicDamage(damage);
//             int expectedHP = state->getHitPointsLimit() - damage * i;
//             REQUIRE( state->getHitPoints() == expectedHP );
//         }

//         try {
//             state->takeMagicDamage(damage);
//         } catch ( OutOfHitPointsException ) {
//             REQUIRE( state->getHitPoints() == 0 );
//         }

//         try {
//             state->addHitPoints(damage);
//         } catch ( OutOfHitPointsException ) {
//             REQUIRE( state->getHitPoints() == 0 );
//         }

//     }

//     SECTION( "State::addHitPoints tests" ) {
//         state->takeDamage(50);
//         REQUIRE( state->getHitPoints() == 100 );

//         state->addHitPoints(40);
//         REQUIRE( state->getHitPoints() == 140);

//         state->addHitPoints(10);
//         REQUIRE( state->getHitPoints() == 150);

//         state->addHitPoints(10);
//         REQUIRE( state->getHitPoints() == 150);
//     }
// }

// TEST_CASE( "Test Rogue class" ) {
//     Rogue* rogue = new Rogue("Rogue", 100, 15, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//     REQUIRE( rogue->getHitPoints() == 100 );
//     REQUIRE( rogue->getHitPointsLimit() == 100 );
//     REQUIRE( rogue->getTitle() == "Rogue" );
//     REQUIRE( rogue->getDamage() == 15 );


//     SECTION( "Rogue::takeDamage tests" ) {
//         int damage = 10;
//         int iterations = rogue->getHitPoints() / damage;

//         for ( int i = 1; i < iterations; i++ ) {
//             rogue->takeDamage(damage);
//             int expectedHP = rogue->getHitPointsLimit() - damage * i;
//             REQUIRE( rogue->getHitPoints() == expectedHP );
//         }

//         try {
//             rogue->takeDamage(damage);
//         } catch ( OutOfHitPointsException obj ) {
//             REQUIRE( rogue->getHitPoints() == 0 );
//         }
//     }

//     SECTION( "Rogue::takeMagicDamage tests" ) {
//         int damage = 10;
//         int iterations = rogue->getHitPoints() / damage;

//         for ( int i = 1; i < iterations; i++ ) {
//             rogue->takeMagicDamage(damage);
//             int expectedHP = rogue->getHitPointsLimit() - damage * i;
//             REQUIRE( rogue->getHitPoints() == expectedHP );
//         }

//         try {
//             rogue->takeMagicDamage(damage);
//         } catch ( OutOfHitPointsException obj ) {
//             REQUIRE( rogue->getHitPoints() == 0 );
//         }
//     }

//     SECTION( "Rogue::addHitpoits tests" ) {
//         rogue->takeDamage(50);
//         REQUIRE( rogue->getHitPoints() == 50 );

//         rogue->addHitPoints(40);
//         REQUIRE( rogue->getHitPoints() == 90 );

//         rogue->addHitPoints(10);
//         REQUIRE( rogue->getHitPoints() == 100 );

//         rogue->addHitPoints(10);
//         REQUIRE( rogue->getHitPoints() == 100 );

//         rogue->takeDamage(100);
//         REQUIRE( rogue->getHitPoints() == 0 );

//         try {
//             rogue->addHitPoints(40);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE(rogue->getHitPoints() == 0);
//         }
//     }

//     SECTION( "Soldier::attack tests" ) {
//         Soldier* enemy = new Soldier("Enemy", 150, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//         REQUIRE( enemy->getHitPoints() == 150 );
//         REQUIRE( enemy->getHitPointsLimit() == 150 );
//         REQUIRE( enemy->getTitle() == "Enemy" );
//         REQUIRE( enemy->getDamage() == 20 );

//         rogue->attack(enemy);

//         REQUIRE( rogue->getHitPoints() == 100 );
//         REQUIRE( enemy->getHitPoints() == 135 );

//         rogue->attack(enemy);
//         rogue->attack(enemy);
//         rogue->attack(enemy);

//         REQUIRE( rogue->getHitPoints() == 100 );
//         REQUIRE( enemy->getHitPoints() == 90 );

//         enemy->takeDamage(90);
//         REQUIRE( enemy->getHitPoints() == 0 );

//         try {
//             rogue->attack(enemy);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE( rogue->getHitPoints() == 100 );
//             REQUIRE( enemy->getHitPoints() == 0 );
//         }

//         try {
//             enemy->attack(rogue);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE( rogue->getHitPoints() == 100 );
//             REQUIRE( enemy->getHitPoints() == 0 );
//         }

//     }
// }

// TEST_CASE( "Test Vampire class" ) {
//     Vampire* vampire = new Vampire("Vampire", 150, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//     REQUIRE( vampire->getHitPoints() == 150 );
//     REQUIRE( vampire->getHitPointsLimit() == 150 );
//     REQUIRE( vampire->getTitle() == "Vampire" );
//     REQUIRE( vampire->getDamage() == 20 );
//     REQUIRE( vampire->getIsVampire() == true );
//     REQUIRE( vampire->getIsUnDead() == true );


//     SECTION( "Vampire::takeDamage tests" ) {
//         int damage = 10;
//         int iterations = vampire->getHitPoints() / damage;

//         for ( int i = 1; i <= iterations; i++ ) {
//             vampire->takeDamage(damage);
//             int expectedHP = vampire->getHitPointsLimit() - damage * i;
//             REQUIRE( vampire->getHitPoints() == expectedHP );
//         }

//         try {
//             vampire->takeDamage(damage);
//         } catch ( OutOfHitPointsException obj ) {
//             REQUIRE( vampire->getHitPoints() == 0 );
//         }
//     }

//     SECTION( "Vampire::takeMagicDamage tests" ) {
//         int damage = 10;
//         int iterations = vampire->getHitPoints() / damage;

//         for ( int i = 1; i <= iterations; i++ ) {
//             vampire->takeMagicDamage(damage);
//             int expectedHP = vampire->getHitPointsLimit() - damage * i;
//             REQUIRE( vampire->getHitPoints() == expectedHP );
//         }

//         try {
//             vampire->takeMagicDamage(damage);
//         } catch ( OutOfHitPointsException obj ) {
//             REQUIRE( vampire->getHitPoints() == 0 );
//         }
//     }

//     SECTION( "Vampire::addHitpoits tests" ) {
//         vampire->takeDamage(50);
//         REQUIRE( vampire->getHitPoints() == vampire->getHitPointsLimit() - 50 );

//         vampire->addHitPoints(40);
//         REQUIRE( vampire->getHitPoints() == vampire->getHitPointsLimit() - 10 );

//         vampire->addHitPoints(10);
//         REQUIRE( vampire->getHitPoints() == vampire->getHitPointsLimit() );

//         vampire->addHitPoints(10);
//         REQUIRE( vampire->getHitPoints() == vampire->getHitPointsLimit() );

//         vampire->takeDamage(vampire->getHitPointsLimit());
//         REQUIRE( vampire->getHitPoints() == 0 );

//         try {
//             vampire->addHitPoints(40);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE(vampire->getHitPoints() == 0);
//         }
//     }

//     SECTION( "Vampire::attack tests" ) {
//         Soldier* enemy = new Soldier("Enemy", 150, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//         REQUIRE( enemy->getHitPoints() == 150 );
//         REQUIRE( enemy->getHitPointsLimit() == 150 );
//         REQUIRE( enemy->getTitle() == "Enemy" );
//         REQUIRE( enemy->getDamage() == 20 );

//         vampire->attack(enemy);

//         REQUIRE( vampire->getHitPoints() == 150 );
//         REQUIRE( enemy->getHitPoints() == 128 );

//         vampire->attack(enemy);
//         vampire->attack(enemy);
//         vampire->attack(enemy);

//         REQUIRE( enemy->getHitPoints() == 62 );

//         enemy->takeDamage(62);
//         REQUIRE( enemy->getHitPoints() == 0 );

//         try {
//             vampire->attack(enemy);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE( vampire->getHitPoints() == 144 );
//             REQUIRE( enemy->getHitPoints() == 0 );
//         }

//         try {
//             enemy->attack(vampire);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE( vampire->getHitPoints() == 144 );
//             REQUIRE( enemy->getHitPoints() == 0 );
//         }

//     }

//     SECTION( "Vampire::turnEnemy test" ) {
//         Soldier* enemy = new Soldier("Enemy", 150, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);
//         Soldier* enemy2 = new Soldier("Enemy2", 150, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//         REQUIRE( enemy->getHitPoints() == 150 );
//         REQUIRE( enemy->getHitPointsLimit() == 150 );
//         REQUIRE( enemy->getTitle() == "Enemy" );
//         REQUIRE( enemy->getDamage() == 20 );
//         REQUIRE( enemy->getIsVampire() == false );

//         vampire->convert(enemy);
//         REQUIRE( enemy->getHitPoints() == 150 );
//         REQUIRE( enemy->getHitPointsLimit() == 150 );
//         REQUIRE( enemy->getTitle() == "Vampire" );
//         REQUIRE( enemy->getDamage() == 20 );
//         REQUIRE( enemy->getIsVampire() == true );

//         enemy->convert(enemy2);
//         REQUIRE( enemy->getHitPoints() == 150 );
//         REQUIRE( enemy->getHitPointsLimit() == 150 );
//         REQUIRE( enemy->getTitle() == "Vampire" );
//         REQUIRE( enemy->getDamage() == 20 );
//         REQUIRE( enemy->getIsVampire() == true );
//     }
// }

// TEST_CASE( "Test Werewolf class" ) {
//     Werewolf* werewolf = new Werewolf("Werewolf", 100, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//     REQUIRE( werewolf->getHitPoints() == 100 );
//     REQUIRE( werewolf->getHitPointsLimit() == 100 );
//     REQUIRE( werewolf->getTitle() == "Werewolf" );
//     REQUIRE( werewolf->getDamage() == 20 );
//     REQUIRE( werewolf->getIsUnDead() == false );
//     REQUIRE( werewolf->getIsWolf() == true );


//     SECTION( "Werewolf::takeDamage tests" ) {
//         int damage = 10;
//         int iterations = werewolf->getHitPoints() / damage;

//         for ( int i = 1; i <= iterations; i++ ) {
//             werewolf->takeDamage(damage);
//             int expectedHP = werewolf->getHitPointsLimit() - damage * i;
//             REQUIRE( werewolf->getHitPoints() == expectedHP );
//         }

//         REQUIRE( werewolf->getHitPoints() == 0 );

//         try {
//             werewolf->takeDamage(damage);
//         } catch ( OutOfHitPointsException obj ) {
//             REQUIRE( werewolf->getHitPoints() == 0 );
//         }
//     }

//     SECTION( "Werewolf::takeDamage as wolf tests" ) {
//         werewolf->turnMySelf();

//         REQUIRE( werewolf->getHitPoints() == 200 );
//         REQUIRE( werewolf->getHitPointsLimit() == 200 );
//         REQUIRE( werewolf->getTitle() == "AngryWolf" );
//         REQUIRE( werewolf->getDamage() == 40 );
//         REQUIRE( werewolf->getIsUnDead() == false );
//         REQUIRE( werewolf->getIsTurnWolf() == true );

//         int damage = 10;
//         int iterations = werewolf->getHitPoints() / damage;

//         for ( int i = 1; i <= iterations; i++ ) {
//             werewolf->takeDamage(damage);
//             int expectedHP = werewolf->getHitPointsLimit() - damage * i;
//             REQUIRE( werewolf->getHitPoints() == expectedHP );
//         }

//         REQUIRE( werewolf->getHitPoints() == 0 );

//         try {
//             werewolf->takeDamage(damage);
//         } catch ( OutOfHitPointsException obj ) {
//             REQUIRE( werewolf->getHitPoints() == 0 );
//         }
//     }

//     SECTION( "Werewolf::takeMagicDamage tests" ) {
//         int damage = 10;
//         int iterations = werewolf->getHitPoints() / damage;

//         for ( int i = 1; i <= iterations; i++ ) {
//             werewolf->takeMagicDamage(damage);
//             int expectedHP = werewolf->getHitPointsLimit() - damage * i;
//             REQUIRE( werewolf->getHitPoints() == expectedHP );
//         }

//         REQUIRE( werewolf->getHitPoints() == 0 );

//         try {
//             werewolf->takeMagicDamage(damage);
//         } catch ( OutOfHitPointsException obj ) {
//             REQUIRE( werewolf->getHitPoints() == 0 );
//         }
//     }


//     SECTION( "Werewolf::addHitpoits tests" ) {
//         werewolf->takeDamage(50);
//         REQUIRE( werewolf->getHitPoints() == werewolf->getHitPointsLimit() - 50 );

//         werewolf->addHitPoints(40);
//         REQUIRE( werewolf->getHitPoints() == werewolf->getHitPointsLimit() - 10 );

//         werewolf->addHitPoints(10);
//         REQUIRE( werewolf->getHitPoints() == werewolf->getHitPointsLimit() );

//         werewolf->addHitPoints(10);
//         REQUIRE( werewolf->getHitPoints() == werewolf->getHitPointsLimit() );

//         werewolf->takeDamage(werewolf->getHitPointsLimit());
//         REQUIRE( werewolf->getHitPoints() == 0 );

//         try {
//             werewolf->addHitPoints(40);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE(werewolf->getHitPoints() == 0);
//         }
//     }

//     SECTION( "Werewolf::addHitpoits as wolf tests" ) {
//         werewolf->turnMySelf();

//         werewolf->takeDamage(50);
//         REQUIRE( werewolf->getHitPoints() == werewolf->getHitPointsLimit() - 50 );

//         werewolf->addHitPoints(40);
//         REQUIRE( werewolf->getHitPoints() == werewolf->getHitPointsLimit() - 10 );

//         werewolf->turnMySelf();

//         REQUIRE( werewolf->getHitPoints() == (int) (190 / 2) );

//         werewolf->turnMySelf();

//         werewolf->addHitPoints(10);
//         REQUIRE( werewolf->getHitPoints() == werewolf->getHitPointsLimit() );

//         werewolf->takeDamage(werewolf->getHitPointsLimit());
//         REQUIRE( werewolf->getHitPoints() == 0 );

//         try {
//             werewolf->addHitPoints(40);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE(werewolf->getHitPoints() == 0);
//         }
//     }

//     SECTION( "Werewolf::attack tests" ) {
//         Soldier* enemy = new Soldier("Enemy", 100, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//         REQUIRE( enemy->getHitPoints() == 100 );
//         REQUIRE( enemy->getHitPointsLimit() == 100 );
//         REQUIRE( enemy->getTitle() == "Enemy" );
//         REQUIRE( enemy->getDamage() == 20 );
//         REQUIRE( enemy->getIsWolf() == false );

//         werewolf->attack(enemy);

//         REQUIRE( werewolf->getHitPoints() == 90 );
//         REQUIRE( enemy->getHitPoints() == 80 );

//         werewolf->attack(enemy);
//         werewolf->attack(enemy);
//         werewolf->attack(enemy);

//         REQUIRE( werewolf->getHitPoints() == 60 );
//         REQUIRE( enemy->getHitPoints() == 20 );

//         enemy->takeDamage(20);
//         REQUIRE( enemy->getHitPoints() == 0 );

//         try {
//             werewolf->attack(enemy);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE( werewolf->getHitPoints() == 60 );
//             REQUIRE( enemy->getHitPoints() == 0 );
//         }

//         try {
//             enemy->attack(werewolf);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE( werewolf->getHitPoints() == 60 );
//             REQUIRE( enemy->getHitPoints() == 0 );
//         }

//     }

//     SECTION( "Werewolf::attack as wolf tests" ) {
//         Soldier* enemy = new Soldier("Enemy", 100, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//         REQUIRE( enemy->getHitPoints() == 100 );
//         REQUIRE( enemy->getHitPointsLimit() == 100 );
//         REQUIRE( enemy->getTitle() == "Enemy" );
//         REQUIRE( enemy->getDamage() == 20 );
//         REQUIRE( enemy->getIsWolf() == false );

//         werewolf->turnMySelf();

//         werewolf->attack(enemy);

//         REQUIRE( werewolf->getHitPoints() == 190 );
//         REQUIRE( enemy->getHitPoints() == 60 );

//         werewolf->turnMySelf();

//         REQUIRE( werewolf->getHitPoints() == (int) (190 / 2) );
//         REQUIRE( enemy->getHitPoints() == 60 );

//         enemy->takeDamage(60);
//         REQUIRE( enemy->getHitPoints() == 0 );

//         try {
//             werewolf->attack(enemy);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE( werewolf->getHitPoints() == (int) (190 / 2) );
//             REQUIRE( enemy->getHitPoints() == 0 );
//         }

//         try {
//             enemy->attack(werewolf);
//         } catch( OutOfHitPointsException obj ) {
//             REQUIRE( werewolf->getHitPoints() == (int) (190 / 2) );
//             REQUIRE( enemy->getHitPoints() == 0 );
//         }
//     }

//     SECTION( "Werewolf::turn enemy tests" ) {
//         Soldier* enemy = new Soldier("Enemy", 100, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//         REQUIRE( enemy->getHitPoints() == 100 );
//         REQUIRE( enemy->getHitPointsLimit() == 100 );
//         REQUIRE( enemy->getTitle() == "Enemy" );
//         REQUIRE( enemy->getDamage() == 20 );
//         REQUIRE( enemy->getIsUnDead() == false );
//         REQUIRE( enemy->getIsWolf() == false );

//         werewolf->attack(enemy);
//         werewolf->convert(enemy);

//         REQUIRE( enemy->getHitPoints() == 90 );
//         REQUIRE( enemy->getHitPointsLimit() == 90 );
//         REQUIRE( enemy->getTitle() == "Werewolf" );
//         REQUIRE( enemy->getDamage() == 20 );
//         REQUIRE( enemy->getIsWolf() == true );

//         enemy->attack(werewolf);
//         REQUIRE( werewolf->getHitPoints() == 70 );
//         REQUIRE( enemy->getHitPoints() == 80 );

//         enemy->turnMySelf();
//         REQUIRE( werewolf->getHitPoints() == 70 );
//         REQUIRE( enemy->getHitPoints() == (int) (80 * 2) );
//     }
// }

// TEST_CASE( "Tests for Wizard class" ) {
//     Wizard* wizard = new Wizard("Wizard", 150, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0, 150);

//     REQUIRE( wizard->getMana() == 150 );
//     REQUIRE( wizard->getManaLimit() == 150 );
//     REQUIRE( wizard->getHitPoints() == 150 );
//     REQUIRE( wizard->getHitPointsLimit() == 150 );
//     REQUIRE( wizard->getDamage() == 10 );
//     REQUIRE( wizard->getTitle() == "Wizard" );

//     SECTION( "Wizard cast test" ) {
//         Soldier* soldier = new Soldier("Enemy", 100, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//         REQUIRE( soldier->getHitPoints() == 130 );

//         wizard->cast(soldier, 1);

//         REQUIRE( soldier->getHitPoints() == 100 );
//         REQUIRE( wizard->getMana() == 140 );


//         wizard->cast(soldier, 1);

//         REQUIRE( soldier->getHitPoints() == 70 );
//         REQUIRE( wizard->getMana() == 130 );
//     }
// }

// TEST_CASE( "Test Warlock class" ) {
//     Warlock *warlock = new Warlock("Warlock", 100, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0, 100);

//     REQUIRE(warlock->getHitPoints() == 100);
//     REQUIRE(warlock->getHitPointsLimit() == 100);
//     REQUIRE(warlock->getTitle() == "Warlock");
//     REQUIRE(warlock->getDamage() == 10);
//     REQUIRE(warlock->getIsUnDead() == false);
//     REQUIRE(warlock->getIsVampire() == false);
//     REQUIRE(warlock->getIsWolf() == false);
//     REQUIRE(warlock->getMana() == 100);
//     REQUIRE(warlock->getManaLimit() == 100);

//     SECTION("Warlock::takeDamage tests") {
//         int damage = 10;
//         int iterations = warlock->getHitPoints() / damage;

//         for (int i = 1; i < iterations; i++) {
//             warlock->takeDamage(damage);
//             int expectedHP = warlock->getHitPointsLimit() - damage * i;
//             REQUIRE(warlock->getHitPoints() == expectedHP);
//         }

//         try {
//             warlock->takeDamage(damage);
//         } catch (OutOfHitPointsException obj) {
//             REQUIRE(warlock->getHitPoints() == 0);
//         }

//     }SECTION("Warlock::takeMagicDamage tests") {
//         int damage = 10;
//         int iterations = warlock->getHitPoints() / damage;

//         for (int i = 1; i < iterations; i++) {
//             warlock->takeMagicDamage(damage);
//             int expectedHP = warlock->getHitPointsLimit() - damage * i;
//             REQUIRE(warlock->getHitPoints() == expectedHP);
//         }

//         try {
//             warlock->takeMagicDamage(damage);
//         } catch (OutOfHitPointsException obj) {
//             REQUIRE(warlock->getHitPoints() == 0);
//         }
//     }SECTION("Warlock::addHitpoits tests") {
//         warlock->takeDamage(50);
//         REQUIRE(warlock->getHitPoints() == 50);

//         warlock->addHitPoints(40);
//         REQUIRE(warlock->getHitPoints() == 90);

//         warlock->addHitPoints(10);
//         REQUIRE(warlock->getHitPoints() == 100);

//         warlock->addHitPoints(10);
//         REQUIRE(warlock->getHitPoints() == 100);

//         warlock->takeDamage(100);
//         REQUIRE(warlock->getHitPoints() == 0);

//         try {
//             warlock->addHitPoints(40);
//         } catch (OutOfHitPointsException obj) {
//             REQUIRE(warlock->getHitPoints() == 0);
//         }
//     }SECTION("Warlock::attack tests") {
//         Soldier *enemy = new Soldier("Enemy", 150, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//         REQUIRE(enemy->getHitPoints() == 150);
//         REQUIRE(enemy->getHitPointsLimit() == 150);
//         REQUIRE(enemy->getTitle() == "Enemy");
//         REQUIRE(enemy->getDamage() == 20);
//         REQUIRE(enemy->getIsUnDead() == false);
//         REQUIRE(enemy->getIsVampire() == false);
//         REQUIRE(enemy->getIsWolf() == false);

//         warlock->attack(enemy);

//         REQUIRE(warlock->getHitPoints() == 90);
//         REQUIRE(enemy->getHitPoints() == 140);

//         enemy->attack(warlock);

//         REQUIRE(warlock->getHitPoints() == 70);
//         REQUIRE(enemy->getHitPoints() == 135);

//         enemy->takeDamage(130);
//         REQUIRE(enemy->getHitPoints() == 5);

//         try {
//             warlock->attack(enemy);
//         } catch (OutOfHitPointsException obj) {
//             REQUIRE(warlock->getHitPoints() == 70);
//             REQUIRE(enemy->getHitPoints() == 0);
//         }

//         try {
//             warlock->attack(enemy);
//         } catch (OutOfHitPointsException obj) {
//             REQUIRE(warlock->getHitPoints() == 70);
//             REQUIRE(enemy->getHitPoints() == 0);
//         }
//     }SECTION ("Warlock::casting test") {
//         Soldier *enemy = new Soldier("Enemy", 150, 20, 20, 20, 20, 2, 20, 20, 3, 0, 1, 0);

//         REQUIRE(enemy->getHitPoints() == 150);
//         REQUIRE(enemy->getHitPointsLimit() == 150);
//         REQUIRE(enemy->getTitle() == "Enemy");
//         REQUIRE(enemy->getDamage() == 20);
//         REQUIRE(enemy->getIsUnDead() == false);
//         REQUIRE(enemy->getIsVampire() == false);
//         REQUIRE(enemy->getIsWolf() == false);

//         warlock->cast(enemy, 1);
//         REQUIRE(enemy->getHitPoints() == 130);
//         REQUIRE(warlock->getMana() == 90);

//         warlock->changeSpell(new Heal(20, 20, 20));
//         warlock->cast(enemy, 1);
//         REQUIRE(enemy->getHitPoints() == 130);
//         REQUIRE(warlock->getMana() == 80);

//         warlock->spendMana(36);
//         warlock->changeSpell(new ChaosFlame(20, 20, 20));
//         try {
//             warlock->cast(enemy, 1);
//         } catch (OutOfManaException obj) {
//             REQUIRE(enemy->getHitPoints() == 150);
//             REQUIRE(warlock->getMana() == 40);
//         }
//     }
// }
