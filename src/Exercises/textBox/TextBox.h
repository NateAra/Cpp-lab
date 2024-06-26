#ifndef CPP_LAB_TEXTBOX_H
#define CPP_LAB_TEXTBOX_H
#include <iostream>
#include "../../classes/Inheritance_Polymorphism/Widget.h"

class TextBox : public Widget {
private:
    std::string value;

public:
    void draw() const override final;
    ~TextBox() override;
    const std::string &getValue() const;
    void setValue(const std::string &value);
};

#endif
