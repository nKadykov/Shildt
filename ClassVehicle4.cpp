#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;
	Vehicle(int p, int f, int m);
	int range();
};

Vehicle::Vehicle(int p, int f, int m) {
	passengers = p;
	fuelcap = f;
	mpg = m;
}

int Vehicle::range() {
	return mpg * fuelcap;
}

int main() {
	Vehicle minivan(7, 16, 21);
	Vehicle sportcar(2, 14, 12);

	int range1, range2;

	range1 = minivan.range();
	range2 = sportcar.range();

	cout << "Minivan can take " << minivan.passengers << " in range " << range1 << endl;
	cout << "Sportcar can take " << sportcar.passengers << " in range " << range2 << endl;	
	
	return 0;
}