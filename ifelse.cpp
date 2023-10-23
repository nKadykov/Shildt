#include <iostream>
using namespace std;

#define MAX 100
#define MAX2 6
#define JOHN 0
#define BOB 1
#define TOM 2
#define COMPILED_BY BOB
#define DEBUG 10
#define FULL 10
#define PARTIAL 100

int main() {
#if MAX > 10
    cout << "Memory error\n";
#endif

#if MAX2 > 10
    cout << "Memory error\n";
#else
    cout << "OK\n";
#endif

#if COMPILED_BY == JOHN
    char who[] = "John";
#elif COMPILED_BY == BOB
    char who[] = "Bob";
#else
    char who[] = "Tom";
#endif

#if COMPILED_BY == BOB
    #if DEBUG == FULL
        int port = 200;
    #elif DEBUG == PARTIAL
        int port = 200;
    #endif
    cout << port << " Bob must compiled\n";
#endif

    return 0;
}