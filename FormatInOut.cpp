#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int number = 124124;
    double numb = 1.23;
    char str[] = "n n n";
    bool  f = false;
    
    cout << number << endl;
    cout << skipws << str << ' ' << number <<  endl;
    cout << left << number << endl;
    cout << right << number << endl;
    cout << internal << number << endl;
    cout << oct << number << endl;
    cout << hex << number << endl;
    cout << showbase << oct << number << endl;
    cout << showbase << hex << number << endl;
    cout << showpos << hex << number << endl;
    cout << showpoint << numb << endl;
    cout << scientific << numb << endl;
    cout << fixed << numb << endl;
    cout << unitbuf << numb << endl;
    cout << boolalpha << f << endl;

    return 0;
}