#ifndef CPP_LAB_RECTANGLE_H
#define CPP_LAB_RECTANGLE_H


class Rectangle {
public:
    void draw();
    int getArea();
    int getWight();
    void setWight(int width);
    int getHeight() const;
    void setHeight(int height);

private:
    int width;
    int height;
};


#endif //CPP_LAB_RECTANGLE_H
