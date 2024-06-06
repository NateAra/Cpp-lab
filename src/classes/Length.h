#ifndef CPP_LAB_LENGTH_H
#define CPP_LAB_LENGTH_H
#include "compare"
#include "ostream"

class Length {
private:
    int value;
public:
    explicit Length(int value);

    int getValue() const;
    void setValue(int value);

    bool operator==(const Length& other) const;
    bool operator==(int other) const;
    std::strong_ordering operator<=>(const Length& other) const;

};

std::ostream& operator<<(std::ostream& stream, const Length& length);


#endif
