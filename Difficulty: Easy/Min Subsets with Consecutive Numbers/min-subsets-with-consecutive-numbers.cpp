//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int numOfSubset(vector<int> &arr) {
        if (arr.empty()) return 0; // Edge case: empty array
    

    sort(arr.begin(), arr.end());

    int count = 1; 


    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i - 1] + 1) {
            count++; 
        }
    }

    return count;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.numOfSubset(nums)
             << endl; // Corrected the function name and argument
    }
    return 0;
}

// } Driver Code Ends