//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node *reverse(Node *head) {
        Node *next = NULL, *prev = NULL, *curr = head;
        while(curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(Node *head1, Node *head2) {
        while(head1 && head2) {
            if(head1->data != head2->data)
                return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        return head1 == head2;
    }
    
    bool isPalindrome(Node *head)
    {
        Node *temp = new Node(head->data);
        Node *prev = temp;
        Node *ptr = head->next;
        while(ptr) {
            prev->next = new Node(ptr->data);
            prev = prev->next;
            ptr = ptr->next;
        }
        Node *head2 = reverse(temp);
        return isPalindrome(head, head2);
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends