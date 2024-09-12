#include <iostream>

using namespace std;


void Solution (int n) {
    int k = n % 10;
    while (n != 0) {
        if (n < 10) {
            cout << n << " ";
        }
        n /= 10;
    }
    cout << k;
}


int main () {
    int n;
    cin >> n;
    Solution (n);
    return 0;
}