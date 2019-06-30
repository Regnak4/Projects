#include <iostream>
#include "FibonacciIterator.h"

int main() {
	FibonacciIterator seq(10);

	for ( ; !seq.over(); seq++ ) {
		std::cout << *seq << std::endl;
	}

	return 0;
}