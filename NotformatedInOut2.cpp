#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    char ch;
    
    if(argc!=2) {
        cout << "Using: PR <name-file>" << endl;
        return 1;
    }

    ifstream in(argv[1], ios::in | ios::binary);
    if(!in) {
        cout << "Can't open file" << endl;
        return 1;
    }
    while(in.get(ch))
        cout << ch;

    return 0;
}