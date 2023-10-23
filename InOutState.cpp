#include <iostream>
#include <fstream>

int main() {
    std::ifstream is;
    is.open("file1");
    if((is.rdstate() && std::ifstream::failbit) != 0)
        std::cerr << "Error file1\n";

    std::ifstream is2("file1");

    char c;

    while(is.get(c))
        std::cout << c;
    std::cout << '\n';
    if(is.eof())
        std::cout << "EoF reached\n";
    else
        std::cout << "Error reading\n";
    is.close();
    char buffer[80];
    std::fstream myfile;

    myfile.open("file2", std::fstream::in);

    myfile << "file2";
    if(myfile.fail()) {
        std::cout << "Error writing\n";
        myfile.clear();
    }

    myfile.getline(buffer, 80);
    std::cout << buffer << " successfully read from file\n";

    return 0;
}