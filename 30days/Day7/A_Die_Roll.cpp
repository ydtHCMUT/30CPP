#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void solution (long long a, long long b) {
	int k = max (a, b); // A=6-k in A/B
	k	  = 6 - k + 1;	// how many numbers between k and 6;
	int m = 6;			// this is the B
						// the case of 0% win is not exist
	if (k == 6) {
		cout << "1/1";
		return;
	}
	for (int i = 1; i <= k; i++) {
		if (k % i == 0 && m % i == 0) {
			k /= i;
			m /= i;
		}
	}
	cout << k << "/" << m;
}

int main () {
	int a, b;
	cin >> a >> b;
	solution (a, b);

	return 0;
}