//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
    vector<int> result;
    int i = 0, j = 0;
    int n = a.size(), m = b.size();

    while (i < n && j < m) {
        while (i > 0 && i < n && a[i] == a[i - 1]) i++;
        while (j > 0 && j < m && b[j] == b[j - 1]) j++;

        if (i < n && j < m) {
            if (a[i] < b[j]) {
                result.push_back(a[i++]);
            } else if (a[i] > b[j]) {
                result.push_back(b[j++]);
            } else {
                result.push_back(a[i]);
                i++; j++;
            }
        }
    }

    while (i < n) {
        if (i == 0 || a[i] != a[i - 1]) result.push_back(a[i]);
        i++;
    }
    while (j < m) {
        if (j == 0 || b[j] != b[j - 1]) result.push_back(b[j]);
        j++;
    }

    return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends