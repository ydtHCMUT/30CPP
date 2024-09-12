#include <iostream>
using namespace std;

int split (int a1, int a2, int a3, int k) {
	int result = 0;
	int sum	   = a1 + a2 + a3;
	if (sum % k == 0) {
		return sum / k;
	}
	return sum / k + 1;
}

bool solution (int a1, int a2, int a3, int b1, int b2, int b3, int n) {
	int a = split (a1, a2, a3, 5);
	int b = split (b1, b2, b3, 10);
	if (a + b <= n) {
		return true;
	}
	return false;
}

int main () {
	int a1, a2, a3, b1, b2, b3, n;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;


	if (solution (a1, a2, a3, b1, b2, b3, n)) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}