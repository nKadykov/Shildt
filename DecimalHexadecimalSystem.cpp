#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int DecimalNumber;

	cout << "Enter decimal number: ";
	cin >> DecimalNumber;
	cout << "Hexadecimal number: " << std::hex << DecimalNumber << endl;
	
	system("pause");

	return 0;
}