#include <iostream>

using namespace std;


void Solution (int n) {
    int temp   = n;
    int result = 0;
    // how long of N --> 10...0
    //  n
    int k = 1;
    while (n != 0) {
        result *= 10;
        if (n == temp) {
            result = n % 10;
        }
        if (n < 10) {
            result += n;
        }
        k *= 10;
        n /= 10;
    }
    k /= 10;
    k      = k * (temp / k) + temp % 10;
    result = result + (temp - k);
    cout << result;
}


int main () {
    int n;
    cin >> n;
    Solution (n);
    return 0;
}