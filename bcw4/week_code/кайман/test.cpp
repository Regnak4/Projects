#include <iostream>

class Cat {
    protected:
        const char* name;

    public:
        Cat(const char* name="Cat"): name(name) {}
        virtual ~Cat() {}

        const char* getName() const {
            return this->name;
        }

        void meow() {
            std::cout << this->getName() << " say meow..." << std::endl; 
        }

        void eat() {
            std::cout << this->getName() << " chumping..." << std::endl; 
        }
};

class Cheshire : public Cat {
    public:
        Cheshire(const char* name="Cheshire"): Cat(name) {}
        ~Cheshire() {}
};


int main() {
    Cheshire* cheshire = new Cheshire();
    Cat* cat = new Cat();

    cheshire->meow();
    cat->meow();

    delete(cat);
    delete cheshire;

    return 0;
}
