#include <iostream>
#include "FactorialIterator.h"

int main() {
	FactorialIterator factorial(10);

	for ( ; !factorial.over(); factorial.next() ) {
		std::cout << factorial.value() << std::endl;
	}

	return 0;
}