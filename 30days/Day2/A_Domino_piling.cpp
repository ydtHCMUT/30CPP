#include <iostream>
#include <string>

using namespace std;

void solution(int a, int b){
    int answer = 0;
    answer = (a*b)/2;
    cout << answer;
}

int main()
{
    int a, b; cin >> a >> b;
    solution(a, b);
    return 0;
}