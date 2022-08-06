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
    void Inorder(TreeNode* root, vector<int> &v){
        if(root == NULL)
            return;
        Inorder(root->left, v);
        v.push_back(root->val);
        Inorder(root->right, v);
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        Inorder(root, v);
        int i = 1;
        while(i < v.size()){
            if(v[i - 1] < v[i])
                i++;
            else
                return false;
        }
        return true;
    }
};