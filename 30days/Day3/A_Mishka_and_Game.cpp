#include <iostream>
#include <string>

using namespace std;

void solution(int n){
    int answer = 0;
    int Mishka[100], Chris[100];
    for (int i=0; i<n; i++){
        // cout << answer;
        cin >> Mishka[i] >> Chris[i];
        if (Mishka[i]>Chris[i]){
            answer += 1;
        }else{
            if (Mishka[i] < Chris[i]){
                answer -= 1;
            }
        }
    }
    // cout << answer;
    if (answer>0){
        cout << "Mishka";
    }else{
        if (answer<0){
            cout << "Chris";
        }else{
            cout << "Friendship is magic!^^";
        }
    }
}

int main()
{
    int n; cin>> n;
    solution(n);
    return 0;
}