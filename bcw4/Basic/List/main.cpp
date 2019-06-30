#include <iostream>
#include "List.h"

int main() {
	List list(4096, 1.05);

	list.insert(7, 0);
	list.insert(123, 1);
	list.insert(42, 2);

	list.erase(0);

	list.find(42);

	std::cout << "\n======================" << std::endl;
	std::cout << list << std::endl;
	std::cout << "======================" << std::endl;

	list.sort();

	std::cout << "\n======================" << std::endl;
	std::cout << list << std::endl;
	std::cout << "======================" << std::endl;

	std::cout << list[1] << std::endl;

	delete &list;

	return 0;
}