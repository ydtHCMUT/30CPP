#include <iostream>
#include <string>

using namespace std;

bool solution (long long a, long long b, long long c, long long n) {
	int sum = a + b + c + n;
	// check if the sum % 3 == 0 if not return false;
	int k = sum / 3;
	if (3 * k == sum) {
		// if base coin is higher than average, there will be no way to distribute these coins equally
		if (a > k || b > k || c > k) {
			return false;
		}
		return true;
	} else {
		return false;
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, n;
		cin >> a >> b >> c >> n;
		if (solution (a, b, c, n)) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}
	return 0;
}