#include <iostream>
#include "ArithmeticIterator.h"

int main() {
	ArithmeticIterator seq(8, 4, 60);

	for ( ; !seq.over(); seq.next() ) {
		std::cout << seq.value() << std::endl;
	}

	return 0;
}