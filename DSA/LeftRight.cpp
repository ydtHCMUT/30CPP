//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends


class Solution {
	public:
	bool leftRight (int arr[], int n) {
		bool tmp[n];
		int k = n - 1;

		// set flag for all value in tmp = 0
		for (int i = 0; i <= k; i++) {
			tmp[i] = 0;
		}
		for (int i = 0; i <= k; i++) {
			if (arr[i] > k) {
				return false;
			}
			// these two places are already have number then if we had another --> return false
			if (tmp[arr[i]] == 1 && tmp[k - arr[i]] == 1) {
				return false;
			}
			if (tmp[arr[i]] == 0) {
				tmp[arr[i]] = arr[i];
			} else {
				tmp[k - arr[i]] = arr[i];
			}
		}
		for (int i = 0; i <= k; i++) {
			if (tmp[i] == 0 && i != 0 && i != k) {
				return false;
			}
		}
		return true;
	}
};
//{ Driver Code Starts.
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n + 5];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		Solution ob;
		cout << ob.leftRight (a, n) << endl;
	}
	return 0;
}

// } Driver Code Ends