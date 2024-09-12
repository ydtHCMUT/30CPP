#include <iostream>

using namespace std;

int Factorial (int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void Solution (int n) {
    // (n,k) = n!/k!(n-k)!
    // n row, k column
    cout << 1 << endl;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << Factorial (i) / (Factorial (j) * Factorial (i - j)) << " ";
        }
        cout << endl;
    }
}


int main () {
    int n;
    cin >> n;
    Solution (n);
    return 0;
}