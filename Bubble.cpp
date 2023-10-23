#include <iostream>
#include <cstdlib>
#include <ctime>
using  namespace std;

int main() {
	int nums[10];
	int a, b, t;
	int  size = 10;
	size = 10;

	srand(time(NULL));
	
	for(t = 0; t < size; t++)
		nums[t] = rand()%100 - 50;
	cout  << "Array: " << endl;
	for(t = 0; t < 10; t++)
		cout << nums[t] << ' ';
	cout << endl;
	for(a = 1; a < size; a++)
		for(b = size - 1; b >= a; b--){
			if(nums[b-1] > nums[b]){
				t = nums[b-1];
				nums[b-1] = nums[b];
				nums[b] = t;
			}
		}
	cout << "New array: " << endl;
	for(t = 0; t < size; t++)
		cout << nums[t] << ' ';

	return 0;
}