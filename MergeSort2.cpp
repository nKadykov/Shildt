#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

int Merge(vector<int>& arr, vector<int>& aux, int low, int mid, int high) {
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

int MergeSort(vector<int>& arr, vector<int>& aux, int low, int high) {
	if(high <= low)
		return 0;
	int mid = (low + ((high - low) >> 1));
	MergeSort(arr, aux, low, mid);
	MergeSort(arr, aux, mid + 1, high);
	Merge(arr, aux, low, mid, high);

	return 0;
}

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		MergeSort(nums1, nums2, 0, m+n-1);
	}
};

int main() {
	vector <int> nums1;
	vector <int> nums2;
	int num, m, n;
	string l;
	
	cout << "nums1 " << endl;
	while(cin >> num && num != 0)
		nums1.push_back(num);
	cout << "m" << endl;
	cin >> m;
	cout << "nums2 " << endl;
	while(cin >> num && num != 0)
		nums2.push_back(num);
	cout  << "n " << endl;
	cin >> n;
	Solution sol;
	sol.merge(nums1, m, nums2, n);
	for(int i = 0; i < (n+m); i++)
		cout << nums1[i];
	
	return 0;
}