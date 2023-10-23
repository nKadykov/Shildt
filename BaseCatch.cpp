#include <iostream>
using namespace std;

class B {

};

class D : public B {

};

int main() {
    D derived;

    try {
        throw derived;
    }
    catch(B b) {
        cout << "Catch base class\n";
    }
    catch(D d) {
        cout  << "Doesn't work\n";
    }

    return 0;
}