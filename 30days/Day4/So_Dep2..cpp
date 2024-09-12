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

int main () {
    int n, k;
    cin >> n >> k;
    for (int i = n; i <= k; i++) {
        if (So_Thuan_Nghich (i)) {
            int count = 0;
            for (int j = 2; j <= i; j++) {
                if (count >= 3) {
                    cout << i << " ";
                    break;
                }
                if (check_SNT (j) && (i % j == 0)) {
                    // cout << j << " ";
                    count++;
                }
            }
        }
        // cout << endl;
    }

    return 0;
}