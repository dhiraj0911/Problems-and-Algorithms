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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        findans(root, q, ans);
        return ans;
    }
    
    void findans(TreeNode *root, queue<TreeNode*> &q, vector<double> &ans) {
        if(!root)
            return;
        q.push(root);
        while(!q.empty()) {
            int s = q.size();
            double add = 0;
            for(int i = 0; i < s; i++){
                TreeNode *temp = q.front();
                q.pop();
                add += temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back(add / s);
        }
    }
};