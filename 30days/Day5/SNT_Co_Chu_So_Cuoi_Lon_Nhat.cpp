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
    set<int> s;
    int k = 0;
    k     = n % 10;
    while (n != 0) {
        s.insert (n % 10);
        n /= 10;
    }
    if (k == *s.rbegin ()) {
        return true;
    }
    // cout << *s.rbegin ();
    return false;
}


int main () {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (KiemTra (i) && CheckSNT (i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl << count;
    // cout << KiemTra (n);
    return 0;
}