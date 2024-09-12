#include <iostream>
#include <string>

using namespace std;

void solution(int a, int b){
    int steps = 0;
    int max = a;
    int min = a/2;
    // cout << min << endl;
    // cout << min;
    if (max >= b){
        if (a%2==0 && min%b==0){
            steps = min;
        }else{
            steps = min - min%b + b;
        }
    }else{
        steps = -1;
    }
    cout << steps;
}

int main()
{
    int a, b; cin >> a >> b;
    solution(a, b);
    return 0;
}