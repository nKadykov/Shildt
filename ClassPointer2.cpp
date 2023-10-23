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
	P_example ob[2], *p;

	ob[0].set_num(1);
	ob[1].set_num(2);

	p = &ob[0];
	p->show_num();
	p++;
	p->show_num();
	p--;
	p->show_num();

	return 0;
}