#include <stdio.h>

#include <iostream>

#include <string>

using namespace std;

void solution(int a) {
    // int answer = 0;
    int x, y, z, t, w;
    x = 0;
    y = 0;
    z = 0;
    t = 0;
    w = 0;
    x = a / 100;
    y = (a - 100 * x) / 20;
    z = (a - 100 * x - 20 * y) / 10;
    t = (a - 100 * x - 20 * y - 10 * z) / 5;
    w = (a - 100 * x - 20 * y - 10 * z - 5 * t);
    cout << x + y + z + t + w;
}

int main() {
    int a;
    cin >> a;
    solution(a);
    return 0;
}