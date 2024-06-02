#include <iostream>
#include "vector"
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    * Define a structure for representing a point.
        * Each point should have "X" and "Y" coordination.
        * Then overload the equality and stream insertion operators for point.
*/

struct Point {
    int x = 0;
    int y = 0;
};

bool operator == (const Point& fist, const Point& second) {
    return (
            fist.x == second.x &&
            fist.y == second.y
    );
}

ostream& operator << (ostream& stream, const Point& point) {
    stream << "x: " << point.x << ", " << "Y: " << point.y;
    return stream;
}


int main() {
    Point point1 {5,6};

    Point point2 {5, 6};

    cout << boolalpha << (point1 == point2) << endl;

    cout << "Point1: " << point1 << endl << "Point2: " << point2;

    return 0;
}