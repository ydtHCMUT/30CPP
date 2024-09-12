#include <iostream>
#include <vector>

using namespace std;

void LinearSearch (int arr[], int key, int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == key) {
			cout << "True";
			return;
		}
	}
	vector<int> a;
	// a.push_back ();
	cout << "False";
}

int main () {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int key;
	cin >> key;
	LinearSearch (arr, key, n);
	return 0;
}