#include <iostream>
#include <string>

using namespace std;

void solution (long long a, long long b) {
    for (int i=1; i<=a; i++){
        for (int j=1; j<=b ;j++){
            cout << '1';
        }
        cout << endl;
    }
}

int main () {
    int a, b;
    cin >> a >> b;
    solution (a, b);
    return 0;
}