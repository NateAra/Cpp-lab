#ifndef CPP_LAB_LENGTH_H
#define CPP_LAB_LENGTH_H


class Length {
private:
    int value;

public:
    explicit Length(int value);
    bool operator==(const Length& other) const;

};


#endif
