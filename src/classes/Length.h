#ifndef CPP_LAB_LENGTH_H
#define CPP_LAB_LENGTH_H
#include "compare"


class Length {
private:
    int value;

public:
    explicit Length(int value);
    bool operator==(const Length& other) const;
    std::strong_ordering operator<=>(const Length& other) const;

};


#endif
