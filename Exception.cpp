#include <iostream>
using namespace std;

int main() {
    cout << "Start\n";
    
    try {
        cout << "Inside try\n";
        throw 99;
        cout << "This doesn't work\n";
    }
    catch(int i) {
        cout << "Esception - value is: ";
        cout << i << '\n';
    }
    cout << "End\n";

    return 0;
}