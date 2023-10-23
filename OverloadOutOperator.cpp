#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class ThreeD {
public:
    int x, y, z;
    ThreeD(int a, int b, int c) { x = a; y = b; z = c; }
};

ostream &operator<<(ostream &stream, ThreeD &obj) {
    stream << obj.x << ", ";
    stream << obj.y << ", ";
    stream << obj.z << endl;
    return stream;
}

int main() {
    ThreeD a(1, 2, 3), b(4, 5, 6), c(7, 8, 9);
    cout << a << b << c;
    
    return 0;
}