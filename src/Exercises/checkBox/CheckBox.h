#ifndef CPP_LAB_CHECKBOX_H
#define CPP_LAB_CHECKBOX_H
#include "../textBox/TextBox.h"


class CheckBox : public TextBox {
public:
    void draw() const override;
    ~CheckBox() override;
};

#endif
