#ifndef CPP_LAB_RECTANGLE_H
#define CPP_LAB_RECTANGLE_H


class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int width, int height);
    void draw();
    int getArea();
    int getWight();
    void setWight(int width);
    int getHeight() const;
    void setHeight(int height);
};


#endif
