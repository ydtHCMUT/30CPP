#include <iostream>

using namespace std;

int main () {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int k = a + b + c + d + e;
	if (k == 0) {
		cout << -1;
	} else {
		if (k % 5 == 0) {
			cout << k / 5;
		} else {
			cout << -1;
		}
	}
	return 0;
}