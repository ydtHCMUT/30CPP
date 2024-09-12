#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
    long long lens = 0;
    int sl_c       = 0;
    int sl_l       = 0;
    long long sum  = 0;
    while (a != 0) {
        if ((a % 10) % 2 == 0) {
            sl_c++;
        } else {
            sl_l++;
        }
        a = (a - (a % 10)) / 10;
        // cout << a << endl;
    }
    if (sl_c==sl_c){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

int main () {
    int a;
    cin >> a;
    solution (a);
    return 0;
}