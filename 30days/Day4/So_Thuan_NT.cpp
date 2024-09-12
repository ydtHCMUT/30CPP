#include <cstdio>
#include <iostream>
#include <math.h>

using namespace std;


int sum_of_nums (int a) {
    int sum = 0;
    while (a > 0) {
        int k = a % 10;
        if (k != 2 && k != 3 && k != 5 && k != 7) {
            return false;
        } else {
            sum += k;
        }
        a = (a - k) / 10;
    }
    return sum;
}

void san_SNT (long long a, long long b) {
    // default value = 1
    bool prime[1000001];
    for (int i = 2; i < 1000001; i++) {
        prime[i] = true;
    }
    for (long long i = 2; i <= b; i++) {
        if (prime[i]) {
            for (int j = i; j <= b / i; j++) {
                prime[i * j] = false;
            }
        }
    }


    int count = 0;
    for (long long i = a; i <= b; i++) {
        if (prime[i]) {
            if (prime[sum_of_nums (i)] == true && sum_of_nums (i)) {
                cout << i << " ";
            }
        }
    }
}

int main () {
    long long a, b;
    cin >> a >> b;
    // cout << check_SNT(2);
    san_SNT (a, b);
    return 0;
}