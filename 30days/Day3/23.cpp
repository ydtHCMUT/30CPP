#include <iostream>
#include <string>

using namespace std;

void solution (int a, int b) {
    // X X X X X X
    // 1 2 3 4 5 6 7 8
    int factorial = 1;
    int ways = 1;
    int answer;
    for (int i = 1; i <= b - 1; i++) {
        factorial *= i;
        // cout << factorial<<endl;
        ways *= (a-i);
        answer = ways/factorial;
    }
    // int answer = ways/factorial;
    cout << answer;
}

int main () {
    int a, b;
    cin >> a >> b;
    solution (a, b);
    return 0;
}