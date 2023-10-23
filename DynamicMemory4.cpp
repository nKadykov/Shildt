#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
#include <new>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
        cout << "Width and height are " << width << ' ' << height << '\n';
    }
    ~Rectangle() {
        cout << "Destructor\n";
    }
    int area() { return width * height; }
};

int main() {
    Rectangle *p;

    try {
        p = new Rectangle(10, 8);
    }
    catch(bad_alloc xa) {
        cout << "Memory error\n";
        return 1;
    }
    cout << "Square is " << p->area() << '\n';

    delete p;
    return 0;
}