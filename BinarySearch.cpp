#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void BubbleSort(int N, int* arr) {
	int tmp;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
}

int SimpleSearch(int* arr, int item) {
	int count = 0;
	int N = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	while(arr[i] != item){
		count++;
		i++;
	}
	return count;
}

int BinarySearch(int* arr, int item, int N) {
	int low = 0;
	int mid;
	int guess = 0;
	int count = 0;
	int high = N;
	cout << high << endl;
	while(low <= high){
		mid = (low + high) / 2;
		guess = arr[mid]; 
		if(item < guess)
			high = mid - 1;
		else
			low = mid + 1;
		count++;
	}
	return count;
}

int main() {

	int N;
	cout << "Enter dimension of the array: " << endl;
	cin >> N;
	int arr[N];
	srand(time(NULL));
	for(int i = 0; i < N; i++){
		arr[i] = rand()%100;
	}
	BubbleSort(N, arr);
	for(int i = 0; i < N; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	int item;
	cout << "Enter number you search for: " << endl;
	cin >> item;
	int countBinary = BinarySearch(arr, item, N);
	cout << countBinary << endl;
	int countSimple = SimpleSearch(arr, item);
	cout << countSimple << endl;
	cout << "Dimension: " << sizeof(arr)/sizeof(arr[0]) << endl;
	system("pause");
	return 0;
}