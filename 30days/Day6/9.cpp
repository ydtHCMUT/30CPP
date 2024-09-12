#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
	int k = a * a;
	for (int i = 1; i <= k; i++) {
		cout << i;
		if (i % a == 0) {
			cout << endl;
		}
	}
}

int main () {
	int a;
	cin >> a;
	solution (a);
	return 0;
}