#ifndef CPP_LAB_POINT_H
#define CPP_LAB_POINT_H
#include "ostream"


class Point {
private:
    int x;
    int y;

public:
    Point() = default;
    Point(int x, int y);

    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);

    bool operator==(const Point& other) const;
};

std::ostream& operator<<(std::ostream& stream, Point& other);


#endif
