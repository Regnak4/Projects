#ifndef ARITHMETICITERATOR_H
#define ARITHMETICITERATOR_H

#include <iostream>

class InvalidParam {};

class ArithmeticIterator {
	private:
		int first;
		int limit;
		int step;
		int current;
	public:
		ArithmeticIterator(int first = 1, int step = 2, int limit = 100);

		void next();
		void previous();
		bool over();
		int value();
		int begin();
		int end();

		void operator++();
		void operator++(int);
		void operator--();
		void operator--(int);
		int operator*();
};

#endif // ARITHMETICITERATOR_H