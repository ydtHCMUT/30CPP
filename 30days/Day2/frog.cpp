#include <iostream>
#include <string>

using namespace std;

void solution (int a, int b, int c) {
    int answer = 0;
    // odd cs
    c = c - 1;
    int even;
    int odd;
    if (c % 2 == 0) {
        even = c / 2 + 1;
        odd  = (c - 2) / 2 + 1;
    } else {
        even = (c - 1) / 2 + 1;
        odd  = (c - 1) / 2 + 1;
    }
    // cout << odd << " " << even;
    answer = even * a - odd * b;
    cout << answer;
}

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    solution (a, b, c);
    return 0;
}