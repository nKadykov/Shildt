#include <iostream>
#include <iomanip>
using namespace std;

ostream &setup(ostream &stream) {  
    stream.setf(ios::left);
    stream << setw(10) << setfill('$');
    return stream;
}

istream &prompt(istream &stream) {
    cin >> hex;
    cout << "Enter in hex" << endl;
    return stream;
}

int main() {
    cout << 10 << ' ' << setup << endl;
    int i;
    cin >> prompt >> i;
    cout << i;
    
    return 0;
}