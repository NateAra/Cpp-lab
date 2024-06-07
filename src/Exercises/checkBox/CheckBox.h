#ifndef CPP_LAB_CHECKBOX_H
#define CPP_LAB_CHECKBOX_H
#include "../../classes/Inheritance_Polymorphism/Widget.h"


class CheckBox : public Widget {
public:
    void draw() const override final;
    ~CheckBox() override;
};

#endif
