#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
    for (int i=a; i>=1; i--){
        for (int j=1; j<=i-1; j++){
            cout << '~';
        }
        for (int j=1; j<=a; j++){
            cout << '*';
        }
        cout << endl;
    }
}

int main () {
    int a;
    cin >> a;
    solution (a);
    return 0;
}