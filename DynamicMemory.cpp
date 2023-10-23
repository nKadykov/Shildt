#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
#include <new>
using namespace std;

int main() {
    int *p;

    try {
        p = new int;
    }
    catch(bad_alloc xa) {
        cout << "No enough memory\n";
        return 1;
    }

    *p = 100;
    cout << "In adress " << p << ' ' << " is value " << *p << '\n';

    delete p;
    return 0;
}
