#include <iostream>
#include <string>

using namespace std;

void solution (long long a, long long b) {
    if (a == 1) {
        a = 2;
    }
    for (int i = a; i <= b; i++) {
        int sum = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            cout << i << " ";
        }
    }
}

int main () {
    int a, b;
    cin >> a >> b;
    solution (a, b);
    return 0;
}