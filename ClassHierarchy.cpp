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
	TwoDShape(double x) { width = height = x; }
	TwoDShape(double w, double h) { width = w; height = h; }
	void showDim() {
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
		strcpy(style, "isosceles");
	}
	Triangle(double x) : TwoDShape(x){
		strcpy(style, "right");
	}
	double area(){
		return getWidth() * getHeight() / 2;
	}
	void showStyle(){
		cout << "Triangle: " << style << endl;
	}
};

class ColorTriangle : public Triangle {
	char color[20];
public:
	ColorTriangle(char *clr, char *style, double w, double h) : Triangle(style,w,h){
		strcpy(color,clr);
	}
	void showColor(){
		cout << "Color " << color << endl;
	}
};

int main() {
	ColorTriangle t1("Blue","right",8,12);
	ColorTriangle t2("Red","right",2,2);

	cout << "t1:" << endl;
	t1.showStyle();
	t1.showDim();
	t1.showColor();
	cout << "Square is: " << t1.area() << endl << endl;
	
	cout << "t2" << endl;
	t2.showStyle();
	t2.showDim();
	t2.showColor();
	cout << "Square: " << t2.area() << endl;

	return 0;
}