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
	int range;
	minivan.passengers = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;
	range = minivan.fuelcap * minivan.mpg;
	
	cout << "Minivan can take " << minivan.passengers << " in range " << range << endl;

	return 0;
}