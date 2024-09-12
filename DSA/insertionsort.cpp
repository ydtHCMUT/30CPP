#include <algorithm>
#include <exception>
#include <iostream>

using namespace std;

void insertionSort (int arr[], int n) {
	// first element is assumed to be sorted
	for (int i = 1; i < n; i++) {
		int k = i;
		while (arr[k - 1] > arr[k] && k >= 1) {
			int tmp	   = arr[k - 1];
			arr[k - 1] = arr[k];
			arr[k]	   = tmp;
			k--;
		}
	}
}

int main () {
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	int arr[5];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// cout << partition (arr, 0, n - 1) << endl;
	insertionSort (arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}