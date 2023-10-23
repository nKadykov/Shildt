#include <iostream>
using namespace std;

void Xtest(int test) {
    cout << "Inside Xtest: " << test << '\n';
    if(test)
        throw test;
}

int main() {
    cout << "Start\n";

    try {
        cout << "Inside try\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }
    catch(int i) {
        cout << "Esception\n";
        cout << i << '\n';
    }
    
    cout << "End";

    return 0;
}