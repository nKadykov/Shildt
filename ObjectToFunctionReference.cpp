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
	~MyClass() { cout << "Destroy" << endl; }
	int getval() { return val; }
	void setval(int i) { val = i; }
};

void display(MyClass &ob) {
	cout << ob.getval() << endl;
}

void change(MyClass &ob) {
	ob.setval(100);
}

int main() {	
	MyClass a(10);

	cout  << "Before display()" << endl;
	display(a);
	cout << "After display()" << endl;

	change(a);
	cout << "After change()" << endl;
	display(a);

	return 0;
}