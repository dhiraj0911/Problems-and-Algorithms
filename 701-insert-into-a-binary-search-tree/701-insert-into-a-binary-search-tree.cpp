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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *parent, *curr = root;
        TreeNode *temp = new TreeNode(val);
        if(root == NULL){
            return temp;
        }
        while(curr != NULL){
            parent = curr;
            if(curr->val == val)
                return root;
            else if(curr->val > val)
                curr = curr->left;
            else
                curr = curr->right;
        }
        if(parent == NULL)
            return temp;
        else if(parent->val > val)
             parent->left = temp;
        else
            parent->right = temp;
        return root;
    }
};