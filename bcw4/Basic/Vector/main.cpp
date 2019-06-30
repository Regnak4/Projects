#include <iostream>
#include "Vector.h"

int main() {
    Vector a();
    Vector b(8.9, -1);
    b.setY(-9);

    std::cout << a << std::endl;
    std::cout << b.len() << std::endl; 

    return 0;
}
