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
	TwoDShape() { width = height = 0; }
	TwoDShape(double w, double h) { width = w; height = h; }
	TwoDShape(double x) { width = height = x; }
	void showDim(){
		cout << "Width and height: " << width << ' ' << height << endl;
	}
	double getWidth() { return width; }
	double getHeight() { return height; }
	void setWidth(double w) { width = w; }
	void setHeight(double h) { height = h; }
};

class Triangle : public TwoDShape {
	char style[20];
public:
	Triangle(){
		strcpy(style, "unknown");
	}
	Triangle(char *str, double w, double h) : TwoDShape(w,h){
		strcpy(style,str);
	}
	Triangle(double x) : TwoDShape(x){
		strcpy(style,"isosceles");
	}
	double area(){
		return getWidth() * getHeight() / 2;
	}
	void showStyle(){
		cout << "Triangle: " << style << endl;
	}
};

int main() {
	Triangle t1;
	Triangle t2("isosceles",8,12);
	Triangle t3(4);
	t1 = t2;

	cout << "t1: " << endl;
	t1.showStyle();
	t1.showDim();
	cout << "Square: " << t1.area() << endl;
	cout << endl;
	
	cout << "t2: " << endl;
	t2.showStyle();
	t2.showDim();
	cout << "Square: " << t2.area() << endl;
	cout << endl;

	cout << "t3: " << endl;
	t3.showStyle();
	t3.showDim();
	cout << "Square: " << t3.area() << endl;

	return 0;
}