#include <iostream>
#include "Point.h"

Point::Point(double x, double y) : x(0), y(0) {
    this->x = x;
    this->y = y;
}

Point::~Point() {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::setX(double value) {
    this->x = value;
}

void Point::setY(double value) {
    this->y = value;
}

double Point::distance(const Point& other) const {
    return hypot(x-other.x, y-other.y);
}

bool Point::operator==(const Point& other) const {
    return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const {
    return (x != other.x && y != other.y);
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
	out << "(" << point.getX() << ", " << point.getY() << ")";
    return out;
}