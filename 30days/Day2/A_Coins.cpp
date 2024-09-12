#include <iostream>

#include <string>

using namespace std;

void solution(int a, int b) {
    int answer = 0;
    if (b % a == 0) {
        answer = b / a;
    } else {
        answer = b / a + 1;
    }
    cout << answer;
}

int main() {
    int a, b;
    cin >> a >> b;
    solution(a, b);
    return 0;
}