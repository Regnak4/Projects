#include "VampireAbility.h"

VampireAbility::VampireAbility(Unit* owner) : Ability(owner) {}

VampireAbility::~VampireAbility() {}

void VampireAbility::attack(Unit* enemy) {
	this->owner->ensureIsAlive();
	enemy->takeDamage(this->owner->getAttack() * 0.9);
	enemy->counterAttack(this->owner);
	stealHP(enemy);
}

void VampireAbility::counterAttack(Unit* enemy) {
	this->owner->ensureIsAlive();
	enemy->takeDamage(this->owner->getCounterAttack());
}

void VampireAbility::stealHP(Unit* enemy) {
	enemy->takeDamage(this->owner->getAttack() / 10);
	int stolenHp = this->owner->getAttack() / 10;
	this->owner->addHitPoints(stolenHp);
}

void VampireAbility::convert(Unit* enemy) {
	this->owner->ensureIsAlive();
	enemy->ensureIsAlive();
	if ( enemy->getIsVampire() ) {
		std::cout << enemy->getTitle() << "  : You`re attacking Vampire - you can`t trasform him!" << std::endl;
	} else if ( enemy->getIsWolf() ) {
		std::cout << enemy->getTitle() << "  : You`re attacking Werewolf - you can`t trasform him!" << std::endl;
	} else if ( enemy->getIsTurnWolf() ) {
		std::cout << enemy->getTitle() << "  : You can`t be transformed to Werewolf - you`re Vampire!" << std::endl;
	} else {
		std::cout << enemy->getTitle() << "  : Starting Transformation..." << std::endl;
		int success = rand() % 10;
		if ( success == 0 ) {
			enemy->changeAbility(new VampireAbility(enemy));
			enemy->changeState(new VampireState(this->owner->getTitle(), this->owner->getHitPoints(),
				this->owner->getStamina(), this->owner->getMorale(), this->owner->getAttack(), 
				this->owner->getCounterAttack(), this->owner->getMovingPoints(), this->owner->getDefence(),
				this->owner->getRangeDefence(), this->owner->getResistance(), this->owner->getRangeDamage(),
				this->owner->getRange(), this->owner->getAmmo()));
			std::cout << enemy->getTitle() << " : New Vampire Arised!" << std::endl;
			return;
		}
		std::cout << enemy->getTitle() << " : Transformation is unsuccessfull!" << std::endl;
	}
}