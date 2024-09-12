#include <iostream>
#include <string>

using namespace std;

void solution (long long a) {
    long long lens = 0;
    int sum_o_even =0;
    int sum_o_odd=0;
    long long sum  = 0;
    while (a != 0) {
        if((a%10)%2 ==0 ){
            sum_o_even+=a%10;
        }else{
            sum_o_odd +=a%10;
        }
        a   = (a - (a % 10))/10;
        // cout << a << endl;   
    }
    cout << sum_o_even<<endl<< sum_o_odd;
}

int main () {
    int a;
    cin >> a;
    solution (a);
    return 0;
}