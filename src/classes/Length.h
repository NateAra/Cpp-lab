#ifndef CPP_LAB_LENGTH_H
#define CPP_LAB_LENGTH_H
#include "compare"
#include "ostream"
#include "istream"

class Length {
private:
    int value;
public:
    explicit Length(int value);
    Length() = default;

    int getValue() const;
    void setValue(int value);

    bool operator==(const Length& other) const;
    bool operator==(int other) const;
    std::strong_ordering operator<=>(const Length& other) const;
    Length operator+(const Length& other) const;
    Length& operator+=(const Length& other);

};

std::ostream& operator<<(std::ostream& out, const Length& length);
std::istream & operator>>(std::istream& in, Length& length);


#endif
