//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
         int low = 0, high = arr.size() - 1;
    
    // If the first element is 1, transition point is at index 0
    if (arr[0] == 1) return 0;
    
    // If the last element is 0, no transition point exists
    if (arr[high] == 0) return -1;

    // Binary Search for the first occurrence of 1
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if mid is the first occurrence of 1
        if (arr[mid] == 1 && (mid == 0 || arr[mid - 1] == 0))
            return mid;
        
        // If arr[mid] is 1, search left for an earlier occurrence
        else if (arr[mid] == 1)
            high = mid - 1;

        // If arr[mid] is 0, search right
        else
            low = mid + 1;
    }

    return -1; // If no transition point was found
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
        cout << ob.transitionPoint(arr) << endl;

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends