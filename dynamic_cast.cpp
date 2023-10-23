#include <iostream>
#include <typeinfo>

class Base {
public:
    virtual void f() {}
};

class Derived : public Base {

};

int main() {
    Base *b, b_ob;
    Derived *d, d_ob;

    b = &d_ob;
    d = dynamic_cast<Derived *>(b);
    if(d)
        std::cout << "OK\n";
    else
        std::cout << "Not OK\n";

    b = &b_ob;
    d = dynamic_cast<Derived *>(b);
    if(d)
        std::cout << "OK\n";
    else
        std::cout << "Not OK\n";

    return 0;
}