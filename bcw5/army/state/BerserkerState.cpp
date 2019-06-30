#include "BerserkerState.h"

BerserkerState::BerserkerState(const char* title, int hitPoints, int stamina, int morale, int attack, int counterattack,
            int movingPoints, int defence, int rangeDefence, int resistance, int rangeDamage,
            int range, int ammo) : State (title, hitPoints, stamina, morale, attack, counterattack,
            movingPoints, defence, rangeDefence, resistance, rangeDamage, range, ammo) {
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
}

BerserkerState::~BerserkerState() {}

void BerserkerState::ensureIsAlive() {
    if ( this->hitPoints == 0 ) {
        throw OutOfHitPointsException();
    }
}

void BerserkerState::isOutOfStamina() {
    if ( this->stamina == 0 ) {
        throw OutOfStaminaException();
    }
}

void BerserkerState::isOutOfMorale() {
    if ( this->morale == 0 ) {
        throw OutOfMoraleException();
    }
}

const char* BerserkerState::getTitle() const {
    return this->title;
}

int BerserkerState::getHitPoints() const {
    return this->hitPoints;
}

int BerserkerState::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

int BerserkerState::getStamina() const {
    return this->stamina;
}

int BerserkerState::getStaminaLimit() const {
    return this->staminaLimit;
}

int BerserkerState::getMorale() const {
    return this->morale;
}

int BerserkerState::getMoraleLimit() const {
    return this->moraleLimit;
}

int BerserkerState::getAttack() const {
    return this->attack;
}

int BerserkerState::getCounterAttack() const {
    return this->counterattack;
}

int BerserkerState::getMovingPoints() const {
    return this->movingPoints;
}

int BerserkerState::getDefence() const {
    return this->defence;
}

int BerserkerState::getRangeDefence() const {
    return this->rangeDefence;
}

int BerserkerState::getResistance() const {
    return this->resistance;
}

int BerserkerState::getRangeDamage() const {
    return this->rangeDamage;
}

int BerserkerState::getRange() const {
    return this->range;
}

int BerserkerState::getAmmo() const {
    return this->ammo;
}

void BerserkerState::addHitPoints(int hp) {
    this->ensureIsAlive();

    int total = this->hitPoints + hp;
    if ( total > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
        return;
    }
    this->hitPoints = total;
}

void BerserkerState::_takeDamage(int dmg) {
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

void BerserkerState::takeDamage(int dmg) {
    this->_takeDamage(dmg);
}

void BerserkerState::_takeMagicDamage(int dmg) {
	std::cout << "You can`t attack Berserker" << getTitle() << "He`s immune to magic" << std::endl;
}

void BerserkerState::takeMagicDamage(int dmg) {
    this->_takeMagicDamage(dmg);
}

void BerserkerState::_takeRangeDamage(int dmg) {
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

void BerserkerState::takeRangeDamage(int dmg) {
    this->_takeRangeDamage(dmg);
}