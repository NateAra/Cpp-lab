#ifndef CPP_LAB_WIDGET_H
#define CPP_LAB_WIDGET_H

class Widget {
private:
    bool enabled;

public:
    virtual ~Widget() = default;
    // Pure virtual method
    virtual void draw() const = 0;
    void enable();
    void disable();
    bool isEnabled() const;
};

#endif
