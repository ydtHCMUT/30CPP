#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool checking (long long x) {
    vector<int> v;
    while (x > 0) {
        int k = x % 10;
        v.push_back (k);
        x = (x - k) / 10;
    }
    if (v.size () == 1) {
        return true;
    }
    bool temp = v[0] > v[1];
    for (int i = 0; i < v.size () - 1; i++) {
        if (v[i] == v[i + 1]) {
            return false;
        }
        if (v[i] > v[i + 1] != temp) {
            return false;
        }
    }
    return true;
}

void solution (long long min_val, long long max_val) {
    bool prime[max_val + 1];
    for (long long i = 2; i <= max_val; i++) {
        prime[i] = true;
    }
    for (long long i = 2; i <= max_val; i++) {
        if (prime[i] == true) {
            for (long long j = i; j <= max_val / i; j++) {
                prime[i * j] = false;
            }
        }
    }
    int count = 0;
    // cout << checking (prime[11]) << endl;
    for (int i = min_val; i <= max_val; i++) {
        if (prime[i] && checking (i)) {
            // cout << i << " ";
            count++;
        }
    }
    cout << count;
}

int main () {
    long long n;
    cin >> n;
    long long min_val, max_val = 1;
    for (long long i = 1; i <= n; i++) {
        max_val *= 10;
    }
    min_val = max_val / 10;
    max_val -= 1;
    // cout << min_val << " " << max_val;
    solution (min_val, max_val);
    // cout << checking (n);
    return 0;
}