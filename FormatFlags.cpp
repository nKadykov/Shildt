#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::showpos);
    cout.setf(ios::scientific);
    cout << 123 << ' ' << 123.23 << endl;
    cout << cout.flags() << endl;
    cout.unsetf(ios::showpos);
    cout.unsetf(ios::scientific);
    cout << 123 << ' ' << 123.23 << endl;
    cout.setf(ios::scientific | ios::showpos);
    cout << 123 << ' ' << 123.23 << endl;
    
    return 0;
}