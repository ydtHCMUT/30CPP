#include <iostream>
#include <string>

using namespace std;

void solution(int a){
    int answer = 0;
    for (int i = 1; i <= a; i++)
    {
        /* code */
        answer += i*i;
    }
    cout << answer;
}

int main()
{
    int a; cin >> a;
    solution(a);
    return 0;
}