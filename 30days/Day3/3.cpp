#include <iostream>
#include <string>

using namespace std;

void solution(int a){
    int answer = 0;
    for (int i=3; i<=a; i+=3){
        answer += i;
    }
    cout << answer;
}

int main()
{
    int a; cin >> a;
    solution(a);
    return 0;
}