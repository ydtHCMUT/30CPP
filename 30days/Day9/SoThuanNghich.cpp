#include <iostream>
#include <string>

using namespace std;

bool solution (string a) {
	int n	   = a.length ();
	string tmp = "";
	for (int i = n - 1; i >= 0; i--) {
		tmp += a[i];
	}
	// cout << tmp;
	if (tmp == a) {
		return 1;
	}
	return 0;
}

int main () {
	int TC;
	cin >> TC;
	while (TC--) {
		string a;
		cin >> a;
		if (solution (a)) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << "\n";
	}
	return 0;
}