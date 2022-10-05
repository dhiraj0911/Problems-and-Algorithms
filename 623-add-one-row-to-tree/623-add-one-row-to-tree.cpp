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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        return inorder(root, val, 1, depth);
        // return root;
    }
    
    TreeNode *inorder(TreeNode *root, int val, int i, int depth) {
        if(!root)
            return NULL;
        if(i == depth) {
            TreeNode *temp = new TreeNode(val);
            temp->left = root;
            return temp;
        }
        if(i + 1 == depth) {
            TreeNode *left = new TreeNode(val);
            TreeNode *right = new TreeNode(val);
            TreeNode *temp = root->left;
            TreeNode *temp1 = root->right;
            root->left = left;
            left->left = temp;
            root->right = right;
            right->right = temp1;
            return root;
        }
        TreeNode *left = inorder(root->left, val, i + 1, depth);
        TreeNode *right = inorder(root->right, val, i + 1, depth);
        return root;
    }
};