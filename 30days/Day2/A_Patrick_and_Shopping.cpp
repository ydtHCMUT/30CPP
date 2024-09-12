#include <iostream>
#include <string>

using namespace std;

void solution (long long a, long long b, long long c) {
    long long answer = 0;
    // house --> dt1 --> dt2 --> ... house
    // if (a>=b){
    //     answer += b;
    //     if (a+b >= c ){
    //         answer += c;
    //         if ( a >= b+c ){
    //             answer += (b+c);
    //         }else{
    //             answer += a;
    //         }
    //     }else{
    //         answer += (a+b);
    //         if ( a >= b+c ){
    //             answer += (b+c);
    //         }else{
    //             answer += a;
    //         }
    //     }
    // }else{
    //     answer += a;
    //     if (a+b >= c ){
    //         answer += c;
    //         if ( b >= a+c ){
    //             answer += (a+c);
    //         }else{
    //             answer += b;
    //         }
    //     }else{
    //         answer += (a+b);
    //         if ( b >= a+c ){
    //             answer += (a+c);
    //         }else{
    //             answer += b;
    //         }
    //     }
    // }
    if (a + b > c) {
        answer += c;
        if (a >= b) {
            answer += b;
            if (a >= b + c) {
                answer += b + c;
            } else {
                answer += a;
            }
        } else {
            answer += a;
            if (b >= a + c) {
                answer += a + c;
            } else {
                answer += b;
            }
        }
    } else {
        answer += 2 * (a + b);
        cout << answer;
        return;
    }

    cout << answer;
}

int main () {
    long long a, b, c;
    cin >> a >> b >> c;
    solution (a, b, c);
    return 0;
}