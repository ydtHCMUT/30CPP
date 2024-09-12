#include <iostream>
#include <string>

using namespace std;

void solution(int a, int b, int c){
    int answer = 0;
    int money = (c*(c+1)/2)*a;
    if (b>= money){
        cout << 0;
    }else{
        cout << money - b;
    }
}

int main()
{
    int a, b, c; cin >> a >> b >> c;
    solution(a, b, c);
    return 0;
}