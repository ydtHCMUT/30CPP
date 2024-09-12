#include <iostream>
#include <string>

using namespace std;

void solution (long long a, long long b, long long c) {
    long long answer = 0;
    // count the n -->
    long long x;
    if (a % c != 0) {
        x = a / c + 1;
    } else {
        x = a / c;
    }
    long long y;
    if (b % c != 0) {
        y = b / c + 1;
    } else {
        y = b / c;
    }
    cout << x * y;
}

int main () {
    long long a, b, c;
    cin >> a >> b >> c;
    // a: n, b: m;
    solution (a, b, c);
    return 0;
}