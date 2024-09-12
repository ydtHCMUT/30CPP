#include <iostream>
#include <math.h>
using namespace std;

int solution (int k2, int k3, int k5, int k6) {
	int answer;
	int mmin256 = min (k2, min (k5, k6));
	k2 -= mmin256;
	answer = mmin256 * 256 + min (k2, k3) * 32;
	return answer;
}

int main () {

	int k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	cout << solution (k2, k3, k5, k6);
	return 0;
}