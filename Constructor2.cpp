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
	MyClass(int i);
	~MyClass();
};

MyClass::MyClass(int i) {
	x = i;
}

MyClass::~MyClass() {
	cout << "Destroy..." << endl;
}

int main() {
	MyClass ob = 5;

	cout << ob.x << endl;
	
	return 0;
}