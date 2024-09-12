#include <iostream>
#include <math.h>
#include <string>

using namespace std;

bool is_prime (int b) {
    for (int i = 2; i <= sqrt (b); i++) {
        if (b % i == 0) {
            return false;
        }
    }
    return b > 1;
}

void solution (long long a) {
    long long lens = 0;
    int sl_p       = 0;
    long long sum  = 0;
    while (a != 0) {
        if (is_prime (a % 10)) {

            sl_p += 1;
        }
        a = (a - (a % 10)) / 10;
    }
    cout << sl_p;
}

int main () {
    long long a;
    cin >> a;
    solution (a);
    return 0;
}