#include <iostream>
#include <map>
#include <unordered_set>
#include <vector>

using namespace std;

void solution (string n) {
    unordered_set<char> list;
    map<char, int> mp;
    for (int i = 0; i < n.length (); i++) {
        list.insert (n[i]);
    }
    for (auto x : list) {
        cout << x << endl;
    }
}

int main () {
    string n;
    cin >> n;
    solution (n);
    return 0;
}