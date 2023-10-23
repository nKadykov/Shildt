#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

int div_zero();

int main() {
	int i, j, result;
	cout << "Enter dividend and divisor: ";
	cin >> i >> j;
	result = j ? i/j : div_zero();
	cout << "Result is: " << result;
	return 0;
}

int div_zero() {
	cout << "I can't divide zero" << endl;
	
	return 0;
}