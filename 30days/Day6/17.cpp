#include <iostream>
#include <string>

using namespace std;

void solution (long long a, long long b) {
	for (int i = 0; i < a; i++) {
		for (int j = 1; j <= i; j++) {
			cout << '~';
		}
		for (int j = 1; j <= b; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

int main () {
	int a, b;
	cin >> a >> b;
	solution (a, b);
	return 0;
}