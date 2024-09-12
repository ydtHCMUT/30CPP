#include <iostream>
#include <string>

using namespace std;

int counting_lens(long long a){
    long long answer = 1;
    long long i=10;
    while (a / i != 0){
        answer++;
        i*=10;
    }
    return answer;
}


void solution(int a, int b){
    int lens = counting_lens(b);
    if (a < lens){
        cout << -1;
    }else{
        if (lens >= 2){
            a -= (lens-1);     
        }
        cout << b;
            for (int i=2; i<=a; i++){
                cout << 0; 
            }
    }
}

int main()
{
    int a, b; cin >> a >> b;
    solution(a, b);
    return 0;
}