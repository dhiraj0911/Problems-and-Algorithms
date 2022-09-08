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
    int findSecondMinimumValue(TreeNode* root) {
        set<int> s;
        inorder(root, s);
        vector<int> v;
        for(auto x: s) 
            v.push_back(x);
        if(v.size() <= 1)
            return -1;
        return v[1];
    }
    
    void inorder(TreeNode *root, set<int> &s) {
        if(root == NULL)
            return;
        inorder(root->left, s);
        s.insert(root->val);
        inorder(root->right, s);
    }
};