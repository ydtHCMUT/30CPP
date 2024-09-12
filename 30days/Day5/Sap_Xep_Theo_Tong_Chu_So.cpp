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


int TinhTong (int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main () {
    int a, b;
    cin >> a >> b;
    if (TinhTong (a) < TinhTong (b)) {
        cout << a << " " << b;
    } else {
        cout << b << " " << a;
    }
    return 0;
}