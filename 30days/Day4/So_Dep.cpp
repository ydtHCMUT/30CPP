#include <iostream>
#include <math.h>
#include <streambuf>
#include <vector>

using namespace std;


int tinh_tong (int n) {
    int sum = 0;
    while (n > 0) {
        int k = n % 10;
        sum += k;
        n = (n - k) / 10;
    }
    return sum;
}

bool Check_SNT (int n) {
    for (int i = 2; i <= sqrt (n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}


bool check_Fibonacci (int n) {
    int so1 = 0;
    int so2 = 1;
    int temp;
    while (so2 < n) {
        temp = so2 + so1;
        so1  = so2;
        so2  = temp;
    }
    if (n == so2 || n == so1) {
        return true;
    }
    return false;
}

int main () {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (Check_SNT (i) && check_Fibonacci (tinh_tong (i))) {
            cout << i << " ";
        }
    }
    // cout << check_Fibonacci (n);
    return 0;
}