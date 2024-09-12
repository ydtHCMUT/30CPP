#include <iostream>
#include <limits>
#include <math.h>

using namespace std;

bool KiemTra (int n) {
    int temp = n;
    int sum  = 0;
    while (n != 0) {
        int k = n % 10;
        if (k != 0 && k != 6 && k != 8) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main () {
    int n;
    cin >> n;
    cout << KiemTra (n);
    return 0;
}