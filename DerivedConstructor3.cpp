#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class TwoDShape {
	double width, height;
public:
	TwoDShape(double w, double h) { width = w; height = h; }
	void showDim(){
		cout << "Width and height are: " << width << ' ' << height << endl;
	}
	double getWidth() { return width; }
	double getHeight() { return height; }
	void setWidth(double w) { width = w; }
	void setHeight(double h) { height = h; }
};

class Triangle : public TwoDShape {
	char style[20];
public:
	Triangle(char *str, double w, double h) : TwoDShape(w,h){
		strcpy(style, str);
	}
	double area(){
		return getWidth() * getHeight() / 2;
	}
	void showStyle(){
		cout << "Triangle: " << style << endl;
	}
};

int main() {
	Triangle t1("isosceles",4,4);
	Triangle t2("right",8,12);

	cout << "t1: " << endl;
	t1.showStyle();
	t1.showDim();
	cout << "Square is: " << t1.area() << endl;
	cout << endl;
	
	cout << "t2: " << endl;
	t2.showStyle();
	t2.showDim();
	cout << "Square: " << t2.area() << endl;

	return 0;
}