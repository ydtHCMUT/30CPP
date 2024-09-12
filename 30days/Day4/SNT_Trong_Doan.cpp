#include <iostream>
#include <math.h>

using namespace std;

bool check_SNT (int n) {
    for (int i = 2; i <= sqrt (n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

bool tinh_tong (int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 10 == 0) {
        return true;
    }
    return false;
}

bool So_Thuan_Nghich (int n) {
    int m = n;
    int k = 0;
    while (n > 0) {
        k = k * 10 + n % 10;
        n /= 10;
    }

    // cout << k << endl;
    if (k == m) {
        return true;
    }
    return false;
}

int cmax_val (int n) {
    int max_val = 1;
    for (int i = 1; i <= n; i++) {
        max_val = max_val * 10;
    }
    return max_val;
}

int main () {
    int n, k;
    cin >> n >> k;
    for (int i = n; i <= k; i++) {
        if (check_SNT (i)) {
            cout << i << " ";
        }
    }
    return 0;
}