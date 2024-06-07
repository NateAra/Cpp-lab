#ifndef CPP_LAB_SHAPE_H
#define CPP_LAB_SHAPE_H
#include "iostream"

class Shape {
private:
    std::string background;
public:
    const std::string &getBackground() const;
    void setBackground(const std::string &background);

};

#endif
