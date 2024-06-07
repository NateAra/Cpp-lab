#ifndef CPP_LAB_WIDGET_H
#define CPP_LAB_WIDGET_H

class Widget {
private:
    bool enabled;

public:
    virtual void draw() const;
    void enable();
    void disable();
    bool isEnabled() const;
};

#endif
