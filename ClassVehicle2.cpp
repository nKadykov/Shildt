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
};

int main() {
	Vehicle minivan;
	Vehicle sportcar;

	int range1, range2;

	minivan.passengers = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;

	sportcar.passengers = 2;
	sportcar.fuelcap = 16;
	sportcar.mpg = 21;

	range1 = minivan.fuelcap * minivan.mpg;
	range2 = sportcar.fuelcap * sportcar.mpg;

	cout << "Minivan can take " << minivan.passengers << " in range " << range1 << endl;
	cout << "Sportcar can take " << sportcar.passengers << " in range " << range2 << endl;
	
	return 0;
}