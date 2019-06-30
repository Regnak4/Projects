#include "Unit.h"

Unit::Unit(const char* title, int hitPoints, int stamina, int morale,int attack,
            int counterattack, int movingPoints, int defence, int rangeDefence, 
            int resistance, int rangeDamage, int range, int ammo) 
            : state(new State(title, hitPoints, stamina, morale, attack, counterattack, 
            movingPoints, defence, rangeDamage, resistance, rangeDamage, range, ammo)) {
    this->isUndead = false;
}

Unit::~Unit() {
    delete(this->state);
    delete(this->ability);
    std::cout << "Despawning Unit... \n" << std::endl;
}

void Unit::ensureIsAlive() {
    this->state->ensureIsAlive();
}

void Unit::isOutOfStamina() {
    this->state->isOutOfStamina();
}
void Unit::isOutOfMorale() {
    this->state->isOutOfMorale();
}

const char* Unit::getTitle() const {
    return this->state->getTitle();
}

int Unit::getHitPoints() const {
    return this->state->getHitPoints();
}

int Unit::getHitPointsLimit() const {
    return this->state->getHitPointsLimit();
}

int Unit::getStamina() const {
    return this->state->getStamina();
}

int Unit::getStaminaLimit() const {
    return this->state->getStaminaLimit();
}

int Unit::getMorale() const {
    return this->state->getMorale();
}

int Unit::getMoraleLimit() const {
    return this->state->getMoraleLimit();
}

int Unit::getAttack() const {
    return this->state->getAttack();
}

int Unit::getCounterAttack() const {
    return this->state->getCounterAttack();
}

int Unit::getMovingPoints() const {
    return this->state->getMovingPoints();
}

int Unit::getDefence() const {
    return this->state->getDefence();
}

int Unit::getRangeDefence() const {
    return this->state->getRangeDefence();
}

int Unit::getResistance() const {
    return this->state->getResistance();
}

int Unit::getRangeDamage() const {
    return this->state->getRangeDamage();
}

int Unit::getRange() const {
    return this->state->getRange();
}

int Unit::getAmmo() const {
    return this->state->getAmmo();
}

void Unit::addHitPoints(int hp) {
    this->state->addHitPoints(hp);
}

void Unit::takeDamage(int dmg) {
    this->state->takeDamage(dmg);
}

void Unit::takeMagicDamage(int dmg) {
    this->state->takeMagicDamage(dmg);
}

void Unit::takeRangeDamage(int dmg) {
    this->state->takeRangeDamage(dmg);
}

void Unit::attack(Unit* enemy) {
    this->state->getStamina() - 1;
    this->ability->attack(enemy);
}

void Unit::counterAttack(Unit* enemy) {
    this->state->getStamina() - 1;
    this->ability->counterAttack(enemy);
}

void Unit::convert(Unit* enemy) {
    this->ability->convert(enemy);
}

void Unit::turnMySelf() {
    this->ability->turnMySelf();
}

bool Unit::getIsVampire() {
    return this->state->getIsVampire();
}

bool Unit::getIsWolf() {
    return this->state->getIsWolf();
}

bool Unit::getIsTurnWolf() {
    return this->state->getIsTurnWolf();
}

bool Unit::getIsUndead() {
    return this->isUndead;
}

void Unit::changeAbility(Ability* newAbility) {
    this->ability = newAbility;
}

void Unit::changeState(State* newState) {
    delete(this->state);
    this->state = newState;
}

void Unit::sendNotification() {
    std::set<Observable*>::iterator it = observables.begin();
    for ( ; it != observables.end() ; it++ ) {
        (*it)->removeObserver(this);
    }
}

void Unit::notify() {
    std::set<Observer*>::iterator it = observers.begin();
    for ( ; it != observers.end() ; it++ ) {
        ((Unit*)(*it))->addHitPoints(getHitPointsLimit()/10);
        (*it)->removeObservable(this);
    }
}

void Unit::PrintDescription() {
    std::cout << "\nUnit name:    " << this->state->getTitle() 
              << "\nUnit HP:      " << this->state->getHitPoints()
              << "\nUnit stamina: " << this->state->getStamina()
              << "\nUnit morale:  " << this->state->getMorale() 
              << "\nUnit attack:  " << this->state->getAttack()
              << "\nUnit counterattack: " << this->state->getCounterAttack()
              << "\nUnit movingPoints: " << this->state->getMovingPoints()
              << "\nUnit defence: " << this->state->getDefence()
              << "\nUnit ranged defence: " << this->state->getRangeDefence()
              << "\nUnit resistance: " << this->state->getResistance()
              << "\nUnit range damage: " << this->state->getRangeDamage()
              << "\nUnit range:   " << this->state->getRange()
              << "\nUnit ammo:    " << this->state->getAmmo()
              << "\nIs this Unit is undead? : " << this->getIsUndead() << std::endl;
}