#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Merge(int* arr, int* aux, int low, int mid, int high);

int MergeSort(int* arr, int* aux, int low, int high);

int main() {
	int N;
	cout << "Enter dimension: ";
	cin >> N;
	int  arr[N], aux[N];
	for(int i = 0; i < N; i++)
		arr[i] = aux[i] = rand()%100;
	MergeSort(arr, aux, 0, N-1);
	for(int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}

int Merge(int* arr, int* aux, int low, int mid, int high) {
	int k = low, i = low, j = mid + 1;
	while(i <= mid && j <= high){
		if(arr[i] < arr[j])
			aux[k++] = arr[i++];
		else
			aux[k++] = arr[j++];
	}
	while(i <= mid)
		aux[k++] = arr[i++];
	for(int i = low; i <= high; i++)
		arr[i] = aux[i];
	return 0;
}

int MergeSort(int* arr, int* aux, int low, int high) {
	if(high <= low)
		return 0;
	int mid = (low + ((high - low) >> 1));
	MergeSort(arr, aux, low, mid);
	MergeSort(arr, aux, mid + 1, high);
	Merge(arr, aux, low, mid, high);
	return 0;
}