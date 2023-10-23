#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class P_example {
	int num;
public:
	void set_num(int val) { num = val; }
	void show_num() { cout << num << endl; }
};

int main() {
	P_example ob, *p;

	ob.set_num(1);
	ob.show_num();

	p = &ob;
	p->set_num(20);
	p->show_num();

	return 0;
}