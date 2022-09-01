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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return checkSum(root, targetSum, 0);
    }
    
    bool checkSum(TreeNode *root, int target, int s) {
        if(!root)
            return false;
        if(root->left == NULL and root->right == NULL) {
            if(s + root->val == target) 
                return true;
            else
                return false;
        }
        int left = checkSum(root->left, target, s + root->val);
        int right = checkSum(root->right, target, s + root->val);
        return left or right;
    }
    
};