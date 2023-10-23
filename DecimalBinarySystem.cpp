#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int DecimalNumber;
	cout << "Enter decimal number: ";
	cin >> DecimalNumber;
	int BinaryNumber;
	int Remainder;
	int Degree = 1;

	while(DecimalNumber != 0){
		Remainder = DecimalNumber % 2;
		DecimalNumber = DecimalNumber / 2;
		BinaryNumber = BinaryNumber + Remainder * Degree;
		Degree = Degree * 10;
	}
	cout << "Binary number: " << BinaryNumber << endl;
	
	system("pause");

	return 0;
}