#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class Vehicle {
	int passengers;
	int fuelcap;
	int mpg;
public:
	Vehicle(int p, int f, int m){
		passengers = p;
		fuelcap = f;
		mpg = m;
	}
	int range() { return mpg * fuelcap; }
	int get_passengers() { return passengers; }
	int get_fuelcap() { return fuelcap; }
	int get_mpg() { return mpg; }
};

int main() {
	Vehicle minivan(7, 16, 21);
	Vehicle sportcar(2, 14, 12);

	int range1, range2;

	range1 = minivan.range();
	range2 = sportcar.range();

	cout << "Minivan can take " << minivan.get_passengers() << " in range " << range1 << endl;
	cout << "Sportcar can take " << sportcar.get_passengers() << " in range " << range2 << endl;	
	
	return 0;
}