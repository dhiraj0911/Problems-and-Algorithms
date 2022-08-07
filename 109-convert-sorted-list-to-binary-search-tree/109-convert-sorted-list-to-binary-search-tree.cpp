/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL)
            return NULL;
        vector<int> v;
        GetVec(head, v);
        int low = 0, high = v.size() - 1;
        TreeNode *dummy;
        PreOrder(dummy, v, low, high);
        return dummy;
    }
    
    void PreOrder(TreeNode *&dummy, vector<int> &v, int low, int high){
        if(low > high)
            return;
        int mid = (low + high) / 2;
        TreeNode *temp = new TreeNode(v[mid]);
        dummy = temp;
        PreOrder(dummy->left, v, low, mid - 1);
        PreOrder(dummy->right, v, mid + 1, high);
    }
    
    void GetVec(ListNode *head, vector<int> &v){
        if(head == NULL)
            return;
        v.push_back(head->val);
        GetVec(head->next, v);
    }
};