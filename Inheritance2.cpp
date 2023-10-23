#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class TwoDShape {
public:
	double width;
	double height;
	void showDim(){
		cout << "Width and height are: " << width << ' ' << height << endl;
	}
};

class Triangle : public TwoDShape {
public:
	char style[20];
	double area(){
		return width * height / 2;
	}
	void showStyle(){
		cout << "Triangle " << style << endl;	
	}
};

class Rectangle:TwoDShape {
public:
	bool isSquare(){
		if(width == height)
			return true;
		return false;
	}
	double area(){
		return width * height;
	}
};

int main() {	
	Triangle t1;
	Triangle t2;

	t1.width = 4.0;
	t1.height = 4.0;
	strcpy(t1.style, "Isosceles triangle");

	t2.width = 8.0;
	t2.height = 12.0;
	strcpy(t2.style, "Right triangle");

	cout << "Data about t1: " << endl;
	t1.showStyle();
	t1.showDim();
	cout << "Square is " << t1.area() << endl;
	
	cout << "Data about t2: " << endl;
	t2.showStyle();
	t2.showDim();
	cout << "Square is " << t2.area() << endl;

	return 0;
}