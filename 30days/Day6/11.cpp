#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
    int temp=0;
    for (int i=1; i<=a; i++){
        for (int j=i; j>=2; j--){
            cout << j;
        }
        for (int j=1; j<=a-temp; j++){
            cout << j;
        }
        temp++;
        cout << endl;
    }
}

int main () {
    int a;
    cin >> a;
    solution (a);
    return 0;
}