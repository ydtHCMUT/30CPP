#include <iostream>
#include <string>

using namespace std;

void solution (long long a, long long b) {
    for (int i=1; i<=a; i++){
        char a;
        if (i%2==0){
            a= '0';
        }else{
            a='1';
        }
        for (int j=1; j<=b; j++){
            cout << a;
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