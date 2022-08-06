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
    TreeNode* dummy=new TreeNode(-1);
    TreeNode* temp=dummy;

    TreeNode* increasingBST(TreeNode* root) {
        Inorder(root);
        return dummy->right;
    }
    void Inorder(TreeNode *root){
 
        if(root == NULL)
            return;
        Inorder(root->left);
        TreeNode *res = new TreeNode(root->val);
        temp->right = res;
        temp = temp->right;
        Inorder(root->right);
    }
};