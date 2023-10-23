#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

unsigned char lrotate(unsigned char val, int n);
unsigned char rrotate(unsigned char val, int n);
void show_binary(unsigned int u);

int main() {
	char ch = 'T';
	cout << "Binary number: ";
	show_binary(ch);
	cout << "Circular right bit shift: " << endl;;
	for(int i = 0; i < 8; i++){
		ch = rrotate(ch, 1);
		show_binary(ch);
	}
	cout << "Circular left bit shift: " << endl;;
	for(int i = 0; i < 8; i++){
		ch = lrotate(ch, 1);
		show_binary(ch);
	}
	return 0;
}

unsigned char lrotate(unsigned char val, int n) {
	unsigned int t;
	t = val;
	for(int i = 0; i < n; i++){
		t = t << 1;
		if(t & 256)
			t = t | 1;
	}
	return t;
}

unsigned char rrotate(unsigned char val, int n) {
	unsigned int t;
	t = val;
	t = t << 8;
	for(int i = 0; i < n; i++){
		t = t >> 1;
		if(t & 128)
			t = t | 32768;
	}
	t = t >> 8;
	return t;
}

void show_binary(unsigned int u) {
	for(int t = 128; t > 0; t = t/2){
		if(u & t)
			cout << "1 ";
		else
			cout << "0 ";
	}
	cout << endl;
}