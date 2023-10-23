#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class ThreeD {
	int x, y, z;
public:
	ThreeD() { x = y = z = 0; }
	ThreeD(int i, int j, int k) { x = i; y = j; z = k; }

	friend ThreeD operator++(ThreeD &op1);
	friend ThreeD operator++(ThreeD &op1, int notused);
	bool operator==(ThreeD op2);
	void show();
};

ThreeD operator++(ThreeD &op1) {
	op1.x++;
	op1.y++;
	op1.z++;
	return op1;
}

ThreeD operator++(ThreeD &op1, int notused) {
	ThreeD temp = op1;
	op1.x++;
	op1.y++;
	op1.z++;
	return temp;
}

bool ThreeD::operator==(ThreeD op2) {
	if((x == op2.x) && (y == op2.y) && (y == op2.y))
		return true;
	else
		return false;
}

void ThreeD::show() {
	cout << x << ' ' << y << ' ' << z << endl;
}



int main() {
	ThreeD a(1,2,3), b(10,10,10), c(3,4,5);

	a++;
	a.show();
	++a;
	a.show();

	b++;
	b.show();
	++b;
	b.show();

	if(a == b)
		cout << "a equals b" << endl;
	else
		cout << "a doesn't equal b" << endl;

	if(a == c)
		cout << "a equals c" << endl;
	else
		cout << "a doesn't equal c" << endl;

	return 0;
}