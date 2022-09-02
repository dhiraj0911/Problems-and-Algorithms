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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        inorder(root, ans, q);
        return ans;
    }
    
    void inorder(TreeNode* root, vector<vector<int>> &ans, queue<TreeNode*> q){
        if(!root)
            return;
        q.push(root);
        while(!q.empty()) {
            vector<int> res;
            int s = q.size();
            for(int i = 0; i < s; i++) {
                TreeNode *temp = q.front();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                q.pop();
                res.push_back(temp->val); 
            }
            ans.push_back(res);
        }
        reverse(ans.begin(), ans.end());
    }
};