#include "State.h"

State::State(const char* title, int hitPoints, int stamina, int morale, int attack, int counterattack,
            int movingPoints, int defence, int rangeDefence, int resistance, int rangeDamage,
            int range, int ammo) {
    this->title = title;
    this->hitPoints = hitPoints;
    this->hitPointsLimit = hitPoints;
    this->stamina = stamina;
    this->staminaLimit = stamina;
    this->morale = morale;
    this->moraleLimit = morale;
    this->attack = attack;
    this->counterattack = counterattack;
    this->movingPoints = movingPoints;
    this->defence = defence;
    this->rangeDefence = rangeDefence;
    this->resistance = resistance;
    this->rangeDamage = rangeDamage;
    this->range = range;
    this->ammo = ammo;
    this->isVampire = false;
    this->isWolf = false;
    this->isNecromancer = false;
}

State::~State() = default;

void State::ensureIsAlive() {
    if ( this->getHitPoints() == 0 ) {
        throw OutOfHitPointsException();
    }
}

void State::isOutOfStamina() {
    if ( this->getStamina() == 0 ) {
        throw OutOfStaminaException();
    }
}

void State::isOutOfMorale() {
    if ( this->getMorale() == 0 ) {
        throw OutOfMoraleException();
    }
}

const char* State::getTitle() const {
    return this->title;
}

const int State::getHitPoints() const {
    return this->hitPoints;
}

const int State::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

const int State::getStamina() const {
    return this->stamina;
}

const int State::getStaminaLimit() const {
    return this->staminaLimit;
}

const int State::getMorale() const {
    return this->morale;
}

const int State::getMoraleLimit() const {
    return this->moraleLimit;
}

const int State::getAttack() const {
    return this->attack;
}

const int State::getCounterAttack() const {
    return this->counterattack;
}

const int State::getMovingPoints() const {
    return this->movingPoints;
}

const int State::getDefence() const {
    return this->defence;
}

const int State::getRangeDefence() const {
    return this->rangeDefence;
}

const int State::getResistance() const {
    return this->resistance;
}

const int State::getRangeDamage() const {
    return this->rangeDamage;
}

const int State::getRange() const {
    return this->range;
}

const int State::getAmmo() const {
    return this->ammo;
}

void State::addHitPoints(int hp) {
    this->ensureIsAlive();

    int total = this->hitPoints + hp;
    if ( total > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
        return;
    }
    this->hitPoints = total;
}

void State::_takeDamage(int dmg) {
    this->ensureIsAlive();

    if ( dmg > this->hitPoints ) {
        this->hitPoints = 0;
        return;
    }
    this->hitPoints -= dmg;

    if ( dmg >= this->hitPointsLimit * 0.2 ) {
        this->morale -= 1;
    }

    if ( this->hitPoints < this->hitPointsLimit * 0,5 ) {
        this->attack *= 0.75;
        this->counterattack *= 0.75;
        this->stamina -= 2;
    }

    if ( this->hitPoints < this->hitPointsLimit * 0,25 ) {
        this->attack *= 0.5;
        this->counterattack *= 0.5;
        this->stamina -= 2;
    }   
}

void State::takeDamage(int dmg) {
    this->_takeDamage(dmg);
}

void State::_takeMagicDamage(int dmg) {
    this->ensureIsAlive();

    if ( dmg - this->resistance > this->hitPoints ) {
        this->hitPoints = 0;
        return;
    }
    this->hitPoints -= (dmg - this->resistance);

    if ( dmg >= this->hitPointsLimit * 0.2 ) {
        this->morale -= 1;
    }

    if ( this->hitPoints < this->hitPointsLimit * 0,5 ) {
        this->attack *= 0.75;
        this->counterattack *= 0.75;
        this->stamina -= 2;
    }

    if ( this->hitPoints < this->hitPointsLimit * 0,25 ) {
        this->attack *= 0.5;
        this->counterattack *= 0.5;
        this->stamina -= 2;
    }    
}

void State::takeMagicDamage(int dmg) {
    this->_takeMagicDamage(dmg);
}

void State::_takeRangeDamage(int dmg) {
    this->ensureIsAlive();

    if ( dmg - this->rangeDefence > this->hitPoints ) {
        this->hitPoints = 0;
        return;
    }
    this->hitPoints -= (dmg - this->rangeDefence);

    if ( dmg >= this->hitPointsLimit * 0.2 ) {
        this->morale -= 1;
    }

    if ( this->hitPoints < this->hitPointsLimit * 0,5 ) {
        this->attack *= 0.75;
        this->counterattack *= 0.75;
        this->stamina -= 2;
    }

    if ( this->hitPoints < this->hitPointsLimit * 0,25 ) {
        this->attack *= 0.5;
        this->counterattack *= 0.5;
        this->stamina -= 2;
    }     
}

void State::takeRangeDamage(int dmg) {
    this->_takeRangeDamage(dmg);
}

bool State::getIsVampire() {
    return this->isVampire;
}

bool State::getIsWolf() {
    return this->isWolf;
}

bool State::getIsTurnWolf() {
    return this->isTurnWolf;
}

bool State::getIsNecromancer() {
    return this->isNecromancer;
}