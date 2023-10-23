#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
#include <new>
using namespace std;

namespace NS {
    int i;
}

namespace NS {
    int j;
}

int main() {
    NS::i = 1;
    NS::j = 2;
    cout << NS::i << ' ' << NS::j;
    
    return 0;
}