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
    int goodNodes(TreeNode* root) {
        if(!root)
            return 0;
        int count = 0;
        int temp = INT_MIN;
        inorder(root, count, temp);
        return count;
    }
    
    void inorder(TreeNode *root, int &count, int temp) {
        if(root == NULL)
            return;
        if(root->val >= temp)
            count++;
        inorder(root->left, count, max(temp, root->val));
        inorder(root->right, count, max(temp, root->val));
    }
};