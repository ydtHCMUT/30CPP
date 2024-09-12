#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
    long long lens = 0;
    long long sum  = 0;
    while (a != 0) {
        // cout << sum << endl;
        sum = sum + a % 10;
        a   = (a - (a % 10))/10;
        // cout << a << endl;   
    }
    sum += a;
    cout << sum;
}

int main () {
    int a;
    cin >> a;
    solution (a);
    return 0;
}