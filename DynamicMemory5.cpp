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
    Rectangle() { 
        width = height = 0;
        cout << "Rectangle with sides " << width << " and " << height << '\n';
    }
    Rectangle(int w, int h) {
        width = w;
        height = h;
        cout << "Rectangle with sides " << width << " and " << height << '\n';
    }
    ~Rectangle() { cout << "Destructor\n"; }

    void set(int w, int h) {
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }
};

int main() {
    Rectangle *p;

    try {
        p = new Rectangle[3];
    }
    catch(bad_alloc xa) {
        cout << "Memory Error\n";
        return 1;
    }

    cout << '\n';

    p[0].set(3, 4);
    p[1].set(10, 8);
    p[2].set(5, 6);

    for(int i = 0; i < 3; i++) {
        cout << "Square is " << p[i].area() << '\n';
    }
    cout << '\n';

    delete [] p;
    return 0;
}