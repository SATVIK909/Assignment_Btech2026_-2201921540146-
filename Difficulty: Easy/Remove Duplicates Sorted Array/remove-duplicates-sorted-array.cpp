//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
         int n = arr.size();
        if (n == 0) return 0;  // Edge case: empty array

        int j = 1; // Pointer to track unique elements position

        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[j - 1]) { // If new unique element found
                arr[j] = arr[i]; // Place it at index j
                j++;
            }
        }
        return j; // Return count of unique elements
    }
};
        
        


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.removeDuplicates(arr);
        for (int i = 0; i < ans; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends