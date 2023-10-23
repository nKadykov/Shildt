#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    register int i;
    int numread;
    
    unsigned char buf1[1024], buf2[1024];

    if(argc!=3){
        cout << "Using: ./CompFiles.exe <file1> <file2>";
        return 1;
    }

    ifstream f1(argv[1], ios::in | ios:: binary);
    if(!f1) {
        cout << "Can't open file1\n";
        return 1;
    }
    ifstream f2(argv[2], ios::in | ios::binary);
    if(!f2) {
        cout << "Can't open file 2\n";
        return 1;
    }
    cout << "Comparasion...";
    
    do {
        f1.read((char *) buf1, sizeof buf1);
        f2.read((char *)buf2, sizeof buf2);
        if(f1.gcount() != f2.gcount()) {
            cout << "Files have different length\n";
            f1.close();
            f2.close();
            return 0;
        }
        for(i = 0; i < f1.gcount(); i++)
            if((buf1[1] != buf2[i]) && (toupper(buf1[i]) != toupper(buf2[i]))) {
                cout << "Files are different\n";
                f1.close();
                f2.close();
                return 0;
            }
    } while(!f1.eof() && !f2.eof());

    cout << "Files are same\n";

    f1.close();
    f2.close();

    return 0;
}
