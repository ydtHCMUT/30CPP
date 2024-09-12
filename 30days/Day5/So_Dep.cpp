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


bool KiemTra (int n) {
    for (int i = 2; i <= n / 2; i++) {
        // cout << n % i << " " << CheckSNT (i) << " " << n % (i * i);
        if (n % i == 0 && CheckSNT (i) && n % (i * i) == 0) {
            return true;
        }
    }
    return false;
}

int main () {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (KiemTra (i)) {
            cout << i << " ";
        }
    }
    return 0;
}