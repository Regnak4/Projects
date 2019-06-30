#include <iostream>
#include "Gun.h"

Gun::Gun(const std::string& model, int capacity) : capacity(8) , model("Beretta") {
    this->amount = capacity;
    this->capacity = capacity;
    this->isReady = false;
    this->model = model;
    this->totalShots = 0;
}

Gun::~Gun() {
    delete &model;
}

int Gun::getAmount() const {
    return this->amount;
}

int Gun::getCapacity() const {
    return this->capacity;
}

bool Gun::ready() const {
    return this->isReady;
}

const std::string& Gun::getModel() const {
    return this->model;
}

int Gun::getTotalShots() const {
    return this->totalShots;
}


void Gun::prepare() {
    isReady = !isReady;
}

void Gun::reload() {
    amount = capacity;
}

void Gun::shoot() {
    if ( amount == 0 ) {
        isReady = false;
        throw OutOfRounds();
    }
    if ( !ready() ) {
        throw NotReady();
    }
    amount -= 1;
    totalShots += 1;
    std::cout << "Bang!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << "Model: " << gun.getModel() << std::endl;
    if ( gun.ready() ) {
        out << "Gun: Is ready" << std::endl;
    } else {
    	out << "Gun: Not ready" << std::endl;
    }
    out << "Rounds: (" << gun.getAmount();
    out << "/" << gun.getCapacity() << ")" << std::endl;
    out << "Total Shots made: " << gun.getTotalShots() << std::endl;

    return out;
}
