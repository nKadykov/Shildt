#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    char buf[1024];

    if(argc < 3) {
        cout << "Using: ./CopyFile <file1> <file2>\n";
        return 1;
    }

    fstream out(argv[1], ios::in | ios::binary);
    if(!out) {
        cout << "Can't open file\n";
        return 1;
    }

    int i = 0;

    while(out){
        out.get(buf[i++]);
    }

    cout << buf << '\n';

    out.close();

    fstream in(argv[2], ios::out | ios::binary);
    if(!in) {
        cout << "Can't open file\n";
        return 1;
    }


    i = 0;

    while(buf[i]) {
        in.put(buf[i++]);
    }

    in.close();
    return 0;
    
}