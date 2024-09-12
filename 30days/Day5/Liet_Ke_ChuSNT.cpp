#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

void solution (string n) {
    unordered_map<char, int> mp;
    for (int i=0; i<n.length(); i++){
        if (n[i]=='2'||n[i]=='3'||n[i]=='5'||n[i]=='7'){
            mp[n[i]]++;
        }
    }
    for (auto x: mp){
        cout << x.first<< " "<< x.second<< endl;
    }
}

int main () {
    string n;
    cin >> n;
    solution (n);
    return 0;
}