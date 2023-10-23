#include <iostream>
#include <fstream>

int main() {
    char str[80];

    std::cout << "Enter name:\n";
    std::cin.getline(str, 79);
    std::cout << str;
    
    return 0;
}