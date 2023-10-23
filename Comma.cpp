#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

int main() {
	int i, j;
	j = 10;
	i = (j++, j + 100, 999 + j);
	cout << i;
	
	return 0;
}