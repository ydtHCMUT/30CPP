#include <iostream>
#include <vector>
using namespace std;

vector<int> solution (int a[], int b[]) {
	// create a vector v and if vector v*vector ()
	// try to find out a 1 tree
	int v[2] = { a[0] - b[0], a[1] - b[1] };
	if (v[0] == 0) {
		int gap = a[1] - b[1];
		return { a[0] + gap, a[0], b[0] + gap, b[1] };
	}
	if (v[1] == 0) {
		int gap = a[0] - b[0];
		return { a[0], a[1] + gap, b[0], a[1] + gap };
	}
	if (abs (v[0]) == abs (v[1])) {
		return { a[0], b[1], b[0], a[1] };
	}
	return { -1 };
}

int main () {
	int c1[2];
	int c2[2];
	cin >> c1[0] >> c1[1];
	cin >> c2[0] >> c2[1];
	for (auto x : solution (c1, c2)) {
		cout << x << " ";
	}
	return 0;
}