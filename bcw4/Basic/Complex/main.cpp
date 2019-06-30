#include <iostream>

#include "Complex.h"

int main() {
	Complex x(3.7, -2.5);
	Complex y(1.5, 5.7);

	std::cout << x - y << std::endl; 

    return 0;
}