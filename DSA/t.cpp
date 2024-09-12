//{ Driver Code Starts
// #include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
	public:
	// Function returns the second
	// largest elements
	int print2largest (vector<int>& arr) {
		// Code Here
		set<int> s;
		for (int i = 0; i < arr.size (); i++) {
			s.insert (arr[i]);
		}
		if (s.size () == 1) {
			return -1;
		}
		auto it = s.end ();
		it--;
		it--;
		return *it;
	}
};

//{ Driver Code Starts.

int main () {
	int t;
	cin >> t;
	cin.ignore ();
	while (t--) {
		vector<int> arr;
		string input;
		getline (cin, input);
		stringstream ss (input);
		int number;
		while (ss >> number) {
			arr.push_back (number);
		}
		Solution ob;
		int ans = ob.print2largest (arr);
		cout << ans << endl;
	}
	return 0;
}

// } Driver Code Ends