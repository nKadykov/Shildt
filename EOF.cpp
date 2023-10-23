#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cctype>

int main() {
    std::cout << "Please enter a number or a word: ";
    std::cout.flush();
    std::cin >> std::ws;
    int c = std::cin.peek();
    
    if(c == EOF)
        return 1;
    
    if(std::isdigit(c)) {
        int n;
        std::cin >> n;
        std::cout << "You entered the number: " << n << '\n';
    }
    else {
        std::string str;
        std::cin >> str;
        std::cout << "You entered the word: " << str << '\n';
    }
    
    return 0;
}