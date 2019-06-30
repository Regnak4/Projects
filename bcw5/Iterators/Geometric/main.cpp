#include <iostream>
#include "GeometricIterator.h"

int main() {
	GeometricIterator seq(3, 5, 9);

	for ( ; !seq.over(); seq.next() ) {
		std::cout << seq.value() << std::endl;
	}
	
	return 0;
}