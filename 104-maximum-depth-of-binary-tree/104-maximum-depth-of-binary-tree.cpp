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
    int maxDepth(TreeNode* root) {
        // if(!root)
        //     return 0;
        // if(!root->left && !root->right)
        //     return 1;
        // queue<TreeNode*> q;
        // int count = 0;
        // q.push(root);
        // while(!q.empty()) {
        //     int s = q.size();
        //     int k = 0;
        //     for(int i = 0; i < s; i++) {
        //         TreeNode *temp = q.front();
        //         q.pop();
        //         k++;
        //         if(temp->left)
        //             q.push(temp->left);
        //         if(temp->right)
        //             q.push(temp->right);
        //     }
        //     count = k;
        // }
        // return count + 1;
        
        if(!root)
            return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};