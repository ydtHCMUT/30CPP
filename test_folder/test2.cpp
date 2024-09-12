#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> Solution (int n) {
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        result.push_back (i);
    }
    return result;
}

int main () {
    int n;
    cin >> n;
    for (auto x : Solution (n)) {
        cout << x << " ";
    }
    return 0;
}