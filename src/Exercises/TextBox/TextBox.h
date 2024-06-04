#ifndef CPP_LAB_TEXTBOX_H
#define CPP_LAB_TEXTBOX_H
#include <iostream>

/* Exercise
    * Create a TextBox Class.
        * - value: string
        * + getValue(): string
        * + setValue(val: string)
*/

class TextBox {
private:
    std::string value;
public:
    const std::string &getValue() const;

    void setValue(const std::string &value);

};


#endif
