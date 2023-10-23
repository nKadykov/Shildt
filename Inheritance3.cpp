#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class TwoDShape {
	double width;
	double height;
public:
	double getWidth() { return width; }
	double getHeight() { return height; }
	double setWidth(double w) { width = w;  return 0; }
	double setHeight(double h) { height = h; return 0; }
	void showDim(){
		cout << "Width and height are: " << width << ' ' << height << endl;
	}
};

class Triangle : public TwoDShape {
public:
	char style[20];
	double area(){
		return getWidth() * getHeight() / 2;
	}
	void showStyle(){
		cout << "Triangle " << style << endl;	
	}
};

class Rectangle:TwoDShape {
public:
	bool isSquare(){
		if(getWidth() == getHeight())
			return true;
		return false;
	}
	double area(){
		return getWidth() * getHeight();
	}
};

int main() {
	Triangle t1;
	Triangle t2;

	t1.setWidth(4.0);
	t1.setHeight(4.0);
	strcpy(t1.style, "Isosceles triangle");

	t2.setWidth(8.0);
	t2.setHeight(12.0);
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