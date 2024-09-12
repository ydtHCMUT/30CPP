#include <iostream>
#include <math.h>

using namespace std;

int solution (int a, int b) {
	int k	   = 24 * 60;
	int result = k - (a * 60 + b);
	return result;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << solution (a, b) << endl;
	}
	return 0;
}