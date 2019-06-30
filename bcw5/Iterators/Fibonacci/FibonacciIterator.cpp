#include <iostream>
#include "FibonacciIterator.h"

FibonacciIterator::FibonacciIterator(int number) : number(10) {
	this->number = number;
	this->limit = number;
	this->current = 0;

	array = (int*)malloc(number*sizeof(int));
	if ( array == NULL ) {
		throw OutOfMemory();
	}

	array[0] = 0;
	array[1] = 1;
}

bool FibonacciIterator::over() {
	return current >= number;
}

void FibonacciIterator::next() {
	if ( over() ) {
		return;
	}
	current += 1;
	if ( limit > current ) {
		if ( current > 1 ) {
			array[current] = array[current-1] + array[current-2];
		}
	}
}

void FibonacciIterator::operator++() {
	next();
}
void FibonacciIterator::operator++(int) {
	operator++();
}

void FibonacciIterator::begin() {
	current = 0;
}
int FibonacciIterator::getValue() {
	if ( current < 0 ) {
		throw InvalidValue();
	}
	return array[current];
}

int FibonacciIterator::operator*() {
	return getValue();
}
