#include <iostream>

#include "Point.h"

int main() {
	Point x(3.7, -2.5);
	Point y(1.5, 5.7);

	std::cout << x.distance(y) << std::endl; 

    return 0;
}