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
	int range();
};

int Vehicle::range() {
	return mpg * fuelcap;
}

int main() {
	Vehicle minivan;
	Vehicle sportcar;

	int range1, range2;

	minivan.passengers = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;

	sportcar.passengers = 2;
	sportcar.fuelcap = 14;
	sportcar.mpg = 12;

	range1 = minivan.range();
	range2 = sportcar.range();

	cout << "Minivan can take " << minivan.passengers << " in range " << range1 << endl;
	cout << "Sportcar can take " << sportcar.passengers << " in range " << range2 << endl;	
	return 0;
}