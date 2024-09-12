// #include <cmath>
#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;

bool KiemTra (int n) {
    // n is a Fibonancci number only if 5n^2+-4 is a perfect sqareroot of an number
    int tmp1 = 5 * n * n - 4;
    int tmp2 = 5 * n * n + 4;
    if (sqrt (tmp1) * sqrt (tmp1)) {
        return true;
    }
    if (sqrt (tmp2) * sqrt (tmp2) == tmp2) {
        return true;
    }
    return false;
}


int main () {
    int n;
    cin >> n;
    cout << KiemTra (n);
    return 0;
}