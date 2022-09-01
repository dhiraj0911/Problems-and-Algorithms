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
    
    vector<string> v;
    vector<string> binaryTreePaths(TreeNode* root) {
        string temp = "";
        findPath(root, temp);
        return v;
    }
    
    void findPath(TreeNode *root, string temp) {
        if(!root)
            return;
        if(temp.size() == 0)
            temp = temp + to_string(root->val);
        else
            temp = temp + "->" + to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            v.push_back(temp);
            return;
        }
        if(root->left != NULL)
            findPath(root->left, temp);
        if(root->right != NULL)   
            findPath(root->right, temp);
    }
};