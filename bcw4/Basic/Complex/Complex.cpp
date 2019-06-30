#include <iostream>

#include "Complex.h"

Complex::Complex(double real, double imaginary) : x(0), y(0) {
    this->real = real;
    this->imaginary = imaginary;
}

Complex::~Complex() {}

double Complex::getReal() const {
    return real;
}

double Complex::getImaginary() const {
    return imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return (real == other.real && imaginary == other.imaginary);
}

bool Complex::operator!=(const Complex& other) const {
    return (real != other.real || imaginary != other.imaginary);
}

void Complex::operator+=(const Complex& other) {
    real += other.real;
    imaginary += other.imaginary;
}
void Complex::operator-=(const Complex& other) {
    real -= other.real;
    imaginary -= other.imaginary;
}

Complex Complex::operator+(const Complex& other) const {
    Complex temp;
    
    temp.real = real + other.real;
    temp.imaginary = imaginary + other.imaginary;
    return temp;
}

Complex Complex::operator-(const Complex& other) const {
    Complex temp;
    
    temp.real = real - other.real;
    temp.imaginary = imaginary - other.imaginary;
    return temp;
}

Complex Complex::operator*(const Complex& other) const {
    Complex temp;
    
    temp.real = real * other.real - imaginary * other.imaginary;
    temp.imaginary = imaginary * other.real + real * other.imaginary;
    return temp;
}

std::ostream& operator<< (std::ostream& out, const Complex& complex) {
    if ( complex.getImaginary() >= 0 ) {
        out << complex.getReal() << "+" << complex.getImaginary() << "i";
        return out;
    }
    out << complex.getReal() << complex.getImaginary() << "i";
    return out;
}
