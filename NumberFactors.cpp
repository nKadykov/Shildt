#include <iostream>
#include <cmath>
using namespace std;

int main(){
	for(int i; i <= 100; i++){
		cout << "Number factors " << i << ": ";
		for(int j = 2; j < i; j++)
			if((i % j) == 0)
				cout << j << ' ';
			cout << endl;
	}

	return 0;
}