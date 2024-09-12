#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
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