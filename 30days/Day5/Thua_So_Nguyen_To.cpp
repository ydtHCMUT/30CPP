// #include <cmath>
#include <cmath>
#include <iostream>
#include <math.h>
#include <set>

using namespace std;

bool CheckSNT (int n) {
    for (int i = 2; i <= sqrt (n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}


void Solution (int n) {
    for (int i = 2; i <= n; i++) {
        if (i == n) {
            cout << i;
            break;
        }
        while (n % i == 0) {
            cout << i << "x";
            n /= i;
        }
    }
}

int main () {
    int a;
    cin >> a;
    Solution (a);
    return 0;
}