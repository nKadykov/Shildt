#include <iostream>
using namespace std;

void Xhandler() {
    try {
        throw "Hello";
    }
    catch(const char *) {
        cout << "Catch char * inside Xhandler\n";
        throw;
    }
}

int main() { 
    cout << "Start\n";

    try {
        Xhandler();
    }
    catch(const char *) {
        cout << "Catch char * inside main\n";
    }

    cout << "End";
    return 0;
}