#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
    for (int i=a; i>=1; i--){
        for (int j=a-i;j>=1; j--){
            cout << '~';
        }
        if (i==a){
            for (int j=a; j>=1; j--){
                cout << '*';
            }
            cout << endl;
            continue;
        }else if (i==1)
        {
            cout << '*';
            continue;
        }else{
            cout << '*';
            for (int j=i-1; j>=2;j--){
                cout << '.';
            }
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