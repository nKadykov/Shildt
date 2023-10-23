#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class cl {
	int i;
public:
	int get_i() { return i; }
	void put_i(int j) { i = j; }
};

int main() {	
	cl s;

	s.put_i(10);
	cout << s.get_i();

	return 0;
}