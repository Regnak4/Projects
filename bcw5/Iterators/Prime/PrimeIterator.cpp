#include "PrimeIterator.h"

PrimeIterator::PrimeIterator(int number) : number(100), current(1), limit(1) {
	this->number = number;
	array = (int*)malloc(number*sizeof(int));
	if ( array == NULL ) {
		throw OutOfMemory();
	}

	array[1] = 2;
}

bool PrimeIterator::over() {
	return current > number;
}

void PrimeIterator::next() {
	if ( over() ) {
		return;
	}
	if ( limit == current ) {
		for ( int i = array[current] + 1; i <= 1000; i++ ) {
			bool is_prime = true;

			for ( int j = 2; j <= sqrt(i); j++ ) {
				if ( i % j == 0 ) {
					is_prime = false;
					break;
				}
			}
			if ( is_prime ) {
				current += 1;
				limit = current;
				array[current] = i;
				break;
			}
		}
	} else {
		current += 1;
	}
}

void PrimeIterator::previous() {
	if ( current < 0 ) {
		return;
	}

	current -= 1;
}

void PrimeIterator::begin() {
	current = 1;
}

int PrimeIterator::getValue() const {
	return array[current];
}

void PrimeIterator::operator++() {
	next();
}

void PrimeIterator::operator++(int) {
	operator++();
}

void PrimeIterator::operator--() {
	previous();
}

void PrimeIterator::operator--(int) {
	operator--();
}

int PrimeIterator::operator*() {
	getValue();
}
