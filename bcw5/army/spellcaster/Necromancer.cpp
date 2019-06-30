#include "Necromancer.h"

Necromancer::Necromancer(const char* title, int hitPoints, int stamina, int morale,
	int attack, int counterattack, int movingPoints, int defence, 
	int rangeDefence, int resistance, int rangeDamage, int range, int ammo, int mana)
	: SpellCaster(title, hitPoints, stamina, morale, attack, counterattack, 
	movingPoints, defence, rangeDamage, resistance, rangeDamage, range, ammo, mana) {

	this->magicAbility = new NecroAbility(this, chaosFlame);	
	this->isUndead = true;
} 

Necromancer::~Necromancer() {}

void Necromancer::addObserver() {
	observers.insert(this);
}

void Necromancer::attack(Unit* enemy) {
	SpellCaster::attack(enemy);
	addObservable(enemy);
}

void Necromancer::cast(Unit* enemy) {
	SpellCaster::cast(enemy);
	addObservable(enemy);
}

void Necromancer::takeDamage(int dmg) {
	ensureIsAlive();
	if ( dmg - this->state->getDefence() >= this->state->getHitPoints() ) {
		//notify();
		//observers.SendNotification();
		this->state->getHitPoints() - this->state->getHitPoints();
		return;
	}
	this->state->getHitPoints() - dmg;
}

void Necromancer::takeMagicDamage(int dmg) {
	ensureIsAlive();
	if ( dmg - this->state->getResistance() >= this->state->getHitPoints() ) {
		//notify();
		//observers.SendNotification();
		this->state->getHitPoints() - this->state->getHitPoints();
		return;
	}
	this->state->getHitPoints() - dmg;
}
