#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void solution (int N) {
    int answer = 0;
    int temp   = 0;
    // int d5     = N - N % 5;
    for (int i = 5; i <= N; i *= 5) {
        temp = N-(N%i);
        int di = (N-i)/i+1;
        answer += di;
    }
    // cout << d5 << " " << d10;
    cout << answer;
}

int main () {
    int a;
    cin >> a;
    solution (a);
    return 0;
}