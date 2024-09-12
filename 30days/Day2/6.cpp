#include <iostream>
#include <string>

using namespace std;

void solution (long long a, long long b, long long c) {
    long long answer = 0;
    // case 1: 2l < 1l --> mua sach 2 lit +1 lit
    // case 2: 1l >=2l/2 --> full 1l;
    if (b <= c / 2) {
        answer = a * b;
    } else {
        answer = (a / 2) * c + (a % 2) * b;
    }
    cout << answer;
}

int main () {
    long long a, b, c;
    cin >> a >> b >> c;
    solution (a, b, c);
    return 0;
}