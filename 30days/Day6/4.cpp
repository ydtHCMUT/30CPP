#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
    for (int i=a; i>=1; i--){
        if (i==1){
            cout << '*';
            continue;
        }
        else if (i==a){
            for (int j=1; j<=a; j++){
                cout << '*';
            }
            cout << endl;
        }
        else{
            cout << '*';
            for (int j=2; j<=i-1; j++){
                cout << '.';
            }
            cout << '*'<< endl;
        }
    }
}

int main () {
    int a;
    cin >> a;
    solution (a);
    return 0;
}