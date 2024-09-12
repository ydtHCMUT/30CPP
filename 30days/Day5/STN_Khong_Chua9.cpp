// #include <cmath>
#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;

bool CheckSNT (int n) {
    for (int i = 2; i <= sqrt (n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

int TinhTong (int n) {
    int sum = 0;
    while (n != 0) {

        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool SoThuanNghich (int n) {
    int tmp = n;
    int k   = 0;
    while (n != 0) {
        if (n % 10 == 9) {
            return false;
        }
        k = k * 10 + n % 10;
        n /= 10;
    }
    if (k == tmp) {
        return true;
    }
    return false;
}

bool KiemTra (int n) {
    if (SoThuanNghich (n)) {
        return true;
    }
    return false;
}


int main () {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (KiemTra (i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl << count;
    return 0;
}