#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
	for (int i = 1; i <= a; i++) {
		if (i == 1 || i == a) {
			for (int j = 1; j <= i; j++) {
				cout << '*';
			}
			cout << endl;
			continue;
		}
		cout << '*';
		for (int j = 2; j <= i - 1; j++) {
			cout << '.';
		}
		cout << '*' << endl;
	}
}

int main () {
	int a;
	cin >> a;
	solution (a);
	return 0;
}