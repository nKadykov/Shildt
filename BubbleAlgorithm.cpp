#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void BubbleSort(int N, int* arr) {
	int tmd = 0;
	for(int i = 0; i < N; i ++)
		for (int j = 0; j < N-1; j++)
			if(arr[j] > arr[j+1]){
				tmd  = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmd;
		}
}

int main() {
	int N;
	cout << "Enter dimension of the array: " << endl;
	cin >> N;
	int arr[N];
	srand((time(NULL)));
	
	for(int i = 0; i < N; i++){
		arr[i] = rand()%100;
	}
	for(int i = 0; i < N; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
	BubbleSort(N, arr);
	for(int i = 0; i < N; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
	system("pause");

	return 0;
}