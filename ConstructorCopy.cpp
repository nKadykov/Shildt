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
	int copynumber;
public:
	MyClass(int i){
		val = i;
		copynumber = 0;
		cout << "Inside conctructor" << endl;
	}
	MyClass(const MyClass &o){
		val = o.val;
		copynumber = o.copynumber + 1;
		cout << "Inside copy conctructor" << endl;
	}
	~MyClass(){
		if(copynumber == 0)
			cout << "Destruction of original" << endl;
		else
			cout << "Destruction of copy " << copynumber << endl;
	}
	int getval() { return val; }
};

void display(MyClass ob) {
	cout << ob.getval() << endl;
}

int main() {	
	MyClass a(10);
	display(a);
	
	return 0;
}