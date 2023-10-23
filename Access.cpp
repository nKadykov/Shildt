#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class B {
	int i, j;
public:
	void set(int a, int b) { i = a; j = b; }
	void show() { cout << i << ' ' << j << endl; }
};

class D : public B {
	int k;
public:
	D(int x) { k = x; };
	void showk() { cout << k << endl; }
};

int main() {
	D ob(3);
	ob.set(1,2);
	ob.show();
	ob.showk();
	return 0;
	cout << "Hello world" << endl;
}