#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
	for (int i = a; i >= 1; i--) {
		for (int j = a; j > i; j--) {
			cout << j;
		}
		for (int j = i; j > 0; j--) {
			cout << i;
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