#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

void  solution(long long a){
    int year = a / 365;
    int week = (a % 365)%7;
    int day = a - year*365 - week*7;
    cout << year << " " << week << " " << day;
}

int main(){
    long long a; cin >> a;
    solution(a);
    return 0;
}