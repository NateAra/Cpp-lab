#ifndef CPP_LAB_SMARTPOINTER_H
#define CPP_LAB_SMARTPOINTER_H


class SmartPointer {
private:
    int* ptr;

public:
    explicit SmartPointer(int* ptr);
    ~SmartPointer();

    int& operator*();

};


#endif
