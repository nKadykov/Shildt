#include <iostream>
using namespace std;

#define mkstr(s) # s
#define concat(a, b) a ## b

int main() {
    int xy = 10;
    cout << concat(x, y) << '\n';
    cout << mkstr(I like C++);

    return 0;
}