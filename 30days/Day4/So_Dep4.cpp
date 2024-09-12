#include <iostream>

using namespace std;


bool KiemTra (int n) {
    bool Dk1 = false;
    bool Dk2 = false;
    // Store value of n
    int temp = n;
    int m    = 0;
    int sum  = 0;
    while (n != 0) {
        int k = n % 10;
        m     = m * 10 + k;
        if (k == 6) {
            Dk1 = true;
        }
        sum += k;
        n /= 10;
    }
    if (temp == m) {
        Dk2 = true;
    }
    if ((sum - 8) % 10 == 0 && Dk1 && Dk2) {
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