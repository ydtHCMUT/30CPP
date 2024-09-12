#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void solution(int a){
    double answer = 0;
    for (int i=1; i<=a; i++){
        answer += (double)1/i;
    }
    cout << fixed <<setprecision(3) << answer;
}

int main()
{
    int a; cin >> a;
    solution(a);
    return 0;
}