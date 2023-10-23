#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class MyClass {
	int val;
public:
	MyClass(int i){
		val = i;
		cout << "Inside Constructor" << endl;
	}
	~MyClass() { cout << "Destructiion" << endl; };
	int getval() { return val; }
};

void display(MyClass ob) {

	cout << ob.getval() << endl;
}

int main() {
	MyClass a(10);

	cout << "Before display()" << endl;
	display(a);
	cout << "After display()" << endl;

	return 0;
}