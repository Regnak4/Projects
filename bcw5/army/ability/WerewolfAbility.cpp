#include "WerewolfAbility.h"

WerewolfAbility::WerewolfAbility(Unit* owner) : Ability(owner) {}

WerewolfAbility::~WerewolfAbility() {}

void WerewolfAbility::attack(Unit* enemy) {
	this->owner->ensureIsAlive();
	enemy->takeDamage(this->owner->getAttack());
	enemy->counterAttack(this->owner);
}

void WerewolfAbility::counterAttack(Unit* enemy) {
	this->owner->ensureIsAlive();
	enemy->takeDamage(this->owner->getCounterAttack());
}

void WerewolfAbility::convert(Unit* enemy) {
	this->owner->ensureIsAlive();
	enemy->ensureIsAlive();
	if ( owner->getIsWolf() == true ) {
		if ( enemy->getIsVampire() == true ) {
			std::cout << enemy->getTitle() << "  : You`re attacking Vampire - you can`t trasform him!" << std::endl;
		} else if ( enemy->getIsWolf() == true ) {
			std::cout << enemy->getTitle() << "  : You`re attacking Wolf - you can`t trasform him!" << std::endl;
		} else if ( enemy->getIsTurnWolf() == true ) {
			std::cout << enemy->getTitle() << "  : You`re attacking Turned Wolf - you can`t trasform him!" << std::endl;
		} else {
			std::cout << enemy->getTitle() << "  : Starting Transformation to Wolf..." << std::endl;
			int success = rand() % 5;
			if ( success == 0 ) {
				enemy->changeAbility(new WerewolfAbility(enemy));
				enemy->changeState(new WerewolfState(this->owner->getTitle(), this->owner->getHitPoints(),
				this->owner->getStamina(), this->owner->getMorale(), this->owner->getAttack(), 
				this->owner->getCounterAttack(), this->owner->getMovingPoints(), this->owner->getDefence(),
				this->owner->getRangeDefence(), this->owner->getResistance(), this->owner->getRangeDamage(),
				this->owner->getRange(), this->owner->getAmmo()));
				std::cout << enemy->getTitle() << "  : Transformation to Wolf Successfull!" << std::endl;
				return;
			}
			std::cout << enemy->getTitle() << "   : Transformation Failed!" << std::endl;
		}
	}
}

void WerewolfAbility::turnMyself() {
	this->owner->ensureIsAlive();
	const char *oldTitle = this->owner->getTitle();
	const char *newTitle = strcat("Tranformed ", this->owner->getTitle());
	if ( this->owner->getIsWolf() == true ) {
		std::cout << this->owner->getTitle() << "  : Starting Transformation to Wolf..." << std::endl;
		int newHP   = this->owner->getHitPoints() * 2;
		int newStm  = this->owner->getStamina() * 2;
		int newMor  = this->owner->getMorale() * 2;
		int newAtk  = this->owner->getAttack() * 2;
		int newCAtk = this->owner->getCounterAttack() * 1.5;
		this->owner->changeState(new TurnWolfState(newTitle, newHP, newStm, newMor, newAtk, newCAtk,
		this->owner->getMovingPoints(), this->owner->getDefence(), this->owner->getRangeDefence(), 
		this->owner->getResistance(), this->owner->getRangeDamage(), this->owner->getRange(), 
		this->owner->getAmmo()));
		std::cout << this->owner->getTitle() << "  : Transformation to Wolf is done!" << std::endl;
	} else if ( this->owner->getIsTurnWolf() == true ) {
		std::cout << this->owner->getTitle() << "  : Starting Retransformation to Werewolf..." << std::endl;
		int oldHP   = this->owner->getHitPoints() / 2;
		int oldStm  = this->owner->getStamina() / 2;
		int oldMor  = this->owner->getMorale() / 2;
		int oldAtk  = this->owner->getAttack() / 2;
		int oldCAtk = this->owner->getCounterAttack() / 1.5;
		this->owner->changeState(new WerewolfState(oldTitle, oldHP, oldStm, oldMor, oldAtk, oldCAtk, 
		this->owner->getMovingPoints(), this->owner->getDefence(), this->owner->getRangeDefence(), 
		this->owner->getResistance(), this->owner->getRangeDamage(), this->owner->getRange(), 
		this->owner->getAmmo()));
		std::cout << this->owner->getTitle() << "  : Retransformation to Werewolf is done!" << std::endl;
	}
}