#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class Test {
	int a, b;
public:
	void setab(int i, int j) { a = i; b = j; }
	void showab() {
		cout << "a is " << a << endl;
		cout << "b is " << b << endl;
	}
};

int main() {
	Test ob1, ob2;

	ob1.setab(10, 20);
	ob2.setab(0, 0);
	cout << "ob1 before assignment: " << endl;
	ob1.showab();
	cout << "ob2 before assignment: " << endl;
	ob2.showab();
	cout << endl;

	ob2 = ob1;

	cout << "ob1 after assignment: " << endl;
	ob1.showab();
	cout << "ob2 after assignment: " << endl;
	ob2.showab();
	cout << endl;

	ob1.setab(-1, -1);

	cout << "ob1 after change: " << endl;
	ob1.showab();
	cout << "ob2 after change: " << endl;
	ob2.showab();

	return 0;
}