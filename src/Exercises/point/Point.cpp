#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}


int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    Point::x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    Point::y = y;
}

bool Point::operator==(const Point& other) const {
    return (x == other.x) && (y == other.y);
}

Point &Point::operator++() {
    x++;
    y++;
    return *this;
}

Point Point::operator++(int) {
    Point copy = *this;
    operator++();
    return copy;
}

std::ostream &operator<<(std::ostream &stream, Point &other) {
    return stream << "(" << other.getX() << ", " << other.getY() << ")";
}
