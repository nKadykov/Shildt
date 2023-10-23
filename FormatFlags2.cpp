#include <iostream>
using namespace std;

int main() {    
    ios::fmtflags f;
    f = cout.flags();

    if(f & ios::showpos)
        cout << "showpos is on" << endl;
    else
        cout << "showpos is off" << endl;
    cout << "Set showpos" << endl;
    cout.setf(ios::showpos);
    f = cout.flags();
    if(f & ios::showpos)
        cout << "showpos is on" << endl;
    else
        cout << "showpos is off" << endl;
    cout.unsetf(ios::showpos);
    f = cout.flags();
    if(f & ios::showpos)
        cout << "showpos is on" << endl;
    else
        cout << "showpos is off" << endl;
    
    return 0;
}