#include <iostream>
#include <string>

using namespace std;

bool solution (long long a) {
	if (a % 2 == 0) {
		return true;
	} else {
		return false;
	}
}

int main () {
	int a;
	cin >> a;
	if (solution (a)) {
		cout << "Mahmoud";
	} else {
		cout << "Ehab";
	}
	return 0;
}