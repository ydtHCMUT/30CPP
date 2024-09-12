#include <algorithm>
#include <exception>
#include <iostream>

using namespace std;

int partition (int arr[], int low, int high) {
	// Your code here
	int pivot = arr[high];
	int k	  = low;
	for (int i = low; i <= high; i++) {
		if (arr[i] <= pivot) {
			swap (arr[i], arr[k]);
			k++;
		}
	}
	return k - 1;
}
void quickSort (int arr[], int low, int high) {
	// code here
	if (low >= high) {
		return;
	}
	int pi = partition (arr, low, high);
	quickSort (arr, low, pi - 1);
	quickSort (arr, pi + 1, high);
}

int main () {
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// cout << partition (arr, 0, n - 1) << endl;
	quickSort (arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}