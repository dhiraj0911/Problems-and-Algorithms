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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        string temp = "";
        findPath(root, v, temp);
        return v;
    }
    
    void findPath(TreeNode *root, vector<string> &v, string temp) {
        if(!root)
            return;
        if(!root->left && !root->right){
            temp += to_string(root->val);
            v.push_back(temp);
            return;
        }
        temp += to_string(root->val) + "->";
        findPath(root->left, v, temp);   
        findPath(root->right, v, temp);
    }
};