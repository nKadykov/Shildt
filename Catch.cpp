#include <iostream>
using namespace std;

void Xhandler(int test) {
    try {
        if(test)
            throw test;
        else
            throw 'v';
    }
    catch(int i) {
        cout << "Exception: " << i << '\n';
    }
    catch(char str) {
        cout << "Catch string\n";
        cout << str << '\n';
    }
}

int main() {
    cout << "Start\n";

    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);

    cout << "End\n";
    
    return 0;
}