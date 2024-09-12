#include <iostream>
#include <string>

using namespace std;

void solution(int a){
    int nums = a/2;
    cout << nums<<endl;
    for (int i=1; i<nums; i++){
        cout << 2 << " ";
    }
    if (a%2==0){
        cout << 2;
    }else{
        cout << 3;
    }
}

int main()
{
    int a; cin >> a;
    solution(a);
    return 0;
}