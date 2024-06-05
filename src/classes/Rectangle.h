#ifndef CPP_LAB_RECTANGLE_H
#define CPP_LAB_RECTANGLE_H


class Rectangle {
private:
    int width = 0;
    int height = 0;

public:
    Rectangle() = default;
    Rectangle(int width, int height);
    void draw();
    int getArea();
    int getWight();
    void setWight(int width);
    int getHeight() const;
    void setHeight(int height);
};


#endif
