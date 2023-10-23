#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class MyClass {
public:
	int x;
	MyClass();
	~MyClass();
};

MyClass::MyClass() {
	x = 10;
}

MyClass::~MyClass() {
	cout << "Destroy..." << endl;
}

int main() {
	MyClass ob1;
	MyClass ob2;

	cout << ob1.x << ' ' << ob2.x << endl;
	
	return 0;
}