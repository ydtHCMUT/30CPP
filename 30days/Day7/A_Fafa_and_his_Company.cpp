#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
	int count = 0;
	for (int i = 1; i <= a / 2; i++) {
		if (a % i == 0) {
			count++;
		}
	}
	cout << count;
}

int main () {
	int a;
	cin >> a;
	solution (a);
	return 0;
}