#include <iostream>
#include <string>

using namespace std;

void counting_lens(long long a){
    long long answer = 1;
    long long i=10;
    while (a / i != 0){
        answer++;
        i*=10;
    }
    cout << answer;
}

int main()
{
    long long a; cin >> a;
    counting_lens(a);
    return 0;
}