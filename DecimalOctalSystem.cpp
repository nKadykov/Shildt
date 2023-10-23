#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int DecimalNumber;
	cout << "Enter decimal number: ";
	cin >> DecimalNumber;
	int OctalNumber;
	int Remainder;
	int Degree = 1;
	
	while(DecimalNumber != 0){
		Remainder = DecimalNumber % 8;
		DecimalNumber = DecimalNumber / 8;
		OctalNumber = OctalNumber + Remainder * Degree;
		Degree = Degree * 10;
	}
	cout << "Octal number: " << OctalNumber << endl;
	system("pause");

	return 0;
}