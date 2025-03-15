//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
         int total_sum = 0, left_sum = 0;

    // Calculate the total sum of the array
    for (int num : arr) {
        total_sum += num;
    }

    // Traverse the array to find the equilibrium index
    for (int i = 0; i < arr.size(); i++) {
        // Check equilibrium condition
        if (left_sum == total_sum - left_sum - arr[i]) {
            return i; // Found the equilibrium index
        }
        left_sum += arr[i]; // Update left sum
    }

    return -1; // No equilibrium index found
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findEquilibrium(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends