#include <iostream>
#include <streambuf>
#include <vector>

using namespace std;

void finding_Fibonacci (int n) {
    int so1 = 0;
    int so2 = 1;
    cout << so1 << " " << so2 << " ";
    for (int i = 2; i < n; i++) {
        int s3 = so1 + so2;
        so1    = so2;
        so2    = s3;
        cout << so2 << " ";
    }
}



int main () {
    int n;
    cin >> n;
    finding_Fibonacci (n);
    return 0;
}