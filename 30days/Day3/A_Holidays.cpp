#include <iostream>
#include <string>

using namespace std;

void solution(int a){
    int answer = 0;
    int week = a/7;
    int max =0;
    int min = week*2;
    if (a % 7 <= 2){
        max = week*2+a%7;
    }else{
        if (a%7>=6){
            min += (a%7)-5;
        };
        max = week*2+2;
    }
    cout << min << " " << max;
}

int main()
{
    int a; cin >> a;
    solution(a);
    return 0;
}