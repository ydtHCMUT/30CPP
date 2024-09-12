#include <cmath>
#include <iostream>

using namespace std;


int Pow3 (int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int k = n;
    for (int i = 1; i <= 2; i++) {
        n *= k;
    };
    return n;
}

bool KiemTra (int n) {
    int sum = 0;
    int m   = n;
    while (n != 0) {
        int k = n % 10;
        sum += Pow3 (k);
        n /= 10;
    }
    if (sum == m) {
        return true;
    }
    return false;
}


int main () {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (KiemTra (i)) {
            cout << i << " ";
        }
    }
    return 0;
}