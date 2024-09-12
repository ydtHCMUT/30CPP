#include <iostream>
#include <memory>
#include <string>

using namespace std;


// counting possilble ways to

int nCk (int n, int k) {
    int factorial = 1;
    for (int i = 1; i <= k; i++) {
        factorial *= i;
    }
    int ways = 1;
    for (int i = n; i >= n - k + 1; i--) {
        ways *= i;
    }
    int answer = ways / factorial;
    return answer;
}

// n: childs
// m: apple


void solution (int human, int apple) {
    int answer = 0;
    if (human >= apple) {
        // just run to apple
        for (int i = 1; i <= apple; i++) {
            if (i == 1) {
                answer += nCk (human, i);
                // cout << answer << endl;
                continue;
            }
            answer += nCk (human, i) * nCk (apple-1, i - 1);
            // cout << answer << endl;
        }
    }
    cout << answer;
}

int main () {
    int human, apple;
    cin >> human >> apple;
    // cout << nCk (n, m);
    solution (human, apple);

    return 0;
}