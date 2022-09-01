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
    vector<vector<int>> ans;
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        vecPath(root, targetSum, v, 0);
        return ans;
    }
    
    void vecPath(TreeNode* root, int targetSum, vector<int> &v, int s){
        if(!root)
            return;
        s += root->val;
        v.push_back(root->val);
        if(root->left == NULL && root->right == NULL) {
            if(s == targetSum){
                ans.push_back(v);
            }
        }
        vecPath(root->left, targetSum, v, s);
        vecPath(root->right, targetSum, v, s);
        v.pop_back();
    }
};