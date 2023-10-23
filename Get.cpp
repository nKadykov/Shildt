#include <iostream>
#include <fstream>

int main() {
    char str[80];

    std::cout << "Enter your name:\n";
    std::cin.get(str,79);
    std::cout << str << '\n';

    std::cout << "Enter your name:\n";
    std::cin >> str;
    std::cout << str << '\n';
    
    return 0;
}