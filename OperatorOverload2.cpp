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

	ThreeD operator+(ThreeD op2);
	ThreeD operator-(ThreeD op2);
	ThreeD operator=(ThreeD op2);
	ThreeD operator++();
	ThreeD operator++(int notused);
	ThreeD operator--();
	ThreeD operator--(int notused);


	void show();
};

ThreeD ThreeD::operator+(ThreeD op2) {
	ThreeD temp;
	temp.x = x + op2.x;
	temp.y = y + op2.y;
	temp.z = z + op2.z;
	return temp;
}

ThreeD ThreeD::operator-(ThreeD op2) {
	ThreeD temp;
	temp.x = x - op2.x;
	temp.y = y - op2.y;
	temp.z = z - op2.z;
	return temp;
}

ThreeD ThreeD::operator=(ThreeD op2) {
	x = op2.x;
	y = op2.y;
	z = op2.z;
	return *this;
}

ThreeD ThreeD::operator++() {
	x++;
	y++;
	z++;
	return *this;
}

ThreeD ThreeD::operator++(int notused) {
	ThreeD temp = *this;
	x++;
	y++;
	z++;
	return temp;
}

ThreeD ThreeD::operator--() {
	x--;
	y--;
	z--;
	return *this;
}

ThreeD ThreeD::operator--(int notused) {
	ThreeD temp = *this;
	x--;
	y--;
	z--;
	return temp;
}

void ThreeD::show() {
	cout << "x: " << x << " y: " << y << " z: " << z << endl;
}

int main() {
	ThreeD a(1, 2, 3), b(10, 10, 10), c;
	cout << "a: ";
	a.show();
	cout << "b: ";
	b.show();
	
	c = a + b;
	cout << "c after c = a + b: ";
	c.show();

	c = a + b + c;
	cout << "c after c = a + b + c: ";
	c.show();

	c = b - a;
	cout << "c after c = b - a: ";
	c.show();

	c = b = a;
	cout << "c after c = b = a: ";
	c.show();

	cout << "a before ++: ";
	a.show();
	++a;
	cout << "a after ++a: ";
	a.show();

	a++;
	cout << "a after a++: ";
	a.show();

	--a;
	cout << "a after --a: ";
	a.show();

	a--;
	cout << "a after a--: ";
	a.show();

	return 0;
}