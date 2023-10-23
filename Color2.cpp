#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class Cylinder;

enum colors { red, green, yellow };

class Cube {
	colors color;
public:
	Cube(colors c) { color = c; }
	bool sameColor(Cylinder y);
};

class Cylinder {
	colors color;
public:
	Cylinder(colors c) { color = c; }
	friend bool Cube::sameColor(Cylinder y);
};

bool Cube::sameColor(Cylinder  y) {
	if(color == y.color)
		return true;
	else
		return false;
}

int main() {
	Cube cube1(red);
	Cube cube2(green);
	Cylinder cy1(green);

	if(cube1.sameColor(cy1))
		cout << "Cube1 and cylinder are same" << endl;
	else
		cout << "Cube1 and cylinder are different" << endl;

	if(cube2.sameColor(cy1))
		cout << "Cube2 and cylisnder are same" << endl;
	else
		cout << "Cube2 and cylinder are different" << endl;

	return 0;
}