#include <iostream>

using namespace std;


// use for Sorted array only

bool BinarySearch (int arr[], int key, int l, int r) {
    int mid = r - (r - l) / 2;
    if (arr[mid] == key) {
        return true;
    }
    if (l >= r) {
        return false;
    }
    if (arr[mid] > key) {
        return BinarySearch (arr, key, l, mid - 1);
    }
    if (arr[mid] < key) {
        return BinarySearch (arr, key, mid + 1, r);
    }
}

int main () {

#ifndef ONLINE_JUDGE
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    if (BinarySearch (arr, key, 0, n - 1)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}