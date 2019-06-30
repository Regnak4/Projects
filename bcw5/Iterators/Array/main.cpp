#include <iostream>
#include "ArrayIterator.h"

int main() {
	int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	ArrayIterator<int> seq(array, 10);

	for ( ; !seq.over(); seq++ ) {
		std::cout << *seq << std::endl;
	}
	
	return 0;
}