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
    int *p, i;

    try {
        p = new int [10];
    }
    catch(bad_alloc xa) {
        cout << "Memory error\n";
        return 1;
    }

    for(i = 0; i < 1000; i++) {
        p[i] = i;
        cout << p[i] << ' ';
    }
    cout << '\n';

    delete [] p;
    return 0;
}