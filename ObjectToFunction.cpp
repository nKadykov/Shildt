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
	}
	int getval() { return val; }
	void setval(int i) { val = i; }
};

void display(MyClass ob) {
	cout << ob.getval() << endl;
}

void change(MyClass ob) {
	ob.setval(100);
	cout << "Number inside change(): ";
	display(ob);
}

int main() {
	MyClass a(10);
	cout << "Number before change(): ";
	display(a);

	change(a);
	cout << "Number after change(): ";
	display(a);

	return 0;
}