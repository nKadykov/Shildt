#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class MyClass {
	int a, b;
public:
	MyClass(int i, int j) { a = i; b = j; }
	friend int comDenom(MyClass x);
};

int comDenom(MyClass x) {
	int max = x.a < x.b ? x.a : x.b;
	for(int i = 2; i <= max; i++)
		if((x.a % i) == 0 && (x.b % i) == 0)
			return i;

	return 0;
}

int main() {
	
	MyClass n(18, 111);
	if(comDenom(n))
		cout << "Common denominator is: " << comDenom(n) << endl;
	else
		cout << "Common denominator is not found" << endl;
	return 0;
}