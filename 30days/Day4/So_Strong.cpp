#include <iostream>
#include <math.h>

using namespace std;


int Factorial (int n) {
    int result = 1;
    if (n == 0) {
        return result;
    }

    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

bool KiemTra (int n) {
    int temp = n;
    int sum  = 0;
    while (n != 0) {
        int k = n % 10;
        sum += Factorial (k);
        n /= 10;
    }
    // cout << n << " " << sum << endl;
    if (temp == sum) {
        return true;
    }
    return false;
}


int main () {
    int n, k;
    cin >> n >> k;
    // cout << Factorial (1);
    for (int i = n; i <= k; i++) {
        if (KiemTra (i)) {
            cout << i << " ";
        }
    }
    return 0;
}