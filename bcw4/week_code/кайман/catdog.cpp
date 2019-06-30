#include <iostream>

class Animal {
    private:
        const char* name;
    public:
        Animal(const char* name="Animal"): name(name) {}
        virtual ~Animal() {}

        virtual const char* getName() const {
            return this->name;
        }
        virtual void eat() {
            std::cout << this->getName() << " eats everything..." << std::endl;
        }
        void makeNoise() {
            std::cout << this->getName() << " say something..." << std::endl;
        }
};

class Cat : virtual public Animal {
    private:
        const char* name;
    public:
        Cat(const char* name="Cat"): name(name) {}
        virtual ~Cat() {}

        virtual const char* getName() const {
            return this->name;
        }
        virtual void eat() {
            std::cout << this->getName() << " eats fish..." << std::endl;
        }
        void meow() {
            std::cout << this->getName() << " say meow..." << std::endl;
        }
};

class Dog : virtual public Animal {
    private:
        const char* name;
    public:
        Dog(const char* name="Dog"): name(name) {}
        virtual ~Dog() {}

        virtual const char* getName() const {
            return this->name;
        }
        virtual void eat() {
            std::cout << this->getName() << " eats meat..." << std::endl;
        }
        void woof() {
            std::cout << this->getName() << " say woof..." << std::endl;
        }
};

class CatDog : public Cat, public Dog {
    private:
        const char* name;
    public:
        CatDog(const char* name="CatDog"): name(name) {}
        virtual ~CatDog() {}

        virtual const char* getName() const {
            return this->name;
        }
        virtual void eat() {
            std::cout << this->name << " eats fish and meat..." << std::endl;
        }
        void talk() {
            std::cout << this->getName() << " say hello..." << std::endl;
        }
};


int main() {
    CatDog* cd = new CatDog();

    cd->meow();
    cd->woof();
    cd->talk();
    cd->eat();
    cd->Cat::eat();
    cd->Dog::eat();
    cd->Animal::eat();

    delete(cd);

    return 0;
}
