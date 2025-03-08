//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to search x in arr
    int search(vector<int>& arr, int x) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {  // Check if the current element matches x
                return i;  // Return the index (0-based)
            }
        }
        return -1;  // If x is not found, return -1
    }
};


//{ Driver Code Starts.

int main() {
    int testcases;
    cin >> testcases;
    cin.ignore(); // To ignore the newline character after reading testcases
    while (testcases--) {
        vector<int> arr;
        int x;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, input); // Read the next line for x
        stringstream ss2(input);
        ss2 >> x;

        Solution ob;
        cout << ob.search(arr, x) << endl; // Linear search
        cout << '~' << endl;
    }

    return 0;
}
// } Driver Code Ends