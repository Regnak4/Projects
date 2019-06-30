#include <iostream>
#include "FileIterator.cpp"

int main() {
	FileIterator<char> seq("task.in");

	std::cout << "===============\n|";

	for ( ; !seq.over(); seq++) {
		std::cout << *seq;
	}
	std::cout << "|\n===============\n";

	return 0;
}