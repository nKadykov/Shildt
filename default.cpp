#include <iostream>
using namespace std;
#define UP 1
#define DOWN 0
#define GETFILE "Enter name of file\n"
#define LONG_STRING "This is very long \
for example\n"
#define MIN(a,b) (((a) < (b)) ? a : b)
#define EVEN(a) a % 2 == 0 ? 1 : 0
#define EVEN2(a) (a) % 2 == 0 ? 1 : 0
 
int main() {
    int x = 10, y = 20;
    
    cout << GETFILE;
    cout << "GETFILE is name of macross\n";
    cout << LONG_STRING;
    cout << "Minimum: " << MIN(x, y) << '\n';

    if(EVEN(9+1))
        cout << "even";
    else
        cout << "odd";
    
    if(EVEN2(9+1))
        cout << "even" << '\n';
    else
        cout << "odd";

    return 0;
}