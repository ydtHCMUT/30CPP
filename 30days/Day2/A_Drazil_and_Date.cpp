#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void solution(int a, int b, int s){
    a = abs(a);
    b = abs(b);
    bool answer;
    while ( a+b < s){
        s = s-2;
    }
    if (s == a + b){
        cout << "Yes";
    }else{
        cout << "No";
    }
}

int main()
{
    int a, b, s; cin >> a >> b >> s;
    solution(a, b, s);
    return 0;
}