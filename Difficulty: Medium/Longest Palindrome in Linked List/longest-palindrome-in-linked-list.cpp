//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void append(struct Node** head_ref, struct Node** tail_ref, int new_data) {
    struct Node* new_node = new Node(new_data);

    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}


// } Driver Code Ends

/* The Node is defined
  /* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    int countCommon(Node *a, Node *b)
{
    int count = 0;
 
    for (; a && b; a = a->next, b = b->next)
 
        if (a->data == b->data)
            ++count;
        else
            break;
 
    return count;
}
 
int maxPalindrome(Node *head)
{
    int result = 0;
    Node *prev = NULL, *curr = head;
 
    while (curr)
    {
        Node *next = curr->next;
        curr->next = prev;
 
        result = max(result,
                     2*countCommon(prev, next)+1);
 
        result = max(result,
                     2*countCommon(curr, next));
 
        prev = curr;
        curr = next;
    }
    return result;
}
Node *newNode(int data) {
    Node *temp = new Node(data);  // Pass data to constructor
    temp->next = NULL;
    return temp;
}
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main() {
    int T, n, l;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> arr2;
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            arr2.push_back(number2);
        }
        if (arr2.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr2[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr2.size(); ++i) {
            data = arr2[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        cout << ob.maxPalindrome(head) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends