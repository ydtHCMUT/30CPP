#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
	for (int i = 1; i <= a; i++) {
		for (int j = i; j <= a - 1; j++) {
			cout << '~';
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = a - 1; i >= 1; i--) {
		for (int j = i; j <= a - 1; j++) {
			cout << '~';
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

int main () {
	int a;
	cin >> a;
	solution (a);
	return 0;
}