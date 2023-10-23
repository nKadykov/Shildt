#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class Sample {
public:
	int x;
	int y;
	Sample() { x = y = 0; }
	Sample(int i) { x = y = i; }
	Sample(int i, int j) { x = i; y = j; }
};

int main() {
	Sample t;
	Sample t1(1);
	Sample t2(10, 20);

	cout << t.x << ' ' << t1.x << ' ' << t1.y << ' ' << t2.x << ' ' << t2.y << endl;

	return 0;
}