#include <iostream>
#include <math.h>

using namespace std;

int factorial (int a) {
	if (a == 1 || a == 0) {
		return 1;
	}
	int result = 1;
	for (int i = 2; i <= a; i++) {
		result *= i;
	}
	return result;
}

int main () {
	int a, b;
	cin >> a >> b;
	cout << factorial (min (a, b));
	return 0;
}