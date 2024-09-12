#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void Merge (int a[], int l, int m, int r) {
}

void MergeSort (int a[], int l, int r) {
	int mid = l - (l - r) / 2;
	if (l < r) {
		// mid += 1;
		MergeSort (a, l, mid);
		MergeSort (a, mid, r);
	}
	if (a[l] > a[r]) {
		swap (a[l], a[r]);
	}
	return;
}

int main () {
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	int a[4] = { 12, 34, 52, 18 };
	int k	 = sizeof (a) / sizeof (a[0]);
	MergeSort (a, 0, k - 1);
	// cout << k;
	for (int i = 0; i < k; i++) {
		cout << a[i] << " ";
	}
	return 0;
}