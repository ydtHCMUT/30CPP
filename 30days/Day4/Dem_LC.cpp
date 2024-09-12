#include <iostream>
#include <math.h>

using namespace std;


void DemSo (int n) {
    int So_Chan = 0;
    int So_Le   = 0;
    while (n != 0) {
        int k = n % 10;
        if (k % 2 == 0) {
            So_Chan++;
        } else {
            So_Le++;
        }
        n /= 10;
    }
    cout << So_Chan << " " << So_Le;
}

int cmax_val (int n) {
    int max_val = 1;
    for (int i = 1; i <= n; i++) {
        max_val = max_val * 10;
    }
    return max_val;
}

int main () {
    int n;
    cin >> n;
    DemSo (n);
    return 0;
}