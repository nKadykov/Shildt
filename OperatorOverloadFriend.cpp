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
	ThreeD() { x = y  = z = 0; }
	ThreeD(int i, int j, int k) { x = i; y = j; z = k; }
	friend ThreeD operator+(ThreeD op1, ThreeD op2);
	void show();
};

ThreeD operator+(ThreeD op1, ThreeD op2) {
	ThreeD temp;
	temp.x = op1.x + op2.x;
	temp.y = op1.y + op2.y;
	temp.z = op1.z + op2.x;
	return temp;
}

void ThreeD::show() {
	cout << x << ", " << y << ", " << z << endl; 
}

int main() {
	ThreeD a(1,2,3), b(10,10,10), c;

	cout << "a: ";
	a.show();
	cout << "b: ";
	b.show();
	cout << endl;

	c = a + b;
	cout << "c after c = a + b: ";
	c.show();
	cout << endl;

	c = a + b + c;
	cout << "c after c = a + b + c: ";
	c.show();
	cout << endl;

	c = b = a;
	cout << "c after c = b = a: ";
	c.show();
	cout << "b after c = b = a: ";
	b.show();

	return 0;
}