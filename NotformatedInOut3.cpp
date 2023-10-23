#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char *p = "Hello world\n";
    ofstream out("test", ios::out | ios::binary);
    if(!out) {
        cout << "Can't open file\n";
        return 1; 
    }

    while(*p)
        out.put(*p++);
    
    out.close();

    return 0;
}