#include <iostream>
#include <stdint.h>
#include <vector>

using namespace std;

int solution (vector<int>& arr) {
	int k		   = arr.size ();
	bool condition = arr[1] > arr[0];
	int count	   = 1;
	for (int i = 1; i < k - 1; i++) {
		// if condition is change then a new increase or decrease list then count++(rotated)
		if ((arr[i] > arr[i - 1]) != condition) {
			count++;
		}
		if (count > 1) {
			break;
		}
	}
	if (count == 1) {
		if (condition) {
			return 1;
		}
		return 2;
	}
	if (condition) {
		return 4;
	}
	return 3;
}

int main () {
	int n = 5;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		arr.push_back (k);
	}
	cout << solution (arr);
	return 0;
}