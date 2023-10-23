#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {    
    ofstream mystream;
    mystream.open("file");
    if(!mystream) {
        cout << "Can't open file" << endl;
    }
    return 0;
    if(!mystream.is_open()) {
        cout << "File is not opened" << endl; 
    }
    ifstream mystream2("file");
    if(!mystream2) {
        cout << "Can't open file" << endl;
    }
    if(!mystream2.is_open()) {
        cout << "File isn't opened" << endl;
    }
    mystream.close();
    
    return 0;
}