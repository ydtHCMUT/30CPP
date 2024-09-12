#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
	for (int i = a; i >= 1; i--) {
		for (int j = 2 * (a - i); j > 0; j -= 2) {
			cout << "~~";
		}
		for (int j = i; j >= 1; j--) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 2; i <= a; i++) {
		for (int j = 2 * (a - i); j > 0; j -= 2) {
			cout << "~~";
		}
		for (int j = i; j >= 1; j--) {
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