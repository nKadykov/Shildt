#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setprecision(2) << 1000.23 << endl;
    cout << setw(20) << "Hello there" << endl;
    cout << true << boolalpha << ' ' << true << endl;
    cout << dec << 1234 << endl;
    cout << hex << 1234 << endl;
    cout << ends;
    cout << fixed << dec << 1234 << endl;
    cout << flush << 234 << endl;
    cout << internal << 234 << endl;
    cout << left << 1234 << endl;
    cout << true << noboolalpha << ' ' << true << endl;
    cout << hex;
    cout << showbase << 123 << noshowbase << ' ' << 123 << endl;
    cout << showpoint << 123.23 << noshowpoint << ' ' << 123.23 << endl;
    cout << dec << showpos << 123 << noshowpos << ' ' << 123 << endl;
    cout << skipws << 123 << noskipws << ' ' << 123 << endl;
    cout << unitbuf << 123 << nounitbuf << ' ' << 123 << endl;
    cout << nouppercase << "nnn" << uppercase << "nnn" << endl;
    cout << right << 123 << endl;
    cout << setbase(8) << 123 << endl;
    cout << setiosflags(ios::showpos) << setiosflags(ios::scientific) << 123 << ' ' << 123.23 << endl;
    char s[80];
    cin >> ws >> s;
    cout << s;
    
    return 0;
}