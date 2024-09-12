//{ Driver Code Starts
// #include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;


// } Driver Code Ends
class Solution {
	public:
	// Function to find a continuous sub-array which adds up to a given number.
	vector<int> subarraySum (vector<int> arr, int n, long long s) {
		// Your code here
		int first = 0, last = 0;
		long long sum = arr[last];
		while (first <= n - 1 && last <= n - 1) {
			// cout << sum << endl;
			if (s > sum) {
				// extend the sub array
				last++;
				sum += arr[last];
			}
			if (s < sum) {
				sum -= arr[first];
				first++;
			}
			// when first > right --> reset
			if (first > last) {
				last = first;
				sum	 = arr[first];
			}
			if (first <= last && s == sum) {
				return { first + 1, last + 1 };
			}
		}
		return { -1 };
	}
};

//{ Driver Code Starts.

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		long long s;
		cin >> n >> s;
		vector<int> arr (n);
		// int arr[n];
		const int mx = 1e9;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		Solution ob;
		vector<int> res;
		res = ob.subarraySum (arr, n, s);

		for (int i = 0; i < res.size (); i++)
			cout << res[i] << " ";
		cout << endl;
	}
	return 0;
}
// } Driver Code Ends