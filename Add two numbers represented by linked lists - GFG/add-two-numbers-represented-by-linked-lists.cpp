//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    void reverse(Node* &head) {
        Node* prev = NULL, *next = NULL, *curr = head;
        while(curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* dummy = new Node(0);
        Node* prev = dummy;
        reverse(first);
        reverse(second);
        int carry = 0;
        while(first || second) {
            int f = first? first->data: 0;
            int s = second? second->data: 0;
            int sum = f + s + carry;
            carry = 0;
            if(sum > 9) 
                carry = 1;
            prev->next = new Node(sum % 10);    
            prev = prev->next;
            if(first)
                first = first->next;
            if(second)
                second = second->next;
        }
        if(carry == 1) {
            Node* temp = new Node(1);
            prev->next = temp;
            prev = temp;
        }
        reverse(dummy->next);
        return dummy->next;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends