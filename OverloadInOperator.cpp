#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class ThreeD {
    int x, y, z;
public:
    ThreeD(int a, int b, int c) { x = a; y = b; z = c; }
    friend istream &operator>>(istream &stream, ThreeD &obj);
};

istream &operator>>(istream &stream, ThreeD &obj) {
    stream >> obj.x >> obj.y >> obj.z;
    return stream;
}

int main() {  
    ThreeD a(1, 2, 3), b(4, 5, 6), c(7, 8, 9);
    cout << "Enter x, y, z: ";
    cin >> a;
    cin >> b;
    cin >> c;

    return 0;
}