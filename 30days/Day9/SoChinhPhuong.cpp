#include <iostream>
#include <math.h>
#include <string>

using namespace std;

bool solution (unsigned long long a) {
	unsigned long long k = sqrt (a);
	if (k * k == a) {
		return true;
	}
	return false;
}

int main () {
	int TC;
	cin >> TC;
	while (TC--) {
		unsigned long long a;
		cin >> a;
		if (solution (a)) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}

	return 0;
}