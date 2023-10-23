#include <iostream>
#include <typeinfo>

class Test {
    int number;
public:
    void setNumber(int n) {
        number = n;
    }
    void printNumber() const;
};

void Test::printNumber() const {
    std::cout << "Before: " << number;
    const_cast<Test *>(this)->number--;
    std::cout << "\nAfter: " << number;
}

int main() {
    Test X;
    X.setNumber(8);
    X.printNumber();

    return 0;
}