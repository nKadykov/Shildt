#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    char ch1[1024], ch2[1024];
    int i = 0;

    if(argc < 4) {
        cout << "Using: ./MergeFiles <file1> <file2> <file3>";
        return 1;
    }

    fstream in1(argv[1], ios::in | ios::binary);
    fstream in2(argv[2], ios::in | ios::binary);

    if(!(in1 && in2)) {
        cout << "Can't open file\n";
        return 1;
    }

    while(in1) {
        in1.get(ch1[i]);
        i++;
    }
    
    i = 0;
    while(in2) {
        in2.get(ch2[i]);
        i++;
    }

    in1.close();
    in2.close();

    fstream out(argv[3], ios::out | ios::binary);
    
    if(!out) {
        cout << "Can't open file\n";
        return 1;
    }
    i = 0;
    while(ch1[i]) {
        out.put(ch1[i++]);
    }
    i = 0;
    while(ch2[i]) {
        out.put(ch2[i++]);
    }
    out.close();

    return 0;
}