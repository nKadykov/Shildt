#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x, y, z;

	cout << "Enter side x: " << endl;
	cin >> x;
	cout << "Enter side y: " << endl;
	cin >> y;
	z = sqrt(x * x + y * y);
	cout << "Hypotenuse is: " << z << endl;
	system("pause");
	
	return 0;
}